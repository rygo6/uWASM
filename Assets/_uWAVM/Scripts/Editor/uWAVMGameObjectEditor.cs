using System;
using System.Linq;
using UnityEditor;
using UnityEngine;
using uWAVM;

[CustomEditor(typeof(uWAVMBehaviourHost))]
[CanEditMultipleObjects]
public class uWAVMGameObjectEditor : Editor 
{
    SerializedProperty m_BehaviourProperty;
    Type[] m_Implementations;
    int m_ImplementationTypeIndex = -1;
    
    void OnEnable()
    {
        m_BehaviourProperty = serializedObject.FindProperty("m_Behaviour");
    }

    public override void OnInspectorGUI()
    {
        uWAVMBehaviourHost host = target as uWAVMBehaviourHost;
        
        serializedObject.Update();
        
        m_Implementations = GetImplementations<uWAVMBehavior>().Where(impl=>!impl.IsSubclassOf(typeof(UnityEngine.Object))).ToArray();

        if (m_BehaviourProperty.managedReferenceValue != null)
        {
            for (int i = 0; i < m_Implementations.Length; ++i)
            {
                if (m_BehaviourProperty.managedReferenceValue.GetType() == m_Implementations[i])
                {
                    m_ImplementationTypeIndex = i;
                    break;
                }
            }
            EditorGUILayout.LabelField($"Loaded Implementation: {m_BehaviourProperty.managedReferenceValue.ToString()}");
        }

        int newIndex = EditorGUILayout.Popup(new GUIContent("Select Implementation"), m_ImplementationTypeIndex, m_Implementations.Select(impl => impl.FullName).ToArray());
        if (m_ImplementationTypeIndex != newIndex)
        {
            m_ImplementationTypeIndex = newIndex;
            Debug.Log($"Creating {m_Implementations[m_ImplementationTypeIndex]} and applying to {host}.");
            host.m_Behaviour = (uWAVMBehavior) Activator.CreateInstance(m_Implementations[m_ImplementationTypeIndex]);
        }

        serializedObject.ApplyModifiedProperties();

        DrawDefaultInspector();
    }

    static Type[] GetImplementations<T>()
    {
        var types = AppDomain.CurrentDomain.GetAssemblies().SelectMany(assembly => assembly.GetTypes());

        var interfaceType = typeof(T);
        return types.Where(p => interfaceType.IsAssignableFrom(p) && !p.IsAbstract).ToArray();
    }
}