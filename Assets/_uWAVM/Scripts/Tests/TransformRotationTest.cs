using System;
using System.Collections.Generic;
using uWAVM;

namespace uWAVMTests
{
    [Serializable]
    public class TransformRotationTest : uWAVMBehavior
    {
        public float m_RotationSpeed = 1;
        public List<string> m_StringList = new List<string>();
        
        float m_YRotation = 0;
        
        void Update()
        {
            m_YRotation = m_YRotation + 1f;
            SetRotation(0, m_YRotation, 0);
            
            m_StringList.Add("Hello");
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