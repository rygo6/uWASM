using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;

public static class uWAVMConsole
{
    static bool IsAssemblyOrTest(string file)
    {
        return file.Contains(".c") || file.Contains(".cpp") || file.Contains("test");
    }

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
        
        foreach (string file in Directory.GetFiles("C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp", "*.c*", SearchOption.AllDirectories))
        {
            if (!IsAssemblyOrTest(file)) continue;
            string formatted = file.Replace('\\', '/');
            sb.Append($"\"{formatted}\" ");
        }
        
        foreach (string file in Directory.GetFiles("C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc", "*.c*", SearchOption.AllDirectories))
        {
            if (!IsAssemblyOrTest(file)) continue;
            if (file.Contains("gc.c") || 
                file.Contains("al_handler.c") || 
                file.Contains("vector_mlc.c") || 
                file.Contains("gcj_mlc.c"))
            {
                string formatted = file.Replace('\\', '/');
                sb.Append($"\"{formatted}\" ");
            }
        }

        // sb.Append("-pipe");
        // sb.Append(" -UGC_THREADS");
        // sb.Append(" -UUSE_MMAP");
        // sb.Append(" -UUSE_MUNMAP");
        // sb.Append(" -Xclang");
        // sb.Append(" -Wno-c++11-extensions");
        // sb.Append(" -Wno-nonportable-include-path");
        // sb.Append(" -ffunction-sections");
        // sb.Append(" -fdata-sections");
        // sb.Append(" -fmessage-length=0");
        sb.Append(" -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib");
        // sb.Append(" -DIL2CPP_MONO_DEBUGGER_DISABLED");
        // sb.Append(" -DRUNTIME_IL2CPP");
        // sb.Append(" -DGC_NOT_DLL");
        // sb.Append(" -DIL2CPP_DEFAULT_DATA_DIR_PATH=Data");
        // sb.Append(" -DNDEBUG");
        sb.Append(" \"--sysroot=C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/emscripten/cache/sysroot\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include\"");
        sb.Append(" \"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include\"");
        // sb.Append(" --exclude-file \"*upstream*\"");
        sb.Append(" -Oz");
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
}
