using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Wasmtime;
using Module = Wasmtime.Module;

namespace uWASM
{
    public class uWASMGCTest : MonoBehaviour
    {
        Store m_Store;
        Instance m_Instance;
        Memory m_Memory;
        Engine m_Engine;
        Module m_Module;
        Linker m_Linker;
        Table m_Table;
        
        Function m_AwakeBehaviourFunc;
        Function m_StartBehaviourFunc;
        Function m_UpdateBehaviourFunc;
        Function m_MainFunc;

        Function m_StackSaveFunc;
        Function m_StackRestoreFunc;
        Function m_SetThrewFunc;
        
        Function m_AnimationFrameUpdateFunc;
        int m_AnimationFrameUserData;

        Queue<Action> m_UpdateQueue = new Queue<Action>();
        
        void Awake()
        {
            m_Engine = new Engine();
            m_Module = Module.FromFile(m_Engine, Application.dataPath + "/../il2cpp_wasm/GCTest.wasm");
            m_Linker = new Linker(m_Engine);
            m_Store = new Store(m_Engine);
            
            m_Linker.DefineWasi();
            WasiConfiguration wasiConfiguration = new WasiConfiguration();
            m_Store.SetWasiConfiguration(wasiConfiguration);
            
            // (import "env" "emscripten_request_animation_frame_loop" (func $emscripten_request_animation_frame_loop (type 0)))
            // (type (;0;) (func (param i32 i32)))
            m_Linker.Define("env", "emscripten_request_animation_frame_loop", Function.FromCallback(m_Store, (int cb, int userData) =>
                {
                    // Emscripten would keep calling requestAnimationFrame to keep getting a new frame from JS side.
                    // but in C# we can just store the CB and keep calling it from Update.
                    Debug.Log($"emscripten_request_animation_frame_loop {cb} {userData}");
                    if (m_Table.GetElement(m_Store, (uint) cb) is Function func)
                    {
                        m_AnimationFrameUserData = userData;
                        m_AnimationFrameUpdateFunc = func;
                        Debug.Log($"m_AnimationFrameUpdateFunc: {m_AnimationFrameUpdateFunc}");
                    }
                    else
                    {
                        Debug.Log($"emscripten_request_animation_frame_loop cb not found!");
                    }
                })
            );
            
            m_Linker.Define("env", "emscripten_throw_string", Function.FromCallback(m_Store, (int a) =>
                {
                    string result = m_Memory.ReadNullTerminatedString(m_Store, a);
                    Debug.LogWarning($"emscripten_throw_string {a} {result}");
                })
            );
            
            uWASMLinks.AddEmscriptenTinyLinks(m_Linker, m_Store);
            uWASMLinks.AddJSTinyLinks(m_Linker, m_Store);
            
            m_Instance = m_Linker.Instantiate(m_Store, m_Module);
            Debug.Log($"m_Instance {m_Instance}");
            m_Memory = m_Instance.GetMemory(m_Store, "memory");
            Debug.Log($"m_Memory {m_Memory}");
            m_Table = m_Instance.GetTable(m_Store, "__indirect_function_table");
            Debug.Log($"m_Table {m_Table}");
            
            Debug.Log($"Init");
            var initializeFunc = m_Instance.GetFunction(m_Store, "_initialize");
            var initializeFuncReturn = initializeFunc?.Invoke(m_Store);
            Debug.Log($"initializeFuncReturn {initializeFuncReturn}");

            Debug.Log($"main");
            var mainFunc = m_Instance.GetFunction(m_Store, "main");
            var mainFuncReturn = mainFunc?.Invoke(m_Store, 0 ,0);
            Debug.Log($"mainFuncReturn {mainFuncReturn}");
            
            StartCoroutine(GCTestCoroutine());
        }

        IEnumerator GCTestCoroutine()
        {
            var addFunc = m_Instance.GetFunction(m_Store, "AddList");
            var delFunc = m_Instance.GetFunction(m_Store, "RemoveList");
            int count = 0;
            uint lastCurrent = m_Memory.GetSize(m_Store);
            
            while (true)
            {
                object? addFuncReturn = null;
                // for (int i = 0; i < 4; ++i)
                // {
                    count++;
                    addFuncReturn = addFunc?.Invoke(m_Store);
                // }
                Debug.Log($"addFuncReturn: {addFuncReturn}");

                Debug.Log($"Min: {m_Memory.Minimum} Max: {m_Memory.Maximum} Current: {m_Memory.GetSize(m_Store)} ListCount: {count}");

                if (lastCurrent != m_Memory.GetSize(m_Store))
                {
                    Debug.Log("Memory Expand! Clearing all! ");
                    lastCurrent = m_Memory.GetSize(m_Store);
                    int startCount = count;
                    for (int i = 0; i < startCount; ++i)
                    {
                        count--;
                        var delFuncReturn = delFunc?.Invoke(m_Store);
                        Debug.Log($"addFuncReturn: {delFuncReturn}");
                    }
                }

                yield return null;
            }
        }

        void LateUpdate()
        {
            if (m_AnimationFrameUpdateFunc != null)
            {
                int result = m_AnimationFrameUpdateFunc.Invoke(m_Store, Time.time, m_AnimationFrameUserData) as int? ?? 0;
                // Debug.Log($"m_AnimationFrameUpdateFunc: {result}");
            }
        }

        void OnDestroy()
        {
            m_Store?.Dispose();
            m_Linker?.Dispose();
            m_Module?.Dispose();
            m_Engine?.Dispose();
        }
    }
}