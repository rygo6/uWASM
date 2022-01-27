using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;
using Debug = UnityEngine.Debug;

public static class uWAVMConsole
{
    static bool IsAssemblyOrTest(string file)
    {
        return file.Contains(".c") || file.Contains(".cpp");
    }
    
    static bool IsAssembly(string file)
    {
        return file.Contains("test");
    }

    // [MenuItem("uWAVM/GeneratEMCCCommand")]
    // public static void GetALLCPPFromDag()
    // {
    //     
    //     
    // }

    [MenuItem("uWAVM/GeneratEMCCCommand")]
    public static void GeneratEMCCCommand()
    {
        StringBuilder sb = new StringBuilder();
        // sb.Append("emcc");
        
        foreach (string file in Directory.GetFiles(Application.dataPath + "/../il2cpp_cpp","*.c*", SearchOption.AllDirectories))
        {
            if (!IsAssemblyOrTest(file)) continue;
            string formatted = file.Replace('\\', '/');
            sb.Append($"\"{formatted}\" ");
        }
        
        // foreach (string file in Directory.GetFiles("C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp", "*.c*", SearchOption.AllDirectories))
        // {
        //     if (!IsAssemblyOrTest(file)) continue;
        //     string formatted = file.Replace('\\', '/');
        //     sb.Append($"\"{formatted}\" ");
        // }
        //
        // foreach (string file in Directory.GetFiles("C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc", "*.c*", SearchOption.AllDirectories))
        // {
        //     if (!IsAssemblyOrTest(file)) continue;
        //     if (file.Contains("gc.c") || 
        //         file.Contains("al_handler.c") || 
        //         file.Contains("vector_mlc.c") || 
        //         file.Contains("gcj_mlc.c"))
        //     {
        //         string formatted = file.Replace('\\', '/');
        //         sb.Append($"\"{formatted}\" ");
        //     }
        // }

        

        sb.Append(" \"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/Variations/development/baselib.bc\"");
        
        sb.Append(" -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib");
        
        sb.Append(" --output_eol linux");
        sb.Append(" --memory-init-file 0");
        sb.Append(" -s WASM=1");
        sb.Append(" -O3");
        sb.Append(" -g2");
        sb.Append(" -s NO_EXIT_RUNTIME=1");
        // sb.Append(" -s \"DISABLE_EXCEPTION_CATCHING=0\"");
        // sb.Append(" -s \"DYNCALLS=1\"");
        sb.Append(" -s \"INITIAL_MEMORY=32MB\"");
        sb.Append(" -s \"ALLOW_MEMORY_GROWTH=1\"");
        sb.Append(" -s \"ASSERTIONS=1\"");
        sb.Append(" -s \"DEMANGLE_SUPPORT=1\"");

        // sb.Append(" \"--sysroot=C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/emscripten/cache/sysroot\"");
        
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include\"");

        sb.Append(" -s STANDALONE_WASM");
        sb.Append(" --no-entry");
        sb.Append(" -o il2cpp_wasm/index.wasm");
        sb.Append(" -s EXPORTED_FUNCTIONS='[");
        sb.Append("\"_TransformRotationTest_Update_mCD4245414D69ACEF0A6EC3E364E9A9C08C489F18\",");
        sb.Append("\"_TransformRotationTest_Add_m91E818F16AE3F6DFA4DFFBC9946DEAEC450AFB91\",");
        sb.Append("\"_TransformRotationTest_Sub_m952B493E6D8DFBC21437F0EF0406441ED433CD54\",");
        sb.Append("\"_uWAVMAPI_Instance_m81F3352714F1D0C4614A24377428024CC2B1A5C6\"");
        sb.Append("]'");
        sb.Append(" -s ERROR_ON_UNDEFINED_SYMBOLS=0");
        sb.Append(" -v");
        
        File.WriteAllText("command.rsp", sb.ToString());
        Debug.Log(sb.ToString());
    }

    [MenuItem("uWAVM/BDWGCCommand")]
    static void BDWGCCommand()
    {
        StringBuilder sb = new StringBuilder();
        sb.Append("emcc");
        
        // foreach (string file in Directory.GetFiles(Path.Combine(Application.dataPath, "..", "il2cpp_cpp"),"*.c*", SearchOption.AllDirectories))
        // {
        //     if (!IsAssembly(file)) continue;;
        //     sb.Append(" ");
        //     sb.Append(file);
        // }
        //
        // foreach (string file in Directory.GetFiles("C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp", "*.c*", SearchOption.AllDirectories))
        // {
        //     if (!IsAssembly(file)) continue;;
        //     sb.Append(" ");
        //     sb.Append(file);
        // }
        
        foreach (string file in Directory.GetFiles("C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc", "*.c*", SearchOption.AllDirectories))
        {
            if (!IsAssemblyOrTest(file)) continue;;
            sb.Append($" \"{file}\"");
        }

        sb.Append(" -pipe");
        sb.Append(" -UGC_THREADS");
        sb.Append(" -UUSE_MMAP");
        sb.Append(" -UUSE_MUNMAP");
        sb.Append(" -Xclang");
        sb.Append(" -Wno-c++11-extensions");
        sb.Append(" -Wno-nonportable-include-path");
        sb.Append(" -ffunction-sections");
        sb.Append(" -fdata-sections");
        sb.Append(" -fmessage-length=0");
        sb.Append(" -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib");
        sb.Append(" -DIL2CPP_MONO_DEBUGGER_DISABLED");
        sb.Append(" -DRUNTIME_IL2CPP");
        sb.Append(" -DGC_NOT_DLL");
        sb.Append(" -DIL2CPP_DEFAULT_DATA_DIR_PATH=Data");
        sb.Append(" -DNDEBUG");
        sb.Append(" \"--sysroot=C:\\Program Files\\Unity\\Hub\\Editor\\2021.2.7f1\\Editor\\Data\\PlaybackEngines\\WebGLSupport\\BuildTools\\Emscripten\\emscripten\\cache\\sysroot\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/bdwgc/libatomic_ops/src\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include\"");
        sb.Append(" -Oz");
        sb.Append(" -s STANDALONE_WASM");
        sb.Append(" --no-entry");
        sb.Append(" -s ERROR_ON_UNDEFINED_SYMBOLS=0");
        sb.Append(" -v");
        sb.Append(" -o il2cpp_wasm/bdwgc.o");
        
        File.WriteAllText("command", sb.ToString());
        Debug.Log(sb.ToString());
    }

    [MenuItem("uWAVM/EMCCCompileCPP")]
    static void EMCCCompileCPP()
    {
        StringBuilder sb = new StringBuilder();
        foreach (string file in Directory.GetFiles(Application.dataPath + "/../il2cpp_cpp","*.c*", SearchOption.AllDirectories))
        {
            Debug.Log(file);
            
            if (!IsAssemblyOrTest(file)) continue;
            sb.Clear();
            // sb.Append(" emcc -D__webgl__ -Wno-warn-absolute-paths -Wno-c++11-extensions -Wno-nonportable-include-path -ffunction-sections -fno-unwind-tables -fomit-frame-pointer -fno-threadsafe-statics -std=c++11 -Wno-#warnings -Wswitch -Wno-trigraphs -Wno-tautological-compare -Wno-invalid-offsetof -Wno-implicitly-unsigned-literal -Wno-integer-overflow -Wno-shift-negative-value -Wno-unknown-attributes -Wno-implicit-function-declaration -Wno-null-conversion -Wno-missing-declarations -Wno-unused-value -Wno-pragma-once-outside-header -fvisibility=hidden -fno-rtti -flto -fno-strict-overflow -ffunction-sections -fdata-sections -fmessage-length=0 -pipe -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib -DIL2CPP_MONO_DEBUGGER_DISABLED -DRUNTIME_IL2CPP -DHAVE_BDWGC_GC -DNDEBUG -I\".\" -I\"il2cpp_cpp/cpp\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include\" -O0 -fcolor-diagnostics -fdiagnostics-absolute-paths -UGC_THREADS -UUSE_MMAP -UUSE_MUNMAP -c -xc++ -v");

            if (file.Contains(".cpp"))
                sb.Append(" emcc -Wno-warn-absolute-paths -Wno-c++11-extensions -Wno-nonportable-include-path -ffunction-sections -fno-unwind-tables -fomit-frame-pointer -fno-threadsafe-statics -std=c++11 -Wno-#warnings -Wswitch -Wno-trigraphs -Wno-tautological-compare -Wno-invalid-offsetof -Wno-implicitly-unsigned-literal -Wno-integer-overflow -Wno-shift-negative-value -Wno-unknown-attributes -Wno-implicit-function-declaration -Wno-null-conversion -Wno-missing-declarations -Wno-unused-value -Wno-pragma-once-outside-header -fvisibility=hidden -fexceptions -fno-rtti -flto -fno-strict-overflow -ffunction-sections -fdata-sections -fmessage-length=0 -pipe -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib -DIL2CPP_MONO_DEBUGGER_DISABLED -DRUNTIME_IL2CPP -DHAVE_BDWGC_GC -DNDEBUG -I\".\" -I\"il2cpp_cpp/cpp\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include\" -Oz -fcolor-diagnostics -fdiagnostics-absolute-paths -UGC_THREADS -UUSE_MMAP -UUSE_MUNMAP -c -xc++ -v");
            else
                sb.Append(" emcc -Wno-warn-absolute-paths -Wno-c++11-extensions -Wno-nonportable-include-path -ffunction-sections -fno-unwind-tables -fomit-frame-pointer -Wno-#warnings -Wswitch -Wno-trigraphs -Wno-tautological-compare -Wno-invalid-offsetof -Wno-implicitly-unsigned-literal -Wno-integer-overflow -Wno-shift-negative-value -Wno-unknown-attributes -Wno-implicit-function-declaration -Wno-null-conversion -Wno-missing-declarations -Wno-unused-value -Wno-pragma-once-outside-header -fvisibility=hidden -fexceptions -flto -fno-strict-overflow -ffunction-sections -fdata-sections -fmessage-length=0 -pipe -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib -DIL2CPP_MONO_DEBUGGER_DISABLED -DRUNTIME_IL2CPP -DHAVE_BDWGC_GC -DNDEBUG -I\".\" -I\"il2cpp_cpp/cpp\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include\" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include\" -Oz -fcolor-diagnostics -fdiagnostics-absolute-paths -UGC_THREADS -UUSE_MMAP -UUSE_MUNMAP -c -xc -v");
            
            sb.Append($" -o \"il2cpp_o/{Path.GetFileNameWithoutExtension(file)}.o\"");
            
            // sb.Append("emcc");
            string formatted = file.Replace('\\', '/');
            sb.Append($" \"{formatted}\"");
            
            Debug.Log( sb.ToString());

            Process cmd = new Process();
            cmd.StartInfo.FileName = "cmd.exe";
            cmd.StartInfo.RedirectStandardInput = true;
            cmd.StartInfo.RedirectStandardOutput = true;
            cmd.StartInfo.CreateNoWindow = true;
            cmd.StartInfo.UseShellExecute = false;
            cmd.Start();

            // cmd.StandardInput.WriteLine("echo %cd%");
            cmd.StandardInput.WriteLine(sb.ToString());
            cmd.StandardInput.Flush();
            cmd.StandardInput.Close();
            cmd.WaitForExit();
            Debug.Log(cmd.StandardOutput.ReadToEnd());

            // return;
        }
    }
    
    [MenuItem("uWAVM/EditEMARAndRun")]
    static void EditEmarAndRun()
    {
        StringBuilder sb = new StringBuilder();
        string rsp = File.ReadAllText(Application.dataPath + "/../Library/Bee/artifacts/rsp/17016374809008006955.rsp");
        
        var lines=Regex.Matches(rsp, @"""(\\""|[^""])*?""|[^ ]+", RegexOptions.ExplicitCapture)
            .Cast<Match>()
            .Select(m => m.Value)
            .ToArray();

        foreach (string line in lines)
        {
            if (line.Contains("GameAssembly"))
            {
                Debug.Log("OMIT  " + line);
                continue;
            }
            if (line.Contains("qcL"))
            {
                sb.Append($"qcL \"{Application.dataPath}/../il2cpp_o/GameAssembly..bc\" ");
            }
            else
            {
                // Debug.Log(line);
                sb.Append($"{line} ");
            }
        }
        
        // sb.Append($"qcL \"{Application.dataPath}/../il2cpp_o/GameAssembly..bc\" ");
        
        foreach (string file in Directory.GetFiles(Application.dataPath + "/../il2cpp_o", "*.o", SearchOption.AllDirectories))
        {
            sb.Append($"\"il2cpp_o/{Path.GetFileName(file)}\" ");
        }
        
        Debug.Log(sb.ToString());
        
        File.WriteAllText("emar_command.rsp", sb.ToString());
        // RunCMD($"emar @{sb.ToString()}");
    }
    
    [MenuItem("uWAVM/EditEMCCAndRun")]
    static void EditEMCCAndRun()
    {
        StringBuilder sb = new StringBuilder();
        // sb.Append(" -s STANDALONE_WASM ");
        sb.Append(" -s ERROR_ON_UNDEFINED_SYMBOLS=0 --no-entry -s STANDALONE_WASM -v --js-library \"Assets/_uWAVM/Plugins/uWAVM.jslib\" ");
        
        string rsp = File.ReadAllText(Application.dataPath + "/../Library/Bee/artifacts/rsp/8995565923215908413.rsp");
        
        var lines=Regex.Matches(rsp, @"""(\\""|[^""])*?""|[^ ]+", RegexOptions.ExplicitCapture)
            .Cast<Match>()
            .Select(m => m.Value)
            .ToArray();

        for (int i = 0; i < lines.Length; ++i)
        {
            // Debug.Log(i + "  " + lines.Length);
            if (lines[i].Contains("-s") && lines[i+1].Contains("EXPORTED_RUNTIME_METHODS"))
            {
                sb.Append("-s \"EXPORTED_FUNCTIONS=[");
                sb.Append("\'_uWAVMAPI_GetFirstType_mFC6AD71DD2B29E776F6435848D877D9D598EFEB7\',");
                sb.Append("\'_uWAVMAPI_UpdateAllBehaviours_m133FB3208ED997C88BF1F454C312B364E4747364\',");
                sb.Append("\'_uWAVMAPI_TestA_mC8290A9D3DB849BB750D9F85C9EBE20F4C3E7E4C\',");
                sb.Append("\'_uWAVMAPI_TestB_m0AA907C74884B34D8C3FD4FECB9C5EC2D59703A9\',");
                sb.Append("\'_uWAVMAPI_TestC_m84E346C447B4D0D595B95381CE3D573475D15E9D\',");
                sb.Append("\'_uWAVMAPI_TestD_mF0765D1944D3987F76F4B2F507E5DE5E6C8C8824\'");
                // sb.Append("\'SetRotationExtern\'");
                // sb.Append("\'addRunDependency\',");
                // sb.Append("\'removeRunDependency\',");
                // sb.Append("\'FS_createPath\',");
                // sb.Append("\'FS_createDataFile\',");
                // sb.Append("\'ccall\',");
                // sb.Append("\'cwrap\',");
                // sb.Append("\'stackTrace\'");
                sb.Append("]\" ");
                i++;
            }
            else if (lines[i].Contains("GameAssembly"))
            {
                sb.Append($"\"{Application.dataPath}/../il2cpp_o/GameAssembly..bc\" ");
            }
            else if (lines[i] == "-o")
            {
                sb.Append($"-o \"{Application.dataPath}/../il2cpp_wasm/index.js\" ");
                i++;
            }
            else if ((i != lines.Length - 1) && (
                     lines[i+1].Contains("FULL_ES3") ||
                     lines[i+1].Contains("MAX_WEBGL_VERSION") ||
                     lines[i+1].Contains("GL_EXPLICIT_UNIFORM_LOCATION") ||
                     lines[i+1].Contains("GL_EXPLICIT_UNIFORM_BINDING")))
            {
                i++;
            }
            else if (lines[i].Contains("--pre-js"))
            {
                Debug.Log($"OMIT {lines[i]} {lines[i+1]}");
                i++;
            }
            else if (lines[i].Contains("--js-library"))
            {
                Debug.Log($"OMIT {lines[i]} {lines[i+1]}");
                i++;
            }
            else if (lines[i].Contains("modules_optsize"))
            {
                
            }
            else
            {
                sb.Append($"{lines[i]} ");
            }
        }
        
        // sb.Append("--js-library \"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/SystemInfo.js\" ");
        // sb.Append("--pre-js \"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/ExceptionLogger.js\" ");
        // sb.Append("--js-library \"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/Eval.js\" ");
        sb.Append("--js-library \"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/_patch_library_exceptions.js\" ");
        // sb.Append("--pre-js \"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/Eval.js\" ");
        
        // sb.Append("\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/modules_optsize/WebGLSupport_CoreModule_Dynamic.bc\" ");
        sb.Append("\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/modules_optsize/WebGLSupport_JSONSerializeModule_Dynamic.bc\" ");
        // sb.Append("\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/modules_optsize/WebGLSupport_WebGLModule_Dynamic.bc\" ");
        sb.Append("\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/modules_optsize/WebGLSupport_RuntimeInitializeOnLoadManagerInitializerModule_Dynamic.bc\" ");
        sb.Append("\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/lib/modules_optsize/WebGLSupport_SharedInternalsModule_Dynamic.bc\" ");
        sb.Append("\"C:/Developer/uWAVM/il2cpp_bc/WebGLSupport_CoreModuleSlim_Dynamic.bc\" ");
        // sb.Append("\"C:/Developer/uWAVM/il2cpp_bc/WebGLSupport_CoreModule_Dynamic.bc\" ");
        
        // sb.Append("--no-entry -s ERROR_ON_UNDEFINED_SYMBOLS=0 -s STANDALONE_WASM -v");

        Debug.Log(sb.ToString());
        
        File.WriteAllText("emcc_command.rsp", sb.ToString());
        // RunCMD($"emar @{sb.ToString()}");
    }

    static void RunCMD(string command)
    {
        Process cmd = new Process();
        cmd.StartInfo.FileName = "cmd.exe";
        cmd.StartInfo.RedirectStandardInput = true;
        cmd.StartInfo.RedirectStandardOutput = true;
        cmd.StartInfo.CreateNoWindow = true;
        cmd.StartInfo.UseShellExecute = false;
        cmd.Start();

        // cmd.StandardInput.WriteLine("echo %cd%");
        cmd.StandardInput.WriteLine(command);
        cmd.StandardInput.Flush();
        cmd.StandardInput.Close();

        cmd.OutputDataReceived += (sender, args) => Debug.Log(args.Data);
        cmd.ErrorDataReceived += (sender, args) => Debug.Log(args.Data);
        
        // Debug.Log(cmd.StandardOutput.ReadToEnd());
    }
}
