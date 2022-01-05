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

#if UNITY_EDITOR && !FORCE_UWAVM
        static readonly object[] m_ReflectionEmptyParams = { };
        MethodInfo m_ReflectionUpdateMethod;
#elif UNITY_WEBGL
        Function? m_WasmUpdateMethod;
        Store m_Store;
        Instance m_Instance;
        Engine m_Engine;
        Module m_Module;
        Linker m_Linker;
        Table m_Table;

        Function m_StackSaveFunc;
        Function m_StackRestoreFunc;
        Function m_SetThrewFunc;
#endif
        
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
            m_Engine = new Engine();
            m_Module = Module.FromFile(m_Engine, Application.dataPath + "/../il2cpp_wasm/index.wasm");
            m_Linker = new Linker(m_Engine);
            m_Store = new Store(m_Engine);

            //  (type (;7;) (func (result i32)))
            m_Linker.Define("env", "getTempRet0", Function.FromCallback(m_Store, () =>
                {
                    Debug.Log($"getTempRet0");
                    return 0;
                })
            );
            
            //  (type (;7;) (func (result i32)))
            m_Linker.Define("env", "__cxa_find_matching_catch_2", Function.FromCallback(m_Store, () =>
                {
                    Debug.Log($"__cxa_find_matching_catch_2");
                    throw new NotImplementedException();
                    return 0;
                })
            );
            
            //  (type (;0;) (func (param i32)))
            m_Linker.Define("env", "__resumeException", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"__resumeException {a}");
                    throw new NotImplementedException();
                })
            );           
            
            //  (type (;5;) (func (param i32 i32 i32) (result i32)))
            m_Linker.Define("env", "invoke_iii", Function.FromCallback(m_Store, (int index, int a1, int a2) =>
                {
                    Debug.Log($"invoke_iii {index} {a1} {a2}");
                    var s = m_StackSaveFunc.Invoke(m_Store);
                    try
                    {
                        if (m_Table.GetElement(m_Store, (uint) index) is Function func)
                            return func.Invoke(m_Store, a1, a2) as int? ?? 0;
                        Debug.LogError($"invoke_iii func not found!");
                    }
                    catch (Exception e)
                    {
                        Debug.LogError($"invoke_iii {index} {a1} {a2} {e}");
                        if (s is int stack)
                            m_StackRestoreFunc.Invoke(m_Store, stack);
                    }
                    return 0;
                })
            );

            //  (type (;4;) (func (param i32 i32 i32)))
            m_Linker.Define("env", "invoke_vii", Function.FromCallback(m_Store, (int index, int a1, int a2) =>
                {
                    Debug.Log($"invoke_vii {index} {a1} {a2}");
                    var s = m_StackSaveFunc.Invoke(m_Store);
                    try
                    {
                        if (m_Table.GetElement(m_Store, (uint) index) is Function func)
                        {
                            func.Invoke(m_Store, a1, a2);
                            return;
                        }
                        Debug.LogError($"invoke_vii func not found!");
                    }
                    catch (Exception e)
                    {
                        Debug.LogError($"invoke_vii {index} {a1} {a2} {e}");
                        if (s is int stack)
                            m_StackRestoreFunc.Invoke(m_Store, stack);
                    }
                })
            );   
            
            //  (type (;1;) (func (param i32) (result i32)))
            m_Linker.Define("env", "__cxa_find_matching_catch_3", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"__cxa_find_matching_catch_3 {a}");
                    throw new NotImplementedException();
                    return 0;
                })
            );   
            
            //  (type (;10;) (func (param i32 i32 i32 i32)))
            m_Linker.Define("env", "invoke_viii", Function.FromCallback(m_Store, (int a, int b, int c, int d) =>
                {
                    Debug.Log($"invoke_viii {a} {b} {c} {d}");
                    throw new NotImplementedException();
                })
            );   
            
            //  (type (;11;) (func (param i32 i32 i32 i32) (result i32)))
            m_Linker.Define("env", "invoke_iiii", Function.FromCallback(m_Store, (int index, int a1, int a2, int a3) =>
                {
                    Debug.Log($"invoke_iiii {index} {a1} {a2} {a3}");
                    var s = m_StackSaveFunc.Invoke(m_Store);
                    try
                    {
                        if (m_Table.GetElement(m_Store, (uint) index) is Function func)
                            return func.Invoke(m_Store, a1, a2, a3) as int? ?? 0;
                        Debug.LogError($"invoke_iiii func not found!");
                    }
                    catch (Exception e)
                    {
                        Debug.LogError($"invoke_iiii {index} {a1} {a2} {a3} {e}");
                        if (s is int stack)
                            m_StackRestoreFunc.Invoke(m_Store, stack);
                    }
                    return 0;
                })
            );   
            
            //  (type (;3;) (func (param i32 i32) (result i32)))
            m_Linker.Define("env", "invoke_ii", Function.FromCallback(m_Store, (int a, int b) =>
                {
                    Debug.Log($"invoke_ii {a} {b}");
                    throw new NotImplementedException();
                    return 0;
                })
            );   
            
            //  (type (;0;) (func (param i32)))
            m_Linker.Define("env", "invoke_v", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"invoke_v {a}");
                    throw new NotImplementedException();
                })
            );  
            
            //  (type (;1;) (func (param i32) (result i32)))
            m_Linker.Define("env", "__cxa_begin_catch", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"__cxa_begin_catch {a}");
                    throw new NotImplementedException();
                    return 0;
                })
            );   
            
            //  (type (;1;) (func (param i32) (result i32)))
            m_Linker.Define("env", "invoke_i", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"invoke_i {a}");
                    throw new NotImplementedException();
                    return 0;
                })
            );   
            
            //  (type (;18;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
            m_Linker.Define("env", "invoke_iiiiii", Function.FromCallback(m_Store, (int a, int b, int c, int d, int e, int f) =>
                {
                    Debug.Log($"invoke_iiiiii {a} {b} {c} {d} {e} {f}");
                    throw new NotImplementedException();
                    return 0;
                })
            );   
            
            //  (type (;8;) (func (param i32 i32 i32 i32 i32)))
            m_Linker.Define("env", "invoke_viiii", Function.FromCallback(m_Store, (int a, int b, int c, int d, int e) =>
                {
                    Debug.Log($"invoke_viiii {a} {b} {c} {d} {e}");
                    throw new NotImplementedException();
                })
            );   
            
            //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32)))
            m_Linker.Define("env", "invoke_viiiii", Function.FromCallback(m_Store, (int a, int b, int c, int d, int e, int f) =>
                {
                    Debug.Log($"invoke_viiiii {a} {b} {c} {d} {e} {f}");
                    throw new NotImplementedException();
                })
            );   
            
            //  (type (;2;) (func (param i32 i32)))
            m_Linker.Define("env", "invoke_vi", Function.FromCallback(m_Store, (int a, int b) =>
                {
                    Debug.Log($"invoke_vi {a} {b}");
                    throw new NotImplementedException();
                })
            );   
            
            //  (type (;13;) (func (param i32 i32 i32 i32 i32 i32 i32 i32)))
            m_Linker.Define("env", "invoke_viiiiiii", Function.FromCallback(m_Store, (int a, int b, int c, int d, int e, int f, int g, int h) =>
                {
                    Debug.Log($"invoke_viiiiiii {a} {b} {c} {d} {e} {f} {g} {h}");
                    throw new NotImplementedException();
                })
            );   
            
            //  (type (;6;) (func))
            m_Linker.Define("env", "__cxa_end_catch", Function.FromCallback(m_Store, () =>
                {
                    Debug.Log($"__cxa_end_catch");
                    throw new NotImplementedException();
                })
            );   
            
            //  (type (;9;) (func (param i32 i32 i32 i32 i32) (result i32)))
            m_Linker.Define("env", "invoke_iiiii", Function.FromCallback(m_Store, (int a, int b, int c, int d, int e) =>
                {
                    Debug.Log($"invoke_iiiii {a} {b} {c} {d} {e}");
                    throw new NotImplementedException();
                    return 0;
                })
            );   
            
            //  (type (;22;) (func (param f64)))
            m_Linker.Define("env", "emscripten_thread_sleep", Function.FromCallback(m_Store, (double a) =>
                {
                    Debug.Log($"emscripten_thread_sleep {a}");
                    throw new NotImplementedException();
                })
            );   
            
            //  (type (;1;) (func (param i32) (result i32)))
            m_Linker.Define("env", "llvm_eh_typeid_for", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"llvm_eh_typeid_for {a}");
                    throw new NotImplementedException();
                    return 0;
                })
            );   
            
            //  (type (;1;) (func (param i32 i32) (result i32)))
            m_Linker.Define("env", "main", Function.FromCallback(m_Store, (int a, int b) =>
                {
                    Debug.Log($"main {a} {b}");
                    throw new NotImplementedException();
                    return 0;
                })
            );
            
            //  (type (;6;) (func))
            m_Linker.Define("env", "__cxa_rethrow", Function.FromCallback(m_Store, () =>
                {
                    Debug.Log($"__cxa_rethrow");
                    throw new NotImplementedException();
                })
            );   
            
            //  (type (;0;) (func (param i32)))
            m_Linker.Define("env", "emscripten_notify_memory_growth", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"emscripten_notify_memory_growth {a}");
                    throw new NotImplementedException();
                })
            );
            
            //  (type (;1;) (func (param i32 i32) (result i32)))
            m_Linker.Define("wasi_snapshot_preview1", "args_sizes_get", Function.FromCallback(m_Store, (int a, int b) =>
                {
                    Debug.Log($"args_sizes_get {a} {b}");
                    throw new NotImplementedException();
                    return 0;
                })
            );
            
            //  (type (;1;) (func (param i32 i32) (result i32)))
            m_Linker.Define("wasi_snapshot_preview1", "args_get", Function.FromCallback(m_Store, (int a, int b) =>
                {
                    Debug.Log($"args_get {a} {b}");
                    throw new NotImplementedException();
                    return 0;
                })
            );
            
            //  (type (;11;) (func (param i32 i32 i32 i32) (result i32)))
            m_Linker.Define("wasi_snapshot_preview1", "fd_write", Function.FromCallback(m_Store, (int a, int b, int c, int d) =>
                {
                    Debug.Log($"fd_write {a} {b} {c} {d}");
                    throw new NotImplementedException();
                    return 0;
                })
            );
            
            //  (type (;3;) (func (param i32 i32) (result i32)))
            m_Linker.Define("wasi_snapshot_preview1", "environ_get", Function.FromCallback(m_Store, (int a, int b) =>
                {
                    Debug.Log($"environ_get {a} {b}");
                    throw new NotImplementedException();
                    return 0;
                })
            );
            
            //  (type (;3;) (func (param i32 i32) (result i32)))
            m_Linker.Define("wasi_snapshot_preview1", "environ_sizes_get", Function.FromCallback(m_Store, (int a, int b) =>
                {
                    Debug.Log($"environ_sizes_get {a} {b}");
                    throw new NotImplementedException();
                    return 0;
                })
            );
            
            //  (type (;23;) (func (param i32 i64 i32) (result i32)))
            m_Linker.Define("wasi_snapshot_preview1", "clock_time_get", Function.FromCallback(m_Store, (int a, long b, int c) =>
                {
                    Debug.Log($"clock_time_get {a} {b} {c}");
                    throw new NotImplementedException();
                    return 0;
                })
            );
            
            //  (type (;0;) (func (param i32)))
            m_Linker.Define("wasi_snapshot_preview1", "proc_exit", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"proc_exit {a}");
                    throw new NotImplementedException();
                })
            );
            
            m_Linker.Define("env", "DebugLogExtern", Function.FromCallback(m_Store, (int a) =>
                {
                    Debug.Log($"DebugLogExtern {a}");
                })
            );

            m_Instance = m_Linker.Instantiate(m_Store, m_Module);

            m_Table = m_Instance.GetTable(m_Store, "__indirect_function_table");
            Debug.Log($"m_Table {m_Table}");
            
            m_StackSaveFunc =  m_Instance.GetFunction(m_Store, "stackSave");
            m_StackRestoreFunc =  m_Instance.GetFunction(m_Store, "stackRestore");
            m_SetThrewFunc =  m_Instance.GetFunction(m_Store, "setThrew");
            
            
            var initializeFunc = m_Instance.GetFunction(m_Store, "_initialize");
            var initializeFuncReturn = initializeFunc?.Invoke(m_Store);
            Debug.Log($"initializeFuncReturn {initializeFuncReturn}");
            
            // Debug.Log("uWAVMAPI_GetFirstType_mFC6AD71DD2B29E776F6435848D877D9D598EFEB7");
            // var firstTypeFunc = m_Instance.GetFunction(m_Store, "uWAVMAPI_GetFirstType_mFC6AD71DD2B29E776F6435848D877D9D598EFEB7");
            // var firstTypeFuncReturn = firstTypeFunc?.Invoke(m_Store, 0);
            // Debug.Log($"firstTypeFuncReturn {firstTypeFuncReturn}");

#endif
        }

        void OnDestroy()
        {
            m_Store?.Dispose();
            m_Linker?.Dispose();
            m_Module?.Dispose();
            m_Engine?.Dispose();
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
            m_WasmUpdateMethod?.Invoke(m_Store, 10, 10);
#endif
        }

        object? InvokeFunc(IStore store, params object?[] arguments)
        {
            Debug.Log($"InvokeFunc {arguments[0]} {arguments.Length}");
            var s = m_StackSaveFunc.Invoke(m_Store);
            try
            {
                if (m_Table.GetElement(m_Store, (uint) arguments[0]) is Function func)
                {
                    object?[] arr = { };
                    Array.Copy(arguments, 1, arr, 0, arguments.Length);
                    func.Invoke(m_Store, arr);
                }
                Debug.LogError($"invoke_iii func not found!");
            }
            catch (Exception e)
            {
                Debug.LogError($"InvokeFunc {arguments[0]} {arguments.Length}");
                if (s is int stack)
                    m_StackRestoreFunc.Invoke(m_Store, stack);
            }
            return 0;
        }
    }
}