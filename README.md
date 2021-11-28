Really don't try to use this for anything. Its my hacking project right now.

This is an experimental project to compile Unity C# components to wasm then execute that wasm binary at runtime on a wasm VM in order to drive the component. Currently this is working in the most simple way possible. A cube is rotating via the wasmtime VM using C# component code that was compiled to wasm with il2cpp+emscripten by manually running commandline operations below.

Depending, I will keep this going forward until the 'wasm component' workflow is basically indiscernible from typical C# component that would be executed through mono. Just tick a box on a C# component and it would then be compiled to wasm and run on a wasm vm, and its wasm binary would be packaged into the assetbundle for that prefab. Or get it as close to that as possible.


First run a WebGL build to get all staging data in Temp folder.

Run this command in powershell:
```
. "C:\Program Files\Unity\Hub\Editor\2021.2.0f1\Editor\Data\il2cpp/build/deploy/UnityLinker.exe"  --search-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --out="C:/Developer/uWAVM/il2cpp_stripped" --include-link-xml="C:/Developer/uWAVM/il2cpp_managed/TypesInScenes.xml" --include-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --rule-set=Experimental --dotnetprofile=unityaot-linux --dotnetruntime=Il2Cpp --architecture=EmscriptenJavaScript --platform=WebGL --use-editor-options --enable-engine-module-stripping --engine-modules-asset-file="C:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/PlaybackEngines/WebGLSupport/modules.asset" --editor-data-file="C:/Developer/uWAVM/il2cpp_managed/EditorToUnityLinkerData.json" --include-unity-root-assembly="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed/uWAVMTests.dll" --print-command-line
```


Run next in powershell:
```
. "C:\Program Files\Unity\Hub\Editor\2021.2.0f1\Editor\Data\il2cpp/build/deploy/il2cpp.exe" --convert-to-cpp --assembly="il2cpp_stripped/mscorlib.dll"  --assembly="il2cpp_stripped/uWAVMBehaviour.dll" --assembly="il2cpp_stripped/uWAVMTests.dll" --data-folder="C:/Developer/uWAVM/il2cpp_data" --generatedcppdir="C:/Developer/uWAVM/il2cpp_cpp" --emit-method-map --dotnetprofile=unityaot-linux
```


Ensure latest emscripten is installed and run this in powershell. Update the exported function names and put a _ before the name! Disable ERROR_ON_UNDEFINED_SYMBOLS to get the 'import' function generated:
```
emcc il2cpp_cpp/uWAVMtests.cpp "-IC:/Developer/uWAVM/il2cpp_cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/libil2cpp/pch" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/libil2cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/baselib/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" -Os -s STANDALONE_WASM --no-entry -o il2cpp_wasm/index.wasm -s EXPORTED_FUNCTIONS='["_TransformRotationTest_Update_mCD4245414D69ACEF0A6EC3E364E9A9C08C489F18"]' -s ERROR_ON_UNDEFINED_SYMBOLS=0
```

Convert wasm to wat for debug:
```
wasm2wat.exe .\il2cpp_wasm\index.wasm -o .\il2cpp_wasm\index.wat
```
