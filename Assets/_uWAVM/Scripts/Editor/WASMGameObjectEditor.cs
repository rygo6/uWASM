using System;
using System.Linq;
using UnityEditor;
using UnityEngine;
using uWASM;

[CustomEditor(typeof(uWASMBehaviourHost))]
[CanEditMultipleObjects]
public class uWASMGameObjectEditor : Editor 
{
    SerializedProperty m_BehaviourProperty;
    Type[] m_Behaviours;
    int m_BehaviourTypeIndex = -1;
    
    void OnEnable()
    {
        m_BehaviourProperty = serializedObject.FindProperty("m_Behaviour");
    }

    public override void OnInspectorGUI()
    {
        uWASMBehaviourHost host = target as uWASMBehaviourHost;
        
        serializedObject.Update();
        
        m_Behaviours = GetImplementations<uWASMBehavior>().Where(impl=>!impl.IsSubclassOf(typeof(UnityEngine.Object))).ToArray();

        if (m_BehaviourProperty.managedReferenceValue != null)
        {
            for (int i = 0; i < m_Behaviours.Length; ++i)
            {
                if (m_BehaviourProperty.managedReferenceValue.GetType() == m_Behaviours[i])
                {
                    m_BehaviourTypeIndex = i;
                    break;
                }
            }
            EditorGUILayout.LabelField($"Loaded Implementation: {m_BehaviourProperty.managedReferenceValue.ToString()}");
        }

        int newIndex = EditorGUILayout.Popup(new GUIContent("Select Behaviour"), m_BehaviourTypeIndex, m_Behaviours.Select(impl => impl.FullName).ToArray());
        if (m_BehaviourTypeIndex != newIndex)
        {
            m_BehaviourTypeIndex = newIndex;
            Debug.Log($"Creating {m_Behaviours[m_BehaviourTypeIndex]} and applying to {host}.");
            host.m_Behaviour = (uWASMBehavior) Activator.CreateInstance(m_Behaviours[m_BehaviourTypeIndex]);
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