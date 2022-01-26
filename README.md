Really don't try to use this for anything. Its my hacking project right now.

This is an experimental project to compile Unity C# components to wasm then execute that wasm binary at runtime on a wasm VM in order to drive the component. Currently this is working in the most simple way possible. A cube is rotating via the wasmtime VM using C# component code that was compiled to wasm with il2cpp+emscripten by manually running commandline operations below.

Depending, I will keep this going forward until the 'wasm component' workflow is basically indiscernible from typical C# component that would be executed through mono. Just tick a box on a C# component and it would then be compiled to wasm and run on a wasm vm, and its wasm binary would be packaged into the assetbundle for that prefab. Or get it as close to that as possible.


First run a WebGL build to get all staging data in Temp folder.

Run this command in powershell:
<!-- ```
. "C:\Program Files\Unity\Hub\Editor\2021.2.7f1\Editor\Data\il2cpp/build/deploy/UnityLinker.exe"  --search-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --out="C:/Developer/uWAVM/il2cpp_stripped" --include-link-xml="C:/Developer/uWAVM/il2cpp_managed/TypesInScenes.xml" --include-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --rule-set=Experimental --dotnetprofile=unityaot-linux --dotnetruntime=Il2Cpp --architecture=EmscriptenJavaScript --platform=WebGL --use-editor-options --enable-engine-module-stripping --engine-modules-asset-file="C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/modules.asset" --editor-data-file="C:/Developer/uWAVM/il2cpp_managed/EditorToUnityLinkerData.json" --include-unity-root-assembly="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed/uWAVMTests.dll" --print-command-line
``` -->

``` from dag
. "C:\Program Files\Unity\Hub\Editor\2021.2.7f1\Editor\Data\il2cpp/build/deploy/UnityLinker.exe" --search-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --out="C:/Developer/uWAVM/il2cpp_stripped" --include-link-xml="C:/Developer/uWAVM/il2cpp_managed/TypesInScenes.xml" --include-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --rule-set=Experimental --dotnetprofile=unityaot-linux --dotnetruntime=Il2Cpp --architecture=EmscriptenJavaScript --platform=WebGL --use-editor-options --editor-settings-flag=None,Development --enable-engine-module-stripping --engine-modules-asset-file="C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/modules.asset" --editor-data-file="C:/Developer/uWAVM/il2cpp_managed/EditorToUnityLinkerData.json" --include-unity-root-assembly="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed/uWAVMTests.dll" --print-command-line

//release
. "C:\Program Files\Unity\Hub\Editor\2021.2.7f1\Editor\Data\il2cpp/build/deploy/UnityLinker.exe" --search-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --out="C:/Developer/uWAVM/il2cpp_stripped" --include-link-xml="C:/Developer/uWAVM/il2cpp_managed/TypesInScenes.xml" --include-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --rule-set=Experimental --dotnetprofile=unityaot-linux --dotnetruntime=Il2Cpp --architecture=EmscriptenJavaScript --platform=WebGL --use-editor-options --enable-engine-module-stripping --engine-modules-asset-file="C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/modules.asset" --editor-data-file="C:/Developer/uWAVM/il2cpp_managed/EditorToUnityLinkerData.json" --include-unity-root-assembly="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed/uWAVMTests.dll" --print-command-line
```
Can just delete dlls from staging managed area and they don't get included? does the search directory option make it auto include unnecesary things?

Run next in powershell:
<!-- ```
. "C:\Program Files\Unity\Hub\Editor\2021.2.7f1\Editor\Data\il2cpp/build/deploy/il2cpp.exe" --convert-to-cpp --assembly="il2cpp_stripped/mscorlib.dll"  --assembly="il2cpp_stripped/uWAVMBehaviour.dll" --assembly="il2cpp_stripped/uWAVMTests.dll" --data-folder="C:/Developer/uWAVM/il2cpp_data" --generatedcppdir="C:/Developer/uWAVM/il2cpp_cpp" --emit-method-map --dotnetprofile=unityaot-linux
``` -->

``` from dag
. "C:\Program Files\Unity\Hub\Editor\2021.2.7f1\Editor\Data\il2cpp/build/deploy/il2cpp.exe" --convert-to-cpp --assembly="il2cpp_stripped/mscorlib.dll" --assembly="il2cpp_stripped/System.Core.dll" --assembly="il2cpp_stripped/System.dll" --assembly="il2cpp_stripped/UnityEngine.CoreModule.dll" --assembly="il2cpp_stripped/UnityEngine.dll" --assembly="il2cpp_stripped/UnityEngine.SharedInternalsModule.dll" --assembly="il2cpp_stripped/uWAVMBehaviour.dll" --assembly="il2cpp_stripped/uWAVMTests.dll" --data-folder="C:/Developer/uWAVM/il2cpp_data" --generatedcppdir="C:/Developer/uWAVM/il2cpp_cpp/cpp" --emit-method-map --generics-option=None,EnableFullSharing --dotnetprofile=unityaot-linux --profiler-output-file="C:/Developer/uWAVM/il2cpp_stripped/il2cpp_conv.traceevents" --profiler-report --print-command-line
```

``` from dag
. "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/Tools/BuildPipeline/ClassRegistrationGenerator.exe" --enable-stripping "il2cpp_stripped/UnityLinkerToEditorData.json" "il2cpp_managed/EditorToUnityLinkerData.json" "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/modules.asset" "il2cpp_cpp/UnityClassRegistration.cpp"
```

``` from dag
. "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/Tools/InternalCallRegistrationWriter/InternalCallRegistrationWriter.exe" -output="il2cpp_cpp/UnityICallRegistration.cpp" -summary="il2cpp_cpp/icallsummary.txt" -assembly="il2cpp_stripped/UnityEngine.CoreModule.dll;il2cpp_stripped/UnityEngine.SharedInternalsModule.dll"
```


Ensure latest emscripten is installed and run this in powershell. Update the exported function names and put a _ before the name! Disable ERROR_ON_UNDEFINED_SYMBOLS to get the 'import' function generated:
```
emcc il2cpp_cpp/uWAVMtests.cpp il2cpp_cpp/Il2CppMetadataUsage.c "-IC:/Developer/uWAVM/il2cpp_cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include" -Os -s STANDALONE_WASM --no-entry -o il2cpp_wasm/index.wasm -s EXPORTED_FUNCTIONS='["_TransformRotationTest_Update_mCD4245414D69ACEF0A6EC3E364E9A9C08C489F18", "_TransformRotationTest_Add_m91E818F16AE3F6DFA4DFFBC9946DEAEC450AFB91", "_TransformRotationTest_Sub_m952B493E6D8DFBC21437F0EF0406441ED433CD54", "_TransformRotationTest__ctor_m1DB596213BBC59C50A65251842F03303E8F2B586", "_uWAVMAPI_Instance_m81F3352714F1D0C4614A24377428024CC2B1A5C6"]' -s ERROR_ON_UNDEFINED_SYMBOLS=0 -v


. "C:\Program Files\Unity\Hub\Editor\2021.2.7f1\Editor\Data\PlaybackEngines\WebGLSupport\BuildTools\Emscripten\emscripten\emcc.bat" "@emcc_command.rsp"
```


. emcc -D__webgl__ -Wno-warn-absolute-paths -Wno-c++11-extensions -Wno-nonportable-include-path -ffunction-sections -fno-unwind-tables -fomit-frame-pointer -Wno-#warnings -Wswitch -Wno-trigraphs -Wno-tautological-compare -Wno-invalid-offsetof -Wno-implicitly-unsigned-literal -Wno-integer-overflow -Wno-shift-negative-value -Wno-unknown-attributes -Wno-implicit-function-declaration -Wno-null-conversion -Wno-missing-declarations -Wno-unused-value -Wno-pragma-once-outside-header -fvisibility=hidden -fexceptions -flto -fno-strict-overflow -ffunction-sections -fdata-sections -fmessage-length=0 -pipe -DGC_NOT_DLL -DHAVE_BOEHM_GC -DDEFAULT_GC_NAME=\"BDWGC\" -DALL_INTERIOR_POINTERS=1 -DGC_GCJ_SUPPORT=1 -DJAVA_FINALIZATION=1 -DNO_EXECUTE_PERMISSION=1 -DGC_NO_THREADS_DISCOVERY=1 -DIGNORE_DYNAMIC_LOADING=1 -DGC_DONT_REGISTER_MAIN_STATIC_DATA=1 -DGC_VERSION_MAJOR=7 -DGC_VERSION_MINOR=7 -DGC_VERSION_MICRO=0 -DGC_THREADS=1 -DUSE_MMAP=1 -DUSE_MUNMAP=1 -DNDEBUG -I"." -I"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/libatomic_ops/src" -I"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include" -o "il2cpp_o/gc.o" -Oz -fcolor-diagnostics -fdiagnostics-absolute-paths -UGC_THREADS -UUSE_MMAP -UUSE_MUNMAP -c -xc -v -s STANDALONE_WASM "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/extra/gc.c"

. emcc -D__webgl__ -Wno-warn-absolute-paths -Wno-c++11-extensions -Wno-nonportable-include-path -ffunction-sections -fno-unwind-tables -fomit-frame-pointer -fno-threadsafe-statics -std=c++11 -Wno-#warnings -Wswitch -Wno-trigraphs -Wno-tautological-compare -Wno-invalid-offsetof -Wno-implicitly-unsigned-literal -Wno-integer-overflow -Wno-shift-negative-value -Wno-unknown-attributes -Wno-implicit-function-declaration -Wno-null-conversion -Wno-missing-declarations -Wno-unused-value -Wno-pragma-once-outside-header -fvisibility=hidden -fexceptions -fno-rtti -flto -fno-strict-overflow -ffunction-sections -fdata-sections -fmessage-length=0 -pipe -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib -DIL2CPP_MONO_DEBUGGER_DISABLED -DRUNTIME_IL2CPP -DHAVE_BDWGC_GC -DNDEBUG -I"." -I"il2cpp_cpp/cpp" -I\"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch" -I"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp" -I"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include" -I"C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" -o "il2cpp_o/uWAVMTests.o" -Oz -fcolor-diagnostics -fdiagnostics-absolute-paths -UGC_THREADS -UUSE_MMAP -UUSE_MUNMAP -c -xc++ -v -s STANDALONE_WASM "il2cpp_cpp/cpp/uWAVMTests.cpp"



Convert wasm to wat for debug:
```
wasm2wat.exe .\il2cpp_wasm\index.wasm -o .\il2cpp_wasm\index.wat
```


You need to link more files than you can put in a terminal command, so uWAVM>GenerateEMCCCommand writes out command.rsp to the root. Then run this from CMD with `emcc @command.rsp`


Full clang build command from unity, may need to add more lines from this into emcc powershell command.
```
. "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/llvm\clang++.exe" -target wasm32-unknown-emscripten -DEMSCRIPTEN -fno-inline-functions -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-cxx-exceptions -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -D__EMSCRIPTEN_major__=2 -D__EMSCRIPTEN_minor__=0 -D__EMSCRIPTEN_tiny__=19 -D_LIBCPP_ABI_VERSION=2 -Dunix -D__unix -D__unix__ -Werror=implicit-function-declaration -Xclang -iwithsysroot/include/SDL "--sysroot=C:\Program Files\Unity\Hub\Editor\2021.2.7f1\Editor\Data\PlaybackEngines\WebGLSupport\BuildTools\Emscripten\emscripten\cache\sysroot" -Xclang -iwithsysroot/include\compat -D__webgl__ -Wno-c++11-extensions -Wno-nonportable-include-path -ffunction-sections -fno-unwind-tables -fomit-frame-pointer -fno-threadsafe-statics -std=c++11 -Wno-#warnings -Wswitch -Wno-trigraphs -Wno-tautological-compare -Wno-invalid-offsetof -Wno-implicitly-unsigned-literal -Wno-integer-overflow -Wno-shift-negative-value -Wno-unknown-attributes -Wno-implicit-function-declaration -Wno-null-conversion -Wno-missing-declarations -Wno-unused-value -Wno-pragma-once-outside-header -fvisibility=hidden -fexceptions -fno-rtti -fno-strict-overflow -ffunction-sections -fdata-sections -fmessage-length=0 -pipe -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib -DIL2CPP_MONO_DEBUGGER_DISABLED -DRUNTIME_IL2CPP -DGC_NOT_DLL -DIL2CPP_DEFAULT_DATA_DIR_PATH=Data -DNDEBUG -I. "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include" -Oz -fcolor-diagnostics -fdiagnostics-absolute-paths -UGC_THREADS -UUSE_MMAP -UUSE_MUNMAP -c -xc++ Library/Bee/artifacts/WebGL/il2cpp/master_WebGL_wasm/c47e_vm2.lump.cpp -o Library/Bee/artifacts/WebGL/il2cpp/master_WebGL_wasm/sfl8_e_vm2.lump.o
```

 "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\bin\\clang++.exe" -cc1 -triple wasm32-unknown-emscripten -emit-obj --mrelax-relocations -disable-free -main-file-name Generics1.cpp -mrelocation-model static -mframe-pointer=none -fno-rounding-math -mconstructor-aliases -target-cpu generic -fvisibility hidden -debugger-tuning=gdb -v -ffunction-sections -fdata-sections "-fcoverage-compilation-dir=C:\\Developer\\uWAVM" -resource-dir "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\lib\\clang\\13.0.0" -D EMSCRIPTEN -D __EMSCRIPTEN_major__=2 -D __EMSCRIPTEN_minor__=0 -D __EMSCRIPTEN_tiny__=26 -D _LIBCPP_ABI_VERSION=2 -D unix -D __unix -D __unix__ -U GC_THREADS -U USE_MMAP -U USE_MUNMAP -D BASELIB_INLINE_NAMESPACE=il2cpp_baselib -D IL2CPP_MONO_DEBUGGER_DISABLED -D RUNTIME_IL2CPP -D GC_NOT_DLL -D IL2CPP_DEFAULT_DATA_DIR_PATH=Data -D NDEBUG -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch" -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp" -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include" -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include" -isysroot "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/emscripten/cache/sysroot" -internal-isystem "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/emscripten/cache/sysroot/include/wasm32-emscripten/c++/v1" -internal-isystem "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/emscripten/cache/sysroot/include/c++/v1" -internal-isystem "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\lib\\clang\\13.0.0\\include" -internal-isystem "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/emscripten/cache/sysroot/include/wasm32-emscripten" -internal-isystem "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/emscripten/cache/sysroot/include" -Oz -Werror=implicit-function-declaration -Wno-nonportable-include-path -fdeprecated-macro "-fdebug-compilation-dir=C:\\Developer\\uWAVM" -ferror-limit 19 -fgnuc-version=4.2.1 -fno-inline-functions -fcxx-exceptions -fignore-exceptions -fexceptions -fcolor-diagnostics -vectorize-slp -iwithsysroot/include/SDL "-iwithsysroot/include\\compat" -Wno-c++11-extensions -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -o "C:\\Users\\rygo6\\AppData\\Local\\Temp\\emscripten_temp_jxo_4g1i\\Generics1_3.o" -x c++ "C:/Developer/uWAVM/Assets\\..\\il2cpp_cpp\\Generics1.cpp"


"C:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/llvm\clang.exe"
-target wasm32-unknown-emscripten
-DEMSCRIPTEN
-fno-inline-functions
-mllvm -combiner-global-alias-analysis=false
-mllvm -enable-emscripten-cxx-exceptions
-mllvm -enable-emscripten-sjlj
-mllvm -disable-lsr
-D__EMSCRIPTEN_major__=2
-D__EMSCRIPTEN_minor__=0
-D__EMSCRIPTEN_tiny__=19
-D_LIBCPP_ABI_VERSION=2
-Dunix
-D__unix
-D__unix__
-Werror=implicit-function-declaration
-Xclang
-iwithsysroot/include/SDL
"--sysroot=C:\Program Files\Unity\Hub\Editor\2021.2.0f1\Editor\Data\PlaybackEngines\WebGLSupport\BuildTools\Emscripten\emscripten\cache\sysroot"
-Xclang
-iwithsysroot/include\compat
-D__webgl__
-Wno-c++11-extensions
-Wno-nonportable-include-path
-ffunction-sections
-fno-unwind-tables
-fomit-frame-pointer
-Wno-#warnings
-Wswitch
-Wno-trigraphs
-Wno-tautological-compare
-Wno-invalid-offsetof
-Wno-implicitly-unsigned-literal
-Wno-integer-overflow
-Wno-shift-negative-value
-Wno-unknown-attributes
-Wno-implicit-function-declaration
-Wno-null-conversion
-Wno-missing-declarations
-Wno-unused-value
-Wno-pragma-once-outside-header
-fvisibility=hidden
-fexceptions
-fno-strict-overflow
-ffunction-sections
-fdata-sections
-fmessage-length=0
-pipe
-DGC_NOT_DLL
-DHAVE_BOEHM_GC
-DDEFAULT_GC_NAME=BDWGC
-DALL_INTERIOR_POINTERS=1
-DGC_GCJ_SUPPORT=1
-DJAVA_FINALIZATION=1
-DNO_EXECUTE_PERMISSION=1 -
DGC_NO_THREADS_DISCOVERY=1
-DIGNORE_DYNAMIC_LOADING=1
-DGC_DONT_REGISTER_MAIN_STATIC_DATA=1
-DGC_VERSION_MAJOR=7
-DGC_VERSION_MINOR=7
-DGC_VERSION_MICRO=0
-DGC_THREADS=1
-DUSE_MMAP=1
-DUSE_MUNMAP=1
-DNDEBUG
-I.
"-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/bdwgc/libatomic_ops/src"
"-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/bdwgc/include"
-Oz
-fcolor-diagnostics
-fdiagnostics-absolute-paths
-UGC_THREADS
-UUSE_MMAP
-UUSE_MUNMAP
-c
-xc "C:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/bdwgc/extra/gc.c" -o Library/Bee/artifacts/WebGL/bdwgc/master_WebGL_wasm/3dze_gc.o


. "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/llvm\clang++.exe"
-target wasm32-unknown-emscripten
-DEMSCRIPTEN
-fno-inline-functions
-mllvm -combiner-global-alias-analysis=false
-mllvm -enable-emscripten-cxx-exceptions // not in
-mllvm -enable-emscripten-sjlj
-mllvm -disable-lsr
-D__EMSCRIPTEN_major__=2
-D__EMSCRIPTEN_minor__=0
-D__EMSCRIPTEN_tiny__=19
-D_LIBCPP_ABI_VERSION=2
-Dunix
-D__unix
-D__unix__
-Werror=implicit-function-declaration
-Xclang -iwithsysroot/include/SDL
"--sysroot=C:\Program Files\Unity\Hub\Editor\2021.2.7f1\Editor\Data\PlaybackEngines\WebGLSupport\BuildTools\Emscripten\emscripten\cache\sysroot"
-Xclang -iwithsysroot/include\compat
-D__webgl__
-Wno-c++11-extensions
-Wno-nonportable-include-path
-ffunction-sections
-fno-unwind-tables
-fomit-frame-pointer
-fno-threadsafe-statics
-std=c++11
-Wno-#warnings
-Wswitch
-Wno-trigraphs
-Wno-tautological-compare
-Wno-invalid-offsetof
-Wno-implicitly-unsigned-literal
-Wno-integer-overflow
-Wno-shift-negative-value
-Wno-unknown-attributes
-Wno-implicit-function-declaration
-Wno-null-conversion
-Wno-missing-declarations
-Wno-unused-value
-Wno-pragma-once-outside-header
-fvisibility=hidden
-fexceptions
-fno-rtti
-fno-strict-overflow
-ffunction-sections
-fdata-sections
-fmessage-length=0
-pipe
-DBASELIB_INLINE_NAMESPACE=il2cpp_baselib
-DIL2CPP_MONO_DEBUGGER_DISABLED
-DRUNTIME_IL2CPP
-DGC_NOT_DLL
-DIL2CPP_DEFAULT_DATA_DIR_PATH=Data
-DNDEBUG
-I.
"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch"
"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp"
"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include"
"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include"
"-IC:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include"
-Oz
-fcolor-diagnostics
-fdiagnostics-absolute-paths
-UGC_THREADS
-UUSE_MMAP
-UUSE_MUNMAP
-c
-xc++ Library/Bee/artifacts/WebGL/il2cpp/master_WebGL_wasm/c47e_vm2.lump.cpp
-o Library/Bee/artifacts/WebGL/il2cpp/master_WebGL_wasm/sfl8_e_vm2.lump.o




 "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\bin\\clang++.exe"
 -cc1
 -triple
  wasm32-unknown-emscripten
 -emit-obj
 --mrelax-relocations
 -disable-free
 -main-file-name mscorlib8.cpp
 -mrelocation-model static
 -mframe-pointer=none
 -fno-rounding-math
 -mconstructor-aliases
 -target-cpu generic
 -fvisibility hidden
 -debugger-tuning=gdb
 -v "-fcoverage-compilation-dir=C:\\Developer\\uWAVM"
 -resource-dir "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\lib\\clang\\13.0.0"
 -D EMSCRIPTEN
 -D __EMSCRIPTEN_major__=2
 -D __EMSCRIPTEN_minor__=0
 -D __EMSCRIPTEN_tiny__=26
 -D _LIBCPP_ABI_VERSION=2
 -D unix
 -D __unix
 -D __unix__
 -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp/pch"
 -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/libil2cpp"
 -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Include"
 -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include"
 -I "C:/Program Files/Unity/Hub/Editor/2021.2.7f1/Editor/Data/il2cpp/external/bdwgc/include"
 -isysroot "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\emscripten\\cache\\sysroot"
 -internal-isystem "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\emscripten\\cache\\sysroot/include/wasm32-emscripten/c++/v1"
 -internal-isystem "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\emscripten\\cache\\sysroot/include/c++/v1"
 -internal-isystem "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\lib\\clang\\13.0.0\\include"
 -internal-isystem "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\emscripten\\cache\\sysroot/include/wasm32-emscripten"
 -internal-isystem "C:\\Users\\rygo6\\AppData\\Local\\emsdk\\upstream\\emscripten\\cache\\sysroot/include"
 -Os
 -Werror=implicit-function-declaration
 -fdeprecated-macro "-fdebug-compilation-dir=C:\\Developer\\uWAVM"
 -ferror-limit 19
 -fmessage-length=244
 -fgnuc-version=4.2.1
 -fno-inline-functions
 -fcxx-exceptions
 -fignore-exceptions
 -fexceptions
 -fcolor-diagnostics
 -vectorize-loops
 -vectorize-slp
 -iwithsysroot/include/SDL
 "-iwithsysroot/include\\compat"
 -mllvm  -combiner-global-alias-analysis=false
 -mllvm  -enable-emscripten-sjlj
 -mllvm  -disable-lsr
 -o "C:\\Users\\rygo6\\AppData\\Local\\Temp\\emscripten_temp_xtxfw2ja\\mscorlib8_47.o"
 -x c++ "C:/Developer/uWAVM/Assets\\..\\il2cpp_cpp\\mscorlib8.cpp"
