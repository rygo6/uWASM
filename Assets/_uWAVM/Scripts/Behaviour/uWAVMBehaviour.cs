using System;
using System.Runtime.InteropServices;

namespace uWAVM
{
    [Serializable]
    public abstract class uWAVMBehavior
    {
        protected int? m_HashCode;
        public int hashCode => m_HashCode ?? GetHashCode();

        public virtual void Update()
        { }

#if UNITY_EDITOR && !FORCE_UWAVM
        public event Action<float, float, float, int> onTransformRotationSet;
        public void SetRotation(float x, float y, float z)
        {
            onTransformRotationSet?.Invoke(x, y, z, hashCode);
        }
#elif UNITY_WEBGL

        [DllImport("__Internal")]
        public static extern void SetRotationExtern(float x, float y, float z, int hashCode);

        public void SetRotation(float x, float y, float z)
        {
            SetRotationExtern(x, y, z, hashCode);
        }
#endif
    }
}