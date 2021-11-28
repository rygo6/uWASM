using System;
using System.Runtime.InteropServices;

namespace uWAVM
{
    [Serializable]
    public class uWAVMBehavior
    {
#if UNITY_EDITOR && !FORCE_UWAVM
        public event Action<float, float, float, int> onTransformRotationSet;
        public void SetRotation(float x, float y, float z)
        {
            onTransformRotationSet?.Invoke(x, y, z, 0);
        }
#elif UNITY_WEBGL
        [DllImport("__Internal")]
        public static extern void SetRotation(float x, float y, float z);
#endif
    }
}