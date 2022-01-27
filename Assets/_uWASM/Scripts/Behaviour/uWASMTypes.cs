using System;
using System.Runtime.InteropServices;
using UnityEngine;

namespace uWASM
{
    [Serializable]
    public class uWASMTransform
    {
        int m_InstanceID;

        public uWASMTransform(int instanceID)
        {
            m_InstanceID = instanceID;
        }

        public uWASMVector3 position
        {
            get => GetPosition(m_InstanceID);
            set => SetPosition(m_InstanceID, value.x, value.y, value.z);
        }

        public uWASMVector3 eulerAngles
        {
            get => GetEulerAngles(m_InstanceID);
            set => SetEulerAngles(m_InstanceID, value.x, value.y, value.z);
        }

        [DllImport("__Internal")]
        private static extern uWASMVector3 GetPosition(int instanceId);

        [DllImport("__Internal")]
        private static extern void SetPosition(int instanceId, float x, float y, float z);

        [DllImport("__Internal")]
        private static extern uWASMVector3 GetEulerAngles(int instanceId);

        [DllImport("__Internal")]
        private static extern void SetEulerAngles(int instanceId, float x, float y, float z);
    }

    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode, Pack = 1), Serializable]
    public struct uWASMVector3
    {
        public float x;
        public float y;
        public float z;

        public uWASMVector3(float x, float y, float z)
        {
            this.x = x;
            this.y = y;
            this.z = z;
        }

#if UNITY_EDITOR || !UNITY_WEBGL
        public static implicit operator Vector3(uWASMVector3 v3)
        {
            return new Vector3(v3.x, v3.y, v3.z);
        }

        public static implicit operator uWASMVector3(Vector3 v3)
        {
            return new uWASMVector3 {x = v3.x, y = v3.y, z = v3.z};
        }
#endif
    }

    [Serializable]
    public class uWASMCollision
    {
        public uWASMContactPoint[] contacts;
    }

    [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode, Pack = 1), Serializable]
    public struct uWASMContactPoint
    {
        public uWASMVector3 point;
        public uWASMVector3 normal;
    }

    [Serializable]
    public class uWASMCollider
    {
        int m_InstanceID;
        
        public uWASMCollider(int instanceID)
        {
            m_InstanceID = instanceID;
        }
        
        public bool enabled
        {
            get => GetColliderEnabled(m_InstanceID);
            set => SetColliderEnabled(m_InstanceID, value);
        }
        
        [DllImport("__Internal")]
        private static extern bool GetColliderEnabled(int instanceId);
        
        [DllImport("__Internal")]
        private static extern void SetColliderEnabled(int instanceId, bool value);
    }
}