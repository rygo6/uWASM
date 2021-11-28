First run a WebGL build to get all staging data in Temp folder.

Run this command in powershell:
. "C:\Program Files\Unity\Hub\Editor\2021.2.0f1\Editor\Data\il2cpp/build/deploy/UnityLinker.exe"  --search-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --out="C:/Developer/uWAVM/il2cpp_stripped" --include-link-xml="C:/Developer/uWAVM/il2cpp_managed/TypesInScenes.xml" --include-directory="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed" --rule-set=Experimental --dotnetprofile=unityaot-linux --dotnetruntime=Il2Cpp --architecture=EmscriptenJavaScript --platform=WebGL --use-editor-options --enable-engine-module-stripping --engine-modules-asset-file="C:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/PlaybackEngines/WebGLSupport/modules.asset" --editor-data-file="C:/Developer/uWAVM/il2cpp_managed/EditorToUnityLinkerData.json" --include-unity-root-assembly="C:/Developer/uWAVM/Temp/StagingArea/Data/Managed/uWAVMTests.dll" --print-command-line


Run next in powershell:
. "C:\Program Files\Unity\Hub\Editor\2021.2.0f1\Editor\Data\il2cpp/build/deploy/il2cpp.exe" --convert-to-cpp --assembly="il2cpp_stripped/mscorlib.dll"  --assembly="il2cpp_stripped/uWAVMBehaviour.dll" --assembly="il2cpp_stripped/uWAVMTests.dll" --data-folder="C:/Developer/uWAVM/il2cpp_data" --generatedcppdir="C:/Developer/uWAVM/il2cpp_cpp" --emit-method-map --dotnetprofile=unityaot-linux


ensure latest emscripten is installed and run this in powershell. Update the exported function names:
emcc il2cpp_cpp/uWAVMtests.cpp "-IC:/Developer/uWAVM/il2cpp_cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/libil2cpp/pch" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/libil2cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/baselib/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" -Os -s STANDALONE_WASM --no-entry -o il2cpp_wasm/index.wasm -s EXPORTED_FUNCTIONS='["_TransformRotationTest_Update_mCD4245414D69ACEF0A6EC3E364E9A9C08C489F18","_TransformRotationTest_Add_m91E818F16AE3F6DFA4DFFBC9946DEAEC450AFB91", "_TransformRotationTest_Sub_m952B493E6D8DFBC21437F0EF0406441ED433CD54"]'

emcc il2cpp_cpp/uWAVMtests.cpp -IC:/Developer/uWAVM/il2cpp_cpp "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/libil2cpp/pch" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/libil2cpp" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/baselib/Include" "-IC:/Program Files/Unity/Hub/Editor/2021.2.0f1/Editor/Data/il2cpp/external/baselib/Platforms/WebGL/Include" -Os -s STANDALONE_WASM --no-entry -o il2cpp_wasm/index.wasm -s EXPORTED_FUNCTIONS='["_TransformRotationTest_Update_mCD4245414D69ACEF0A6EC3E364E9A9C08C489F18","uWAVMBehavior_SetRotation_m7DCDAA6268F9F59F74A54BD35C1EBB2F5F3B4795"]'

wasm2wat.exe .\il2cpp_wasm\index.wasm -o .\il2cpp_wasm\index.wat
