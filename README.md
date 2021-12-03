Really don't try to use this for anything. Its my hacking project right now.

This is an experimental project to compile Unity C# components to wasm then execute that wasm binary at runtime on a wasm VM in order to drive the component. Currently this is working in the most simple way possible. A cube is rotating via the wasmtime VM using C# component code that was compiled to wasm with il2cpp+emscripten by manually running commandline operations below.

Depending, I will keep this going forward until the 'wasm component' workflow is basically indiscernible from typical C# component that would be executed through mono. Just tick a box on a C# component and it would then be compiled to wasm and run on a wasm vm, and its wasm binary would be packaged into the assetbundle for that prefab. Or get it as close to that as possible.


First run a WebGL build to get all staging data in Temp folder.

Run this command in powershell:
```
. "C:\Program Files\Unity\Hub\Editor\2021.2.4f1\Editor\Data\il2cpp/build/deploy/UnityLinker.exe"  --search-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --out="C:/Developer/uWAVM/il2cpp_stripped" --include-link-xml="C:/Developer/uWAVM/il2cpp_managed/TypesInScenes.xml" --include-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --rule-set=Experimental --dotnetprofile=unityaot-linux --dotnetruntime=Il2Cpp --architecture=EmscriptenJavaScript --platform=WebGL --use-editor-options --enable-engine-module-stripping --engine-modules-asset-file="C:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/PlaybackEngines/WebGLSupport/modules.asset" --editor-data-file="C:/Developer/uWAVM/il2cpp_managed/EditorToUnityLinkerData.json" --include-unity-root-assembly="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed/uWAVMTests.dll" --print-command-line
```


Run next in powershell:
```
. "C:\Program Files\Unity\Hub\Editor\2021.2.4f1\Editor\Data\il2cpp/build/deploy/il2cpp.exe" --convert-to-cpp --assembly="il2cpp_stripped/mscorlib.dll"  --assembly="il2cpp_stripped/uWAVMBehaviour.dll" --assembly="il2cpp_stripped/uWAVMTests.dll" --data-folder="C:/Developer/uWAVM/il2cpp_data" --generatedcppdir="C:/Developer/uWAVM/il2cpp_cpp" --emit-method-map --dotnetprofile=unityaot-linux
```


Ensure latest emscripten is installed and run this in powershell. Update the exported function names and put a _ before the name! Disable ERROR_ON_UNDEFINED_SYMBOLS to get the 'import' function generated:
```
emcc il2cpp_cpp/uWAVMtests.cpp il2cpp_cpp/Il2CppMetadataUsage.c "-IC:/Developer/uWAVM/il2cpp_cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/libil2cpp/pch" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/libil2cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/external/baselib/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/external/bdwgc/include" -Os -s STANDALONE_WASM --no-entry -o il2cpp_wasm/index.wasm -s EXPORTED_FUNCTIONS='["_TransformRotationTest_Update_mCD4245414D69ACEF0A6EC3E364E9A9C08C489F18"]' -s ERROR_ON_UNDEFINED_SYMBOLS=0
```

Convert wasm to wat for debug:
```
wasm2wat.exe .\il2cpp_wasm\index.wasm -o .\il2cpp_wasm\index.wat
```


Full clang build command from unity, may need to add more lines from this into emcc powershell command.
```
"C:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/PlaybackEngines/WebGLSupport/BuildTools/Emscripten/llvm\clang++.exe" -target wasm32-unknown-emscripten -DEMSCRIPTEN -fno-inline-functions -mllvm -combiner-global-alias-analysis=false -mllvm -enable-emscripten-cxx-exceptions -mllvm -enable-emscripten-sjlj -mllvm -disable-lsr -D__EMSCRIPTEN_major__=2 -D__EMSCRIPTEN_minor__=0 -D__EMSCRIPTEN_tiny__=19 -D_LIBCPP_ABI_VERSION=2 -Dunix -D__unix -D__unix__ -Werror=implicit-function-declaration -Xclang -iwithsysroot/include/SDL "--sysroot=C:\Program Files\Unity\Hub\Editor\2021.2.4f1\Editor\Data\PlaybackEngines\WebGLSupport\BuildTools\Emscripten\emscripten\cache\sysroot" -Xclang -iwithsysroot/include\compat -D__webgl__ -Wno-c++11-extensions -Wno-nonportable-include-path -ffunction-sections -fno-unwind-tables -fomit-frame-pointer -fno-threadsafe-statics -std=c++11 -Wno-#warnings -Wswitch -Wno-trigraphs -Wno-tautological-compare -Wno-invalid-offsetof -Wno-implicitly-unsigned-literal -Wno-integer-overflow -Wno-shift-negative-value -Wno-unknown-attributes -Wno-implicit-function-declaration -Wno-null-conversion -Wno-missing-declarations -Wno-unused-value -Wno-pragma-once-outside-header -fvisibility=hidden -fexceptions -fno-rtti -fno-strict-overflow -ffunction-sections -fdata-sections -fmessage-length=0 -pipe -DBASELIB_INLINE_NAMESPACE=il2cpp_baselib -DIL2CPP_MONO_DEBUGGER_DISABLED -DRUNTIME_IL2CPP -DGC_NOT_DLL -DIL2CPP_DEFAULT_DATA_DIR_PATH=Data -DNDEBUG -I. "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/libil2cpp/pch" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/libil2cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/external/baselib/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.4f1/Editor/Data/il2cpp/external/bdwgc/include" -Oz -fcolor-diagnostics -fdiagnostics-absolute-paths -UGC_THREADS -UUSE_MMAP -UUSE_MUNMAP -c -xc++ Library/Bee/artifacts/WebGL/il2cpp/master_WebGL_wasm/c47e_vm2.lump.cpp -o Library/Bee/artifacts/WebGL/il2cpp/master_WebGL_wasm/sfl8_e_vm2.lump.o
```
