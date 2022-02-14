using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Wasmtime;
using WAVM;
using Module = Wasmtime.Module;

namespace uWASM
{
    public class uWASMEngine : MonoBehaviour
    {
        Dictionary<int, uWASMBehaviourHost> m_Hosts = new Dictionary<int, uWASMBehaviourHost>();
        Dictionary<int, Transform> m_Transforms = new Dictionary<int, Transform>();
        Dictionary<int, Object> m_References = new Dictionary<int, Object>(); // This will need to change to some kind of reference count;
        
        Store m_Store;
        Instance m_Instance;
        Memory m_Memory;
        Engine m_Engine;
        Module m_Module;
        Linker m_Linker;
        Table m_Table;

        Dictionary<string, Function> m_InstanceFuncs = new Dictionary<string, Function>();
        Function m_AwakeBehaviourFunc;
        Function m_StartBehaviourFunc;
        Function m_UpdateBehaviourFunc;
        Function m_MainFunc;

        Function m_StackSaveFunc;
        Function m_StackRestoreFunc;
        Function m_SetThrewFunc;
        
        void Awake()
        {
            m_Engine = new Engine();
            m_Module = Module.FromFile(m_Engine, Application.dataPath + "/../il2cpp_wasm/uWASMTests.wasm");
            // m_Module = Module.FromFile(m_Engine, Application.dataPath + "/../il2cpp_wasm/index.wasm");
            // m_Module = Module.FromTextFile(m_Engine, Application.dataPath + "/../il2cpp_wasm/index.wat");
            m_Linker = new Linker(m_Engine);
            m_Store = new Store(m_Engine);

            m_Linker.DefineWasi();
            WasiConfiguration wasiConfiguration = new WasiConfiguration();
            m_Store.SetWasiConfiguration(wasiConfiguration);
            
            uWASMLinks.AddEmscriptenTinyLinks(m_Linker, m_Store);
            uWASMLinks.AddJSTinyLinks(m_Linker, m_Store);
            LinkTransformFuncs();
            
            m_Instance = m_Linker.Instantiate(m_Store, m_Module);
            m_Memory = m_Instance.GetMemory(m_Store, "memory");

            m_InstanceFuncs.Add("uWASM.TransformRotater", m_Instance.GetFunction(m_Store, "TransformRotater_CreateInstance_mDE5066AA9865D91FB9FEBFD70EAF7B1A4E00B45B"));

            Debug.Log($"Init");
            var initializeFunc = m_Instance.GetFunction(m_Store, "_initialize");
            var initializeFuncReturn = initializeFunc?.Invoke(m_Store);
            Debug.Log($"initializeFuncReturn {initializeFuncReturn}");

            Debug.Log($"main");
            var mainFunc = m_Instance.GetFunction(m_Store, "main");
            var mainFuncReturn = mainFunc?.Invoke(m_Store, 0, 0);
            Debug.Log($"mainFuncReturn {mainFuncReturn}");
            
            m_AwakeBehaviourFunc = m_Instance.GetFunction(m_Store, "uWASMAPI_AwakeBehaviour_mD6529F44105A9DC6A07E701330D308214F444B8F");
            Debug.Log($"m_AwakeBehaviourFunc {m_AwakeBehaviourFunc}");
            m_StartBehaviourFunc = m_Instance.GetFunction(m_Store, "uWASMAPI_StartBehaviour_m5332ABB12E39D83407DBBF52D8A7144150EC7DCF");
            Debug.Log($"m_StartBehaviourFunc {m_StartBehaviourFunc}");
            m_UpdateBehaviourFunc = m_Instance.GetFunction(m_Store, "uWASMAPI_UpdateBehaviour_m0AA3146EF5A99A7503662C8BE3BF0EFAABA139A0");
            Debug.Log($"m_UpdateBehaviourFunc {m_StartBehaviourFunc}");

            // StartCoroutine(GCTestCoroutine());
        }

        IEnumerator GCTestCoroutine()
        {
            var addFunc = m_Instance.GetFunction(m_Store, "uWASMAPI_TestGCAddString_mDC9A41CEE7130D53882B45497671D599588ABF1E");
            var delFunc = m_Instance.GetFunction(m_Store, "uWASMAPI_TestGCRemoveString_m227BF4D8C3D1D4E6725F0DA54219BAF53A361A26");
            int count = 0;
            
            while (true)
            {
                for (int i = 0; i < 1000; ++i)
                {
                    count++;
                    var addFuncReturn = addFunc?.Invoke(m_Store);
                }
                
                for (int i = 0; i < 1000; ++i)
                {
                    count--;
                    var delFuncReturn = delFunc?.Invoke(m_Store);
                }

                Debug.Log($"{m_Memory.Minimum} {m_Memory.Maximum} {m_Memory.GetSize(m_Store)} {count}");

                yield return null;
            }
        }

        public void RegisterReference(Object reference)
        {
            
        }

        public void InstanceBehaviour(string type, uWASMBehaviourHost host, object[] parameters)
        {
            var func = m_InstanceFuncs[type];
            switch (parameters.Length)
            {
                case 0:
                    func.Invoke(m_Store,host.GetInstanceID(), host.transform.GetInstanceID());
                    break;
                case 1:
                    func.Invoke(m_Store,host.GetInstanceID(), host.transform.GetInstanceID(), parameters[0]);
                    break;
                case 2:
                    func.Invoke(m_Store,host.GetInstanceID(), host.transform.GetInstanceID(), parameters[0], parameters[1]);
                    break;
                case 3:
                    func.Invoke(m_Store,host.GetInstanceID(), host.transform.GetInstanceID(), parameters[0], parameters[1], parameters[2]);
                    break;
            }
            m_Hosts.Add(host.GetInstanceID(), host);
            m_Transforms.Add(host.transform.GetInstanceID(), host.transform);
        }

        public void ClearBehaviour(uWASMBehaviourHost host)
        {
            m_Hosts.Remove(host.GetInstanceID());
            m_Transforms.Remove(host.transform.GetInstanceID());
        }
        
        public void AwakeBehaviour(int instanceId)
        {
            m_AwakeBehaviourFunc.Invoke(m_Store, instanceId);
        }
        
        public void StartBehaviour(int instanceId)
        {
            m_StartBehaviourFunc.Invoke(m_Store, instanceId);
        }
        
        public void UpdateBehaviour(int instanceId)
        {
            m_UpdateBehaviourFunc.Invoke(m_Store, instanceId);
        }

        void OnDestroy()
        {
            m_Store?.Dispose();
            m_Linker?.Dispose();
            m_Module?.Dispose();
            m_Engine?.Dispose();
        }

        void LinkTransformFuncs()
        {
            // m_Linker.Define("env", "uWASMTransform_GetPosition",
            //     Function.FromCallback(m_Store, (int instanceId) =>
            //     {
            //         Debug.Log($"uWASMTransform_GetPosition {instanceId}");
            //         return (uWASMVector3) m_Transforms[instanceId].transform.position;
            //     })
            // );
            //
            // m_Linker.Define("env", "uWASMTransform_SetPosition",
            //     Function.FromCallback(m_Store, (int instanceId, uWASMVector3 position) =>
            //     {
            //         Debug.Log($"uWASMTransform_SetPosition {position} {instanceId}");
            //         m_Transforms[instanceId].transform.position = position;
            //     })
            // );
            
            // m_Linker.Define("env", "GetEulerAngles",
            //     Function.FromCallback(m_Store, (int instanceId, int b) =>
            //     {
            //         Debug.Log($"_GetEulerAngles {instanceId}");
            //         // return (uWASMVector3) m_Transforms[instanceId].transform.position;
            //         // return 0;
            //     })
            // );
            
            m_Linker.Define("env", "SetEulerAngles",
                Function.FromCallback(m_Store, (int instanceId, float x, float y, float z) =>
                {
                    // Debug.Log($"_SetEulerAngles {x} {y} {z} {instanceId}");
                    m_Transforms[instanceId].transform.eulerAngles = new Vector3(x, y, z);
                })
            );

            // m_Linker.Define("env", "DebugLogExtern",
            //     Function.FromCallback(m_Store, (int a) => { Debug.Log($"DebugLogExtern {a}"); })
            // );
        }
    }
}