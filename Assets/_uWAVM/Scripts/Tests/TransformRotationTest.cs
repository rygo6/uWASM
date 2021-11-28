using System;
using uWAVM;

namespace uWAVMTests
{
    [Serializable]
    public class TransformRotationTest : uWAVMBehavior
    {
        public float m_RotationSpeed = 1;
        
        float m_YRotation = 0;
        
        public override void Update()
        {
            SetRotation(0, m_YRotation += .1f * m_RotationSpeed, 0);
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