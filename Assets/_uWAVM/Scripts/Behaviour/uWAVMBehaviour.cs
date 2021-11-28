using System;
using System.Runtime.InteropServices;

namespace uWAVM
{
    [Serializable]
    public class uWAVMBehavior
    {
        public event Action<float, float, float> onTransformRotationSet;
#if UNITY_EDITOR
        public void SetRotation(float x, float y, float z)
        {
            onTransformRotationSet?.Invoke(x, y, z);
        }
#elif UNITY_WEBGL
        [DllImport("__Internal")]
        public static extern int SetRotation(float x, float y, float z);
        public void WEBGLFORSURE(){}
#endif
    }
}