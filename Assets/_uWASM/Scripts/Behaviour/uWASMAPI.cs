using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine.Scripting;

namespace uWASM
{
    public static class uWASMAPI
    {
        static Dictionary<int, uWASMBehavior> m_BehaviourDictionary = new Dictionary<int, uWASMBehavior>();
        static List<string> m_TestList = new List<string>();

        [Preserve]
        public static void RegisterBehavior(uWASMBehavior behavior)
        {
            m_BehaviourDictionary.Add(behavior.instanceID, behavior);
        }
        
        [Preserve]
        public static uWASMBehavior GetBehavior(int instanceId)
        {
            m_BehaviourDictionary.TryGetValue(instanceId, out uWASMBehavior behavior);
            return behavior;
        }

        [Preserve]
        public static void AwakeBehaviour(int instanceId)
        {
            m_BehaviourDictionary[instanceId].Awake();
        }

        [Preserve]
        public static void StartBehaviour(int instanceId)
        {
            m_BehaviourDictionary[instanceId].Start();
        }

        [Preserve]
        public static void UpdateBehaviour(int instanceId)
        {
            m_BehaviourDictionary[instanceId].Update();
        }

        [Preserve]
        public static int TestGCAddString()
        {
            m_TestList.Add("Count: " + m_TestList.Count);
            return m_TestList.Count;
        }

        [DllImport("__Internal")]
        [Preserve]
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