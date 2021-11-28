using UnityEngine;

namespace uWAVM
{
    [DisallowMultipleComponent]
    public class uWAVMBehaviourHost : MonoBehaviour
    {
        [SerializeReference]
        public uWAVMBehavior m_Behaviour;

        void Awake()
        {
            if (m_Behaviour == null)
            {
                enabled = false;
                return;
            }
            
            m_Behaviour.onTransformRotationSet += TransformRotationSet;
        }

        void TransformRotationSet(Quaternion quaternion)
        {
            transform.rotation = quaternion;
        }

        void Update()
        {
            m_Behaviour.Update();
        }

        // [ContextMenu("PopulateWithTestBehavior")]
        // void PopulateWithTestBehavior()
        // {
        //     m_Behaviour = new List<uWAVMBehavior>() { new uWAVMBehavior() };
        // }
    }
}