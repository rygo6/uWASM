using System;
using System.Collections.Generic;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Text;
using UnityEngine;
using uWAVM;

namespace uWAVMTests
{
    public static class uWAVMAPI
    {
        // Keep dict and list so you can search quick, and iterate quick.
        static Dictionary<int, uWAVMBehavior> m_InstanceDictionary = new Dictionary<int, uWAVMBehavior>();
        static List<uWAVMBehavior> m_InstanceList = new List<uWAVMBehavior>();
        
        public static int CreateInstance(Type type)
        {
            uWAVMBehavior instance = (uWAVMBehavior) Activator.CreateInstance(type);
            int hash = instance.GetHashCode();
            m_InstanceDictionary.Add(hash, instance);
            m_InstanceList.Add(instance);
            return hash;
        }
        
        public static int GetFirstType()
        {
            DebugLogExtern("Test");
            var assemblies = AppDomain.CurrentDomain.GetAssemblies();
            foreach (Assembly assembly in assemblies)
            {
                DebugLogExtern(assembly.FullName);
                foreach (Type type in assembly.GetTypes())
                {
                    DebugLogExtern(type.FullName);
                    return type.GetHashCode();
                }
            }

            return -1;
        }

        public static Type GetTypeByName(string fullName)
        {
            var assemblies = AppDomain.CurrentDomain.GetAssemblies();
            foreach (Assembly assembly in assemblies)
            {
                foreach (Type type in assembly.GetTypes())
                {
                    if (type.FullName == fullName)
                    {
                        return type;
                    }
                }
            }

            return null;
        }
        
        public static void UpdateAllBehaviours()
        {
            for (int i = 0; i < m_InstanceList.Count; ++i)
            {
                m_InstanceList[i].Update();
            }
        }
        
        // [DllImport("__Internal")]
        // public static extern Action GetCreateInstanceMethod();

        [DllImport("__Internal")]
        public static extern void DebugLogExtern(string message);
        
        // [DllImport("__Internal")]
        // public static extern void DebugLogPointer(string message);
    }
    
    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode, Pack = 1), Serializable]
    public class WasmString
    {
        // Const is not serialized to struct, but needs to be Const to use in MarshalAs Attribute.
        public const int MaxCapacity = 64;   
        
        public readonly int Length;
        public readonly int Capacity;
        
        [MarshalAs(UnmanagedType.ByValTStr, SizeConst = MaxCapacity)]
        public readonly string Buffer;

        public WasmString(string buffer)
        {
            Buffer = buffer;
            Length = Encoding.Unicode.GetByteCount(buffer);
            Capacity = MaxCapacity;
        }
    }
}