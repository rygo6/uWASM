using System.Collections.Generic;
using UnityEngine;
using Wasmtime;
using Module = Wasmtime.Module;

namespace uWASM
{
    public class uWASMEngine : MonoBehaviour
    {
        Dictionary<int, uWASMBehaviourHost> m_Hosts = new Dictionary<int, uWASMBehaviourHost>();
        Dictionary<int, Transform> m_Transforms = new Dictionary<int, Transform>();
        
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

        Function m_StackSaveFunc;
        Function m_StackRestoreFunc;
        Function m_SetThrewFunc;
        
        void Awake()
        {
            m_Engine = new Engine();
            m_Module = Module.FromFile(m_Engine, Application.dataPath + "/../il2cpp_wasm/uWAVMTests.wasm");
            // m_Module = Module.FromFile(m_Engine, Application.dataPath + "/../il2cpp_wasm/index.wasm");
            // m_Module = Module.FromTextFile(m_Engine, Application.dataPath + "/../il2cpp_wasm/index.wat");
            m_Linker = new Linker(m_Engine);
            m_Store = new Store(m_Engine);

            m_Linker.DefineWasi();
            WasiConfiguration wasiConfiguration = new WasiConfiguration();
            m_Store.SetWasiConfiguration(wasiConfiguration);
            
            uWASMLinks.AddEmscriptenTinyLinks(m_Linker, m_Store);
            uWASMLinks.AddJSTinyLinks(m_Linker, m_Store);
            
            m_Instance = m_Linker.Instantiate(m_Store, m_Module);

            m_InstanceFuncs.Add("TransformRotationTest", m_Instance.GetFunction(m_Store, "_TransformRotationTest_CreateInstance"));

            Debug.Log($"Init");
            var initializeFunc = m_Instance.GetFunction(m_Store, "_initialize");
            var initializeFuncReturn = initializeFunc?.Invoke(m_Store);
            Debug.Log($"initializeFuncReturn {initializeFuncReturn}");

            Debug.Log($"start");
            var mainFunc = m_Instance.GetFunction(m_Store, "_start");
            var mainFuncReturn = mainFunc?.Invoke(m_Store);
            Debug.Log($"startFuncReturn {mainFuncReturn}");

            Debug.Log("m_AwakeBehaviourFunc");
            m_AwakeBehaviourFunc = m_Instance.GetFunction(m_Store, "AwakeBehaviour");
            Debug.Log("m_StartBehaviourFunc");
            m_StartBehaviourFunc = m_Instance.GetFunction(m_Store, "StartBehaviour");
            Debug.Log("m_UpdateBehaviourFunc");
            m_UpdateBehaviourFunc = m_Instance.GetFunction(m_Store, "UpdateBehaviour");

            for (int i = 0; i < 100; i++)
            {
                // Debug.Log("uWAVMAPI_Test");
                // var updateAllFunc = m_Instance.GetFunction(m_Store, "uWAVMAPI_TestD_mBC8EE3781F9246E569A2840C4AE0061222A8EDCD");
                // var updateAllFunReturn = updateAllFunc?.Invoke(m_Store);
                // Debug.Log($"uWAVMAPI_Test {updateAllFunReturn}");
                // Debug.Log($"{m_Memory.Minimum} {m_Memory.Maximum} {m_Memory.GetSize(m_Store)}");
            }
        }

        public void InstanceBehaviour(string type, uWASMBehaviourHost host)
        {
            m_InstanceFuncs[type].Invoke(m_Store, host.GetInstanceID(), host.transform.GetInstanceID());
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
            m_Linker.Define("env", "uWASMTransform_GetPosition",
                Function.FromCallback(m_Store, (int instanceId) =>
                {
                    Debug.Log($"uWASMTransform_GetPosition {instanceId}");
                    return m_Transforms[instanceId].transform.position;
                })
            );
            
            m_Linker.Define("env", "uWASMTransform_SetPosition",
                Function.FromCallback(m_Store, (Vector3 position, int instanceId) =>
                {
                    Debug.Log($"uWASMTransform_SetPosition {position} {instanceId}");
                    m_Transforms[instanceId].transform.position = position;
                })
            );
            
            m_Linker.Define("env", "uWASMTransform_GetEulerAngles",
                Function.FromCallback(m_Store, (int instanceId) =>
                {
                    Debug.Log($"uWASMTransform_GetPosition {instanceId}");
                    return m_Transforms[instanceId].transform.position;
                })
            );
            
            m_Linker.Define("env", "uWASMTransform_SetEulerAngles",
                Function.FromCallback(m_Store, (Vector3 position, int instanceId) =>
                {
                    Debug.Log($"uWASMTransform_SetPosition {position} {instanceId}");
                    m_Transforms[instanceId].transform.position = position;
                })
            );

            // m_Linker.Define("env", "DebugLogExtern",
            //     Function.FromCallback(m_Store, (int a) => { Debug.Log($"DebugLogExtern {a}"); })
            // );
        }
    }
}