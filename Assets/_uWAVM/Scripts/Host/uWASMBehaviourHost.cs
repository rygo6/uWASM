using System;
using UnityEngine;
using Wasmtime;

namespace uWASM
{
    public class uWASMBehaviourHost : MonoBehaviour
    {
        [SerializeReference] 
        public uWASMBehavior m_Behaviour;

        [SerializeField]
        uWASMEngine m_Engine;

        int m_InstanceId;

        void Awake()
        {
            m_InstanceId = GetInstanceID();

            m_Engine = FindObjectOfType<uWASMEngine>();
            
            if (m_Behaviour == null)
            {
                enabled = false;
                return;
            }
            
// #if UNITY_EDITOR && !FORCE_UWASM
//             return;
// #elif UNITY_WEBGL
// #endif
            
            m_Engine.InstanceBehaviour(m_Behaviour.ToString(), this);
            
            m_Engine.AwakeBehaviour(m_InstanceId);
        }

        void OnCollisionEnter(Collision other)
        {
            // m_Engine.OnCollisionEnterBehaviour(m_InstanceId, other);
        }

        void Start()
        {
            m_Engine.StartBehaviour(m_InstanceId);
        }

        void OnDestroy()
        {
            m_Engine.ClearBehaviour(this);
        }

        void Update()
        {
            m_Engine.UpdateBehaviour(m_InstanceId);
        }
    }
}