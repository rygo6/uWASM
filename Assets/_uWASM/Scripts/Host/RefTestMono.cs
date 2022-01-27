using UnityEngine;

namespace uWASM
{
    /* Begin Pre-Cecil Modification */
    public class RefTestMono : MonoBehaviour
    {
        [SerializeReference]
        RefTestMono m_RefTestWasm;
        
        [SerializeReference]
        Collider m_Collider;
        
        [SerializeReference]
        Transform m_TransformRef;
        
        int m_Count = 0;
        
        void Update()
        {
            // Test Func
            m_Count++;
            if (m_Count == 10)
            {
                m_Count = 0;
                m_Collider.enabled = !m_Collider.enabled;
            }
        }

    }
    /* End Pre-Cecil Modification */
}

