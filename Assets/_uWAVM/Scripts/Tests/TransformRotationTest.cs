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
        
        public override void Update()
        {
            m_YRotation = m_YRotation + 1f;
            SetRotation(0, m_YRotation, 0);

            string newString = "";
            for (int i = 0; i < 3; ++i)
            {
                newString += i;
            }
            m_StringList.Add(newString);
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