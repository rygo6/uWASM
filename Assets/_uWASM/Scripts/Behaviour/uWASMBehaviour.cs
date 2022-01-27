using System;

namespace uWASM
{
    [Serializable]
    public abstract class uWASMBehavior
    {
        protected int m_InstanceID;
        
        public bool enabled { get; set; }
        
        public uWASMTransform transform { get; set; }
        
        public int instanceID => m_InstanceID;

        public virtual void Awake()
        { }
        
        public virtual void Start()
        { }
        
        public virtual void OnDestroy()
        { }
        
        public virtual void Update()
        { }
        
        public virtual void OnCollisionEnter(uWASMCollision collision)
        {
            
        }
    }
}