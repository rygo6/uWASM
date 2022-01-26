// using System;
// using System.IO;
// using System.Reflection;
// using System.Runtime.InteropServices;
// using UnityEngine;
// using WAVM;
// // using uWAVMTests;
// // using WasmerSharp;
// using Module = System.IntPtr;
//
// namespace uWAVM
// {
//     [DisallowMultipleComponent]
//     public class uWAVMBehaviourWAVMHost : MonoBehaviour
//     {
//         [SerializeReference] public uWASMBehavior m_Behaviour;
//
//         static readonly object[] m_ReflectionEmptyParams = { };
//         MethodInfo m_ReflectionUpdateMethod;
//
//         IntPtr m_Engine;
//         IntPtr m_Compartment;
//         IntPtr m_Store;
//         IntPtr m_Module;
//         IntPtr m_Instance;
//
//
//         int m_WasmType = 0;
//         int m_WasmInstanceHash = 0;
//
//         void Awake()
//         {
//             Debug.Log(SystemInfo.renderingThreadingMode);
//             
//             // if (m_Behaviour == null)
//             // {
//             //     enabled = false;
//             //     return;
//             // }
//
// #if UNITY_EDITOR && !FORCE_UWAVM
//             m_ReflectionUpdateMethod = m_Behaviour.GetType().GetMethod("Update", BindingFlags.NonPublic | BindingFlags.Instance);
//             m_Behaviour.onTransformRotationSet += TransformRotationSet;
// #elif UNITY_WEBGL
//             var wasmBytes = File.ReadAllBytes(Application.dataPath + "/../il2cpp_wasm/index.wasm");
//             Debug.Log($"wasmText length {wasmBytes.Length}");
//
//             m_Engine = WAVM.CAPI.wasm_engine_new();
//             Debug.Log($"m_Engine {m_Engine}");
//             
//             m_Compartment = WAVM.CAPI.wasm_compartment_new(m_Engine, "compartment");
//             Debug.Log($"m_Compartment {m_Compartment}");
//             
//             m_Store = WAVM.CAPI.wasm_store_new(m_Compartment, "store");
//             Debug.Log($"m_Store {m_Store}");
//             
//             m_Module = WAVM.CAPI.wasm_module_new(m_Engine, wasmBytes, wasmBytes.Length);
//             Debug.Log($"m_Module {m_Module}");
//             
//             // IntPtr trap = Marshal.AllocHGlobal(Marshal.SizeOf(typeof(IntPtr)));
//             IntPtr trap = IntPtr.Zero;
//             wasm_extern_t[] imports = new wasm_extern_t[0];
//             m_Instance = WAVM.CAPI.wasm_instance_new(m_Store, m_Module, imports, trap, "instance");
//             if (m_Instance == IntPtr.Zero)
//             {
//                 Debug.Log($"Instancing Fail! {trap}");
//             }
//             Debug.Log($"m_Instance {m_Instance}");
//             
//
//
//             // var func = new Import("wasi_snapshot_preview1", "proc_exit", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("wasi_snapshot_preview1", "clock_time_get", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("wasi_snapshot_preview1", "fd_write", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("wasi_snapshot_preview1", "environ_sizes_get", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("wasi_snapshot_preview1", "environ_get", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             //
//             // var func = new Import("env", "emscripten_notify_memory_growth", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("env", "invoke_iiii", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("env", "__cxa_find_matching_catch_3", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("env", "getTempRet0", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("env", "emscripten_thread_sleep", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // var func = new Import("env", "invoke_vi", new ImportFunction( (Func<InstanceContext,int>) (getTempRet0) ));
//             // m_WasmInstance = new Instance(wasm, func);
//
//             // var ret = m_WasmInstance.Call("uWAVMAPI_GetFirstType_mFC6AD71DD2B29E776F6435848D877D9D598EFEB7");
//             // foreach (object o in ret)
//             // {
//             //     Debug.Log(o);
//             // }
//
//             // var firstType = instance.GetFunction(m_WasmStore, "uWAVMAPI_GetFirstType_mFC6AD71DD2B29E776F6435848D877D9D598EFEB7");
// #endif
//         }
//
//         // public static int getTempRet0(InstanceContext ctx)
//         // {
//         //     Debug.Log("getTempRet0");
//         //     
//         //     // Console.WriteLine (".NET Print called");
//         //     // var memoryBase = ctx.GetMemory (0).Data;
//         //     // unsafe {
//         //     //     var str = Encoding.UTF8.GetString ((byte*)memoryBase + ptr, len);
//         //     //
//         //     //     Console.WriteLine ("Received this utf string: [{0}]", str);
//         //     // }
//         //
//         //     return 0;
//         // }
//
//         void OnDestroy()
//         {
//             // m_WasmInstance?.Dispose();
//             if (m_Module != IntPtr.Zero) WAVM.CAPI.wasm_module_delete(m_Module);
//             if (m_Instance != IntPtr.Zero)  WAVM.CAPI.wasm_instance_delete(m_Instance);
//             if (m_Store != IntPtr.Zero) WAVM.CAPI.wasm_store_delete(m_Store);
//             if (m_Compartment != IntPtr.Zero) WAVM.CAPI.wasm_compartment_delete(m_Compartment);
//             if (m_Engine != IntPtr.Zero) WAVM.CAPI.wasm_engine_delete(m_Engine);
//         }
//
//         void il2cpp_codegen_initialize_runtime_metadata(int p0)
//         {
//             Debug.Log("il2cpp_codegen_initialize_runtime_metadata " + p0);
//         }
//
//         void TransformRotationSet(float x, float y, float z, int hasCode)
//         {
//             Debug.Log($"{x} {y} {x} {hasCode}");
//             transform.rotation = Quaternion.Euler(x, y, z);
//         }
//
//         void Update()
//         {
// #if UNITY_EDITOR && !FORCE_UWAVM
//             m_ReflectionUpdateMethod?.Invoke(m_Behaviour, m_ReflectionEmptyParams);
// #elif UNITY_WEBGL
//             // m_WasmUpdateMethod?.Invoke(m_WasmStore, 10, 10);
// #endif
//         }
//     }
// }