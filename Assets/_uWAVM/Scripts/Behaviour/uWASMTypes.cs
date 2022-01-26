using System.Runtime.InteropServices;
using UnityEngine;

namespace uWASM
{
  public class uWASMTransform
  {
    Transform m_Transform;
    
    int m_InstanceID;
    
    public uWASMTransform(int instanceID)
    {
      m_InstanceID = instanceID;
    }

    public Vector3 position
    {
      get => GetPosition(m_InstanceID);
      set => SetPosition(m_InstanceID, value);
    }
    
    public Vector3 eulerAngles
    {
      get => GetEulerAngles(m_InstanceID);
      set => SetEulerAngles(m_InstanceID, value);
    }

    [DllImport("__Internal")] 
    private static extern Vector3 GetPosition(int instanceId);

    [DllImport("__Internal")] 
    private static extern void SetPosition(int instanceId, Vector3 value);

    [DllImport("__Internal")] 
    private static extern Vector3 GetEulerAngles(int instanceId);

    [DllImport("__Internal")] 
    private static extern void SetEulerAngles(int instanceId, Vector3 value);

  }
}