using System.Reflection;
using UnityEngine;

namespace uWAVM
{
    [DisallowMultipleComponent]
    public class uWAVMBehaviourHost : MonoBehaviour
    {
        [SerializeReference]
        public uWAVMBehavior m_Behaviour;

        static readonly object[] m_EmptyParams = { };
        MethodInfo m_UpdateMethod;

        void Awake()
        {
            if (m_Behaviour == null)
            {
                enabled = false;
                return;
            }
            
            m_UpdateMethod = m_Behaviour.GetType().GetMethod("Update", BindingFlags.NonPublic | BindingFlags.Instance);
            m_UpdateMethod.Invoke(m_Behaviour, new object[] { });
            
            
#if UNITY_EDITOR
            m_Behaviour.onTransformRotationSet += TransformRotationSet;
#elif UNITY_WEBGL

#endif
        }

        void TransformRotationSet(float x, float y, float z)
        {
            transform.rotation = Quaternion.Euler(x, y, z);
        }

        void Update()
        {
#if UNITY_EDITOR
            m_UpdateMethod?.Invoke(m_Behaviour, m_EmptyParams);
#elif UNITY_WEBGL

#endif
        }
    }
}