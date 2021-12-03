using System;
using System.Reflection;
using UnityEngine;
using Wasmtime;
using Module = Wasmtime.Module;

namespace uWAVM
{
    [DisallowMultipleComponent]
    public class uWAVMBehaviourHost : MonoBehaviour
    {
        [SerializeReference]
        public uWAVMBehavior m_Behaviour;

        static readonly object[] m_ReflectionEmptyParams = { };
        MethodInfo m_ReflectionUpdateMethod;

        Function? m_WasmUpdateMethod;
        Store m_WasmStore;

        void Awake()
        {
            if (m_Behaviour == null)
            {
                enabled = false;
                return;
            }
            
#if UNITY_EDITOR && !FORCE_UWAVM
            m_ReflectionUpdateMethod = m_Behaviour.GetType().GetMethod("Update", BindingFlags.NonPublic | BindingFlags.Instance);
            m_Behaviour.onTransformRotationSet += TransformRotationSet;
#elif UNITY_WEBGL
            using var engine = new Engine();
            using var module = Module.FromFile(engine, Application.dataPath + "/../il2cpp_wasm/index.wasm");
            using var linker = new Linker(engine);
            m_WasmStore = new Store(engine);

            linker.Define(
                "env",
                "uWAVMBehavior_SetRotation_m6D1BE4AD3EB53B8D4CE0A8BF783F44D2E0339530",
                Function.FromCallback<float, float, float, int>(m_WasmStore, TransformRotationSet)
            );
            
            linker.Define(
                "env",
                "_Z42il2cpp_codegen_initialize_runtime_metadataPm",
                Function.FromCallback<int>(m_WasmStore, il2cpp_codegen_initialize_runtime_metadata)
            );

            var instance = linker.Instantiate(m_WasmStore, module);
            m_WasmUpdateMethod = instance.GetFunction(m_WasmStore, "TransformRotationTest_Update_mCD4245414D69ACEF0A6EC3E364E9A9C08C489F18");
#endif
        }

        void OnDestroy()
        {
            m_WasmStore?.Dispose();
        }

        void il2cpp_codegen_initialize_runtime_metadata(int p0)
        {
            Debug.Log("il2cpp_codegen_initialize_runtime_metadata " + p0);
        }

        void TransformRotationSet(float x, float y, float z, int method)
        {
            Debug.Log($"{x} {y} {x} {method}");
            transform.rotation = Quaternion.Euler(x, y, z);
        }

        void Update()
        {
#if UNITY_EDITOR && !FORCE_UWAVM
            m_ReflectionUpdateMethod?.Invoke(m_Behaviour, m_ReflectionEmptyParams);
#elif UNITY_WEBGL
            m_WasmUpdateMethod?.Invoke(m_WasmStore, 10, 10);
#endif
        }
    }
}