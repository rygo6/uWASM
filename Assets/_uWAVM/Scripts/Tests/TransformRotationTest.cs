using System;
using UnityEngine;

namespace uWASM
{
    [Serializable]
    public class TransformRotationTest : uWASMBehavior
    {
        public float m_RotationSpeed = 1;

        float m_YRotation = 0;

        public override void CreateInstance(int behaviorInstanceId, int transformInstanceId)
        {
            m_InstanceID = behaviorInstanceId;
            transform = new uWASMTransform(transformInstanceId);
            uWASMAPI.RegisterBehavior(this);
        }

        public override void Update()
        {
            m_YRotation = m_YRotation + 1f;
            Vector3 euler = transform.eulerAngles;
            euler.y = m_YRotation;
            transform.eulerAngles = euler;
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