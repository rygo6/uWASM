using System;
using uWAVM;

namespace uWAVMTests
{
    [Serializable]
    public class TransformRotationTest : uWAVMBehavior
    {
        public float m_RotationSpeed = 1;
        
        float m_YRotation = 0;
        
        void Update()
        {
            m_YRotation = m_YRotation + 1f;
            SetRotation(0, m_YRotation, 0);
        }

        public int Add(int a, int b)
        {
            return a + b;
        }
    
        public int Sub(int a, int b)
        {
            return a - b;
        }
    } 
}