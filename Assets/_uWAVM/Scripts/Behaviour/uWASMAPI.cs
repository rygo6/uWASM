using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace uWASM
{
    public static class uWASMAPI
    {
        static Dictionary<int, uWASMBehavior> m_BehaviourDictionary = new Dictionary<int, uWASMBehavior>();
        static List<uWASMBehavior> m_BehaviourList = new List<uWASMBehavior>();

        public static void RegisterBehavior(uWASMBehavior behavior)
        {
            m_BehaviourList.Add(behavior);
            m_BehaviourDictionary.Add(behavior.instanceID, behavior);
        }
        
        // public static int CreateInstance(Type type)
        // {
        //     WASMBehavior instance = (WASMBehavior) Activator.CreateInstance(type);
        //     int hash = instance.GetHashCode();
        //     m_InstanceDictionary.Add(hash, instance);
        //     m_InstanceList.Add(instance);
        //     return hash;
        // }
        
        public static void AwakeBehaviour(int instanceId)
        {
            m_BehaviourList[instanceId].Awake();
        }
        
        public static void StartBehaviour(int instanceId)
        {
            m_BehaviourList[instanceId].Start();
        }
        
        public static void UpdateBehaviour(int instanceId)
        {
            m_BehaviourList[instanceId].Update();
        }

        public static int TestA()
        {
            return 100;
        }
        
        public static int TestB()
        {
            return m_BehaviourList.Count;
        }
        
        public static int TestC()
        {
            m_BehaviourList = new List<uWASMBehavior>();
            return m_BehaviourList.Count;
        }
        
        public static int TestD()
        {
            m_BehaviourList = new List<uWASMBehavior>();
            m_BehaviourList.Add(null);
            return m_BehaviourList.Count;
        }
        
        public static int Test3()
        {
            m_BehaviourList.Add(null);
            return m_BehaviourList.Count;
        }

        [DllImport("__Internal")]
        public static extern void DebugLogExtern(string message);
    }
    
    // [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode, Pack = 1), Serializable]
    // public class WasmString
    // {
    //     // Const is not serialized to struct, but needs to be Const to use in MarshalAs Attribute.
    //     public const int MaxCapacity = 64;   
    //     
    //     public readonly int Length;
    //     public readonly int Capacity;
    //     
    //     [MarshalAs(UnmanagedType.ByValTStr, SizeConst = MaxCapacity)]
    //     public readonly string Buffer;
    //
    //     public WasmString(string buffer)
    //     {
    //         Buffer = buffer;
    //         Length = Encoding.Unicode.GetByteCount(buffer);
    //         Capacity = MaxCapacity;
    //     }
    // }
}