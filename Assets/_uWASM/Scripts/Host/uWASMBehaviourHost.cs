using System;
using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;

namespace uWASM
{
    [AddComponentMenu("uWASM/.")] //doing this to hide label?
    public class uWASMBehaviourHost : MonoBehaviour
    {
        [SerializeReference] 
        uWASMBehavior m_Behaviour;
        
        [SerializeField]
        uWASMEngine m_Engine;

        [SerializeField] 
        List<uWASMProperty> m_PropertyList = new List<uWASMProperty>();

        string m_BehaviourName;
        int m_InstanceId;

        [Serializable]
        public class uWASMProperty
        {
            public string fieldName;
            public Object objectInstance;
            //All the various types will need be added here. Basically this a replica of SerializedProperty
            public int intValue;
        }

        public List<uWASMProperty> PropertyList => m_PropertyList;
        List<object> m_Parameters = new List<object>();
        void Awake()
        {
            m_InstanceId = GetInstanceID();
            m_Engine = FindObjectOfType<uWASMEngine>();
            
            if (m_Behaviour == null)
            {
                enabled = false;
                return;
            }

            m_Parameters = new List<object>();
            foreach (uWASMProperty propery in m_PropertyList)
            {
                if (propery.objectInstance = null)
                {
                    m_Parameters.Add(propery.objectInstance.GetInstanceID());
                }
                else
                {
                    m_Parameters.Add(propery.intValue);
                }
            }
            m_Engine.InstanceBehaviour(m_Behaviour.ToString(), this, m_Parameters.ToArray());
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