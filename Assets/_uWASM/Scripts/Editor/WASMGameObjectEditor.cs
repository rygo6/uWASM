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
    SerializedProperty m_PropertyListProperty;
    Type[] m_Behaviours;
    int m_BehaviourTypeIndex = -1;
    
    void OnEnable()
    {
        m_BehaviourProperty = serializedObject.FindProperty("m_Behaviour");
        m_PropertyListProperty = serializedObject.FindProperty("m_PropertyList");
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
            
            GUIStyle titleStyle = new GUIStyle();
            titleStyle.fontSize = 12;
            titleStyle.normal.textColor = Color.white;
            // EditorGUILayout.LabelField($"{m_BehaviourProperty.managedReferenceValue}", titleStyle);
            EditorGUI.LabelField(new Rect(60, -18, 100, 20), m_BehaviourProperty.managedReferenceValue.ToString(), titleStyle);
        }

        int newIndex = EditorGUILayout.Popup(new GUIContent("Select Behaviour"), m_BehaviourTypeIndex, m_Behaviours.Select(impl => impl.FullName).ToArray());
        if (m_BehaviourTypeIndex != newIndex)
        {
            m_BehaviourTypeIndex = newIndex;
            Debug.Log($"Creating {m_Behaviours[m_BehaviourTypeIndex]} and applying to {host}.");
            m_BehaviourProperty.managedReferenceValue = (uWASMBehavior) Activator.CreateInstance(m_Behaviours[m_BehaviourTypeIndex]);
            m_PropertyListProperty.ClearArray();
        }

        var enumerator = m_BehaviourProperty.Copy().GetEnumerator();
        while (enumerator.MoveNext())
        {
            var property = enumerator.Current as SerializedProperty;
            var refObjectIndex = host.PropertyList.FindIndex(o => o.fieldName == property.propertyPath);
            switch (property.propertyType)
            {
                case SerializedPropertyType.Generic:
                case SerializedPropertyType.ManagedReference:
                case SerializedPropertyType.ObjectReference:
                    var refObject = refObjectIndex == -1 ? null : host.PropertyList[refObjectIndex].objectInstance;
                    var newRefObject = EditorGUILayout.ObjectField(new GUIContent(property.displayName), refObject, WasmToStandardType(property.managedReferenceFieldTypename), true);

                    if (refObjectIndex == -1)
                    {
                        host.PropertyList.Add(new uWASMBehaviourHost.uWASMProperty() {fieldName = property.propertyPath, objectInstance = newRefObject} );
                        EditorUtility.SetDirty(host);
                    }
                    else if (refObject != newRefObject)
                    {
                        host.PropertyList[refObjectIndex].objectInstance = newRefObject;
                        EditorUtility.SetDirty(host);
                    }
                    
                    break;
                case SerializedPropertyType.Integer:
                    if (refObjectIndex == -1)
                    {
                        host.PropertyList.Add(new uWASMBehaviourHost.uWASMProperty() {fieldName = property.propertyPath, intValue = property.intValue} );
                        EditorUtility.SetDirty(host);
                    }

                    EditorGUILayout.PropertyField(property);

                    if (host.PropertyList[refObjectIndex].intValue != property.intValue)
                    {
                        host.PropertyList[refObjectIndex].intValue = property.intValue;
                        EditorUtility.SetDirty(host);
                    }
                    break;
                default:
                    EditorGUILayout.PropertyField(property);
                    break;
            }
        }

        serializedObject.ApplyModifiedProperties();
    }

    static Type[] GetImplementations<T>()
    {
        var types = AppDomain.CurrentDomain.GetAssemblies().SelectMany(assembly => assembly.GetTypes());
        var interfaceType = typeof(T);
        return types.Where(p => interfaceType.IsAssignableFrom(p) && !p.IsAbstract).ToArray();
    }

    static Type WasmToStandardType(string type)
    {
        switch (type)
        {
            case "uWASMBehaviour uWASM.uWASMCollider":
                return typeof(Collider);
            case "uWASMBehaviour uWASM.uWASMTransform":
                return typeof(Transform);            
            case "uWASMTests uWASM.RefTestWasm":
                return typeof(uWASMBehaviourHost);
            default:
                return default;
        }
    }
}