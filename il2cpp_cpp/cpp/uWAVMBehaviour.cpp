#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,uWAVM.uWAVMBehavior>
struct Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<uWAVM.uWAVMBehavior>
struct List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,uWAVM.uWAVMBehavior>[]
struct EntryU5BU5D_tDB79BE31AEB360AAA9AF1D9074A3C387737C0EAF;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// uWAVM.uWAVMBehavior[]
struct uWAVMBehaviorU5BU5D_t8A4A0882E66CE106E165FCD119AFDE9CDF574B26;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// uWAVMTests.WasmString
struct WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A;
// uWAVM.uWAVMBehavior
struct uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB696A37604D665DC97134DBEE44CFE70451B1A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mF7D3D869B33CC06025BFDF9F90C10F0F9FBC07F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFE6DDDE0B1F9058A63AFC6F0DA8758A18F345C59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAD7890A0EBB32E1F11D754ED6A6D1EBFA2131096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7DC02910F1C5012E4C073C4A67D79B8A27F4C10B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t462EE7C2AEE4BBF1F078840DF38500A9CA0030FD 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,uWAVM.uWAVMBehavior>
struct Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDB79BE31AEB360AAA9AF1D9074A3C387737C0EAF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<uWAVM.uWAVMBehavior>
struct List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	uWAVMBehaviorU5BU5D_t8A4A0882E66CE106E165FCD119AFDE9CDF574B26* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	uWAVMBehaviorU5BU5D_t8A4A0882E66CE106E165FCD119AFDE9CDF574B26* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_2;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_3;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_4;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_5;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_6;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_7;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_1;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// uWAVMTests.WasmString
struct WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A  : public RuntimeObject
{
	// System.Int32 uWAVMTests.WasmString::Length
	int32_t ___Length_1;
	// System.Int32 uWAVMTests.WasmString::Capacity
	int32_t ___Capacity_2;
	// System.String uWAVMTests.WasmString::Buffer
	String_t* ___Buffer_3;
};
// Native definition for P/Invoke marshalling of uWAVMTests.WasmString
#pragma pack(push, tp, 1)
struct WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshaled_pinvoke
{
	int32_t ___Length_1;
	int32_t ___Capacity_2;
	Il2CppChar ___Buffer_3[64];
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of uWAVMTests.WasmString
#pragma pack(push, tp, 1)
struct WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshaled_com
{
	int32_t ___Length_1;
	int32_t ___Capacity_2;
	Il2CppChar ___Buffer_3[64];
};
#pragma pack(pop, tp)

// uWAVMTests.uWAVMAPI
struct uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049  : public RuntimeObject
{
};

struct uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,uWAVM.uWAVMBehavior> uWAVMTests.uWAVMAPI::m_InstanceDictionary
	Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34* ___m_InstanceDictionary_0;
	// System.Collections.Generic.List`1<uWAVM.uWAVMBehavior> uWAVMTests.uWAVMAPI::m_InstanceList
	List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* ___m_InstanceList_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_5;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_6;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_7;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_8;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_9;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_10;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_11;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_12;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_13;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_14;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_15;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_16;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_17;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_18;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_19;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_4;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_5;
	Il2CppIUnknown* ____granted_6;
	int32_t ____principalPolicy_7;
	Il2CppMethodPointer ___AssemblyLoad_8;
	Il2CppMethodPointer ___AssemblyResolve_9;
	Il2CppMethodPointer ___DomainUnload_10;
	Il2CppMethodPointer ___ProcessExit_11;
	Il2CppMethodPointer ___ResourceResolve_12;
	Il2CppMethodPointer ___TypeResolve_13;
	Il2CppMethodPointer ___UnhandledException_14;
	Il2CppMethodPointer ___FirstChanceException_15;
	Il2CppIUnknown* ____domain_manager_16;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_17;
	Il2CppIUnknown* ____activation_18;
	Il2CppIUnknown* ____applicationIdentity_19;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_5;
	Il2CppIUnknown* ____granted_6;
	int32_t ____principalPolicy_7;
	Il2CppMethodPointer ___AssemblyLoad_8;
	Il2CppMethodPointer ___AssemblyResolve_9;
	Il2CppMethodPointer ___DomainUnload_10;
	Il2CppMethodPointer ___ProcessExit_11;
	Il2CppMethodPointer ___ResourceResolve_12;
	Il2CppMethodPointer ___TypeResolve_13;
	Il2CppMethodPointer ___UnhandledException_14;
	Il2CppMethodPointer ___FirstChanceException_15;
	Il2CppIUnknown* ____domain_manager_16;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_17;
	Il2CppIUnknown* ____activation_18;
	Il2CppIUnknown* ____applicationIdentity_19;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_20;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// uWAVM.uWAVMBehavior
struct uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA  : public RuntimeObject
{
	// System.Nullable`1<System.Int32> uWAVM.uWAVMBehavior::m_HashCode
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___m_HashCode_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_7;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Boolean System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;

// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 uWAVM.uWAVMBehavior::get_hashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMBehavior_get_hashCode_m1A5D88F6377E0BEF01A077F2F3CFEBE778D175AC (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, const RuntimeMethod* method) ;
// System.Void uWAVM.uWAVMBehavior::SetRotationExtern(System.Single,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior_SetRotationExtern_m67E6D5CBA330DD7941F966E357D9461C70F62844 (float ___x0, float ___y1, float ___z2, int32_t ___hashCode3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,uWAVM.uWAVMBehavior>::Add(TKey,TValue)
inline void Dictionary_2_Add_mF7D3D869B33CC06025BFDF9F90C10F0F9FBC07F2 (Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34* __this, int32_t ___key0, uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.Collections.Generic.List`1<uWAVM.uWAVMBehavior>::Add(T)
inline void List_1_Add_mAD7890A0EBB32E1F11D754ED6A6D1EBFA2131096_inline (List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* __this, uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void uWAVMTests.uWAVMAPI::DebugLogExtern(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMAPI_DebugLogExtern_m07FFF18E58CC292F6E3CA7A8D091FED5BCE7B554 (String_t* ___message0, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<uWAVM.uWAVMBehavior>::get_Item(System.Int32)
inline uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* List_1_get_Item_m7DC02910F1C5012E4C073C4A67D79B8A27F4C10B (List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* __this, int32_t ___index0, const RuntimeMethod* method)
{
	uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.Collections.Generic.List`1<uWAVM.uWAVMBehavior>::get_Count()
inline int32_t List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_inline (List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<uWAVM.uWAVMBehavior>::.ctor()
inline void List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9 (List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,uWAVM.uWAVMBehavior>::.ctor()
inline void Dictionary_2__ctor_mFE6DDDE0B1F9058A63AFC6F0DA8758A18F345C59 (Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Text.Encoding System.Text.Encoding::get_Unicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_Unicode_mD855B4C0AC2D0EF5761B90A3DF4EE245D6B17066 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void DEFAULT_CALL SetRotationExtern(float, float, float, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL DebugLogExtern(char*);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 uWAVM.uWAVMBehavior::get_hashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMBehavior_get_hashCode_m1A5D88F6377E0BEF01A077F2F3CFEBE778D175AC (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public int hashCode => m_HashCode ?? GetHashCode();
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_0 = __this->___m_HashCode_0;
		V_0 = L_0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, __this);
		return L_2;
	}

IL_0017:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void uWAVM.uWAVMBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior_Update_m0C486F23D50CF6D33BA4E6289B45857503965E9D (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, const RuntimeMethod* method) 
{
	{
		// { }
		return;
	}
}
// System.Void uWAVM.uWAVMBehavior::SetRotationExtern(System.Single,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior_SetRotationExtern_m67E6D5CBA330DD7941F966E357D9461C70F62844 (float ___x0, float ___y1, float ___z2, int32_t ___hashCode3, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SetRotationExtern)(___x0, ___y1, ___z2, ___hashCode3);

}
// System.Void uWAVM.uWAVMBehavior::SetRotation(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior_SetRotation_m6D1BE4AD3EB53B8D4CE0A8BF783F44D2E0339530 (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		// SetRotationExtern(x, y, z, hashCode);
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		int32_t L_3;
		L_3 = uWAVMBehavior_get_hashCode_m1A5D88F6377E0BEF01A077F2F3CFEBE778D175AC(__this, NULL);
		uWAVMBehavior_SetRotationExtern_m67E6D5CBA330DD7941F966E357D9461C70F62844(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void uWAVM.uWAVMBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior__ctor_m45B10E80192E3C3F096C8776F6B02B1035589646 (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 uWAVMTests.uWAVMAPI::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMAPI_CreateInstance_mDC1F1CFAAE9700CCEF2CFA7DD1596547DD9B1CAF (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mF7D3D869B33CC06025BFDF9F90C10F0F9FBC07F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD7890A0EBB32E1F11D754ED6A6D1EBFA2131096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// uWAVMBehavior instance = (uWAVMBehavior) Activator.CreateInstance(type);
		Type_t* L_0 = ___type0;
		RuntimeObject* L_1;
		L_1 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_0, NULL);
		V_0 = ((uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA*)CastclassClass((RuntimeObject*)L_1, uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA_il2cpp_TypeInfo_var));
		// int hash = instance.GetHashCode();
		uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* L_2 = V_0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		V_1 = L_3;
		// m_InstanceDictionary.Add(hash, instance);
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34* L_4 = ((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceDictionary_0;
		int32_t L_5 = V_1;
		uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* L_6 = V_0;
		Dictionary_2_Add_mF7D3D869B33CC06025BFDF9F90C10F0F9FBC07F2(L_4, L_5, L_6, Dictionary_2_Add_mF7D3D869B33CC06025BFDF9F90C10F0F9FBC07F2_RuntimeMethod_var);
		// m_InstanceList.Add(instance);
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_7 = ((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1;
		uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* L_8 = V_0;
		List_1_Add_mAD7890A0EBB32E1F11D754ED6A6D1EBFA2131096_inline(L_7, L_8, List_1_Add_mAD7890A0EBB32E1F11D754ED6A6D1EBFA2131096_RuntimeMethod_var);
		// return hash;
		int32_t L_9 = V_1;
		return L_9;
	}
}
// System.Int32 uWAVMTests.uWAVMAPI::GetFirstType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMAPI_GetFirstType_mFC6AD71DD2B29E776F6435848D877D9D598EFEB7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AB696A37604D665DC97134DBEE44CFE70451B1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_0 = NULL;
	int32_t V_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// DebugLogExtern("Test");
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		uWAVMAPI_DebugLogExtern_m07FFF18E58CC292F6E3CA7A8D091FED5BCE7B554(_stringLiteral9AB696A37604D665DC97134DBEE44CFE70451B1A, NULL);
		// var assemblies = AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
		L_0 = AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE(NULL);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_0, NULL);
		// foreach (Assembly assembly in assemblies)
		V_0 = L_1;
		V_1 = 0;
		goto IL_004f;
	}

IL_0019:
	{
		// foreach (Assembly assembly in assemblies)
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		Assembly_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// DebugLogExtern(assembly.FullName);
		Assembly_t* L_6 = L_5;
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		uWAVMAPI_DebugLogExtern_m07FFF18E58CC292F6E3CA7A8D091FED5BCE7B554(L_7, NULL);
		// foreach (Type type in assembly.GetTypes())
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8;
		L_8 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(12 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_6);
		V_2 = L_8;
		V_3 = 0;
		goto IL_0045;
	}

IL_0031:
	{
		// foreach (Type type in assembly.GetTypes())
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		Type_t* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		// DebugLogExtern(type.FullName);
		Type_t* L_13 = L_12;
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_FullName() */, L_13);
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		uWAVMAPI_DebugLogExtern_m07FFF18E58CC292F6E3CA7A8D091FED5BCE7B554(L_14, NULL);
		// return type.GetHashCode();
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_13);
		return L_15;
	}

IL_0045:
	{
		// foreach (Type type in assembly.GetTypes())
		int32_t L_16 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_17 = V_2;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_004f:
	{
		// foreach (Assembly assembly in assemblies)
		int32_t L_19 = V_1;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0019;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// System.Type uWAVMTests.uWAVMAPI::GetTypeByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* uWAVMAPI_GetTypeByName_mC0F6FDBE103EF2DB1496F11FD4221F5481579576 (String_t* ___fullName0, const RuntimeMethod* method) 
{
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_0 = NULL;
	int32_t V_1 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	{
		// var assemblies = AppDomain.CurrentDomain.GetAssemblies();
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
		L_0 = AppDomain_get_CurrentDomain_m5085B6AF21A19506C85E0650C46BE35A18011CFE(NULL);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_0, NULL);
		// foreach (Assembly assembly in assemblies)
		V_0 = L_1;
		V_1 = 0;
		goto IL_0041;
	}

IL_000f:
	{
		// foreach (Assembly assembly in assemblies)
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		Assembly_t* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		// foreach (Type type in assembly.GetTypes())
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6;
		L_6 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(12 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_5);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0037;
	}

IL_001c:
	{
		// foreach (Type type in assembly.GetTypes())
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = V_2;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		Type_t* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		// if (type.FullName == fullName)
		Type_t* L_11 = V_4;
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_FullName() */, L_11);
		String_t* L_13 = ___fullName0;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0033;
		}
	}
	{
		// return type;
		Type_t* L_15 = V_4;
		return L_15;
	}

IL_0033:
	{
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0037:
	{
		// foreach (Type type in assembly.GetTypes())
		int32_t L_17 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18 = V_2;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0041:
	{
		// foreach (Assembly assembly in assemblies)
		int32_t L_20 = V_1;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (Type_t*)NULL;
	}
}
// System.Void uWAVMTests.uWAVMAPI::UpdateAllBehaviours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMAPI_UpdateAllBehaviours_m133FB3208ED997C88BF1F454C312B364E4747364 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7DC02910F1C5012E4C073C4A67D79B8A27F4C10B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_InstanceList.Count; ++i)
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		// m_InstanceList[i].Update();
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_0 = ((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1;
		int32_t L_1 = V_0;
		uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* L_2;
		L_2 = List_1_get_Item_m7DC02910F1C5012E4C073C4A67D79B8A27F4C10B(L_0, L_1, List_1_get_Item_m7DC02910F1C5012E4C073C4A67D79B8A27F4C10B_RuntimeMethod_var);
		VirtualActionInvoker0::Invoke(4 /* System.Void uWAVM.uWAVMBehavior::Update() */, L_2);
		// for (int i = 0; i < m_InstanceList.Count; ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < m_InstanceList.Count; ++i)
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_5 = ((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1;
		int32_t L_6;
		L_6 = List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_inline(L_5, List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 uWAVMTests.uWAVMAPI::TestA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMAPI_TestA_mC8290A9D3DB849BB750D9F85C9EBE20F4C3E7E4C (const RuntimeMethod* method) 
{
	{
		// return 100;
		return ((int32_t)100);
	}
}
// System.Int32 uWAVMTests.uWAVMAPI::TestB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMAPI_TestB_m0AA907C74884B34D8C3FD4FECB9C5EC2D59703A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_InstanceList.Count;
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_0 = ((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1;
		int32_t L_1;
		L_1 = List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_inline(L_0, List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 uWAVMTests.uWAVMAPI::TestC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMAPI_TestC_m84E346C447B4D0D595B95381CE3D573475D15E9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_InstanceList = new List<uWAVMBehavior>();
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_0 = (List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F*)il2cpp_codegen_object_new(List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F_il2cpp_TypeInfo_var);
		List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9(L_0, List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1), (void*)L_0);
		// return m_InstanceList.Count;
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_1 = ((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1;
		int32_t L_2;
		L_2 = List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_inline(L_1, List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 uWAVMTests.uWAVMAPI::TestD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMAPI_TestD_mF0765D1944D3987F76F4B2F507E5DE5E6C8C8824 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAD7890A0EBB32E1F11D754ED6A6D1EBFA2131096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_InstanceList = new List<uWAVMBehavior>();
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_0 = (List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F*)il2cpp_codegen_object_new(List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F_il2cpp_TypeInfo_var);
		List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9(L_0, List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1), (void*)L_0);
		// m_InstanceList.Add(null);
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_1 = ((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1;
		List_1_Add_mAD7890A0EBB32E1F11D754ED6A6D1EBFA2131096_inline(L_1, (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA*)NULL, List_1_Add_mAD7890A0EBB32E1F11D754ED6A6D1EBFA2131096_RuntimeMethod_var);
		// return m_InstanceList.Count;
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_2 = ((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1;
		int32_t L_3;
		L_3 = List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_inline(L_2, List_1_get_Count_mD85250A9BBC7991DE06E5EE4130D547F7298E18E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void uWAVMTests.uWAVMAPI::DebugLogExtern(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMAPI_DebugLogExtern_m07FFF18E58CC292F6E3CA7A8D091FED5BCE7B554 (String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(DebugLogExtern)(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void uWAVMTests.uWAVMAPI::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMAPI__cctor_m9F6A2E3DAF7CC9BF751A0AA2659DB03EC4E305A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFE6DDDE0B1F9058A63AFC6F0DA8758A18F345C59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static Dictionary<int, uWAVMBehavior> m_InstanceDictionary = new Dictionary<int, uWAVMBehavior>();
		Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34* L_0 = (Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34*)il2cpp_codegen_object_new(Dictionary_2_t54EEB3E0515FE3B68D664C99E1E13B593227EE34_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFE6DDDE0B1F9058A63AFC6F0DA8758A18F345C59(L_0, Dictionary_2__ctor_mFE6DDDE0B1F9058A63AFC6F0DA8758A18F345C59_RuntimeMethod_var);
		((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceDictionary_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceDictionary_0), (void*)L_0);
		// static List<uWAVMBehavior> m_InstanceList = new List<uWAVMBehavior>();
		List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F* L_1 = (List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F*)il2cpp_codegen_object_new(List_1_t4C2A1D860CB5FD4E78DBB423B42EDDC9FB7BFC2F_il2cpp_TypeInfo_var);
		List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9(L_1, List_1__ctor_m257A3248F2006D9E1102FBA23D7C00986BAACCA9_RuntimeMethod_var);
		((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_StaticFields*)il2cpp_codegen_static_fields_for(uWAVMAPI_tA8C79B9CB98DB2F39A89620018BB0913F7002049_il2cpp_TypeInfo_var))->___m_InstanceList_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: uWAVMTests.WasmString
IL2CPP_EXTERN_C void WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshal_pinvoke(const WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A& unmarshaled, WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshaled_pinvoke& marshaled)
{
	marshaled.___Length_1 = unmarshaled.___Length_1;
	marshaled.___Capacity_2 = unmarshaled.___Capacity_2;
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.___Buffer_3, (Il2CppChar*)&marshaled.___Buffer_3, 64);
}
IL2CPP_EXTERN_C void WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshal_pinvoke_back(const WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshaled_pinvoke& marshaled, WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A& unmarshaled)
{
	int32_t unmarshaledLength_temp_0 = 0;
	unmarshaledLength_temp_0 = marshaled.___Length_1;
	unmarshaled.___Length_1 = unmarshaledLength_temp_0;
	int32_t unmarshaledCapacity_temp_1 = 0;
	unmarshaledCapacity_temp_1 = marshaled.___Capacity_2;
	unmarshaled.___Capacity_2 = unmarshaledCapacity_temp_1;
	unmarshaled.___Buffer_3 = il2cpp_codegen_marshal_wstring_result(marshaled.___Buffer_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Buffer_3), (void*)il2cpp_codegen_marshal_wstring_result(marshaled.___Buffer_3));
}
// Conversion method for clean up from marshalling of: uWAVMTests.WasmString
IL2CPP_EXTERN_C void WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshal_pinvoke_cleanup(WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: uWAVMTests.WasmString
IL2CPP_EXTERN_C void WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshal_com(const WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A& unmarshaled, WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshaled_com& marshaled)
{
	marshaled.___Length_1 = unmarshaled.___Length_1;
	marshaled.___Capacity_2 = unmarshaled.___Capacity_2;
	il2cpp_codegen_marshal_wstring_fixed(unmarshaled.___Buffer_3, (Il2CppChar*)&marshaled.___Buffer_3, 64);
}
IL2CPP_EXTERN_C void WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshal_com_back(const WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshaled_com& marshaled, WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A& unmarshaled)
{
	int32_t unmarshaledLength_temp_0 = 0;
	unmarshaledLength_temp_0 = marshaled.___Length_1;
	unmarshaled.___Length_1 = unmarshaledLength_temp_0;
	int32_t unmarshaledCapacity_temp_1 = 0;
	unmarshaledCapacity_temp_1 = marshaled.___Capacity_2;
	unmarshaled.___Capacity_2 = unmarshaledCapacity_temp_1;
	unmarshaled.___Buffer_3 = il2cpp_codegen_marshal_wstring_result(marshaled.___Buffer_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Buffer_3), (void*)il2cpp_codegen_marshal_wstring_result(marshaled.___Buffer_3));
}
// Conversion method for clean up from marshalling of: uWAVMTests.WasmString
IL2CPP_EXTERN_C void WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshal_com_cleanup(WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A_marshaled_com& marshaled)
{
}
// System.Void uWAVMTests.WasmString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WasmString__ctor_mA3652D84D1A9D5284EAE8CFA4D23FCB18E41FF69 (WasmString_t3C738E49F58A49FDEC8C0D94BC8B7B131F84CB6A* __this, String_t* ___buffer0, const RuntimeMethod* method) 
{
	{
		// public WasmString(string buffer)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Buffer = buffer;
		String_t* L_0 = ___buffer0;
		__this->___Buffer_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buffer_3), (void*)L_0);
		// Length = Encoding.Unicode.GetByteCount(buffer);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_Unicode_mD855B4C0AC2D0EF5761B90A3DF4EE245D6B17066(NULL);
		String_t* L_2 = ___buffer0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(8 /* System.Int32 System.Text.Encoding::GetByteCount(System.String) */, L_1, L_2);
		__this->___Length_1 = L_3;
		// Capacity = MaxCapacity;
		__this->___Capacity_2 = ((int32_t)64);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
