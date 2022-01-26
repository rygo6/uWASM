using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;
using Wasmtime;

#pragma warning disable CS0162
public static class uWASMLinks
{
    public static void AddDummyUnityCoreLinks(Linker linker, Store store)
    {
        // These methods should have been linked?

        //  (type (;11;) (func (result i32)))
        linker.Define("env", "_ZN10systeminfo17GetProcessorCountEv", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"_ZN10systeminfo17GetProcessorCountEv");
                return 0;
            })
        );
        //  (type (;11;) (func (result i32)))
        linker.Define("env", "_ZN7Cursors17GetSoftwareCursorEv", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"_ZN7Cursors17GetSoftwareCursorEv");
                return 0;
            })
        );
        //  (type (;3;) (func (param i32)))
        linker.Define("env", "_ZN7Cursors16GetCursorHotspotEv",
            Function.FromCallback(store, (int a1) => { Debug.LogWarning($"_ZN7Cursors16GetCursorHotspotEv"); })
        );
        //  (type (;3;) (func (param i32)))
        linker.Define("env", "_ZN10systeminfo21GetTemporaryCachePathEv",
            Function.FromCallback(store,
                (int a1) => { Debug.LogWarning($"_ZN10systeminfo21GetTemporaryCachePathEv"); })
        );
        //  (type (;3;) (func (param i32)))
        linker.Define("env", "_ZN16KeyboardOnScreen4HideEv",
            Function.FromCallback(store, () => { Debug.LogWarning($"_ZN16KeyboardOnScreen4HideEv"); })
        );
        //  (type (;3;) (func (param i32)))
        linker.Define("env", "_Z10ResetInputv",
            Function.FromCallback(store, () => { Debug.LogWarning($"_Z10ResetInputv"); })
        );
        //  (type (;11;) (func (result i32)))
        linker.Define("env", "_ZN10systeminfo19GetPhysicalMemoryMBEv", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"_ZN10systeminfo19GetPhysicalMemoryMBEv");
                return 0;
            })
        );
        //  (type (;10;) (func (param i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "_Z15setsockopt_stubiiiPKvj", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5) =>
            {
                Debug.LogWarning($"_Z15setsockopt_stubiiiPKvj");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "_Z13shutdown_stubii", Function.FromCallback(store, (int a1, int a2) =>
            {
                Debug.LogWarning($"_Z13shutdown_stubii");
                return 0;
            })
        );
        //  (type (;0;) (func (param i32) (result i32)))
        linker.Define("env", "_ZN18ScreenManagerWebGLC1Ev", Function.FromCallback(store, (int a1) =>
            {
                Debug.LogWarning($"_ZN18ScreenManagerWebGLC1Ev");
                return 0;
            })
        );
        //  (type (;0;) (func (param i32) (result i32)))
        linker.Define("env", "RegisterModule_WebGL",
            Function.FromCallback(store, () => { Debug.LogWarning($"RegisterModule_WebGL"); })
        );
        //  (type (;8;) (func (param i32 i32 i32 i32)))
        linker.Define("env", "_Z19free_alloc_internalPv10MemLabelIdPKci",
            Function.FromCallback(store,
                (int a1, int a2, int a3, int a4) => { Debug.LogWarning($"_Z19free_alloc_internalPv10MemLabelIdPKci"); })
        );
        //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "_Z15malloc_internalmm10MemLabelId15AllocateOptionsPKci", Function.FromCallback(
            store, (int a1, int a2, int a3, int a4, int a5, int a6) =>
            {
                Debug.LogWarning($"_Z15malloc_internalmm10MemLabelId15AllocateOptionsPKci");
                return 0;
            })
        );
        //  (type (;14;) (func (param i32 i32 i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "_Z16realloc_internalPvmm10MemLabelId15AllocateOptionsPKci", Function.FromCallback(
            store, (int a1, int a2, int a3, int a4, int a5, int a6, int a7) =>
            {
                Debug.LogWarning($"_Z16realloc_internalPvmm10MemLabelId15AllocateOptionsPKci");
                return 0;
            })
        );
        //  (type (;10;) (func (param i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "_Znwm10MemLabelIdmPKci", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5) =>
            {
                Debug.LogWarning($"_Znwm10MemLabelIdmPKci");
                return 0;
            })
        );
        //  (type (;7;) (func))
        linker.Define("env", "_Z20ResetInputAfterPausev",
            Function.FromCallback(store, () => { Debug.LogWarning($"_Z20ResetInputAfterPausev"); })
        );
        //  (type (;7;) (func))
        linker.Define("env", "_Z53Register_UnityEngine_RenderTexture_set_graphicsFormatv",
            Function.FromCallback(store,
                () => { Debug.LogWarning($"_Z53Register_UnityEngine_RenderTexture_set_graphicsFormatv"); })
        );
    }

    public static void AddEmscriptenSysLinks(Linker linker, Store store)
    {
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__sys_access", Function.FromCallback(store, (int a1, int a2) =>
            {
                Debug.LogWarning($"__sys_access");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__sys_fstat64", Function.FromCallback(store, (int a1, int a2) =>
            {
                Debug.LogWarning($"__sys_fstat64");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__sys_stat64", Function.FromCallback(store, (int a1, int a2) =>
            {
                Debug.LogWarning($"__sys_stat64");
                return 0;
            })
        );
        //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_getsockopt", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5, int a6) =>
            {
                Debug.LogWarning($"__sys_getsockopt");
                return 0;
            })
        );
        //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_connect", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5, int a6) =>
            {
                Debug.LogWarning($"__sys_connect");
                return 0;
            })
        );
        //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_accept4", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5, int a6) =>
            {
                Debug.LogWarning($"__sys_accept4");
                return 0;
            })
        );
        //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_sendto", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5, int a6) =>
            {
                Debug.LogWarning($"__sys_sendto");
                return 0;
            })
        );
        //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_recvfrom", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5, int a6) =>
            {
                Debug.LogWarning($"__sys_recvfrom");
                return 0;
            })
        );
        //  (type (;10;) (func (param i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "__sys__newselect", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5) =>
            {
                Debug.LogWarning($"__sys__newselect");
                return 0;
            })
        );
        //  (import "env" "__sys_getrusage" (func $__syscall77 (type 1)))
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__sys_getrusage", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.LogWarning($"__sys_getrusage {a} {b}");
                return 0;
            })
        );
        //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_socket", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4, int a5, int a6) =>
            {
                Debug.LogWarning($"__sys_socket");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__sys_getcwd", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.LogWarning($"__sys_getcwd {a} {b}");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32) (result i32)))
        linker.Define("env", "__sys_mkdir", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.LogWarning($"__sys_mkdir {a} {b}");
                return 0;
            })
        );
        //  (import "env" "__sys_rmdir" (func $__syscall40 (type 0)))
        //  (type (;0;) (func (param i32) (result i32)))
        linker.Define("env", "__sys_rmdir", Function.FromCallback(store, (int a) =>
            {
                Debug.LogWarning($"__sys_rmdir {a}");
                return 0;
            })
        );
        //  (import "env" "__sys_getdents64" (func $__syscall220 (type 5)))
        //  (type (;5;) (func (param i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_getdents64", Function.FromCallback(store, (int a1, int a2, int a3) =>
            {
                Debug.LogWarning($"__sys_getdents64");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__sys_lstat64", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.LogWarning($"__sys_lstat64 {a} {b}");
                return 0;
            })
        );
        //  (import "env" "__sys_unlink" (func $__syscall10 (type 0)))
        //  (type (;0;) (func (param i32) (result i32)))
        linker.Define("env", "__sys_unlink", Function.FromCallback(store, (int a) =>
            {
                Debug.LogWarning($"__sys_unlink {a}");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__sys_chmod", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.LogWarning($"__sys_chmod {a} {b}");
                return 0;
            })
        );
        //  (type (;5;) (func (param i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_readlink", Function.FromCallback(store, (int a1, int a2, int a3) =>
            {
                Debug.LogWarning($"__sys_readlink");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__sys_rename", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.LogWarning($"__sys_rename {a} {b}");
                return 0;
            })
        );
        //  (type (;11;) (func (result i32)))
        linker.Define("env", "__sys_getuid32", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"__sys_getuid32");
                return 0;
            })
        );
        //  (type (;9;) (func (param i32 i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_truncate64", Function.FromCallback(store,
            (int a1, int a2, int a3, int a4) =>
            {
                Debug.LogWarning($"__sys_truncate64");
                return 0;
            })
        );
        //  (type (;5;) (func (param i32 i32 i32) (result i32)))
        linker.Define("env", "__sys_statfs64", Function.FromCallback(store, (int a1, int a2, int a3) =>
            {
                Debug.LogWarning($"__sys_statfs64");
                return 0;
            })
        );
    }

    public static void AddEmscriptenDlLinks(Linker linker, Store store)
    {
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "dlopen", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.LogWarning($"dlopen {a} {b}");
                return 0;
            })
        );
        //  (type (;11;) (func (result i32)))
        linker.Define("env", "dlerror", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"dlerror");
                return 0;
            })
        );
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "dlsym", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.LogWarning($"dlsym {a} {b}");
                return 0;
            })
        );
    }

    public static void AddJSTinyLinks(Linker linker, Store store)
    {
        //  (import "env" "js_html_playerconnectionDisconnect" (func $js_html_playerconnectionDisconnect (type 5)))
        //  (type (;5;) (func))
        linker.Define("env", "js_html_playerconnectionDisconnect",
            Function.FromCallback(store, () => { Debug.LogWarning($"js_html_playerconnectionDisconnect"); })
        );
        //  (import "env" "js_html_playerconnectionReceive" (func $js_html_playerconnectionReceive (type 3)))
        //  (type (;3;) (func (param i32 i32) (result i32)))
        linker.Define("env", "js_html_playerconnectionReceive", Function.FromCallback(store, (int a1, int a2) =>
            {
                Debug.LogWarning($"js_html_playerconnectionReceive");
                return 0;
            })
        );
        //  (import "env" "js_html_init" (func $js_html_init (type 5)))
        //  (type (;5;) (func))
        linker.Define("env", "js_html_init",
            Function.FromCallback(store, () => { Debug.LogWarning($"js_html_init"); })
        );
        //  (import "env" "js_html_playerconnectionSend" (func $js_html_playerconnectionSend (type 3)))
        //  (type (;3;) (func (param i32 i32) (result i32)))
        linker.Define("env", "js_html_playerconnectionSend", Function.FromCallback(store, (int a1, int a2) =>
            {
                Debug.LogWarning($"js_html_playerconnectionSend");
                return 0;
            })
        );
        //  (import "env" "js_html_playerconnectionPlatformShutdown" (func $js_html_playerconnectionPlatformShutdown (type 5)))
        //  (type (;5;) (func))
        linker.Define("env", "js_html_playerconnectionPlatformShutdown",
            Function.FromCallback(store, () => { Debug.LogWarning($"js_html_playerconnectionPlatformShutdown"); })
        );
        //  (import "env" "js_html_playerconnectionPlatformInit" (func $js_html_playerconnectionPlatformInit (type 5)))
        //  (type (;5;) (func))
        linker.Define("env", "js_html_playerconnectionPlatformInit",
            Function.FromCallback(store, () => { Debug.LogWarning($"js_html_playerconnectionPlatformInit"); })
        );
        //  (import "env" "js_html_playerconnectionLostConnection" (func $js_html_playerconnectionLostConnection (type 8)))
        //  (type (;8;) (func (result i32)))
        linker.Define("env", "js_html_playerconnectionLostConnection", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"js_html_playerconnectionLostConnection");
                return 0;
            })
        );
        //  (import "env" "js_html_playerconnectionIsConnecting" (func $js_html_playerconnectionIsConnecting (type 8)))
        //  (type (;8;) (func (result i32)))
        linker.Define("env", "js_html_playerconnectionIsConnecting", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"js_html_playerconnectionIsConnecting");
                return 0;
            })
        );
        //  (import "env" "js_html_playerconnectionConnect" (func $js_html_playerconnectionConnect (type 1)))
        //  (type (;1;) (func (param i32)))
        linker.Define("env", "js_html_playerconnectionConnect",
            Function.FromCallback(store, (int a) => { Debug.LogWarning($"js_html_playerconnectionConnect"); })
        );
    }

    public static void AddEmscriptenTinyLinks(Linker linker, Store store)
    {
        //  (import "env" "emscripten_is_main_browser_thread" (func $emscripten_is_main_browser_thread (type 8)))
        //  (type (;8;) (func (result i32)))
        linker.Define("env", "emscripten_is_main_browser_thread", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"emscripten_is_main_browser_thread");
                return 1;
            })
        );
        //  (import "env" "emscripten_webgl_commit_frame" (func $emscripten_webgl_commit_frame (type 8)))
        //  (type (;8;) (func (result i32)))
        linker.Define("env", "emscripten_webgl_commit_frame", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"dlerror");
                return 0;
            })
        );
        //  (import "env" "emscripten_throw_string" (func $emscripten_throw_string (type 1)))
        //  (type (;1;) (func (param i32)))
        linker.Define("env", "emscripten_throw_string",
            Function.FromCallback(store, (int a) => { Debug.LogWarning($"emscripten_throw_string {a}"); })
        );
        //  (import "env" "emscripten_start_fetch" (func $emscripten_start_fetch (type 1)))
        //  (type (;1;) (func (param i32)))
        linker.Define("env", "emscripten_start_fetch",
            Function.FromCallback(store, (int a) => { Debug.LogWarning($"emscripten_start_fetch {a}"); })
        );
        //  (import "env" "emscripten_set_timeout_loop" (func $emscripten_set_timeout_loop (type 60)))
        //  (type (;60;) (func (param i32 f64 i32)))
        linker.Define("env", "emscripten_set_timeout_loop",
            Function.FromCallback(store,
                (int a, double b, int c) => { Debug.LogWarning($"emscripten_set_timeout_loop {a} {b} {c}"); })
        );
        //  (import "env" "emscripten_request_animation_frame_loop" (func $emscripten_request_animation_frame_loop (type 0)))
        //  (type (;0;) (func (param i32 i32)))
        linker.Define("env", "emscripten_request_animation_frame_loop",
            Function.FromCallback(store,
                (int a, int b) => { Debug.LogWarning($"emscripten_request_animation_frame_loop {a} {b}"); })
        );
        //  (import "env" "emscripten_notify_memory_growth" (func $emscripten_notify_memory_growth (type 1)))
        //  (type (;1;) (func (param i32)))
        linker.Define("env", "emscripten_notify_memory_growth",
            Function.FromCallback(store, (int a) => { Debug.LogWarning($"emscripten_notify_memory_growth {a}"); })
        );
        //  (import "env" "_emscripten_fetch_free" (func $_emscripten_fetch_free (type 1)))
        //  (type (;1;) (func (param i32)))
        linker.Define("env", "_emscripten_fetch_free",
            Function.FromCallback(store, (int a) => { Debug.LogWarning($"_emscripten_fetch_free {a}"); })
        );
    }

    public static void AddJSLinks(Linker linker, Store store)
    {
        //  (import "env" "JS_Log_StackTrace" (func $JS_Log_StackTrace (type 2)))
        //  (type (;2;) (func (param i32 i32)))
        linker.Define("env", "JS_Log_StackTrace",
            Function.FromCallback(store, (int a, int b) => { Debug.LogWarning($"JS_Log_StackTrace {a} {b}"); })
        );
        //  (import "env" "JS_SystemInfo_GetMemory" (func $JS_SystemInfo_GetMemory (type 11)))
        //  (type (;11;) (func (result i32)))
        linker.Define("env", "JS_SystemInfo_GetMemory", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"JS_SystemInfo_GetMemory");
                return 0;
            })
        );
        //  (import "env" "JS_Log_Dump" (func $JS_Log_Dump (type 2)))
        //  (type (;2;) (func (param i32 i32)))
        linker.Define("env", "JS_Log_Dump",
            Function.FromCallback(store, (int a, int b) => { Debug.LogWarning($"JS_Log_Dump {a} {b}"); })
        );
    }

    public static void AddEmscriptenLinks(Linker linker, Store store, Function stackSaveFunc, Function stackRestoreFunc, Table table)
    {
        //  (type (;7;) (func (result i32)))
        linker.Define("env", "getTempRet0", Function.FromCallback(store, () =>
            {
                Debug.LogWarning($"getTempRet0");
                return 0;
            })
        );

        //  (type (;7;) (func (result i32)))
        linker.Define("env", "__cxa_find_matching_catch_2", Function.FromCallback(store, () =>
            {
                Debug.Log($"__cxa_find_matching_catch_2");
                throw new NotImplementedException("__cxa_find_matching_catch_2");
                return 0;
            })
        );

        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "__cxa_find_matching_catch_4", Function.FromCallback(store, (int a1, int a2) =>
            {
                Debug.Log($"__cxa_find_matching_catch_4 {a1} {a2}");
                throw new NotImplementedException("__cxa_find_matching_catch_4");
                return 0;
            })
        );

        //  (type (;0;) (func (param i32)))
        linker.Define("env", "__resumeException", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"__resumeException {a}");
                throw new NotImplementedException("__resumeException");
            })
        );

        //  (type (;5;) (func (param i32 i32 i32) (result i32)))
        linker.Define("env", "invoke_iii", Function.FromCallback(store, (int index, int a1, int a2) =>
            {
                if (index == 282) Debug.Log("HERE");
                Debug.Log($"invoke_iii {index} {a1} {a2}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                        return func.Invoke(store, a1, a2) as int? ?? 0;
                    Debug.LogError($"invoke_iii func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"invoke_iii {index} {a1} {a2} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (type (;4;) (func (param i32 i32 i32)))
        linker.Define("env", "invoke_vii", Function.FromCallback(store, (int index, int a1, int a2) =>
            {
                Debug.Log($"invoke_vii {index} {a1} {a2}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        func.Invoke(store, a1, a2);
                        return;
                    }

                    Debug.LogError($"invoke_vii func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"invoke_vii {index} {a1} {a2} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }
            })
        );

        //  (type (;1;) (func (param i32) (result i32)))
        linker.Define("env", "__cxa_find_matching_catch_3", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"__cxa_find_matching_catch_3 {a}");
                throw new NotImplementedException("__cxa_find_matching_catch_3");
                return 0;
            })
        );

        //  (type (;10;) (func (param i32 i32 i32 i32)))
        const string invokeviii = "invoke_viii";
        linker.Define("env", invokeviii, Function.FromCallback(store, (int index, int a1, int a2, int a3) =>
            {
                Debug.Log($"{invokeviii} {index} {a1} {a2} {a3}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        func.Invoke(store, a1, a2, a3);
                        return;
                    }

                    Debug.LogError($"{invokeviii} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeviii} {index} {a1} {a2} {a3} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }
            })
        );

        //  (type (;11;) (func (param i32 i32 i32 i32) (result i32)))
        linker.Define("env", "invoke_iiii", Function.FromCallback(store, (int index, int a1, int a2, int a3) =>
            {
                Debug.Log($"invoke_iiii {index} {a1} {a2} {a3}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                        return func.Invoke(store, a1, a2, a3) as int? ?? 0;
                    Debug.LogError($"invoke_iiii func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"invoke_iiii {index} {a1} {a2} {a3} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (type (;3;) (func (param i32 i32) (result i32)))
        linker.Define("env", "invoke_ii", Function.FromCallback(store, (int index, int a1) =>
            {
                Debug.Log($"invoke_ii {index} {a1}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                        return func.Invoke(store, a1) as int? ?? 0;
                    Debug.LogError($"invoke_ii func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"invoke_ii {index} {a1} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (type (;0;) (func (param i32)))
        linker.Define("env", "invoke_v", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"invoke_v {a}");
                throw new NotImplementedException("invoke_v");
            })
        );

        //  (type (;1;) (func (param i32) (result i32)))
        linker.Define("env", "__cxa_begin_catch", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"__cxa_begin_catch {a}");
                throw new NotImplementedException("__cxa_begin_catch");
                return 0;
            })
        );

        //  (type (;1;) (func (param i32) (result i32)))
        linker.Define("env", "invoke_i", Function.FromCallback(store, (int index) =>
            {
                Debug.Log($"invoke_ii {index}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                        return func.Invoke(store) as int? ?? 0;
                    Debug.LogError($"invoke_ii func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"invoke_ii {index} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (type (;18;) (func (param i32 i32 i32 i32 i32 i32) (result i32)))
        const string invokeiiiiii = "invoke_iiiiii";
        linker.Define("env", invokeiiiiii, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4, int a5) =>
            {
                {
                    Debug.Log($"{invokeiiiiii} {index} {a1} {a2} {a3} {a4} {a5}");
                    var s = stackSaveFunc.Invoke(store);
                    try
                    {
                        if (table.GetElement(store, (uint) index) is Function func)
                            return func.Invoke(store, a1, a2, a3, a4, a5) as int? ?? 0;
                        Debug.LogError($"{invokeiiiiii} func not found!");
                    }
                    catch (Exception e)
                    {
                        Debug.LogError($"{invokeiiiiii} {index} {a1} {a2} {a3} {a4} {a5} {e}");
                        if (s is int stack)
                            stackRestoreFunc.Invoke(store, stack);
                    }

                    return 0;
                }
            })
        );

        //  (type (;8;) (func (param i32 i32 i32 i32 i32)))
        const string invokeviiii = "invoke_viiii";
        linker.Define("env", invokeviiii, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4) =>
            {
                Debug.Log($"{invokeviiii} {index} {a1} {a2} {a3} {a4}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        func.Invoke(store, a1, a2, a3, a4);
                        return;
                    }

                    Debug.LogError($"{invokeviiii} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeviiii} {index} {a1} {a2} {a3} {a4} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }
            })
        );

        //  (type (;12;) (func (param i32 i32 i32 i32 i32 i32)))
        const string invokeviiiii = "invoke_viiiii";
        linker.Define("env", invokeviiiii, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4, int a5) =>
            {
                Debug.Log($"{invokeviiiii} {index} {a1} {a2} {a3} {a4} {a5}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        func.Invoke(store, a1, a2, a3, a4, a5);
                        return;
                    }

                    Debug.LogError($"{invokeviiiii} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeviiiii} {index} {a1} {a2} {a3} {a4} {a5} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }
            })
        );

        //  (type (;2;) (func (param i32 i32)))
        const string invokevi = "invoke_vi";
        linker.Define("env", invokevi, Function.FromCallback(store, (int index, int a1) =>
            {
                Debug.Log($"{invokevi} {index} {a1}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        Debug.Log($"{invokevi} Calling {index}");
                        func.Invoke(store, a1);
                        return;
                    }

                    Debug.LogError($"{invokevi} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokevi} {index} {a1} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }
            })
        );

        //  (type (;13;) (func (param i32 i32 i32 i32 i32 i32 i32 i32)))
        linker.Define("env", "invoke_viiiiii", Function.FromCallback(store,
            (int a, int b, int c, int d, int e, int f, int g) =>
            {
                Debug.Log($"invoke_viiiiii {a} {b} {c} {d} {e} {f} {g}");
                throw new NotImplementedException("invoke_viiiiii");
            })
        );

        //  (type (;13;) (func (param i32 i32 i32 i32 i32 i32 i32 i32)))
        linker.Define("env", "invoke_viiiiiii", Function.FromCallback(store,
            (int a, int b, int c, int d, int e, int f, int g, int h) =>
            {
                Debug.Log($"invoke_viiiiiii {a} {b} {c} {d} {e} {f} {g} {h}");
                throw new NotImplementedException("invoke_viiiiiii");
            })
        );

        //  (type (;6;) (func))
        linker.Define("env", "__cxa_end_catch", Function.FromCallback(store, () =>
            {
                Debug.Log($"__cxa_end_catch");
                throw new NotImplementedException("__cxa_end_catch");
            })
        );

        //  (type (;9;) (func (param i32 i32 i32 i32 i32) (result i32)))
        const string invokeiiiii = "invoke_iiiii";
        linker.Define("env", invokeiiiii, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4) =>
            {
                Debug.Log($"{invokeiiiii} {index} {a1} {a2} {a3} {a4}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                        return func.Invoke(store, a1, a2, a3, a4) as int? ?? 0;
                    Debug.LogError($"{invokeiiiii} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeiiiii} {index} {a1} {a2} {a3} {a4} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        const string invokeiiiiiii = "invoke_iiiiiii";
        linker.Define("env", invokeiiiiiii, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4, int a5, int a6) =>
            {
                Debug.Log($"{invokeiiiiiii} {index} {a1} {a2} {a3} {a4} {a5} {a6}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                        return func.Invoke(store, a1, a2, a3, a4, a5, a6) as int? ?? 0;
                    Debug.LogError($"{invokeiiiiiii} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeiiiiiii} {index} {a1} {a2} {a3} {a4} {a5} {a6} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (type (;9;) (func (param i32 i32 i32 i32 i32) (result i32)))
        const string invokeiiiiiiii = "invoke_iiiiiiii";
        linker.Define("env", invokeiiiiiiii, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4, int a5, int a6, int a7) =>
            {
                Debug.Log($"{invokeiiiiiiii} {index} {a1} {a2} {a3} {a4} {a5} {a6} {a7}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                        return func.Invoke(store, a1, a2, a3, a4, a5, a6, a7) as int? ?? 0;
                    Debug.LogError($"{invokeiiiiiiii} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeiiiiiiii} {index} {a1} {a2} {a3} {a4} {a5} {a6} {a7} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (import "env" "invoke_j" (func $legalimport$invoke_j (type 0)))
        //  (type (;0;) (func (param i32) (result i32)))
        const string invokej = "invoke_j";
        linker.Define("env", invokej, Function.FromCallback(store,
            (int index) =>
            {
                Debug.Log($"{invokej} {index}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        return func.Invoke(store) as int? ?? 0;
                    }

                    Debug.LogError($"{invokej} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokej} {index} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (import "env" "invoke_iij" (func $legalimport$invoke_iij (type 9)))
        const string invokeiij = "invoke_iij";
        linker.Define("env", invokeiij, Function.FromCallback(store,
            (int index, int a1, int a2, int a3) =>
            {
                Debug.Log($"{invokeiij} {index} {a1} {a2} {a3}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        return func.Invoke(store, a1, a2, a3) as int? ?? 0;
                    }

                    Debug.LogError($"{invokeiij} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeiij} {index} {a1} {a2} {a3} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (import "env" "invoke_jii" (func $legalimport$invoke_jii (type 5)))
        const string invokeji = "invoke_ji";
        linker.Define("env", invokeji, Function.FromCallback(store,
            (int index, int a1) =>
            {
                Debug.Log($"{invokeji} {index} {a1}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        return func.Invoke(store, a1) as int? ?? 0;
                    }

                    Debug.LogError($"{invokeji} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeji} {index} {a1} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (import "env" "invoke_iiij" (func $legalimport$invoke_iiij (type 10)))
        //  (type (;10;) (func (param i32 i32 i32 i32 i32) (result i32)))
        const string invokejii = "invoke_jii";
        linker.Define("env", invokejii, Function.FromCallback(store,
            (int index, int a1, int a2) =>
            {
                Debug.Log($"{invokejii} {index} {a1} {a2}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        return func.Invoke(store, a1, a2) as int? ?? 0;
                    }

                    Debug.LogError($"{invokejii} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokejii} {index} {a1} {a2} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (import "env" "invoke_iiij" (func $legalimport$invoke_iiij (type 10)))
        //  (type (;10;) (func (param i32 i32 i32 i32 i32) (result i32)))
        const string invokeiiij = "invoke_iiij";
        linker.Define("env", invokeiiij, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4) =>
            {
                Debug.Log($"{invokeiiij} {index} {a1} {a2} {a3} {a4}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        return func.Invoke(store, a1, a2, a3, a4) as int? ?? 0;
                    }

                    Debug.LogError($"{invokeiiij} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeiiij} {index} {a1} {a2} {a3} {a4} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (import "env" "invoke_jijj" (func $legalimport$invoke_jijj (type 12)))
        const string invokejijj = "invoke_jijj";
        linker.Define("env", invokejijj, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4, int a5) =>
            {
                Debug.Log($"{invokejijj} {index} {a1} {a2} {a3} {a4} {a5}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        return func.Invoke(store, a1, a2, a3, a4, a5) as int? ?? 0;
                    }

                    Debug.LogError($"{invokejijj} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokejijj} {index} {a1} {a2} {a3} {a4} {a5} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (import "env" "invoke_iiijiii" (func $legalimport$invoke_iiijiii (type 20)))
        //  (type (;20;) (func (param i32 i32 i32 i32 i32 i32 i32 i32) (result i32)))
        const string invokeiiijiii = "invoke_iiijiii";
        linker.Define("env", invokeiiijiii, Function.FromCallback(store,
            (int index, int a1, int a2, int a3, int a4, int a5, int a6, int a7) =>
            {
                Debug.Log($"{invokeiiijiii} {index} {a1} {a2} {a3} {a4} {a5} {a6} {a7}");
                var s = stackSaveFunc.Invoke(store);
                try
                {
                    if (table.GetElement(store, (uint) index) is Function func)
                    {
                        return func.Invoke(store, a1, a2, a3, a4, a5, a6, a7) as int? ?? 0;
                    }

                    Debug.LogError($"{invokeiiijiii} func not found!");
                }
                catch (Exception e)
                {
                    Debug.LogError($"{invokeiiijiii} {index} {a1} {a2} {a3} {a4} {a5} {a6} {a7} {e}");
                    if (s is int stack)
                        stackRestoreFunc.Invoke(store, stack);
                }

                return 0;
            })
        );

        //  (type (;4;) (func (param i32 i32 i32)))
        linker.Define("env", "emscripten_set_main_loop",
            Function.FromCallback(store,
                (int a1, int a2, int a3) => { Debug.Log($"emscripten_set_main_loop {a1} {a2} {a3}"); })
        );

        //  (type (;4;) (func (param i32 i32 i32)))
        linker.Define("env", "emscripten_log",
            Function.FromCallback(store, (int a1, int a2, int a3) => { Debug.Log($"emscripten_log {a1} {a2} {a3}"); })
        );

        //  (type (;22;) (func (param f64)))
        linker.Define("env", "emscripten_thread_sleep", Function.FromCallback(store, (double a) =>
            {
                Debug.Log($"emscripten_thread_sleep {a}");
                throw new NotImplementedException("emscripten_thread_sleep");
                Thread.Sleep(1);
            })
        );

        //  (type (;0;) (func (param i32) (result i32)))
        linker.Define("env", "emscripten_resize_heap", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"emscripten_resize_heap {a}");
                throw new NotImplementedException("emscripten_resize_heap");
                return 0;
            })
        );

        //  (type (;4;) (func (param i32 i32 i32) (result i32)))
        linker.Define("env", "emscripten_memcpy_big", Function.FromCallback(store, (int a, int b, int c) =>
            {
                Debug.Log($"emscripten_memcpy_big {a} {b} {c}");
                throw new NotImplementedException("emscripten_memcpy_big");
                return 0;
            })
        );

        //  (type (;1;) (func (param i32) (result i32)))
        linker.Define("env", "llvm_eh_typeid_for", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"llvm_eh_typeid_for {a}");
                throw new NotImplementedException("llvm_eh_typeid_for");
                return 0;
            })
        );

        //  (type (;6;) (func))
        linker.Define("env", "abort", Function.FromCallback(store, () =>
            {
                Debug.Log($"abort");
                throw new NotImplementedException("abort");
            })
        );

        //  (type (;3;) (func (param i32)))
        linker.Define("env", "exit", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"exit {a}");
                throw new NotImplementedException("exit");
            })
        );

        //  (type (;4;) (func (param i32 i32 i32) (result i32)))
        linker.Define("env", "__cxa_atexit", Function.FromCallback(store, (int a, int b, int c) =>
            {
                Debug.Log($"__cxa_atexit {a}");
                throw new NotImplementedException("__cxa_atexit");
                return 0;
            })
        );

        //  (type (;0;) (func (param i32) (result i32)))
        linker.Define("env", "atexit", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"atexit {a}");
                throw new NotImplementedException("atexit");
                return 0;
            })
        );

        //  (type (;6;) (func))
        linker.Define("env", "__cxa_rethrow", Function.FromCallback(store, () =>
            {
                Debug.Log($"__cxa_rethrow");
                throw new NotImplementedException("__cxa_rethrow");
            })
        );

        //  (type (;0;) (func (param i32) (result i32)))
        linker.Define("env", "__cxa_allocate_exception", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"__cxa_allocate_exception {a}");
                throw new NotImplementedException("__cxa_allocate_exception");
                return 0;
            })
        );

        //  (type (;0;) (func (param i32)))
        linker.Define("env", "emscripten_notify_memory_growth", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"emscripten_notify_memory_growth {a}");
                throw new NotImplementedException("emscripten_notify_memory_growth");
            })
        );

        //  (type (;5;) (func (param i32 i32 i32)))
        linker.Define("env", "__cxa_throw", Function.FromCallback(store, (int a, int b, int c) =>
            {
                Debug.Log($"__cxa_throw {a} {b} {c}");
                throw new NotImplementedException("__cxa_throw");
            })
        );

        //   (type (;24;) (func (result f64)))
        linker.Define("env", "emscripten_get_now", Function.FromCallback(store, () =>
            {
                Debug.Log($"emscripten_get_now");
                // throw new NotImplementedException();
                return System.DateTime.Now.ToOADate();
            })
        );

        //  (type (;7;) (func (result i32)))
        linker.Define("env", "clock", Function.FromCallback(store, () =>
            {
                Debug.Log($"clock");
                throw new NotImplementedException("clock");
                return 0;
            })
        );

        //  (type (;3;) (func (param i32)))
        linker.Define("env", "setTempRet0", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"setTempRet0 {a}");
                throw new NotImplementedException("setTempRet0");
            })
        );

        //  (type (;6;) (func))
        linker.Define("env", "segfault", Function.FromCallback(store, () => { Debug.Log($"segfault"); })
        );

        linker.Define("env", "alignfault", Function.FromCallback(store, () => { Debug.Log($"alignfault"); })
        );

        //  (import "env" "getpwuid" (func $getpwuid (type 0)))
        //  (type (;0;) (func (param i32) (result i32)))
        linker.Define("env", "getpwuid", Function.FromCallback(store, (int a) =>
            {
                Debug.Log($"getpwuid");
                return 0;
            })
        );

        //   (import "env" "flock" (func $flock (type 1)))
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "flock", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.Log($"flock");
                return 0;
            })
        );

        //  (import "env" "utime" (func $utime (type 1)))
        //  (type (;1;) (func (param i32 i32) (result i32)))
        linker.Define("env", "utime", Function.FromCallback(store, (int a, int b) =>
            {
                Debug.Log($"utime");
                return 0;
            })
        );
    }
}