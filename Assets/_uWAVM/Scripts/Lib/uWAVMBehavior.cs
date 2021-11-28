using System;
using UnityEngine;

namespace uWAVM
{
    [Serializable]
    public class uWAVMBehavior
    {
        [SerializeField] string m_WASMName = "uWAVMBehavior";
        [SerializeReference] uWAVMBehavior m_WASMBehavior;

        public event Action<Quaternion> onTransformRotationSet;
        
        public virtual void Update() {}

        public void SetRotation(float x, float y, float z)
        {
            onTransformRotationSet?.Invoke(Quaternion.Euler(x, y, z));
        }
    }
}