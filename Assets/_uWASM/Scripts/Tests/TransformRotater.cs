using System;
using UnityEngine;
using UnityEngine.Scripting;

namespace uWASM
{
    [Serializable]
    public class TransformRotater : uWASMBehavior
    {
        // Will Reflection work in WASM for this?
        /* Begin Auto-Generated */
        [Preserve]
        public static void CreateInstance(
            int behaviorInstanceId, 
            int transformInstanceId,
            int yRotation)
        {
            TransformRotater rotater = new TransformRotater();
            rotater.m_InstanceID = behaviorInstanceId;
            rotater.transform = new uWASMTransform(transformInstanceId);
            rotater.m_YRotation = yRotation;
            uWASMAPI.RegisterBehavior(rotater);
        }
        /* End Auto-Generated */
        
        [SerializeField]
        int m_YRotation = 1;
        
        float m_currentYRotation = 1;

        public override void Update()
        {
            m_currentYRotation += .0001f * ((float)m_YRotation);
            transform.eulerAngles = new uWASMVector3(0, m_currentYRotation, 0);
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