using System;
using UnityEngine;
using UnityEngine.Scripting;

namespace uWASM
{
    [Serializable]
    public class RefTestWasm : uWASMBehavior
    {
        // Will Reflection work in WASM for this?
        /* Begin Auto-Generated */
        [Preserve]
        public static void CreateInstance(
            int behaviorInstanceId, 
            int transformInstanceId,
            int refTestWasmId,
            int colliderId,
            int transformId)
        {
            RefTestWasm refTestWasm = new RefTestWasm();
            refTestWasm.m_InstanceID = behaviorInstanceId;
            refTestWasm.transform = new uWASMTransform(transformInstanceId);
            refTestWasm.m_RefTestWasm = uWASMAPI.GetBehavior(refTestWasmId) as RefTestWasm;
            refTestWasm.m_Collider = new uWASMCollider(colliderId);
            refTestWasm.m_TransformRef = new uWASMTransform(transformId);
            uWASMAPI.RegisterBehavior(refTestWasm);
        }
        /* End Auto-Generated */
        
        [SerializeReference]
        RefTestWasm m_RefTestWasm;
        
        [SerializeReference]
        uWASMCollider m_Collider;
        
        [SerializeReference]
        uWASMTransform m_TransformRef;

        int m_Count = 0;
        
        public override void Update()
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
}

