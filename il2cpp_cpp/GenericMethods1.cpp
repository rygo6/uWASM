#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.IAsyncResult>
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler>
struct Dictionary_2_t4CE53C8BCD6558009650AFE413B37A773593BC7B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<System.Threading.Tasks.Task`1<System.Object>>
struct Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`3<System.Type,System.Type[],System.Type>
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D;
// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_t318E92560B3BCC40982F5FD19861164DC9EFBA20;
// System.Reflection.RuntimePropertyInfo/Getter`2<System.Object,System.Object>
struct Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D;
// System.Collections.Generic.IComparer`1<System.Boolean>
struct IComparer_1_tC7D46A32A502DFC21B11BE1B2ED85863A881B5B4;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4483F9B9F43C7B0F8D4FEEAE12FAFDD3F9CF81FD;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_tC0A12A847AF97F369A5CE9A0CCE71CE18EE1440E;
// System.Collections.Generic.IComparer`1<System.UInt64>
struct IComparer_1_t7E870201BF4F9A2658830A9FA35ED97BC476A8B4;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t09217E1EDF7CCAED72B667F406AAC92AB64B8790;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t1E95A05AFA88C09BA96A40B431F7D5867BD0D622;
// System.Collections.Generic.List`1<System.Security.AccessControl.GenericAce>
struct List_1_t27A5F0256D406BFD691B7F5E16235A2A7F95D6CF;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Security.AccessControl.CommonAcl/RemoveAcesCallback`1<System.Object>
struct RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4;
// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`8<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean,System.ValueTuple`1<System.Boolean>>>
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
// System.Buffers.SpanAction`2<System.Char,System.Object>
struct SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3;
// System.Reflection.RuntimePropertyInfo/StaticGetter`1<System.Object>
struct StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<System.Object>>
struct TaskFactory_1_t6D562D6E02741F0C7D98C590754714C6D6429450;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF;
// System.Threading.Tasks.Task`1<System.Int32>[]
struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t6491927494F825352C40DCE9D447C97B17297969;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Decimal/DecCalc/PowerOvfl[]
struct PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Security.AccessControl.CommonAcl
struct CommonAcl_tCA91208504C637DEA4B991FB310C0F356C47E08A;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211;
// System.MonoTypeInfo
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// System.Security.AccessControl.RawAcl
struct RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E;
// System.Reflection.CustomAttributeData/LazyCAttrData
struct LazyCAttrData_t4F8036F83C070762609DB213B69F7FAA2D34ACA3;
// System.Reflection.RuntimePropertyInfo/GetterAdapter
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICriticalNotifyCompletion_t9BC86B8F52BBEDB06B6FA6DC1DF93240CB0A3F49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD319493499620E43634FF644A0CEF1624086AD;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03;
IL2CPP_EXTERN_C String_t* _stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061;
IL2CPP_EXTERN_C String_t* _stringLiteralF7736367EB5597A368928D1011CEA2283AF9B94D;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBC9240D43EB4E922ACE0D81EE4704731A6F4051C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C0E39E12AFCCA2D73B133187E86CB2E5B9B0BA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisRuntimeObject_TisRuntimeObject_m4ED0A3BFB5558BD17B65D9FFB3026B9EC37893A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisRuntimeObject_TisRuntimeObject_mF9F273C8E5DD904311D762E3DBD637A318F95B39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisRuntimeObject_m5A6006532B8A6DECDBD2C58FFE1EC7D3975BA768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisRuntimeObject_mF046CC80A34B34B8D33C604578B1BB40AF99BCB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_mCCABF0E83F5A3EF84970C02FAA490EFCD0EC2B89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_mD3D728F708294C78EB5BADE3D1E3BF9E3DD07A3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0BBACB2189F1C4D23CA506AFB6B1DE278FE872D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mA25704063F4C93E9D95AF420981401C8CD2C5D6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m604C94582A7F6AAAA0EA1EC24294ED8442287C09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mC14BF84292DD1AF8969F301E0D523393E99E22D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mFE811AB46C8C60364270C163E409C93CCBE1ADB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Contract_ForAll_TisRuntimeObject_mAACFF5923FEAB1707F956D007430954E5EAE3E00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m65D0E9F280589B949454E7209A0D8F86C0543685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m679BC27AA6229AC0511525395F94E7A89B6977F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m9B6F012D031660C017EC4AE75E6E96F72FC4394F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_mB8EF9643D1C7B4742C62D318B23401AEA121371C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m85E4E387BD5643150842A5065168669A7892AA8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Math_ThrowMinMaxException_TisRuntimeObject_m2A7DC6DDBBD4CDA153ED501BAB77FD147EACF6B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5BE136242C677F10C3676D1C04A2D6FE79C2DFDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisRuntimeObject_m4B49E10375F1BE32439BE26CBBB4F960EDD45B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_m5E409288A7637C431B8D0248F411CC1378386DE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mF676274E492719C5208121DF9AB97D732DEC1E06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85_m22A7C4F9BF060F3D52D764B53845DD506A473A04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_JoinCore_TisRuntimeObject_m41B5D26FFEE1F087D7030B2722B1D0CA692595BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisRuntimeObject_m9F08D96B98DCBED1BE8179B14889E818C559E43B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m00F2302E3E462922A07E7B2F02F8E7A965EE45B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E4DC6F097FFCAB74E86D76932C9E71964338089_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA51A47C72EC006E6A4CAF65241EFBBEA46E85E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_m67B91E1DC1B473B7D61E3E95256FD1269E307143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_mC678EEDD9950CF4A59E9A0999AC34A4F72A3CBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_mB2F0350650C01E6A91C0898A74CAB734EA86D738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m465024A13A27440CC946A155660A5A718369A021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisRuntimeObject_m35398C06E11238341BF02991511BD0457CB785BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_mB134D89822962D2C03A9DE135D592315835B214D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisRuntimeObject_m084D75E4C5017CC0448628A63B8B1E14B6B215A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_QueueUserWorkItem_TisRuntimeObject_mB1A37615715691CA4742D75F50A27DFB5718871F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440;
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadPool/<>c__DisplayClass17_0`1<System.Object>
struct U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29  : public RuntimeObject
{
	// System.Action`1<TState> System.Threading.ThreadPool/<>c__DisplayClass17_0`1::callBack
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack_0;
};

// System.Collections.Generic.ArraySortHelper`1<System.Boolean>
struct ArraySortHelper_1_t3E26983552A9D1CB4E4BE5E1AEBD5CEAB66357B2  : public RuntimeObject
{
};

struct ArraySortHelper_1_t3E26983552A9D1CB4E4BE5E1AEBD5CEAB66357B2_StaticFields
{
	// System.Collections.Generic.ArraySortHelper`1<T> System.Collections.Generic.ArraySortHelper`1::s_defaultArraySortHelper
	ArraySortHelper_1_t3E26983552A9D1CB4E4BE5E1AEBD5CEAB66357B2* ___s_defaultArraySortHelper_0;
};

// System.Collections.Generic.ArraySortHelper`1<System.Int32>
struct ArraySortHelper_1_t4F1CF32F9E728B87EE4004F095AE150C8265B1D8  : public RuntimeObject
{
};

struct ArraySortHelper_1_t4F1CF32F9E728B87EE4004F095AE150C8265B1D8_StaticFields
{
	// System.Collections.Generic.ArraySortHelper`1<T> System.Collections.Generic.ArraySortHelper`1::s_defaultArraySortHelper
	ArraySortHelper_1_t4F1CF32F9E728B87EE4004F095AE150C8265B1D8* ___s_defaultArraySortHelper_0;
};

// System.Collections.Generic.ArraySortHelper`1<System.Object>
struct ArraySortHelper_1_tA8E5815E181F5DCDD4DD8166E6117DB6554CF845  : public RuntimeObject
{
};

struct ArraySortHelper_1_tA8E5815E181F5DCDD4DD8166E6117DB6554CF845_StaticFields
{
	// System.Collections.Generic.ArraySortHelper`1<T> System.Collections.Generic.ArraySortHelper`1::s_defaultArraySortHelper
	ArraySortHelper_1_tA8E5815E181F5DCDD4DD8166E6117DB6554CF845* ___s_defaultArraySortHelper_0;
};

// System.Collections.Generic.ArraySortHelper`1<System.UInt64>
struct ArraySortHelper_1_t68EBFB371D8F9A9ADD8707BB3F963C211BEF7353  : public RuntimeObject
{
};

struct ArraySortHelper_1_t68EBFB371D8F9A9ADD8707BB3F963C211BEF7353_StaticFields
{
	// System.Collections.Generic.ArraySortHelper`1<T> System.Collections.Generic.ArraySortHelper`1::s_defaultArraySortHelper
	ArraySortHelper_1_t68EBFB371D8F9A9ADD8707BB3F963C211BEF7353* ___s_defaultArraySortHelper_0;
};

// System.Collections.Generic.ArraySortHelper`2<System.Object,System.Object>
struct ArraySortHelper_2_t1E835FBF2F2ADD4371AC15B2758D7D28D9B80F81  : public RuntimeObject
{
};

struct ArraySortHelper_2_t1E835FBF2F2ADD4371AC15B2758D7D28D9B80F81_StaticFields
{
	// System.Collections.Generic.ArraySortHelper`2<TKey,TValue> System.Collections.Generic.ArraySortHelper`2::s_defaultArraySortHelper
	ArraySortHelper_2_t1E835FBF2F2ADD4371AC15B2758D7D28D9B80F81* ___s_defaultArraySortHelper_0;
};

// System.Collections.Generic.ArraySortHelper`2<System.UInt64,System.Object>
struct ArraySortHelper_2_t4AF8C900C0EE82707F837449B01BEABC8002A653  : public RuntimeObject
{
};

struct ArraySortHelper_2_t4AF8C900C0EE82707F837449B01BEABC8002A653_StaticFields
{
	// System.Collections.Generic.ArraySortHelper`2<TKey,TValue> System.Collections.Generic.ArraySortHelper`2::s_defaultArraySortHelper
	ArraySortHelper_2_t4AF8C900C0EE82707F837449B01BEABC8002A653* ___s_defaultArraySortHelper_0;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Buffers.MemoryManager`1<System.Byte>
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};

// System.Buffers.MemoryManager`1<System.Object>
struct MemoryManager_1_tBAF3647DFCE79C4FF2E7BDDE3253C80661260030  : public RuntimeObject
{
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Tuple`3<System.Object,System.Object,System.Object>
struct Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF  : public RuntimeObject
{
	// T1 System.Tuple`3::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`3::m_Item2
	RuntimeObject* ___m_Item2_1;
	// T3 System.Tuple`3::m_Item3
	RuntimeObject* ___m_Item3_2;
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

// System.Runtime.CompilerServices.AsyncTaskCache
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09  : public RuntimeObject
{
};

struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::TrueTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___TrueTask_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Runtime.CompilerServices.AsyncTaskCache::FalseTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___FalseTask_1;
	// System.Threading.Tasks.Task`1<System.Int32>[] System.Runtime.CompilerServices.AsyncTaskCache::Int32Tasks
	Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* ___Int32Tasks_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Buffer
struct Buffer_tF5DDA52AA39735125D710A126AC80BADEB900CD4  : public RuntimeObject
{
};

// System.Diagnostics.Contracts.Contract
struct Contract_tD9FCC48E522DA4471B12BD7298721B5814BF91A6  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.CustomAttributeData
struct CustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95  : public RuntimeObject
{
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;
	// System.Reflection.CustomAttributeData/LazyCAttrData System.Reflection.CustomAttributeData::lazyData
	LazyCAttrData_t4F8036F83C070762609DB213B69F7FAA2D34ACA3* ___lazyData_3;
};

// System.Reflection.CustomAttributeExtensions
struct CustomAttributeExtensions_t8BE4B68F928B20AC1E02ABD129534DB9004FB0FA  : public RuntimeObject
{
};

// System.Collections.Generic.EnumerableHelpers
struct EnumerableHelpers_t18A53CA9FA987FA240C4777E90230115D116D29B  : public RuntimeObject
{
};

// System.Security.AccessControl.GenericAcl
struct GenericAcl_t6753354BCE95C777EC6F5CC9F3BA88277817CE70  : public RuntimeObject
{
};

struct GenericAcl_t6753354BCE95C777EC6F5CC9F3BA88277817CE70_StaticFields
{
	// System.Byte System.Security.AccessControl.GenericAcl::AclRevision
	uint8_t ___AclRevision_0;
	// System.Byte System.Security.AccessControl.GenericAcl::AclRevisionDS
	uint8_t ___AclRevisionDS_1;
	// System.Int32 System.Security.AccessControl.GenericAcl::MaxBinaryLength
	int32_t ___MaxBinaryLength_2;
};

// System.Threading.Interlocked
struct Interlocked_t8A60F2549BC4FF402BA876880E6C60D20E782B0D  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.JitHelpers
struct JitHelpers_t15439654973DBC6512239BD04D2E0A3E0EDCCE62  : public RuntimeObject
{
};

// System.Threading.LazyInitializer
struct LazyInitializer_t81FC47D75907B87D08CFBF24B41FB06B968BC948  : public RuntimeObject
{
};

// System.Runtime.InteropServices.Marshal
struct Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7  : public RuntimeObject
{
};

struct Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticFields
{
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;
	// System.Collections.Generic.Dictionary`2<System.ValueTuple`2<System.Type,System.String>,System.Runtime.InteropServices.ICustomMarshaler> System.Runtime.InteropServices.Marshal::MarshalerInstanceCache
	Dictionary_2_t4CE53C8BCD6558009650AFE413B37A773593BC7B* ___MarshalerInstanceCache_2;
	// System.Object System.Runtime.InteropServices.Marshal::MarshalerInstanceCacheLock
	RuntimeObject* ___MarshalerInstanceCacheLock_3;
};

// System.Math
struct Math_tEB65DE7CA8B083C412C969C92981C030865486CE  : public RuntimeObject
{
};

struct Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticFields
{
	// System.Double System.Math::doubleRoundLimit
	double ___doubleRoundLimit_0;
	// System.Double[] System.Math::roundPower10Double
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___roundPower10Double_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.MemoryExtensions
struct MemoryExtensions_t2DC3604DB167FA4473786CD400C718D98E20C6D7  : public RuntimeObject
{
};

// System.Runtime.InteropServices.MemoryMarshal
struct MemoryMarshal_t0208DBB300D970EB22EDC8C08FB57418DE91D026  : public RuntimeObject
{
};

// System.IO.MonoLinqHelper
struct MonoLinqHelper_t4B7F56CAAFAAAA0ABD411D943BA644B0C3BDA1D3  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};

// System.SpanHelpers
struct SpanHelpers_tCA85E2BE495D0EC31B7D20D20E9FC3309265176A  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.TaskToApm
struct TaskToApm_t85E4852EFE616610E8B037ECB1926B91DEA7D458  : public RuntimeObject
{
};

// System.Threading.ThreadPool
struct ThreadPool_t1EE413B12D8BD9F25602041645272351A26711FC  : public RuntimeObject
{
};

// System.ThrowHelper
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};

// System.Tuple
struct Tuple_tB9DB3180F4853E781BFDDC3093798F56B27AB03F  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
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

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E  : public RuntimeObject
{
	// System.Threading.ExecutionContext System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_context
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_context_0;
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::m_stateMachine
	RuntimeObject* ___m_stateMachine_1;
};

struct MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E_StaticFields
{
	// System.Threading.ContextCallback System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner::s_invokeMoveNext
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_invokeMoveNext_2;
};

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB  : public RuntimeObject
{
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task_0;
	// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_state
	RuntimeObject* ____state_1;
	// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_completedSynchronously
	bool ____completedSynchronously_2;
};

// System.Collections.Generic.ArrayBuilder`1<System.Object[]>
struct ArrayBuilder_1_tC16D480D6EF76F26D54661E2C7416BA07CA59964 
{
	// T[] System.Collections.Generic.ArrayBuilder`1::_array
	ObjectU5BU5DU5BU5D_t6491927494F825352C40DCE9D447C97B17297969* ____array_0;
	// System.Int32 System.Collections.Generic.ArrayBuilder`1::_count
	int32_t ____count_1;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Object>
struct ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F 
{
	// T[] System.ArraySegment`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

struct ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F ___U3CEmptyU3Ek__BackingField_0;
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Memory`1<System.Object>
struct Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Object>
struct ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.ValueTask`1<System.Int32>
struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	int32_t ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;
};

struct ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___s_canceledTask_0;
};

// System.ValueTuple`1<System.Boolean>
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	// T1 System.ValueTuple`1::Item1
	bool ___Item1_0;
};

// System.ValueTuple`3<System.Object,System.Int32,System.Int32>
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	// T1 System.ValueTuple`3::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`3::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`3::Item3
	int32_t ___Item3_2;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Security.AccessControl.CommonAcl
struct CommonAcl_tCA91208504C637DEA4B991FB310C0F356C47E08A  : public GenericAcl_t6753354BCE95C777EC6F5CC9F3BA88277817CE70
{
	// System.Boolean System.Security.AccessControl.CommonAcl::is_aefa
	bool ___is_aefa_3;
	// System.Boolean System.Security.AccessControl.CommonAcl::is_canonical
	bool ___is_canonical_4;
	// System.Boolean System.Security.AccessControl.CommonAcl::is_container
	bool ___is_container_5;
	// System.Boolean System.Security.AccessControl.CommonAcl::is_ds
	bool ___is_ds_6;
	// System.Security.AccessControl.RawAcl System.Security.AccessControl.CommonAcl::raw_acl
	RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12* ___raw_acl_7;
};

// System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F 
{
	// System.Type System.Reflection.CustomAttributeTypedArgument::<ArgumentType>k__BackingField
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com
{
	Type_t* ___U3CArgumentTypeU3Ek__BackingField_0;
	Il2CppIUnknown* ___U3CValueU3Ek__BackingField_1;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_6_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_6_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_7_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_7_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_8_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_8_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_9_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_9_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_9_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_0;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_2;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_3;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_4;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Threading.Tasks.ForceAsyncAwaiter
struct ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2 
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ForceAsyncAwaiter::_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____task_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Tasks.ForceAsyncAwaiter
struct ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____task_0;
};
// Native definition for COM marshalling of System.Threading.Tasks.ForceAsyncAwaiter
struct ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____task_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Security.AccessControl.RawAcl
struct RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12  : public GenericAcl_t6753354BCE95C777EC6F5CC9F3BA88277817CE70
{
	// System.Byte System.Security.AccessControl.RawAcl::revision
	uint8_t ___revision_3;
	// System.Collections.Generic.List`1<System.Security.AccessControl.GenericAce> System.Security.AccessControl.RawAcl::list
	List_1_t27A5F0256D406BFD691B7F5E16235A2A7F95D6CF* ___list_4;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	// System.Object System.Resources.ResourceLocator::_value
	RuntimeObject* ____value_0;
	// System.Int32 System.Resources.ResourceLocator::_dataPos
	int32_t ____dataPos_1;
};
// Native definition for P/Invoke marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};
// Native definition for COM marshalling of System.Resources.ResourceLocator
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value_0;
	int32_t ____dataPos_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.UIntPtr
struct UIntPtr_t 
{
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;
};

struct UIntPtr_t_StaticFields
{
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;
};

// System.Threading.Tasks.ValueTask
struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F 
{
	// System.Object System.Threading.Tasks.ValueTask::_obj
	RuntimeObject* ____obj_1;
	// System.Int16 System.Threading.Tasks.ValueTask::_token
	int16_t ____token_2;
	// System.Boolean System.Threading.Tasks.ValueTask::_continueOnCapturedContext
	bool ____continueOnCapturedContext_3;
};

struct ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F_StaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.ValueTask::s_canceledTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_canceledTask_0;
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

// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Decimal/DecCalc
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Decimal/DecCalc::uflags
			uint32_t ___uflags_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uflags_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uhi_1_OffsetPadding[4];
			// System.UInt32 System.Decimal/DecCalc::uhi
			uint32_t ___uhi_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uhi_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uhi_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulo_2_OffsetPadding[8];
			// System.UInt32 System.Decimal/DecCalc::ulo
			uint32_t ___ulo_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulo_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulo_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___umid_3_OffsetPadding[12];
			// System.UInt32 System.Decimal/DecCalc::umid
			uint32_t ___umid_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___umid_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___umid_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_4_OffsetPadding[8];
			// System.UInt64 System.Decimal/DecCalc::ulomidLE
			uint64_t ___ulomidLE_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_4_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_4_forAlignmentOnly;
		};
	};
};

struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_StaticFields
{
	// System.UInt32[] System.Decimal/DecCalc::s_powers10
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_powers10_5;
	// System.UInt64[] System.Decimal/DecCalc::s_ulongPowers10
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_ulongPowers10_6;
	// System.Double[] System.Decimal/DecCalc::s_doublePowers10
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_doublePowers10_7;
	// System.Decimal/DecCalc/PowerOvfl[] System.Decimal/DecCalc::PowerOvflValues
	PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B* ___PowerOvflValues_8;
};

// System.Threading.ExecutionContext/Reader
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E 
{
	// System.Threading.ExecutionContext System.Threading.ExecutionContext/Reader::m_ec
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec_0;
};
// Native definition for P/Invoke marshalling of System.Threading.ExecutionContext/Reader
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_pinvoke
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec_0;
};
// Native definition for COM marshalling of System.Threading.ExecutionContext/Reader
struct Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_com
{
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ec_0;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// System.Number/NumberBuffer/DigitsAndNullTerminator
struct DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA 
{
	union
	{
		struct
		{
		};
		uint8_t DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA__padding[102];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.Object>
struct ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>
struct ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 
{
	// System.Threading.Tasks.ValueTask`1<TResult> System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter::_value
	ValueTask_1_t823DE87C36EA952D24C4E64F532E9D4425B72F21 ____value_0;
};

// System.Collections.Generic.LargeArrayBuilder`1<System.Object>
struct LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E 
{
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_maxCapacity
	int32_t ____maxCapacity_0;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_first
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____first_1;
	// System.Collections.Generic.ArrayBuilder`1<T[]> System.Collections.Generic.LargeArrayBuilder`1::_buffers
	ArrayBuilder_1_tC16D480D6EF76F26D54661E2C7416BA07CA59964 ____buffers_2;
	// T[] System.Collections.Generic.LargeArrayBuilder`1::_current
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____current_3;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_index
	int32_t ____index_4;
	// System.Int32 System.Collections.Generic.LargeArrayBuilder`1::_count
	int32_t ____count_5;
};

// System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	// T1 System.ValueTuple`5::Item1
	intptr_t ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	intptr_t ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	int32_t ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	bool ___Item5_4;
};

// System.ValueTuple`8<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean,System.ValueTuple`1<System.Boolean>>
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	// T1 System.ValueTuple`8::Item1
	intptr_t ___Item1_0;
	// T2 System.ValueTuple`8::Item2
	int32_t ___Item2_1;
	// T3 System.ValueTuple`8::Item3
	intptr_t ___Item3_2;
	// T4 System.ValueTuple`8::Item4
	int32_t ___Item4_3;
	// T5 System.ValueTuple`8::Item5
	intptr_t ___Item5_4;
	// T6 System.ValueTuple`8::Item6
	int32_t ___Item6_5;
	// T7 System.ValueTuple`8::Item7
	bool ___Item7_6;
	// TRest System.ValueTuple`8::Rest
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest_7;
};

// System.Numerics.Vector`1<System.UInt16>
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// System.Security.AccessControl.AceFlags
struct AceFlags_tC27F52894C6AAF9AE265B2AF48EC1C1B8D34B1AE 
{
	// System.Byte System.Security.AccessControl.AceFlags::value__
	uint8_t ___value___2;
};

// System.Security.AccessControl.AceType
struct AceType_tED989536F3187D6363F9F3609255A42939B93471 
{
	// System.Byte System.Security.AccessControl.AceType::value__
	uint8_t ___value___2;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 
{
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::<TypedValue>k__BackingField
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F ___U3CTypedValueU3Ek__BackingField_0;
	// System.Boolean System.Reflection.CustomAttributeNamedArgument::<IsField>k__BackingField
	bool ___U3CIsFieldU3Ek__BackingField_1;
	// System.String System.Reflection.CustomAttributeNamedArgument::<MemberName>k__BackingField
	String_t* ___U3CMemberNameU3Ek__BackingField_2;
	// System.Type System.Reflection.CustomAttributeNamedArgument::_attributeType
	Type_t* ____attributeType_3;
	// System.Reflection.MemberInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Reflection.CustomAttributeNamedArgument::_lazyMemberInfo
	MemberInfo_t* ____lazyMemberInfo_4;
};
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_pinvoke
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_pinvoke ___U3CTypedValueU3Ek__BackingField_0;
	int32_t ___U3CIsFieldU3Ek__BackingField_1;
	char* ___U3CMemberNameU3Ek__BackingField_2;
	Type_t* ____attributeType_3;
	MemberInfo_t* ____lazyMemberInfo_4;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_marshaled_com
{
	CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_marshaled_com ___U3CTypedValueU3Ek__BackingField_0;
	int32_t ___U3CIsFieldU3Ek__BackingField_1;
	Il2CppChar* ___U3CMemberNameU3Ek__BackingField_2;
	Type_t* ____attributeType_3;
	MemberInfo_t* ____lazyMemberInfo_4;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.ExceptionArgument
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;
};

// System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 
{
	// System.Threading.ExecutionContext/Reader System.Threading.ExecutionContextSwitcher::outerEC
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E ___outerEC_0;
	// System.Boolean System.Threading.ExecutionContextSwitcher::outerECBelongsToScope
	bool ___outerECBelongsToScope_1;
	// System.Object System.Threading.ExecutionContextSwitcher::hecsw
	RuntimeObject* ___hecsw_2;
	// System.Threading.Thread System.Threading.ExecutionContextSwitcher::thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_3;
};
// Native definition for P/Invoke marshalling of System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshaled_pinvoke
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_pinvoke ___outerEC_0;
	int32_t ___outerECBelongsToScope_1;
	Il2CppIUnknown* ___hecsw_2;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_3;
};
// Native definition for COM marshalling of System.Threading.ExecutionContextSwitcher
struct ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708_marshaled_com
{
	Reader_tFD6FCF261BBDF95B67147E0E1A8FD60D82333E5E_marshaled_com ___outerEC_0;
	int32_t ___outerECBelongsToScope_1;
	Il2CppIUnknown* ___hecsw_2;
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_3;
};

// System.Threading.Tasks.InternalTaskOptions
struct InternalTaskOptions_tCE714823C2244D02E68D3F0EB682AD5C95EBBEAB 
{
	// System.Int32 System.Threading.Tasks.InternalTaskOptions::value__
	int32_t ___value___2;
};

// System.Reflection.PInfo
struct PInfo_t8E650D58C9259127E18C225459323E41106C2877 
{
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___2;
};

// System.Reflection.PropertyAttributes
struct PropertyAttributes_tE026D5D3C04F074C19F2200702FE4F265C309797 
{
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.StackCrawlMark
struct StackCrawlMark_t95CDBA5EE7D71D392741A5533D7EB93341DFC730 
{
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;
};

// System.Threading.SynchronizationContextProperties
struct SynchronizationContextProperties_t5ED82C778B4C396AD94A93CFBEF00022BDECF058 
{
	// System.Int32 System.Threading.SynchronizationContextProperties::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Threading.Tasks.TaskContinuationOptions
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.TaskCreationOptions
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ValueTaskAwaiter::_value
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_1;
};

struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_StaticFields
{
	// System.Action`1<System.Object> System.Runtime.CompilerServices.ValueTaskAwaiter::s_invokeActionDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_invokeActionDelegate_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshaled_pinvoke
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ValueTaskAwaiter
struct ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_marshaled_com
{
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_1;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter
struct ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D 
{
	// System.Threading.Tasks.ValueTask System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter::_value
	ValueTask_t10B4B5DDF5C582607D0E634FA912F8CB94FCD49F ____value_0;
};

// System.Threading.Volatile/VolatileBoolean
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041 
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileBoolean::Value
	bool ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileBoolean
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshaled_pinvoke
{
	int32_t ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileBoolean
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshaled_com
{
	int32_t ___Value_0;
};

// System.Threading.Volatile/VolatileInt32
struct VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693 
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileInt32::Value
	int32_t ___Value_0;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.Object>
struct ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Object>
struct Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>
struct Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_result_22;
};

struct Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6D562D6E02741F0C7D98C590754714C6D6429450* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;
};

struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result_22;
};

struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C* ___s_defaultFactory_23;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// System.Security.AccessControl.GenericAce
struct GenericAce_t45900C8B82142B46D631554B319B446483418F15  : public RuntimeObject
{
	// System.Security.AccessControl.AceFlags System.Security.AccessControl.GenericAce::ace_flags
	uint8_t ___ace_flags_0;
	// System.Security.AccessControl.AceType System.Security.AccessControl.GenericAce::ace_type
	uint8_t ___ace_type_1;
};

// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t* ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t* ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t* ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t* ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;
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

// System.Action`1<System.IAsyncResult>
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task`1<System.Object>>
struct Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D  : public MulticastDelegate_t
{
};

// System.Func`5<System.Object,System.Object,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_t318E92560B3BCC40982F5FD19861164DC9EFBA20  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/Getter`2<System.Object,System.Object>
struct Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D  : public MulticastDelegate_t
{
};

// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};

// System.Security.AccessControl.CommonAcl/RemoveAcesCallback`1<System.Object>
struct RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`3<System.Object,System.Int32,System.Int32>>
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.ValueTuple`8<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean,System.ValueTuple`1<System.Boolean>>>
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,System.Object>
struct SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/StaticGetter`1<System.Object>
struct StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3  : public MulticastDelegate_t
{
};

// System.Threading.Tasks.UnwrapPromise`1<System.Object>
struct UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E  : public Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2
{
	// System.Byte System.Threading.Tasks.UnwrapPromise`1::_state
	uint8_t ____state_24;
	// System.Boolean System.Threading.Tasks.UnwrapPromise`1::_lookForOce
	bool ____lookForOce_25;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.Reflection.RuntimePropertyInfo
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	// System.IntPtr System.Reflection.RuntimePropertyInfo::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.RuntimePropertyInfo::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.RuntimePropertyInfo::info
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info_2;
	// System.Reflection.PInfo System.Reflection.RuntimePropertyInfo::cached
	int32_t ___cached_3;
	// System.Reflection.RuntimePropertyInfo/GetterAdapter System.Reflection.RuntimePropertyInfo::cached_getter
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter_4;
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49
struct U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1 
{
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::count
	int32_t ___count_2;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::offset
	int32_t ___offset_3;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<>4__this
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___U3CU3E4__this_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_5;
	// System.Boolean System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::useAsync
	bool ___useAsync_6;
	// System.Threading.CancellationToken System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_7;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<bytesToWrite>5__2
	int32_t ___U3CbytesToWriteU3E5__2_8;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<currentInputIndex>5__3
	int32_t ___U3CcurrentInputIndexU3E5__3_9;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<numOutputBytes>5__4
	int32_t ___U3CnumOutputBytesU3E5__4_10;
	// System.Runtime.CompilerServices.ValueTaskAwaiter System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<>u__1
	ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A ___U3CU3Eu__1_11;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<numWholeBlocksInBytes>5__5
	int32_t ___U3CnumWholeBlocksInBytesU3E5__5_12;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::<tempOutputBuffer>5__6
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CtempOutputBufferU3E5__6_13;
};

// System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46
struct U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F 
{
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Security.Cryptography.CryptoStream System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::<>4__this
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* ___U3CU3E4__this_2;
	// System.Byte[] System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_3;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::offset
	int32_t ___offset_4;
	// System.Int32 System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::count
	int32_t ___count_5;
	// System.Threading.CancellationToken System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::<semaphore>5__2
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ___U3CsemaphoreU3E5__2_7;
	// System.Threading.Tasks.ForceAsyncAwaiter System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::<>u__1
	ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2 ___U3CU3Eu__1_8;
	// System.Runtime.CompilerServices.TaskAwaiter System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::<>u__2
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2_9;
};

// System.IO.Stream/<CopyToAsyncInternal>d__28
struct U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C 
{
	// System.Int32 System.IO.Stream/<CopyToAsyncInternal>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.IO.Stream/<CopyToAsyncInternal>d__28::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Int32 System.IO.Stream/<CopyToAsyncInternal>d__28::bufferSize
	int32_t ___bufferSize_2;
	// System.IO.Stream System.IO.Stream/<CopyToAsyncInternal>d__28::<>4__this
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CU3E4__this_3;
	// System.Threading.CancellationToken System.IO.Stream/<CopyToAsyncInternal>d__28::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// System.IO.Stream System.IO.Stream/<CopyToAsyncInternal>d__28::destination
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___destination_5;
	// System.Byte[] System.IO.Stream/<CopyToAsyncInternal>d__28::<buffer>5__2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CbufferU3E5__2_6;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32> System.IO.Stream/<CopyToAsyncInternal>d__28::<>u__1
	ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5 ___U3CU3Eu__1_7;
	// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter System.IO.Stream/<CopyToAsyncInternal>d__28::<>u__2
	ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D ___U3CU3Eu__2_8;
};

// System.IO.Stream/<FinishWriteAsync>d__57
struct U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683 
{
	// System.Int32 System.IO.Stream/<FinishWriteAsync>d__57::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.IO.Stream/<FinishWriteAsync>d__57::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.Threading.Tasks.Task System.IO.Stream/<FinishWriteAsync>d__57::writeTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___writeTask_2;
	// System.Byte[] System.IO.Stream/<FinishWriteAsync>d__57::localBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___localBuffer_3;
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.IO.Stream/<FinishWriteAsync>d__57::<>u__1
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___U3CU3Eu__1_4;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_18;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_19;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature_20;
};

// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info_25;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject* ___GenericCache_26;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor_27;
};

struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType_8;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType_9;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType_10;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType_11;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType_12;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes_13;
	// System.Func`3<System.Type,System.Type[],System.Type> System.RuntimeType::MakeTypeBuilderInstantiation
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation_14;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef_24;
};

// System.MissingMethodException
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.CustomAttributeNamedArgument[]
struct CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 m_Items[1];

	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField_0))->___U3CArgumentTypeU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField_0))->___U3CValueU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo_4), (void*)NULL);
		#endif
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField_0))->___U3CArgumentTypeU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CTypedValueU3Ek__BackingField_0))->___U3CValueU3Ek__BackingField_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CMemberNameU3Ek__BackingField_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____attributeType_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____lazyMemberInfo_4), (void*)NULL);
		#endif
	}
};
// System.Reflection.CustomAttributeTypedArgument[]
struct CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B  : public RuntimeArray
{
	ALIGN_FIELD (8) CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F m_Items[1];

	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CArgumentTypeU3Ek__BackingField_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CValueU3Ek__BackingField_1), (void*)NULL);
		#endif
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mE3858BF35A51A2600B983739811BB2CC4FD5D13F_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m628A69C14A771383EFD3C735233D6313A61172FD_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Threading.Tasks.ForceAsyncAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Threading.Tasks.ForceAsyncAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m32A7E26CF73576EC02C9B02EBA350CB50C0AE116_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m2832CBAB80B32116F8392899D3E469AE0EEC8406_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mA7C65B016518EF137BF43DF8A197AC93D424BE84_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m7224F696265982980237414C6C304DD6CF2C6F38_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___awaiter0, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mA5391DB0CE65223E6EFD274009C8FE8422FD8056_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___awaiter0, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.Stream/<FinishWriteAsync>d__57>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.Stream/<FinishWriteAsync>d__57>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0CBE432A68FC4A024AC7F57EAE9F943E30ADFCAF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m9BC9D1ADF4D10B62D32DCCE6EBF058339B30BFDD_gshared (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m800FCAB008086E14BA17F102614235F9458F18C0_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mC14BF84292DD1AF8969F301E0D523393E99E22D3_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mFE811AB46C8C60364270C163E409C93CCBE1ADB5_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Stream/<CopyToAsyncInternal>d__28>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mA25704063F4C93E9D95AF420981401C8CD2C5D6D_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Stream/<FinishWriteAsync>d__57>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m604C94582A7F6AAAA0EA1EC24294ED8442287C09_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m9ADC168E23E830B14325FC75E92975E8E4740807_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LargeArrayBuilder_1__ctor_m518A5336CB5C931EF4FAA70E4362A7FE991880D5_gshared (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E* __this, bool ___initialize0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LargeArrayBuilder_1_AddRange_m99FC93695E72F4F2883183D5F9B865C2C36D93C0_gshared (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E* __this, RuntimeObject* ___items0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* LargeArrayBuilder_1_ToArray_m2566DACFDE65A6981339EEF4BE2C146222E61C42_gshared (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Object>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject** ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Object>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB699405722E96B949DE251894243517B81EDBBCD_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Object>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m62E30EE8205E9B8F79F1C6EFE9F113CB69E82DCD_gshared_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Object>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8CDF8DB3AFCAFA4A44D8C9FC8180AF9AE07F8361_gshared (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 ___destination0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Object>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_gshared_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, RuntimeObject** ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Object System.ReadOnlyMemory`1<System.Byte>::GetObjectStartLength(System.Int32&,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_mA440F4E402507F256E8E66C774E9044CB0092073_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Object System.ReadOnlyMemory`1<System.Object>::GetObjectStartLength(System.Int32&,System.Int32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m3CE58FA492D3EFAAFAC0B0011726429FBFEB1749_gshared_inline (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Object>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_mECAEBAE7A0D9B39D34875377BC3508D16A2B6CB9_gshared (ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mE3858BF35A51A2600B983739811BB2CC4FD5D13F (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5*, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mE3858BF35A51A2600B983739811BB2CC4FD5D13F_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m628A69C14A771383EFD3C735233D6313A61172FD (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5*, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m628A69C14A771383EFD3C735233D6313A61172FD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Threading.Tasks.ForceAsyncAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176 (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2*, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Threading.Tasks.ForceAsyncAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m32A7E26CF73576EC02C9B02EBA350CB50C0AE116 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2*, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m32A7E26CF73576EC02C9B02EBA350CB50C0AE116_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m2832CBAB80B32116F8392899D3E469AE0EEC8406 (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m2832CBAB80B32116F8392899D3E469AE0EEC8406_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mA7C65B016518EF137BF43DF8A197AC93D424BE84 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mA7C65B016518EF137BF43DF8A197AC93D424BE84_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m7224F696265982980237414C6C304DD6CF2C6F38 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m7224F696265982980237414C6C304DD6CF2C6F38_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49 (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___awaiter0, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A*, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mA5391DB0CE65223E6EFD274009C8FE8422FD8056 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___awaiter0, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A*, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mA5391DB0CE65223E6EFD274009C8FE8422FD8056_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.Stream/<FinishWriteAsync>d__57>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.Stream/<FinishWriteAsync>d__57>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0CBE432A68FC4A024AC7F57EAE9F943E30ADFCAF (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618*, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0CBE432A68FC4A024AC7F57EAE9F943E30ADFCAF_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m9BC9D1ADF4D10B62D32DCCE6EBF058339B30BFDD (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D*, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m9BC9D1ADF4D10B62D32DCCE6EBF058339B30BFDD_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m800FCAB008086E14BA17F102614235F9458F18C0 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D*, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m800FCAB008086E14BA17F102614235F9458F18C0_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Threading.ExecutionContextSwitcher::Undo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886 (ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.ExecutionContext::EstablishCopyOnWriteScope(System.Threading.ExecutionContextSwitcher&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9 (ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708* ___ecsw0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, RuntimeObject**, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteAsyncCoreU3Ed__49_MoveNext_m5C09500FEBDD3BC412F4490660AA8854E0426FB8 (U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mC14BF84292DD1AF8969F301E0D523393E99E22D3 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mC14BF84292DD1AF8969F301E0D523393E99E22D3_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWriteAsyncInternalU3Ed__46_MoveNext_mBFD9D0C0D7645D20C24AA023DA1A13CC6BB634AC (U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mFE811AB46C8C60364270C163E409C93CCBE1ADB5 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mFE811AB46C8C60364270C163E409C93CCBE1ADB5_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.Stream/<CopyToAsyncInternal>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCopyToAsyncInternalU3Ed__28_MoveNext_m4F23D664DA008A9EFBA2D38F3B88C2AF38F72B62 (U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Stream/<CopyToAsyncInternal>d__28>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mA25704063F4C93E9D95AF420981401C8CD2C5D6D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mA25704063F4C93E9D95AF420981401C8CD2C5D6D_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.IO.Stream/<FinishWriteAsync>d__57::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFinishWriteAsyncU3Ed__57_MoveNext_m6611A31C40F53E3FA1755CAAA49B1D5CA4BB85A2 (U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Stream/<FinishWriteAsync>d__57>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m604C94582A7F6AAAA0EA1EC24294ED8442287C09 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m604C94582A7F6AAAA0EA1EC24294ED8442287C09_gshared)(__this, ___stateMachine0, method);
}
// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::GetCompletionAction(System.Threading.Tasks.Task,System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___taskForTracing0, MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E** ___runnerToInitialize1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderCore::PostBoxInitialization(System.Runtime.CompilerServices.IAsyncStateMachine,System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner,System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* __this, RuntimeObject* ___stateMachine0, MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* ___runner1, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___builtTask2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncMethodBuilderCore::ThrowAsync(System.Exception,System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncMethodBuilderCore_ThrowAsync_m63A3A3C10D59EE2B80EE18C65A87F33BB832E219 (Exception_t* ___exception0, SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___targetContext1, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m9ADC168E23E830B14325FC75E92975E8E4740807 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m9ADC168E23E830B14325FC75E92975E8E4740807_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, RuntimeObject**, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared)(__this, ___stateMachine0, method);
}
// System.Void System.Buffer::Memmove(System.Byte*,System.Byte*,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_mE2FD779AEAE4F226AFCAF27575AF93D7C56BF5B0 (uint8_t* ___dest0, uint8_t* ___src1, uint32_t ___len2, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Runtime.RuntimeImports::Memmove_wbarrier(System.Byte*,System.Byte*,System.UInt32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeImports_Memmove_wbarrier_mC563385425BC68BD59B96AD2FFEDCBC482A31BBA (uint8_t* ___dest0, uint8_t* ___src1, uint32_t ___len2, intptr_t ___type_handle3, const RuntimeMethod* method) ;
// System.Void System.Security.AccessControl.RawAcl::RemoveAce(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawAcl_RemoveAce_mEC4C2669281E090DCF8F692909908EDD2BD4CBCE (RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Attribute System.Reflection.CustomAttributeExtensions::GetCustomAttribute(System.Reflection.Assembly,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* CustomAttributeExtensions_GetCustomAttribute_m056785B4C31CED65B0F38986EE830315551CE030 (Assembly_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Attribute> System.Reflection.CustomAttributeExtensions::GetCustomAttributes(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_m518D9E8FE83EAB9D1A5B5565ABA49B2B2744E815 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::.ctor(System.Boolean)
inline void LargeArrayBuilder_1__ctor_m518A5336CB5C931EF4FAA70E4362A7FE991880D5 (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E* __this, bool ___initialize0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E*, bool, const RuntimeMethod*))LargeArrayBuilder_1__ctor_m518A5336CB5C931EF4FAA70E4362A7FE991880D5_gshared)(__this, ___initialize0, method);
}
// System.Void System.Collections.Generic.LargeArrayBuilder`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void LargeArrayBuilder_1_AddRange_m99FC93695E72F4F2883183D5F9B865C2C36D93C0 (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E* __this, RuntimeObject* ___items0, const RuntimeMethod* method)
{
	((  void (*) (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E*, RuntimeObject*, const RuntimeMethod*))LargeArrayBuilder_1_AddRange_m99FC93695E72F4F2883183D5F9B865C2C36D93C0_gshared)(__this, ___items0, method);
}
// T[] System.Collections.Generic.LargeArrayBuilder`1<System.Object>::ToArray()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* LargeArrayBuilder_1_ToArray_m2566DACFDE65A6981339EEF4BE2C146222E61C42 (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E*, const RuntimeMethod*))LargeArrayBuilder_1_ToArray_m2566DACFDE65A6981339EEF4BE2C146222E61C42_gshared)(__this, method);
}
// System.Void System.MissingMemberException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingMemberException__ctor_m6292C676754200C455A390D36BFEBD8F8775628C (MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object System.Threading.LazyInitializer::EnsureLockInitialized(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureLockInitialized_mAAF156A056905B7BFC05221CE14A0652478CC9DB (RuntimeObject** ___syncLock0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegateInternal(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegateInternal_m052129C4ECA08E9409313F02486CE3DF23491DDE (Delegate_t* ___d0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34 (intptr_t ___ptr0, Type_t* ___structureType1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_mE014A5139B79EC0CCF27EBA41031702B7BC63F69 (RuntimeObject* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::UnsafeAddrOfPinnedArrayElement(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_UnsafeAddrOfPinnedArrayElement_m313692F43E31BAF62F5AA3BA0E8F69C0310F2ECB (RuntimeArray* ___arr0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353 (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_mDF51E7FDFA74ADCDDB1E43CFC4A3A3083692B010 (const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Object>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject** ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2*, RuntimeObject**, int32_t, const RuntimeMethod*))Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Span`1<System.Char>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Void System.Span`1<System.Object>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_mB699405722E96B949DE251894243517B81EDBBCD_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_mB699405722E96B949DE251894243517B81EDBBCD_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.Void System.ReadOnlySpan`1<System.Object>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_m62E30EE8205E9B8F79F1C6EFE9F113CB69E82DCD_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m62E30EE8205E9B8F79F1C6EFE9F113CB69E82DCD_gshared_inline)(__this, ___array0, method);
}
// System.Void System.ReadOnlySpan`1<System.Object>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m8CDF8DB3AFCAFA4A44D8C9FC8180AF9AE07F8361 (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95*, Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m8CDF8DB3AFCAFA4A44D8C9FC8180AF9AE07F8361_gshared)(__this, ___destination0, method);
}
// System.Boolean System.SpanHelpers::SequenceEqual(System.Byte&,System.Byte&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9 (uint8_t* ___first0, uint8_t* ___second1, uint64_t ___length2, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_m0A829BB99BDEEEB5A92884FA139590B6E4EA7835 (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOf(System.Char&,System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_mDE4E5FB8BEEEF1D365113B434C8A6A09E9EA3B20 (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int32 System.SpanHelpers::IndexOfAny(System.Byte&,System.Int32,System.Byte&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_m1E5B36934B63F4FB6B32F0FA196B52B63488AFDF (uint8_t* ___searchSpace0, int32_t ___searchSpaceLength1, uint8_t* ___value2, int32_t ___valueLength3, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5 (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.Object>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, RuntimeObject** ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95*, RuntimeObject**, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Object System.ReadOnlyMemory`1<System.Byte>::GetObjectStartLength(System.Int32&,System.Int32&)
inline RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_mA440F4E402507F256E8E66C774E9044CB0092073_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlyMemory_1_GetObjectStartLength_mA440F4E402507F256E8E66C774E9044CB0092073_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Object System.ReadOnlyMemory`1<System.Object>::GetObjectStartLength(System.Int32&,System.Int32&)
inline RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m3CE58FA492D3EFAAFAC0B0011726429FBFEB1749_inline (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC*, int32_t*, int32_t*, const RuntimeMethod*))ReadOnlyMemory_1_GetObjectStartLength_m3CE58FA492D3EFAAFAC0B0011726429FBFEB1749_gshared_inline)(__this, ___start0, ___length1, method);
}
// System.Void System.ArraySegment`1<System.Object>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_mECAEBAE7A0D9B39D34875377BC3508D16A2B6CB9 (ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___offset1, int32_t ___count2, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_mECAEBAE7A0D9B39D34875377BC3508D16A2B6CB9_gshared)(__this, ___array0, ___offset1, ___count2, method);
}
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___type0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Byte::Equals(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Char::Equals(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___obj0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.String::FastAllocateString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112 (int32_t ___length0, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448 (StringBuilder_t* __this, Il2CppChar* ___value0, int32_t ___valueCount1, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC (uint8_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Int64::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_mBCE0DC50D6F802651A6AE75682FF67775CB19B3B (int64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___tokenToRecord0, RuntimeObject* ___cancellationException1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___exceptionObject0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_InternalCurrentIfAttached_m1153A4F682B30E4FEEED553E1ACD14910AFC4996 (int32_t ___creationOptions0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80 (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared)(__this, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItemHelper(System.Threading.WaitCallback,System.Object,System.Threading.StackCrawlMark&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItemHelper_mADD7DAB054548E8B134A401F330D8957884F6B83 (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, int32_t* ___stackMark2, bool ___compressStack3, bool ___forceGlobal4, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF (int32_t ___argument0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<System.Object>(T[],System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_mF046CC80A34B34B8D33C604578B1BB40AF99BCB0_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisRuntimeObject_mF046CC80A34B34B8D33C604578B1BB40AF99BCB0_RuntimeMethod_var)));
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___array0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___array0;
		RuntimeObject* L_4 = ___comparer1;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_TisRuntimeObject_mF9F273C8E5DD904311D762E3DBD637A318F95B39_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___keys0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___items1, RuntimeObject* ___comparer2, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisRuntimeObject_TisRuntimeObject_mF9F273C8E5DD904311D762E3DBD637A318F95B39_RuntimeMethod_var)));
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___keys0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___items1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___keys0;
		RuntimeObject* L_5 = ___comparer2;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void System.Array::Sort<System.UInt64,System.Object>(TKey[],TValue[],System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_mD3D728F708294C78EB5BADE3D1E3BF9E3DD07A3A_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___keys0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___items1, RuntimeObject* ___comparer2, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_mD3D728F708294C78EB5BADE3D1E3BF9E3DD07A3A_RuntimeMethod_var)));
	}

IL_000e:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___keys0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___items1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___keys0;
		RuntimeObject* L_5 = ___comparer2;
		((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
// System.Void System.Array::Sort<System.Boolean>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBC9240D43EB4E922ACE0D81EE4704731A6F4051C_gshared (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) 
{
	String_t* G_B7_0 = NULL;
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBC9240D43EB4E922ACE0D81EE4704731A6F4051C_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBC9240D43EB4E922ACE0D81EE4704731A6F4051C_RuntimeMethod_var)));
	}

IL_0031:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = ___array0;
		int32_t L_7 = ___index1;
		int32_t L_8 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mBC9240D43EB4E922ACE0D81EE4704731A6F4051C_RuntimeMethod_var)));
	}

IL_0044:
	{
		int32_t L_10 = ___length2;
		if ((((int32_t)L_10) <= ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ArraySortHelper_1_t3E26983552A9D1CB4E4BE5E1AEBD5CEAB66357B2* L_11 = ((ArraySortHelper_1_t3E26983552A9D1CB4E4BE5E1AEBD5CEAB66357B2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___s_defaultArraySortHelper_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = ___array0;
		int32_t L_13 = ___index1;
		int32_t L_14 = ___length2;
		RuntimeObject* L_15 = ___comparer3;
		((  void (*) (ArraySortHelper_1_t3E26983552A9D1CB4E4BE5E1AEBD5CEAB66357B2*, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Array::Sort<System.Int32>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C0E39E12AFCCA2D73B133187E86CB2E5B9B0BA5_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) 
{
	String_t* G_B7_0 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C0E39E12AFCCA2D73B133187E86CB2E5B9B0BA5_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C0E39E12AFCCA2D73B133187E86CB2E5B9B0BA5_RuntimeMethod_var)));
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___array0;
		int32_t L_7 = ___index1;
		int32_t L_8 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6C0E39E12AFCCA2D73B133187E86CB2E5B9B0BA5_RuntimeMethod_var)));
	}

IL_0044:
	{
		int32_t L_10 = ___length2;
		if ((((int32_t)L_10) <= ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ArraySortHelper_1_t4F1CF32F9E728B87EE4004F095AE150C8265B1D8* L_11 = ((ArraySortHelper_1_t4F1CF32F9E728B87EE4004F095AE150C8265B1D8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___s_defaultArraySortHelper_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___array0;
		int32_t L_13 = ___index1;
		int32_t L_14 = ___length2;
		RuntimeObject* L_15 = ___comparer3;
		((  void (*) (ArraySortHelper_1_t4F1CF32F9E728B87EE4004F095AE150C8265B1D8*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Array::Sort<System.Object>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_m5A6006532B8A6DECDBD2C58FFE1EC7D3975BA768_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) 
{
	String_t* G_B7_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisRuntimeObject_m5A6006532B8A6DECDBD2C58FFE1EC7D3975BA768_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisRuntimeObject_m5A6006532B8A6DECDBD2C58FFE1EC7D3975BA768_RuntimeMethod_var)));
	}

IL_0031:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___array0;
		int32_t L_7 = ___index1;
		int32_t L_8 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisRuntimeObject_m5A6006532B8A6DECDBD2C58FFE1EC7D3975BA768_RuntimeMethod_var)));
	}

IL_0044:
	{
		int32_t L_10 = ___length2;
		if ((((int32_t)L_10) <= ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ArraySortHelper_1_tA8E5815E181F5DCDD4DD8166E6117DB6554CF845* L_11 = ((ArraySortHelper_1_tA8E5815E181F5DCDD4DD8166E6117DB6554CF845_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___s_defaultArraySortHelper_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___array0;
		int32_t L_13 = ___index1;
		int32_t L_14 = ___length2;
		RuntimeObject* L_15 = ___comparer3;
		((  void (*) (ArraySortHelper_1_tA8E5815E181F5DCDD4DD8166E6117DB6554CF845*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Array::Sort<System.UInt64>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0BBACB2189F1C4D23CA506AFB6B1DE278FE872D3_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) 
{
	String_t* G_B7_0 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0BBACB2189F1C4D23CA506AFB6B1DE278FE872D3_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___length2;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0BBACB2189F1C4D23CA506AFB6B1DE278FE872D3_RuntimeMethod_var)));
	}

IL_0031:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___array0;
		int32_t L_7 = ___index1;
		int32_t L_8 = ___length2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0BBACB2189F1C4D23CA506AFB6B1DE278FE872D3_RuntimeMethod_var)));
	}

IL_0044:
	{
		int32_t L_10 = ___length2;
		if ((((int32_t)L_10) <= ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ArraySortHelper_1_t68EBFB371D8F9A9ADD8707BB3F963C211BEF7353* L_11 = ((ArraySortHelper_1_t68EBFB371D8F9A9ADD8707BB3F963C211BEF7353_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___s_defaultArraySortHelper_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___array0;
		int32_t L_13 = ___index1;
		int32_t L_14 = ___length2;
		RuntimeObject* L_15 = ___comparer3;
		((  void (*) (ArraySortHelper_1_t68EBFB371D8F9A9ADD8707BB3F963C211BEF7353*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_11, L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0056:
	{
		return;
	}
}
// System.Void System.Array::Sort<System.Object,System.Object>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisRuntimeObject_TisRuntimeObject_m4ED0A3BFB5558BD17B65D9FFB3026B9EC37893A4_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___keys0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method) 
{
	String_t* G_B7_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisRuntimeObject_TisRuntimeObject_m4ED0A3BFB5558BD17B65D9FFB3026B9EC37893A4_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length3;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___length3;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisRuntimeObject_TisRuntimeObject_m4ED0A3BFB5558BD17B65D9FFB3026B9EC37893A4_RuntimeMethod_var)));
	}

IL_0031:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___keys0;
		int32_t L_7 = ___index2;
		int32_t L_8 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) < ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___items1;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = ___index2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___items1;
		int32_t L_12 = ___length3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)))))
		{
			goto IL_004f;
		}
	}

IL_0044:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisRuntimeObject_TisRuntimeObject_m4ED0A3BFB5558BD17B65D9FFB3026B9EC37893A4_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_14 = ___length3;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = ___items1;
		if (L_15)
		{
			goto IL_0061;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___keys0;
		int32_t L_17 = ___index2;
		int32_t L_18 = ___length3;
		RuntimeObject* L_19 = ___comparer4;
		((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0061:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		ArraySortHelper_2_t1E835FBF2F2ADD4371AC15B2758D7D28D9B80F81* L_20 = ((ArraySortHelper_2_t1E835FBF2F2ADD4371AC15B2758D7D28D9B80F81_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___s_defaultArraySortHelper_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = ___keys0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = ___items1;
		int32_t L_23 = ___index2;
		int32_t L_24 = ___length3;
		RuntimeObject* L_25 = ___comparer4;
		((  void (*) (ArraySortHelper_2_t1E835FBF2F2ADD4371AC15B2758D7D28D9B80F81*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_20, L_21, L_22, L_23, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0071:
	{
		return;
	}
}
// System.Void System.Array::Sort<System.UInt64,System.Object>(TKey[],TValue[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_mCCABF0E83F5A3EF84970C02FAA490EFCD0EC2B89_gshared (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___keys0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___items1, int32_t ___index2, int32_t ___length3, RuntimeObject* ___comparer4, const RuntimeMethod* method) 
{
	String_t* G_B7_0 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___keys0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_mCCABF0E83F5A3EF84970C02FAA490EFCD0EC2B89_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index2;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___length3;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___length3;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_mCCABF0E83F5A3EF84970C02FAA490EFCD0EC2B89_RuntimeMethod_var)));
	}

IL_0031:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___keys0;
		int32_t L_7 = ___index2;
		int32_t L_8 = ___length3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))) < ((int32_t)L_8)))
		{
			goto IL_0044;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___items1;
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_10 = ___index2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___items1;
		int32_t L_12 = ___length3;
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)))))
		{
			goto IL_004f;
		}
	}

IL_0044:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Sort_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_TisRuntimeObject_mCCABF0E83F5A3EF84970C02FAA490EFCD0EC2B89_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_14 = ___length3;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = ___items1;
		if (L_15)
		{
			goto IL_0061;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___keys0;
		int32_t L_17 = ___index2;
		int32_t L_18 = ___length3;
		RuntimeObject* L_19 = ___comparer4;
		((  void (*) (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_16, L_17, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0061:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		ArraySortHelper_2_t4AF8C900C0EE82707F837449B01BEABC8002A653* L_20 = ((ArraySortHelper_2_t4AF8C900C0EE82707F837449B01BEABC8002A653_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___s_defaultArraySortHelper_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___keys0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = ___items1;
		int32_t L_23 = ___index2;
		int32_t L_24 = ___length3;
		RuntimeObject* L_25 = ___comparer4;
		((  void (*) (ArraySortHelper_2_t4AF8C900C0EE82707F837449B01BEABC8002A653*, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_20, L_21, L_22, L_23, L_24, L_25, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0071:
	{
		return;
	}
}
// T System.Array::UnsafeLoad<System.Object>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_UnsafeLoad_TisRuntimeObject_m7A7A3B6833E57166FE279E83BA33C8B411B33301_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// R System.Array::UnsafeMov<System.Object,System.Object>(S)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_UnsafeMov_TisRuntimeObject_TisRuntimeObject_mE5BC9ADC60FCFE5BF32D30916A870EFB18304003_gshared (RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	return static_cast<RuntimeObject*>(___instance0);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskCache::CreateCacheableTask<System.Boolean>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* AsyncTaskCache_CreateCacheableTask_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF4FB2902C4732C5B3DB382D32D29E70501A73C64_gshared (bool ___result0, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		bool L_0 = ___result0;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_2 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, bool, bool, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, (bool)0, L_0, (int32_t)((int32_t)16384), L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskCache::CreateCacheableTask<System.Int32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* AsyncTaskCache_CreateCacheableTask_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE76FB9195C8654AEC3E7789D2FA5E5019FD9FE69_gshared (int32_t ___result0, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___result0;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, bool, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, (bool)0, L_0, (int32_t)((int32_t)16384), L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskCache::CreateCacheableTask<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskCache_CreateCacheableTask_TisRuntimeObject_m4E0EDE921CF8B8CEA65892FFD96F707293A47141_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___result0;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, bool, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, (bool)0, L_0, (int32_t)((int32_t)16384), L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskCache::CreateCacheableTask<System.Threading.Tasks.VoidTaskResult>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* AsyncTaskCache_CreateCacheableTask_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_m04613EE0C3716584FE32E56ACBF82293793C3B67_gshared (VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___result0, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC L_0 = ___result0;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, bool, VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, (bool)0, L_0, (int32_t)((int32_t)16384), L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1/ConfiguredValueTaskAwaiter<System.Int32>,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m628A69C14A771383EFD3C735233D6313A61172FD_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* L_0 = (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*)(&__this->___m_builder_1);
		ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* L_1 = ___awaiter0;
		U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* L_2 = ___stateMachine1;
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mE3858BF35A51A2600B983739811BB2CC4FD5D13F(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m628A69C14A771383EFD3C735233D6313A61172FD_AdjustorThunk (RuntimeObject* __this, ConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t8FE23DA54E33C0AB39F6B3C1C7932D5513330EA5_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m628A69C14A771383EFD3C735233D6313A61172FD(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Threading.Tasks.ForceAsyncAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m32A7E26CF73576EC02C9B02EBA350CB50C0AE116_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* L_0 = (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*)(&__this->___m_builder_1);
		ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* L_1 = ___awaiter0;
		U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* L_2 = ___stateMachine1;
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mB3934490CEF3DD767EEE3EE1E2A6D686A0BC4176(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m32A7E26CF73576EC02C9B02EBA350CB50C0AE116_AdjustorThunk (RuntimeObject* __this, ForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisForceAsyncAwaiter_t4F90D8A767F7504702D667A8E69AA7ACCD0B87C2_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m32A7E26CF73576EC02C9B02EBA350CB50C0AE116(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mA7C65B016518EF137BF43DF8A197AC93D424BE84_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* L_0 = (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*)(&__this->___m_builder_1);
		RuntimeObject** L_1 = ___awaiter0;
		RuntimeObject** L_2 = ___stateMachine1;
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m2832CBAB80B32116F8392899D3E469AE0EEC8406(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mA7C65B016518EF137BF43DF8A197AC93D424BE84_AdjustorThunk (RuntimeObject* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_mA7C65B016518EF137BF43DF8A197AC93D424BE84(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m7224F696265982980237414C6C304DD6CF2C6F38_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* L_0 = (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*)(&__this->___m_builder_1);
		TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_1 = ___awaiter0;
		U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* L_2 = ___stateMachine1;
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m2941C7C6904FC0B521FC33A70367BAE57091783D(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m7224F696265982980237414C6C304DD6CF2C6F38_AdjustorThunk (RuntimeObject* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___awaiter0, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine1, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_m7224F696265982980237414C6C304DD6CF2C6F38(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ValueTaskAwaiter,System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mA5391DB0CE65223E6EFD274009C8FE8422FD8056_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___awaiter0, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine1, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* L_0 = (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*)(&__this->___m_builder_1);
		ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* L_1 = ___awaiter0;
		U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* L_2 = ___stateMachine1;
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_m7B9E47887A2D71E009FDC92B431BE972FE724F49(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mA5391DB0CE65223E6EFD274009C8FE8422FD8056_AdjustorThunk (RuntimeObject* __this, ValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A* ___awaiter0, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine1, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisValueTaskAwaiter_t8A53759F995F1786E132CA010D1D215B55F3101A_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mA5391DB0CE65223E6EFD274009C8FE8422FD8056(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter,System.IO.Stream/<FinishWriteAsync>d__57>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0CBE432A68FC4A024AC7F57EAE9F943E30ADFCAF_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine1, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* L_0 = (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*)(&__this->___m_builder_1);
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* L_1 = ___awaiter0;
		U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* L_2 = ___stateMachine1;
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0D6BE186BB25B9E2862661FD0FB175182D3E2F6E(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0CBE432A68FC4A024AC7F57EAE9F943E30ADFCAF_AdjustorThunk (RuntimeObject* __this, ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618* ___awaiter0, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine1, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m0CBE432A68FC4A024AC7F57EAE9F943E30ADFCAF(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter,System.IO.Stream/<CopyToAsyncInternal>d__28>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m800FCAB008086E14BA17F102614235F9458F18C0_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC* L_0 = (AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC*)(&__this->___m_builder_1);
		ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* L_1 = ___awaiter0;
		U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* L_2 = ___stateMachine1;
		AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m9BC9D1ADF4D10B62D32DCCE6EBF058339B30BFDD(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m800FCAB008086E14BA17F102614235F9458F18C0_AdjustorThunk (RuntimeObject* __this, ConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D* ___awaiter0, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine1, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisConfiguredValueTaskAwaiter_t3F734F5AAFC6D31B9F729DBA7322C9969C46606D_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_m800FCAB008086E14BA17F102614235F9458F18C0(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject** L_0 = ___stateMachine0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9((&V_0), NULL);
			RuntimeObject** L_3 = ___stateMachine0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.Runtime.CompilerServices.IAsyncStateMachine::MoveNext() */, IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_3));
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB_AdjustorThunk (RuntimeObject* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_Start_TisRuntimeObject_mEFE065A20533413CD8BB8FAEAF761102588337FB(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mC14BF84292DD1AF8969F301E0D523393E99E22D3_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0018;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mC14BF84292DD1AF8969F301E0D523393E99E22D3_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9((&V_0), NULL);
			U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* L_2 = ___stateMachine0;
			U3CWriteAsyncCoreU3Ed__49_MoveNext_m5C09500FEBDD3BC412F4490660AA8854E0426FB8(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mC14BF84292DD1AF8969F301E0D523393E99E22D3_AdjustorThunk (RuntimeObject* __this, U3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncCoreU3Ed__49_t88FEE45BECA09AECACCE6E9BAE5478CEC4CA20C1_mC14BF84292DD1AF8969F301E0D523393E99E22D3(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mFE811AB46C8C60364270C163E409C93CCBE1ADB5_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0018;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mFE811AB46C8C60364270C163E409C93CCBE1ADB5_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9((&V_0), NULL);
			U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* L_2 = ___stateMachine0;
			U3CWriteAsyncInternalU3Ed__46_MoveNext_mBFD9D0C0D7645D20C24AA023DA1A13CC6BB634AC(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mFE811AB46C8C60364270C163E409C93CCBE1ADB5_AdjustorThunk (RuntimeObject* __this, U3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_Start_TisU3CWriteAsyncInternalU3Ed__46_t5C0748BB4ABDADCB0C0E07AA71C825E78644BE3F_mFE811AB46C8C60364270C163E409C93CCBE1ADB5(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Stream/<CopyToAsyncInternal>d__28>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mA25704063F4C93E9D95AF420981401C8CD2C5D6D_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0018;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mA25704063F4C93E9D95AF420981401C8CD2C5D6D_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9((&V_0), NULL);
			U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* L_2 = ___stateMachine0;
			U3CCopyToAsyncInternalU3Ed__28_MoveNext_m4F23D664DA008A9EFBA2D38F3B88C2AF38F72B62(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_Start_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mA25704063F4C93E9D95AF420981401C8CD2C5D6D_AdjustorThunk (RuntimeObject* __this, U3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_Start_TisU3CCopyToAsyncInternalU3Ed__28_t8F5175BB6199CDB8E5218229D18451E908DFDA6C_mA25704063F4C93E9D95AF420981401C8CD2C5D6D(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<System.IO.Stream/<FinishWriteAsync>d__57>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m604C94582A7F6AAAA0EA1EC24294ED8442287C09_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0018;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m604C94582A7F6AAAA0EA1EC24294ED8442287C09_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9((&V_0), NULL);
			U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* L_2 = ___stateMachine0;
			U3CFinishWriteAsyncU3Ed__57_MoveNext_m6611A31C40F53E3FA1755CAAA49B1D5CA4BB85A2(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncTaskMethodBuilder_Start_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m604C94582A7F6AAAA0EA1EC24294ED8442287C09_AdjustorThunk (RuntimeObject* __this, U3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683* ___stateMachine0, const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*>(__this + _offset);
	AsyncTaskMethodBuilder_Start_TisU3CFinishWriteAsyncU3Ed__57_tAE2689E5297A34330BC06E25373B7FBB51BB3683_m604C94582A7F6AAAA0EA1EC24294ED8442287C09(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Object,System.Object>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m9ADC168E23E830B14325FC75E92975E8E4740807_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICriticalNotifyCompletion_t9BC86B8F52BBEDB06B6FA6DC1DF93240CB0A3F49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			V_0 = (MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E*)NULL;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_0 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState_1);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1;
			L_1 = AsyncMethodBuilderCore_GetCompletionAction_mC8FA54136A05CD45BA09560748F864AF93DDFDFD(L_0, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, (&V_0), NULL);
			V_1 = L_1;
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_2 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState_1);
			RuntimeObject* L_3 = (RuntimeObject*)L_2->___m_stateMachine_0;
			if (L_3)
			{
				goto IL_0036_1;
			}
		}
		{
			AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF* L_4 = (AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF*)(&__this->___m_coreState_1);
			RuntimeObject** L_5 = ___stateMachine1;
			RuntimeObject* L_6 = (*(RuntimeObject**)L_5);
			MoveNextRunner_t57DA5A6E2423AE86889DAA6D20097BBE3C75101E* L_7 = V_0;
			AsyncMethodBuilderCore_PostBoxInitialization_mB531930E3F2FE5A9D31E4233429FAD0AFA6E8E9A(L_4, (RuntimeObject*)L_6, L_7, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, NULL);
		}

IL_0036_1:
		{
			RuntimeObject** L_8 = ___awaiter0;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_1;
			InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void System.Runtime.CompilerServices.ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action) */, ICriticalNotifyCompletion_t9BC86B8F52BBEDB06B6FA6DC1DF93240CB0A3F49_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_8), L_9);
			goto IL_004d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0045;
		}
		throw e;
	}

CATCH_0045:
	{// begin catch(System.Exception)
		AsyncMethodBuilderCore_ThrowAsync_m63A3A3C10D59EE2B80EE18C65A87F33BB832E219(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0*)NULL, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m9ADC168E23E830B14325FC75E92975E8E4740807_AdjustorThunk (RuntimeObject* __this, RuntimeObject** ___awaiter0, RuntimeObject** ___stateMachine1, const RuntimeMethod* method)
{
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*>(__this + _offset);
	AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisRuntimeObject_TisRuntimeObject_m9ADC168E23E830B14325FC75E92975E8E4740807(_thisAdjusted, ___awaiter0, ___stateMachine1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<System.Object>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject** L_0 = ___stateMachine0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC70965A7D491520CA8D04D4EA01613EFED3309E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_RuntimeMethod_var)));
	}

IL_0018:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ExecutionContextSwitcher_tC30FBBA37AF7939CED1F80BF8A63BA1DFD07D708));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				ExecutionContextSwitcher_Undo_m683D21973AF9E2E19D0662BBC9F266D79EC53886((&V_0), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710_il2cpp_TypeInfo_var);
			ExecutionContext_EstablishCopyOnWriteScope_m574194DCDCF18A35B4640E775C249A5D61132ED9((&V_0), NULL);
			RuntimeObject** L_3 = ___stateMachine0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.Runtime.CompilerServices.IAsyncStateMachine::MoveNext() */, IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_il2cpp_TypeInfo_var, (RuntimeObject*)(*L_3));
			goto IL_003d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA_AdjustorThunk (RuntimeObject* __this, RuntimeObject** ___stateMachine0, const RuntimeMethod* method)
{
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*>(__this + _offset);
	AsyncVoidMethodBuilder_Start_TisRuntimeObject_m3CA145CBB6CFE8B4ADD6148BF98E85899F95DCEA(_thisAdjusted, ___stateMachine0, method);
}
// System.Void System.Buffer::Memmove<System.Byte>(T&,T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m946B3482F5DC79F7D18C9519F1E8DE068FE5D6AB_gshared (uint8_t* ___destination0, uint8_t* ___source1, uint64_t ___elementCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		if (false)
		{
			goto IL_002f;
		}
	}
	{
		uint8_t* L_0 = ___destination0;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		uint8_t* L_3 = ___source1;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___elementCount2;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<uint8_t>();
		Buffer_Memmove_mE2FD779AEAE4F226AFCAF27575AF93D7C56BF5B0((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_002f:
	{
		uint8_t* L_9 = ___destination0;
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		V_2 = L_10;
		uint8_t* L_11 = V_2;
		uint8_t* L_12 = ___source1;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_as_ref<uint8_t>(L_12);
		V_1 = L_13;
		uint8_t* L_14 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_14);
		uint8_t* L_15 = V_3;
		uint64_t L_16 = ___elementCount2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19;
		L_19 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(101 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_18);
		V_4 = L_19;
		intptr_t L_20 = (intptr_t)(&V_4)->___value_0;
		RuntimeImports_Memmove_wbarrier_mC563385425BC68BD59B96AD2FFEDCBC482A31BBA((uint8_t*)((uintptr_t)L_11), L_15, (uint32_t)((int32_t)(uint32_t)L_16), L_20, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void System.Buffer::Memmove<System.Char>(T&,T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m8832BEE60C2E97582D8D91E445A643397B732064_gshared (Il2CppChar* ___destination0, Il2CppChar* ___source1, uint64_t ___elementCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		if (false)
		{
			goto IL_002f;
		}
	}
	{
		Il2CppChar* L_0 = ___destination0;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		Il2CppChar* L_3 = ___source1;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___elementCount2;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<Il2CppChar>();
		Buffer_Memmove_mE2FD779AEAE4F226AFCAF27575AF93D7C56BF5B0((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_002f:
	{
		Il2CppChar* L_9 = ___destination0;
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		V_2 = L_10;
		uint8_t* L_11 = V_2;
		Il2CppChar* L_12 = ___source1;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_as_ref<uint8_t>(L_12);
		V_1 = L_13;
		uint8_t* L_14 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_14);
		uint8_t* L_15 = V_3;
		uint64_t L_16 = ___elementCount2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19;
		L_19 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(101 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_18);
		V_4 = L_19;
		intptr_t L_20 = (intptr_t)(&V_4)->___value_0;
		RuntimeImports_Memmove_wbarrier_mC563385425BC68BD59B96AD2FFEDCBC482A31BBA((uint8_t*)((uintptr_t)L_11), L_15, (uint32_t)((int32_t)(uint32_t)L_16), L_20, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void System.Buffer::Memmove<System.Int32>(T&,T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mECDE0C0E5B2D287E9838CBB6033010822B48E982_gshared (int32_t* ___destination0, int32_t* ___source1, uint64_t ___elementCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		if (false)
		{
			goto IL_002f;
		}
	}
	{
		int32_t* L_0 = ___destination0;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		int32_t* L_3 = ___source1;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___elementCount2;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<int32_t>();
		Buffer_Memmove_mE2FD779AEAE4F226AFCAF27575AF93D7C56BF5B0((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_002f:
	{
		int32_t* L_9 = ___destination0;
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		V_2 = L_10;
		uint8_t* L_11 = V_2;
		int32_t* L_12 = ___source1;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_as_ref<uint8_t>(L_12);
		V_1 = L_13;
		uint8_t* L_14 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_14);
		uint8_t* L_15 = V_3;
		uint64_t L_16 = ___elementCount2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19;
		L_19 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(101 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_18);
		V_4 = L_19;
		intptr_t L_20 = (intptr_t)(&V_4)->___value_0;
		RuntimeImports_Memmove_wbarrier_mC563385425BC68BD59B96AD2FFEDCBC482A31BBA((uint8_t*)((uintptr_t)L_11), L_15, (uint32_t)((int32_t)(uint32_t)L_16), L_20, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void System.Buffer::Memmove<System.Object>(T&,T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisRuntimeObject_m0C1DD55369B77D0F04F93F900926911104E97627_gshared (RuntimeObject** ___destination0, RuntimeObject** ___source1, uint64_t ___elementCount2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		if (true)
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject** L_0 = ___destination0;
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>(L_0);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		RuntimeObject** L_3 = ___source1;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		V_2 = L_4;
		uint8_t* L_5 = V_2;
		V_0 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		uint64_t L_7 = ___elementCount2;
		int32_t L_8;
		L_8 = il2cpp_unsafe_sizeof<RuntimeObject*>();
		Buffer_Memmove_mE2FD779AEAE4F226AFCAF27575AF93D7C56BF5B0((uint8_t*)((uintptr_t)L_2), L_6, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)L_7), L_8)), NULL);
		V_1 = (uint8_t*)((uintptr_t)0);
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_002f:
	{
		RuntimeObject** L_9 = ___destination0;
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		V_2 = L_10;
		uint8_t* L_11 = V_2;
		RuntimeObject** L_12 = ___source1;
		uint8_t* L_13;
		L_13 = il2cpp_unsafe_as_ref<uint8_t>(L_12);
		V_1 = L_13;
		uint8_t* L_14 = V_1;
		V_3 = (uint8_t*)((uintptr_t)L_14);
		uint8_t* L_15 = V_3;
		uint64_t L_16 = ___elementCount2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19;
		L_19 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(101 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_18);
		V_4 = L_19;
		intptr_t L_20 = (intptr_t)(&V_4)->___value_0;
		RuntimeImports_Memmove_wbarrier_mC563385425BC68BD59B96AD2FFEDCBC482A31BBA((uint8_t*)((uintptr_t)L_11), L_15, (uint32_t)((int32_t)(uint32_t)L_16), L_20, NULL);
		V_2 = (uint8_t*)((uintptr_t)0);
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}
}
// System.Void System.Security.AccessControl.CommonAcl::RemoveAces<System.Object>(System.Security.AccessControl.CommonAcl/RemoveAcesCallback`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonAcl_RemoveAces_TisRuntimeObject_m5E6F74275A301442C8F68C707F8117609BA48190_gshared (CommonAcl_tCA91208504C637DEA4B991FB310C0F356C47E08A* __this, RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* ___callback0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0004:
	{
		RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12* L_0 = (RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12*)__this->___raw_acl_7;
		int32_t L_1 = V_0;
		GenericAce_t45900C8B82142B46D631554B319B446483418F15* L_2;
		L_2 = VirtualFuncInvoker1< GenericAce_t45900C8B82142B46D631554B319B446483418F15*, int32_t >::Invoke(10 /* System.Security.AccessControl.GenericAce System.Security.AccessControl.GenericAcl::get_Item(System.Int32) */, (GenericAcl_t6753354BCE95C777EC6F5CC9F3BA88277817CE70*)L_0, L_1);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_003e;
		}
	}
	{
		RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4* L_3 = ___callback0;
		RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12* L_4 = (RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12*)__this->___raw_acl_7;
		int32_t L_5 = V_0;
		GenericAce_t45900C8B82142B46D631554B319B446483418F15* L_6;
		L_6 = VirtualFuncInvoker1< GenericAce_t45900C8B82142B46D631554B319B446483418F15*, int32_t >::Invoke(10 /* System.Security.AccessControl.GenericAce System.Security.AccessControl.GenericAcl::get_Item(System.Int32) */, (GenericAcl_t6753354BCE95C777EC6F5CC9F3BA88277817CE70*)L_4, L_5);
		bool L_7;
		L_7 = ((  bool (*) (RemoveAcesCallback_1_tE668A00269CF32251CBF9453C3102E9E0F1018C4*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12* L_8 = (RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12*)__this->___raw_acl_7;
		int32_t L_9 = V_0;
		RawAcl_RemoveAce_mEC4C2669281E090DCF8F692909908EDD2BD4CBCE(L_8, L_9, NULL);
		goto IL_0042;
	}

IL_003e:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0042:
	{
		int32_t L_11 = V_0;
		RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12* L_12 = (RawAcl_t247FDDC8089ED6989EC395AE5102ACCB05557C12*)__this->___raw_acl_7;
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.Security.AccessControl.GenericAcl::get_Count() */, (GenericAcl_t6753354BCE95C777EC6F5CC9F3BA88277817CE70*)L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Diagnostics.Contracts.Contract::ForAll<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Contract_ForAll_TisRuntimeObject_mAACFF5923FEAB1707F956D007430954E5EAE3E00_gshared (RuntimeObject* ___collection0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___predicate1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Contract_ForAll_TisRuntimeObject_mAACFF5923FEAB1707F956D007430954E5EAE3E00_RuntimeMethod_var)));
	}

IL_000e:
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_2 = ___predicate1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Contract_ForAll_TisRuntimeObject_mAACFF5923FEAB1707F956D007430954E5EAE3E00_RuntimeMethod_var)));
	}

IL_001c:
	{
		RuntimeObject* L_4 = ___collection0;
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0043:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_6 = V_0;
					if (!L_6)
					{
						goto IL_004c;
					}
				}
				{
					RuntimeObject* L_7 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_7);
				}

IL_004c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_0025_1:
			{
				RuntimeObject* L_8 = V_0;
				RuntimeObject* L_9;
				L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 2), L_8);
				V_1 = L_9;
				Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_10 = ___predicate1;
				RuntimeObject* L_11 = V_1;
				bool L_12;
				L_12 = ((  bool (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 5));
				if (L_12)
				{
					goto IL_0039_1;
				}
			}
			{
				V_2 = (bool)0;
				goto IL_004f;
			}

IL_0039_1:
			{
				RuntimeObject* L_13 = V_0;
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeNamedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* CustomAttributeData_UnboxValues_TisCustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02_mA3D3C9033474D794151999833D1FCCAB22396515_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) 
{
	CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values0;
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_1 = (CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440*)(CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___values0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02)((*(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)((CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)(CustomAttributeNamedArgument_t4EC1C2BB9943BEB7E77AC0870BE2A899E23B4E02*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___values0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeNamedArgumentU5BU5D_tC0A39D9401E28662213F5958EFF5D26D0681B440* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Reflection.CustomAttributeTypedArgument>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* CustomAttributeData_UnboxValues_TisCustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F_m0DCCA194C0523F71D06DD99646AA7EE3ED1B8628_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) 
{
	CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values0;
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_1 = (CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B*)(CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_000d:
	{
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___values0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F)((*(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)((CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)(CustomAttributeTypedArgument_tAAA19ADE66B16A67D030C8C67D7ADB29A7BEC75F*)UnBox(L_7, il2cpp_rgctx_data(method->rgctx_data, 1))))));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___values0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		CustomAttributeTypedArgumentU5BU5D_t6CAA09EC6AACBED57FC8B02C587D50BF6B738C6B* L_11 = V_0;
		return L_11;
	}
}
// T[] System.Reflection.CustomAttributeData::UnboxValues<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* CustomAttributeData_UnboxValues_TisRuntimeObject_m444D4B1351A3438500011FFE16B325B0E8D12F59_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___values0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0020;
	}

IL_000d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___values0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 1))));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___values0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		return L_11;
	}
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCE0812F0AE19B736CEA2CD72E64516319040AB6E_gshared (Assembly_t* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Assembly_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = CustomAttributeExtensions_GetCustomAttribute_m056785B4C31CED65B0F38986EE830315551CE030(L_0, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Collections.Generic.IEnumerable`1<T> System.Reflection.CustomAttributeExtensions::GetCustomAttributes<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_TisRuntimeObject_m82C17F5D5FFAC8E641B79E4554D83A55BE377165_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		RuntimeObject* L_3;
		L_3 = CustomAttributeExtensions_GetCustomAttributes_m518D9E8FE83EAB9D1A5B5565ABA49B2B2744E815(L_0, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// T[] System.Collections.Generic.EnumerableHelpers::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* EnumerableHelpers_ToArray_TisRuntimeObject_mC5C18A267F97879F9E2C96DF47B9E16A3D3D02A4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	LargeArrayBuilder_1_t5997B05FFE45A1470DE34647AD779237CD53563E V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___source0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)L_6);
		V_3 = L_7;
		RuntimeObject* L_8 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = V_3;
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_8, L_9, 0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_3;
		return L_10;
	}

IL_002b:
	{
		LargeArrayBuilder_1__ctor_m518A5336CB5C931EF4FAA70E4362A7FE991880D5((&V_1), (bool)1, il2cpp_rgctx_method(method->rgctx_data, 5));
		RuntimeObject* L_11 = ___source0;
		LargeArrayBuilder_1_AddRange_m99FC93695E72F4F2883183D5F9B865C2C36D93C0((&V_1), L_11, il2cpp_rgctx_method(method->rgctx_data, 6));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = LargeArrayBuilder_1_ToArray_m2566DACFDE65A6981339EEF4BE2C146222E61C42((&V_1), il2cpp_rgctx_method(method->rgctx_data, 7));
		return L_12;
	}
}
// T[] System.Collections.Generic.EnumerableHelpers::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* EnumerableHelpers_ToArray_TisRuntimeObject_m27903E919D7982DC3296CCA4CC1DD02ADD427146_gshared (RuntimeObject* ___source0, int32_t* ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_7 = NULL;
	int32_t G_B11_0 = 0;
	{
		RuntimeObject* L_0 = ___source0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if (!L_4)
		{
			goto IL_00bd;
		}
	}
	{
		int32_t L_5 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)L_5);
		V_2 = L_6;
		RuntimeObject* L_7 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_2;
		InterfaceActionInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.Object>::CopyTo(T[],System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_7, L_8, 0);
		int32_t* L_9 = ___length1;
		int32_t L_10 = V_1;
		*((int32_t*)L_9) = (int32_t)L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_2;
		return L_11;
	}

IL_002b:
	{
		RuntimeObject* L_12 = ___source0;
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 4), L_12);
		V_3 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_14 = V_3;
					if (!L_14)
					{
						goto IL_00bc;
					}
				}
				{
					RuntimeObject* L_15 = V_3;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				}

IL_00bc:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_16 = V_3;
				bool L_17;
				L_17 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
				if (!L_17)
				{
					goto IL_00b1_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 2), (uint32_t)4);
				V_4 = L_18;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_4;
				RuntimeObject* L_20 = V_3;
				RuntimeObject* L_21;
				L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 6), L_20);
				(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
				V_5 = 1;
				goto IL_009f_1;
			}

IL_0055_1:
			{
				int32_t L_22 = V_5;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_4;
				if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
				{
					goto IL_008b_1;
				}
			}
			{
				int32_t L_24 = V_5;
				V_6 = ((int32_t)(L_24<<1));
				int32_t L_25 = V_6;
				if ((!(((uint32_t)L_25) > ((uint32_t)((int32_t)2146435071)))))
				{
					goto IL_0082_1;
				}
			}
			{
				int32_t L_26 = V_5;
				if ((((int32_t)((int32_t)2146435071)) <= ((int32_t)L_26)))
				{
					goto IL_007c_1;
				}
			}
			{
				G_B11_0 = ((int32_t)2146435071);
				goto IL_0080_1;
			}

IL_007c_1:
			{
				int32_t L_27 = V_5;
				G_B11_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
			}

IL_0080_1:
			{
				V_6 = G_B11_0;
			}

IL_0082_1:
			{
				int32_t L_28 = V_6;
				((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)))((&V_4), L_28, il2cpp_rgctx_method(method->rgctx_data, 8));
			}

IL_008b_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = V_4;
				int32_t L_30 = V_5;
				int32_t L_31 = L_30;
				V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
				RuntimeObject* L_32 = V_3;
				RuntimeObject* L_33;
				L_33 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 6), L_32);
				(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (RuntimeObject*)L_33);
			}

IL_009f_1:
			{
				RuntimeObject* L_34 = V_3;
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_0055_1;
				}
			}
			{
				int32_t* L_36 = ___length1;
				int32_t L_37 = V_5;
				*((int32_t*)L_36) = (int32_t)L_37;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_4;
				V_7 = L_38;
				goto IL_00c6;
			}

IL_00b1_1:
			{
				goto IL_00bd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bd:
	{
		int32_t* L_39 = ___length1;
		*((int32_t*)L_39) = (int32_t)0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 9)))->___Value_0;
		return L_40;
	}

IL_00c6:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_7;
		return L_41;
	}
}
// T System.Runtime.CompilerServices.JitHelpers::UnsafeCast<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JitHelpers_UnsafeCast_TisRuntimeObject_m5F16C3EA8BF80F57323D6F2D44F2743F87F9B056_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m25BE271FF975F2AF91B9CCCDB9454933708A2090_gshared (RuntimeObject** ___target0, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject** L_0 = ___target0;
		RuntimeObject* L_1;
		L_1 = VolatileRead(L_0);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		RuntimeObject** L_3 = ___target0;
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B2_0 = L_4;
	}

IL_0015:
	{
		return G_B2_0;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m0E12CBD20A01B68BE6591F27A0CFFF9D09BA3FE0_gshared (RuntimeObject** ___target0, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory1, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject** L_0 = ___target0;
		RuntimeObject* L_1;
		L_1 = VolatileRead(L_0);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		RuntimeObject** L_3 = ___target0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = ___valueFactory1;
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (RuntimeObject**, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B2_0 = L_5;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&,System.Object&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m321502C8F37B1E7454B1F8F146BEF2FC96D44CA4_gshared (RuntimeObject** ___target0, RuntimeObject** ___syncLock1, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory2, const RuntimeMethod* method) 
{
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		RuntimeObject** L_0 = ___target0;
		RuntimeObject* L_1;
		L_1 = VolatileRead(L_0);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0017;
		}
	}
	{
		RuntimeObject** L_3 = ___target0;
		RuntimeObject** L_4 = ___syncLock1;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_5 = ___valueFactory2;
		RuntimeObject* L_6;
		L_6 = ((  RuntimeObject* (*) (RuntimeObject**, RuntimeObject**, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		G_B2_0 = L_6;
	}

IL_0017:
	{
		return G_B2_0;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m65D0E9F280589B949454E7209A0D8F86C0543685_gshared (RuntimeObject** ___target0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		RuntimeObject** L_0 = ___target0;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_0, L_1, L_2);
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0017;
		}
		throw e;
	}

CATCH_0017:
	{// begin catch(System.MissingMethodException)
		MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211* L_4 = (MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211_il2cpp_TypeInfo_var)));
		MissingMemberException__ctor_m6292C676754200C455A390D36BFEBD8F8775628C(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7736367EB5597A368928D1011CEA2283AF9B94D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m65D0E9F280589B949454E7209A0D8F86C0543685_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0023:
	{
		RuntimeObject** L_5 = ___target0;
		RuntimeObject* L_6 = (*(RuntimeObject**)L_5);
		return L_6;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m679BC27AA6229AC0511525395F94E7A89B6977F6_gshared (RuntimeObject** ___target0, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = ___valueFactory1;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m679BC27AA6229AC0511525395F94E7A89B6977F6_RuntimeMethod_var)));
	}

IL_001a:
	{
		RuntimeObject** L_4 = ___target0;
		RuntimeObject* L_5 = V_0;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_4, L_5, L_6);
		RuntimeObject** L_8 = ___target0;
		RuntimeObject* L_9 = (*(RuntimeObject**)L_8);
		return L_9;
	}
}
// T System.Threading.LazyInitializer::EnsureInitializedCore<System.Object>(T&,System.Object&,System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m9B6F012D031660C017EC4AE75E6E96F72FC4394F_gshared (RuntimeObject** ___target0, RuntimeObject** ___syncLock1, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___valueFactory2, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject** L_0 = ___syncLock1;
		RuntimeObject* L_1;
		L_1 = LazyInitializer_EnsureLockInitialized_mAAF156A056905B7BFC05221CE14A0652478CC9DB(L_0, NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				RuntimeObject** L_5 = ___target0;
				RuntimeObject* L_6;
				L_6 = VolatileRead(L_5);
				if (L_6)
				{
					goto IL_0042_1;
				}
			}
			{
				RuntimeObject** L_7 = ___target0;
				Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_8 = ___valueFactory2;
				RuntimeObject* L_9;
				L_9 = ((  RuntimeObject* (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
				VolatileWrite(L_7, L_9);
				RuntimeObject** L_10 = ___target0;
				RuntimeObject* L_11 = (*(RuntimeObject**)L_10);
				if (L_11)
				{
					goto IL_0042_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE958A63C0675D65C92182FC45CE3E78A8DD48061)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LazyInitializer_EnsureInitializedCore_TisRuntimeObject_m9B6F012D031660C017EC4AE75E6E96F72FC4394F_RuntimeMethod_var)));
			}

IL_0042_1:
			{
				goto IL_004e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		RuntimeObject** L_13 = ___target0;
		RuntimeObject* L_14 = (*(RuntimeObject**)L_13);
		return L_14;
	}
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(TDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_mB8EF9643D1C7B4742C62D318B23401AEA121371C_gshared (RuntimeObject* ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___d0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA02431CF7C501A5B368C91E41283419D8FA9FB03)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_mB8EF9643D1C7B4742C62D318B23401AEA121371C_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = Marshal_GetFunctionPointerForDelegateInternal_m052129C4ECA08E9409313F02486CE3DF23491DDE(((Delegate_t*)CastclassClass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var)), NULL);
		return L_3;
	}
}
// T System.Runtime.InteropServices.Marshal::PtrToStructure<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Marshal_PtrToStructure_TisRuntimeObject_mE49427AE7C74A2015680C1510E65FDD0B6163C64_gshared (intptr_t ___ptr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___ptr0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Marshal_PtrToStructure_m925D16041CB6ECE051D6D4B15CCCF5BD46561D34(L_0, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<System.Object>(T,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisRuntimeObject_m1AE1E189C906EF1E842EB86ECCF80CF463755BC0_gshared (RuntimeObject* ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___structure0;
		intptr_t L_1 = ___ptr1;
		bool L_2 = ___fDeleteOld2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_StructureToPtr_mE014A5139B79EC0CCF27EBA41031702B7BC63F69(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.IntPtr System.Runtime.InteropServices.Marshal::UnsafeAddrOfPinnedArrayElement<System.Object>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_UnsafeAddrOfPinnedArrayElement_TisRuntimeObject_mD4F6DF100F62531071FB1835737A78F32BF31430_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arr0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___arr0;
		int32_t L_1 = ___index1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = Marshal_UnsafeAddrOfPinnedArrayElement_m313692F43E31BAF62F5AA3BA0E8F69C0310F2ECB((RuntimeArray*)L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void System.Math::ThrowMinMaxException<System.Int32>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m85E4E387BD5643150842A5065168669A7892AA8B_gshared (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___min0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_1);
		int32_t L_3 = ___max1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), &L_4);
		String_t* L_6;
		L_6 = SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E)), L_2, L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Math_ThrowMinMaxException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m85E4E387BD5643150842A5065168669A7892AA8B_RuntimeMethod_var)));
	}
}
// System.Void System.Math::ThrowMinMaxException<System.Object>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_ThrowMinMaxException_TisRuntimeObject_m2A7DC6DDBBD4CDA153ED501BAB77FD147EACF6B0_gshared (RuntimeObject* ___min0, RuntimeObject* ___max1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___min0;
		RuntimeObject* L_1 = ___max1;
		String_t* L_2;
		L_2 = SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral110D1733D85BF5EFB139B95FF286BB627337195E)), L_0, L_1, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Math_ThrowMinMaxException_TisRuntimeObject_m2A7DC6DDBBD4CDA153ED501BAB77FD147EACF6B0_RuntimeMethod_var)));
	}
}
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Object>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 MemoryExtensions_AsSpan_TisRuntimeObject_m18EE0D712363D8192FC4DA9CC2E943696E57DA6F_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___start1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2));
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_2 = V_0;
		return L_2;
	}

IL_0015:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_1;
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___array0;
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_mDF51E7FDFA74ADCDDB1E43CFC4A3A3083692B010(NULL);
	}

IL_0041:
	{
		int32_t L_9 = ___start1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___array0;
		if ((!(((uint32_t)L_9) > ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_004c;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_004c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___array0;
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		RuntimeObject** L_13;
		L_13 = il2cpp_unsafe_as_ref<RuntimeObject*>(L_12);
		int32_t L_14 = ___start1;
		RuntimeObject** L_15;
		L_15 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_13, L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___array0;
		int32_t L_17 = ___start1;
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_inline((&L_18), L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_18;
	}
}
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Char>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D MemoryExtensions_AsSpan_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m894CFA74107DD4DD04EB48B2804777AAC208758A_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___array0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___length2;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Span`1<T> System.MemoryExtensions::AsSpan<System.Object>(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 MemoryExtensions_AsSpan_TisRuntimeObject_m9DD3475E98CCC339BC31D2848CCD73DD865C87B8_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___array0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___length2;
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Span_1__ctor_mB699405722E96B949DE251894243517B81EDBBCD_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
// System.Void System.MemoryExtensions::CopyTo<System.Object>(T[],System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryExtensions_CopyTo_TisRuntimeObject_m8D57FED380B513DF371648CD0FAC08A09DF8661A_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source0, Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 ___destination1, const RuntimeMethod* method) 
{
	ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___source0;
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m62E30EE8205E9B8F79F1C6EFE9F113CB69E82DCD_inline((&L_1), L_0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_2 = ___destination1;
		ReadOnlySpan_1_CopyTo_m8CDF8DB3AFCAFA4A44D8C9FC8180AF9AE07F8361((&V_0), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
// System.Boolean System.MemoryExtensions::EndsWith<System.Char>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_EndsWith_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1C7AB02F41F1F03DBCC685BF7A9489BD906CB081_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		V_0 = L_0;
		int32_t L_1 = (int32_t)(&___value1)->____length_1;
		V_1 = L_1;
		il2cpp_codegen_initobj((&V_3), sizeof(Il2CppChar));
	}
	{
		bool L_3;
		L_3 = ((  bool (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_2), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_0055;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6 = ___span0;
		Il2CppChar* L_7;
		L_7 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_12 = ___value1;
		Il2CppChar* L_13;
		L_13 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_as_ref<uint8_t>(L_13);
		int32_t L_15 = V_1;
		uint64_t L_16 = V_2;
		bool L_17;
		L_17 = SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9(L_11, L_14, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_15), (int64_t)L_16)), NULL);
		return L_17;
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) > ((int32_t)L_19)))
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_20 = ___span0;
		Il2CppChar* L_21;
		L_21 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		Il2CppChar* L_24;
		L_24 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_21, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_25 = ___value1;
		Il2CppChar* L_26;
		L_26 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_27 = V_1;
		bool L_28;
		L_28 = ((  bool (*) (Il2CppChar*, Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_24, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_28;
	}

IL_0076:
	{
		return (bool)0;
	}
}
// System.Boolean System.MemoryExtensions::EndsWith<System.Object>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_EndsWith_TisRuntimeObject_m23E2C42A7BB70C5EED97707012EEAA85579C7ADC_gshared (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___span0, ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		V_0 = L_0;
		int32_t L_1 = (int32_t)(&___value1)->____length_1;
		V_1 = L_1;
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_3;
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		bool L_3;
		L_3 = ((  bool (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_2), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_0055;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_6 = ___span0;
		RuntimeObject** L_7;
		L_7 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		RuntimeObject** L_10;
		L_10 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_12 = ___value1;
		RuntimeObject** L_13;
		L_13 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_14;
		L_14 = il2cpp_unsafe_as_ref<uint8_t>(L_13);
		int32_t L_15 = V_1;
		uint64_t L_16 = V_2;
		bool L_17;
		L_17 = SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9(L_11, L_14, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_15), (int64_t)L_16)), NULL);
		return L_17;
	}

IL_0055:
	{
		return (bool)0;
	}

IL_0057:
	{
		int32_t L_18 = V_1;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) > ((int32_t)L_19)))
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_20 = ___span0;
		RuntimeObject** L_21;
		L_21 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_20, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		RuntimeObject** L_24;
		L_24 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_21, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)));
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_25 = ___value1;
		RuntimeObject** L_26;
		L_26 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_25, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_27 = V_1;
		bool L_28;
		L_28 = ((  bool (*) (RuntimeObject**, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_24, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_28;
	}

IL_0076:
	{
		return (bool)0;
	}
}
// System.Int32 System.MemoryExtensions::IndexOf<System.Byte>(System.ReadOnlySpan`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7197AE4C3B5AED7D1480493A456B279ED35FC4FF_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, uint8_t ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = ___span0;
		uint8_t* L_6;
		L_6 = ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((&___value1));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10 = (int32_t)(&___span0)->____length_1;
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_m0A829BB99BDEEEB5A92884FA139590B6E4EA7835(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_17 = ___span0;
		uint8_t* L_18;
		L_18 = ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((&___value1));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22 = (int32_t)(&___span0)->____length_1;
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_mDE4E5FB8BEEEF1D365113B434C8A6A09E9EA3B20(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_24 = ___span0;
		uint8_t* L_25;
		L_25 = ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_26 = ___value1;
		int32_t L_27 = (int32_t)(&___span0)->____length_1;
		int32_t L_28;
		L_28 = ((  int32_t (*) (uint8_t*, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_28;
	}
}
// System.Int32 System.MemoryExtensions::IndexOf<System.Char>(System.ReadOnlySpan`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m54A46891E9EEC1D345AC960D1B06411FFB38C3DD_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, Il2CppChar ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___span0;
		Il2CppChar* L_6;
		L_6 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((&___value1));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10 = (int32_t)(&___span0)->____length_1;
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_m0A829BB99BDEEEB5A92884FA139590B6E4EA7835(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___span0;
		Il2CppChar* L_18;
		L_18 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((&___value1));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22 = (int32_t)(&___span0)->____length_1;
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_mDE4E5FB8BEEEF1D365113B434C8A6A09E9EA3B20(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24 = ___span0;
		Il2CppChar* L_25;
		L_25 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar L_26 = ___value1;
		int32_t L_27 = (int32_t)(&___span0)->____length_1;
		int32_t L_28;
		L_28 = ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_28;
	}
}
// System.Int32 System.MemoryExtensions::IndexOf<System.Object>(System.ReadOnlySpan`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOf_TisRuntimeObject_mFCB7FC8AF61582B4E693A8094FFE60ACA3343972_gshared (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___span0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_5 = ___span0;
		RuntimeObject** L_6;
		L_6 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_as_ref<uint8_t>((&___value1));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10 = (int32_t)(&___span0)->____length_1;
		int32_t L_11;
		L_11 = SpanHelpers_IndexOf_m0A829BB99BDEEEB5A92884FA139590B6E4EA7835(L_7, (uint8_t)L_9, L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_12, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		bool L_16;
		L_16 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_17 = ___span0;
		RuntimeObject** L_18;
		L_18 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppChar* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppChar>(L_18);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_as_ref<Il2CppChar>((&___value1));
		int32_t L_21 = *((uint16_t*)L_20);
		int32_t L_22 = (int32_t)(&___span0)->____length_1;
		int32_t L_23;
		L_23 = SpanHelpers_IndexOf_mDE4E5FB8BEEEF1D365113B434C8A6A09E9EA3B20(L_19, (Il2CppChar)L_21, L_22, NULL);
		return L_23;
	}

IL_0076:
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_24 = ___span0;
		RuntimeObject** L_25;
		L_25 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_24, il2cpp_rgctx_method(method->rgctx_data, 1));
		RuntimeObject* L_26 = ___value1;
		int32_t L_27 = (int32_t)(&___span0)->____length_1;
		int32_t L_28;
		L_28 = ((  int32_t (*) (RuntimeObject**, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_28;
	}
}
// System.Int32 System.MemoryExtensions::IndexOfAny<System.Char>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOfAny_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1D27066C9E6D889713900B21AEEEB6817E94A05D_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___values1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___span0;
		Il2CppChar* L_6;
		L_6 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		int32_t L_8 = (int32_t)(&___span0)->____length_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9 = ___values1;
		Il2CppChar* L_10;
		L_10 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = (int32_t)(&___values1)->____length_1;
		int32_t L_13;
		L_13 = SpanHelpers_IndexOfAny_m1E5B36934B63F4FB6B32F0FA196B52B63488AFDF(L_7, L_8, L_11, L_12, NULL);
		return L_13;
	}

IL_0045:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_14 = ___span0;
		Il2CppChar* L_15;
		L_15 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_16 = (int32_t)(&___span0)->____length_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___values1;
		Il2CppChar* L_18;
		L_18 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_19 = (int32_t)(&___values1)->____length_1;
		int32_t L_20;
		L_20 = ((  int32_t (*) (Il2CppChar*, int32_t, Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_15, L_16, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_20;
	}
}
// System.Int32 System.MemoryExtensions::IndexOfAny<System.Object>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryExtensions_IndexOfAny_TisRuntimeObject_m8EE17C2A922689B4154ED00A2DC2666CB38674B5_gshared (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___span0, ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___values1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_5 = ___span0;
		RuntimeObject** L_6;
		L_6 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		int32_t L_8 = (int32_t)(&___span0)->____length_1;
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_9 = ___values1;
		RuntimeObject** L_10;
		L_10 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_9, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_11;
		L_11 = il2cpp_unsafe_as_ref<uint8_t>(L_10);
		int32_t L_12 = (int32_t)(&___values1)->____length_1;
		int32_t L_13;
		L_13 = SpanHelpers_IndexOfAny_m1E5B36934B63F4FB6B32F0FA196B52B63488AFDF(L_7, L_8, L_11, L_12, NULL);
		return L_13;
	}

IL_0045:
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_14 = ___span0;
		RuntimeObject** L_15;
		L_15 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_14, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_16 = (int32_t)(&___span0)->____length_1;
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_17 = ___values1;
		RuntimeObject** L_18;
		L_18 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_19 = (int32_t)(&___values1)->____length_1;
		int32_t L_20;
		L_20 = ((  int32_t (*) (RuntimeObject**, int32_t, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_15, L_16, L_18, L_19, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_20;
	}
}
// System.Boolean System.MemoryExtensions::IsTypeComparableAsBytes<System.Char>(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3250F576D06AE5C6AC78317E5271D46D9C7E9CB0_gshared (uint64_t* ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_10 = ___size0;
		*((int64_t*)L_10) = (int64_t)((int64_t)1);
		return (bool)1;
	}

IL_003c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_17, L_19, NULL);
		if (L_20)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_26 = ___size0;
		*((int64_t*)L_26) = (int64_t)((int64_t)2);
		return (bool)1;
	}

IL_0093:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_37 = ___size0;
		*((int64_t*)L_37) = (int64_t)((int64_t)4);
		return (bool)1;
	}

IL_00cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_0105;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_48 = ___size0;
		*((int64_t*)L_48) = (int64_t)((int64_t)8);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_49 = ___size0;
		*((int64_t*)L_49) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
// System.Boolean System.MemoryExtensions::IsTypeComparableAsBytes<System.Object>(System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_IsTypeComparableAsBytes_TisRuntimeObject_mE181ACCA50019920DD01D5E20E57B00668314ADE_gshared (uint64_t* ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_1, L_3, NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}

IL_0036:
	{
		uint64_t* L_10 = ___size0;
		*((int64_t*)L_10) = (int64_t)((int64_t)1);
		return (bool)1;
	}

IL_003c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_17, L_19, NULL);
		if (L_20)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_0093;
		}
	}

IL_008d:
	{
		uint64_t* L_26 = ___size0;
		*((int64_t*)L_26) = (int64_t)((int64_t)2);
		return (bool)1;
	}

IL_0093:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_00c9;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00cf;
		}
	}

IL_00c9:
	{
		uint64_t* L_37 = ___size0;
		*((int64_t*)L_37) = (int64_t)((int64_t)4);
		return (bool)1;
	}

IL_00cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_0105;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_010b;
		}
	}

IL_0105:
	{
		uint64_t* L_48 = ___size0;
		*((int64_t*)L_48) = (int64_t)((int64_t)8);
		return (bool)1;
	}

IL_010b:
	{
		uint64_t* L_49 = ___size0;
		*((int64_t*)L_49) = (int64_t)((int64_t)0);
		return (bool)0;
	}
}
// System.Boolean System.MemoryExtensions::SequenceEqual<System.Char>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mAA7292F913E363818E0CCF99BF705D7112FB5F6F_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___other1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		bool L_2;
		L_2 = ((  bool (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (int32_t)(&___other1)->____length_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___span0;
		Il2CppChar* L_6;
		L_6 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___other1;
		Il2CppChar* L_9;
		L_9 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = V_0;
		uint64_t L_12 = V_1;
		bool L_13;
		L_13 = SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9(L_7, L_10, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_11), (int64_t)L_12)), NULL);
		return L_13;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(&___other1)->____length_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16 = ___span0;
		Il2CppChar* L_17;
		L_17 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_18 = ___other1;
		Il2CppChar* L_19;
		L_19 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_20 = V_0;
		bool L_21;
		L_21 = ((  bool (*) (Il2CppChar*, Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_17, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_21;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Boolean System.MemoryExtensions::SequenceEqual<System.Object>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_SequenceEqual_TisRuntimeObject_m8A1A3B358F34B2ADEC59B441AD9C01F2753C6EAF_gshared (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___span0, ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___other1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		bool L_2;
		L_2 = ((  bool (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (int32_t)(&___other1)->____length_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_5 = ___span0;
		RuntimeObject** L_6;
		L_6 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_8 = ___other1;
		RuntimeObject** L_9;
		L_9 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = V_0;
		uint64_t L_12 = V_1;
		bool L_13;
		L_13 = SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9(L_7, L_10, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_11), (int64_t)L_12)), NULL);
		return L_13;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(&___other1)->____length_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_16 = ___span0;
		RuntimeObject** L_17;
		L_17 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_18 = ___other1;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_20 = V_0;
		bool L_21;
		L_21 = ((  bool (*) (RuntimeObject**, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_17, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_21;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Boolean System.MemoryExtensions::StartsWith<System.Char>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_StartsWith_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m35A19C1A9064313CEE591C65BE1CBDDBC762E54A_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = (int32_t)(&___value1)->____length_1;
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppChar));
	}
	{
		bool L_2;
		L_2 = ((  bool (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (int32_t)(&___span0)->____length_1;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___span0;
		Il2CppChar* L_6;
		L_6 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___value1;
		Il2CppChar* L_9;
		L_9 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = V_0;
		uint64_t L_12 = V_1;
		bool L_13;
		L_13 = SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9(L_7, L_10, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_11), (int64_t)L_12)), NULL);
		return L_13;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(&___span0)->____length_1;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_16 = ___span0;
		Il2CppChar* L_17;
		L_17 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_18 = ___value1;
		Il2CppChar* L_19;
		L_19 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_20 = V_0;
		bool L_21;
		L_21 = ((  bool (*) (Il2CppChar*, Il2CppChar*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_17, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_21;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Boolean System.MemoryExtensions::StartsWith<System.Object>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryExtensions_StartsWith_TisRuntimeObject_mCEF2121A34B2D6E7CE8774BD9CCDADEEEE513471_gshared (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___span0, ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = (int32_t)(&___value1)->____length_1;
		V_0 = L_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_2;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		bool L_2;
		L_2 = ((  bool (*) (uint64_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = (int32_t)(&___span0)->____length_1;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_004b;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_5 = ___span0;
		RuntimeObject** L_6;
		L_6 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>(L_6);
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_8 = ___value1;
		RuntimeObject** L_9;
		L_9 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint8_t>(L_9);
		int32_t L_11 = V_0;
		uint64_t L_12 = V_1;
		bool L_13;
		L_13 = SpanHelpers_SequenceEqual_m1E48A72FE6321C8B208D7CB9368C2CB6416589E9(L_7, L_10, (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_11), (int64_t)L_12)), NULL);
		return L_13;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = (int32_t)(&___span0)->____length_1;
		if ((((int32_t)L_14) > ((int32_t)L_15)))
		{
			goto IL_006a;
		}
	}
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_16 = ___span0;
		RuntimeObject** L_17;
		L_17 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_16, il2cpp_rgctx_method(method->rgctx_data, 2));
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_18 = ___value1;
		RuntimeObject** L_19;
		L_19 = ((  RuntimeObject** (*) (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_18, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_20 = V_0;
		bool L_21;
		L_21 = ((  bool (*) (RuntimeObject**, RuntimeObject**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_17, L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_21;
	}

IL_006a:
	{
		return (bool)0;
	}
}
// System.Span`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.Char>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5BE136242C677F10C3676D1C04A2D6FE79C2DFDC_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5BE136242C677F10C3676D1C04A2D6FE79C2DFDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m6A58AD8706EDDB4CE9C309A6085249B6377C8CB5(L_1, NULL);
	}

IL_0016:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___span0;
		Il2CppChar* L_3;
		L_3 = ((  Il2CppChar* (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		int32_t L_5 = (int32_t)(&___span0)->____length_1;
		int32_t L_6;
		L_6 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if (((int64_t)L_5 * (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 * (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5BE136242C677F10C3676D1C04A2D6FE79C2DFDC_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_7), L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_RuntimeMethod_var);
		return L_7;
	}
}
// System.Memory`1<T> System.Runtime.InteropServices.MemoryMarshal::AsMemory<System.Object>(System.ReadOnlyMemory`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA MemoryMarshal_AsMemory_TisRuntimeObject_m502903928546F12A3E86595F57DABC0AEC297915_gshared (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC ___memory0, const RuntimeMethod* method) 
{
	{
		Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA* L_0;
		L_0 = il2cpp_unsafe_as_ref<Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA>((&___memory0));
		Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA L_1 = (*(Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA*)L_0);
		return L_1;
	}
}
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<System.Char>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryMarshal_CreateReadOnlySpan_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m4C99F188FD105A3E70DD671912CE4CA9C2978668_gshared (Il2CppChar* ___reference0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___reference0;
		int32_t L_1 = ___length1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_2), L_0, L_1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<System.Object>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 MemoryMarshal_CreateReadOnlySpan_TisRuntimeObject_mCD096274746EAB84EDB752DFA7B9B515E3A32ECE_gshared (RuntimeObject** ___reference0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___reference0;
		int32_t L_1 = ___length1;
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_inline((&L_2), L_0, L_1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetNonNullPinnableReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetNonNullPinnableReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m04DBAE8B0AE66771F97CC5521C09C3F17DE1D0AA_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___span0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)L_2.____pointer_0;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetNonNullPinnableReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetNonNullPinnableReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD69627FDEF15E6AB8EA9B01F433DA2C546104B9F_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		uint8_t* L_1;
		L_1 = il2cpp_unsafe_as_ref<uint8_t>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___span0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_3 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)L_2.____pointer_0;
		V_0 = L_3;
		uint8_t* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetNonNullPinnableReference<System.Char>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetNonNullPinnableReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA3F84C1C1D8C4299E6755D7D31C64298160D49FC_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___span0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)L_2.____pointer_0;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetNonNullPinnableReference<System.Char>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetNonNullPinnableReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC10D2A25724E8903E27BC5621610F7390FAAEA4C_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		Il2CppChar* L_1;
		L_1 = il2cpp_unsafe_as_ref<Il2CppChar>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___span0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_3 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)L_2.____pointer_0;
		V_0 = L_3;
		Il2CppChar* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetNonNullPinnableReference<System.Object>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** MemoryMarshal_GetNonNullPinnableReference_TisRuntimeObject_m3FD2E99EB8ECAB8C95D19171A7092B5616F72BA6_gshared (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject** L_1;
		L_1 = il2cpp_unsafe_as_ref<RuntimeObject*>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_2 = ___span0;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_3 = (ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524)L_2.____pointer_0;
		V_0 = L_3;
		RuntimeObject** L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetNonNullPinnableReference<System.Object>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** MemoryMarshal_GetNonNullPinnableReference_TisRuntimeObject_m57971A396FEA448D892915F32B22B7E289CA6410_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)(&___span0)->____length_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject** L_1;
		L_1 = il2cpp_unsafe_as_ref<RuntimeObject*>((void*)((intptr_t)1));
		return L_1;
	}

IL_0011:
	{
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_2 = ___span0;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_3 = (ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524)L_2.____pointer_0;
		V_0 = L_3;
		RuntimeObject** L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		return L_4;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mE630BC590135F8CE4B147BB7DF7DD45C759397E5_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___span0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)L_0.____pointer_0;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m59D122F4A8516149EE7D183E97926157DF41EA1B_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_0 = ___span0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)L_0.____pointer_0;
		V_0 = L_1;
		uint8_t* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m90426C97E513B64C17AE47E597545E6686B0900E_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___span0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)L_0.____pointer_0;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Char>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* MemoryMarshal_GetReference_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBD33119A0D4C3505D04575DA5E6A97187B283A71_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_0 = ___span0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1 = (ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5)L_0.____pointer_0;
		V_0 = L_1;
		Il2CppChar* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Object>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** MemoryMarshal_GetReference_TisRuntimeObject_mC18D7876AB9F596D7AA9F5CB57CCBFC4AD778EE2_gshared (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95 L_0 = ___span0;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_1 = (ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524)L_0.____pointer_0;
		V_0 = L_1;
		RuntimeObject** L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Object>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** MemoryMarshal_GetReference_TisRuntimeObject_mFA4DFAAC91DE844C7ABFCA8B28CC9740EEB73838_gshared (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 ___span0, const RuntimeMethod* method) 
{
	ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2 L_0 = ___span0;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_1 = (ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524)L_0.____pointer_0;
		V_0 = L_1;
		RuntimeObject** L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(RuntimeObject*, (Il2CppByReference*)(&V_0));
		return L_2;
	}
}
// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetArray<System.Byte>(System.ReadOnlyMemory`1<T>,System.ArraySegment`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMarshal_TryGetArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1719D3ED6309C8AC7343714326361A9F5D130E3A_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___memory0, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___segment1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ReadOnlyMemory_1_GetObjectStartLength_mA440F4E402507F256E8E66C774E9044CB0092073_inline((&___memory0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* >::Invoke(6 /* System.Boolean System.Buffers.MemoryManager`1<System.Byte>::TryGetArray(System.ArraySegment`1<T>&) */, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))), (&V_3));
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_4 = ___segment1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(&V_3)->____array_1;
		int32_t L_6 = (int32_t)(&V_3)->____offset_2;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_9;
		memset((&L_9), 0, sizeof(L_9));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_9), L_5, ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7&((int32_t)2147483647LL))))), L_8, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_4)->____array_1), (void*)NULL);
		return (bool)1;
	}

IL_0043:
	{
		RuntimeObject* L_10 = V_0;
		V_4 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 5)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_4;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_12 = ___segment1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_4;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_16), L_13, L_14, ((int32_t)(L_15&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_12 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_12)->____array_1), (void*)NULL);
		return (bool)1;
	}

IL_0066:
	{
		int32_t L_17 = V_2;
		if (((int32_t)(L_17&((int32_t)2147483647LL))))
		{
			goto IL_007c;
		}
	}
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_18 = ___segment1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_19 = ((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 6)))->___U3CEmptyU3Ek__BackingField_0;
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_18)->____array_1), (void*)NULL);
		return (bool)1;
	}

IL_007c:
	{
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_20 = ___segment1;
		il2cpp_codegen_initobj(L_20, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		return (bool)0;
	}
}
// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetArray<System.Object>(System.ReadOnlyMemory`1<T>,System.ArraySegment`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMarshal_TryGetArray_TisRuntimeObject_m7FF150564E601428A4F80A8548F968638B270189_gshared (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC ___memory0, ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F* ___segment1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F V_3;
	memset((&V_3), 0, sizeof(V_3));
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_4 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ReadOnlyMemory_1_GetObjectStartLength_m3CE58FA492D3EFAAFAC0B0011726429FBFEB1749_inline((&___memory0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F* >::Invoke(6 /* System.Boolean System.Buffers.MemoryManager`1<System.Object>::TryGetArray(System.ArraySegment`1<T>&) */, ((MemoryManager_1_tBAF3647DFCE79C4FF2E7BDDE3253C80661260030*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))), (&V_3));
		if (!L_3)
		{
			goto IL_0066;
		}
	}
	{
		ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F* L_4 = ___segment1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(&V_3)->____array_1;
		int32_t L_6 = (int32_t)(&V_3)->____offset_2;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F L_9;
		memset((&L_9), 0, sizeof(L_9));
		ArraySegment_1__ctor_mECAEBAE7A0D9B39D34875377BC3508D16A2B6CB9((&L_9), L_5, ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)(L_7&((int32_t)2147483647LL))))), L_8, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F*)L_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F*)L_4)->____array_1), (void*)NULL);
		return (bool)1;
	}

IL_0043:
	{
		RuntimeObject* L_10 = V_0;
		V_4 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 5)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_4;
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F* L_12 = ___segment1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_4;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F L_16;
		memset((&L_16), 0, sizeof(L_16));
		ArraySegment_1__ctor_mECAEBAE7A0D9B39D34875377BC3508D16A2B6CB9((&L_16), L_13, L_14, ((int32_t)(L_15&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F*)L_12 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F*)L_12)->____array_1), (void*)NULL);
		return (bool)1;
	}

IL_0066:
	{
		int32_t L_17 = V_2;
		if (((int32_t)(L_17&((int32_t)2147483647LL))))
		{
			goto IL_007c;
		}
	}
	{
		ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F* L_18 = ___segment1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 6));
		ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F L_19 = ((ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 6)))->___U3CEmptyU3Ek__BackingField_0;
		*(ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F*)L_18 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F*)L_18)->____array_1), (void*)NULL);
		return (bool)1;
	}

IL_007c:
	{
		ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F* L_20 = ___segment1;
		il2cpp_codegen_initobj(L_20, sizeof(ArraySegment_1_t199BE877B98FC94CCFAAD9CADA95807C92AECD2F));
		return (bool)0;
	}
}
// T[] System.IO.MonoLinqHelper::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MonoLinqHelper_ToArray_TisRuntimeObject_m94EBC099EC4C4F5B600E14E8F7029F52840C5B4B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___source0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.ValueTuple`2<System.Object,System.Object>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A_m2B8BD8A855B122FC27F3768D0EBBC9187AF9A55D_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB96BD4A8A5DEAD924F0B6317E053F8F71F2C2F53_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF854966FBB78C08BF962CB33923F9BB9EFEBE043_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5EA67D574C58895F208D8449D7858961CA94B447_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m480884E80AD19B924402E5FE4CACC4825A4DF849_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m10F5A9E08EC561A613F7E31EBCF9FCCC39197C43_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Resources.ResourceLocator>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mCE576D717FA61005D2A061344F9EC1B3DF4B1E26_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::GetterAdapterFrame<System.Object,System.Object>(System.Reflection.RuntimePropertyInfo/Getter`2<T,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisRuntimeObject_TisRuntimeObject_m143CA3F03F7D48E84462C82A9BBF90BB3097C1E7_gshared (Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D* ___getter0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	{
		Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D* L_0 = ___getter0;
		RuntimeObject* L_1 = ___obj1;
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (Getter_2_t10A1DA06B72A5F8B2DC213ACFB609284774C458D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_0, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::StaticGetterAdapterFrame<System.Object>(System.Reflection.RuntimePropertyInfo/StaticGetter`1<R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisRuntimeObject_mEC066122DBDDE4EB896DE7BC7C5E3D0349C5A7D7_gshared (StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3* ___getter0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	{
		StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3* L_0 = ___getter0;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (StaticGetter_1_tADDCE76D876792EE2DFA4AFF7D1C98F61D6A91A3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// System.Int32 System.SpanHelpers::IndexOf<System.Byte>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBB3BAA9F841FA425BAF5FD1234457A31FB2AC063_gshared (uint8_t* ___searchSpace0, uint8_t ___value1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		uint8_t* L_2 = ___searchSpace0;
		intptr_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_2, L_3);
		uint8_t L_5 = (*(uint8_t*)L_4);
		bool L_6;
		L_6 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_7 = ___searchSpace0;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_8, 1, NULL);
		uint8_t* L_10;
		L_10 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_7, L_9);
		uint8_t L_11 = (*(uint8_t*)L_10);
		bool L_12;
		L_12 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_13 = ___searchSpace0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_14, 2, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_13, L_15);
		uint8_t L_17 = (*(uint8_t*)L_16);
		bool L_18;
		L_18 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_19 = ___searchSpace0;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_20, 3, NULL);
		uint8_t* L_22;
		L_22 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_19, L_21);
		uint8_t L_23 = (*(uint8_t*)L_22);
		bool L_24;
		L_24 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_23, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		uint8_t* L_25 = ___searchSpace0;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_26, 4, NULL);
		uint8_t* L_28;
		L_28 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_25, L_27);
		uint8_t L_29 = (*(uint8_t*)L_28);
		bool L_30;
		L_30 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_29, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		uint8_t* L_31 = ___searchSpace0;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_32, 5, NULL);
		uint8_t* L_34;
		L_34 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_31, L_33);
		uint8_t L_35 = (*(uint8_t*)L_34);
		bool L_36;
		L_36 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_35, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		uint8_t* L_37 = ___searchSpace0;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_38, 6, NULL);
		uint8_t* L_40;
		L_40 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_37, L_39);
		uint8_t L_41 = (*(uint8_t*)L_40);
		bool L_42;
		L_42 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_41, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		uint8_t* L_43 = ___searchSpace0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_44, 7, NULL);
		uint8_t* L_46;
		L_46 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_43, L_45);
		uint8_t L_47 = (*(uint8_t*)L_46);
		bool L_48;
		L_48 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_47, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___length2;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___length2;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		uint8_t* L_54 = ___searchSpace0;
		intptr_t L_55 = V_0;
		uint8_t* L_56;
		L_56 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_54, L_55);
		uint8_t L_57 = (*(uint8_t*)L_56);
		bool L_58;
		L_58 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_57, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		uint8_t* L_59 = ___searchSpace0;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_60, 1, NULL);
		uint8_t* L_62;
		L_62 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_59, L_61);
		uint8_t L_63 = (*(uint8_t*)L_62);
		bool L_64;
		L_64 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_63, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		uint8_t* L_65 = ___searchSpace0;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_66, 2, NULL);
		uint8_t* L_68;
		L_68 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_65, L_67);
		uint8_t L_69 = (*(uint8_t*)L_68);
		bool L_70;
		L_70 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_69, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		uint8_t* L_71 = ___searchSpace0;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_72, 3, NULL);
		uint8_t* L_74;
		L_74 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_71, L_73);
		uint8_t L_75 = (*(uint8_t*)L_74);
		bool L_76;
		L_76 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_75, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		uint8_t* L_79 = ___searchSpace0;
		intptr_t L_80 = V_0;
		uint8_t* L_81;
		L_81 = il2cpp_unsafe_add<uint8_t,intptr_t>(L_79, L_80);
		uint8_t L_82 = (*(uint8_t*)L_81);
		bool L_83;
		L_83 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___value1), L_82, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___length2;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// System.Int32 System.SpanHelpers::IndexOf<System.Char>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m5CB276D4B8417767868329854B1EC29D7531BA74_gshared (Il2CppChar* ___searchSpace0, Il2CppChar ___value1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppChar* L_2 = ___searchSpace0;
		intptr_t L_3 = V_0;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_2, L_3);
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		bool L_6;
		L_6 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_7 = ___searchSpace0;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_8, 1, NULL);
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_7, L_9);
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_13 = ___searchSpace0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_14, 2, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15);
		Il2CppChar L_17 = (*(Il2CppChar*)L_16);
		bool L_18;
		L_18 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_17, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_19 = ___searchSpace0;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_20, 3, NULL);
		Il2CppChar* L_22;
		L_22 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_19, L_21);
		Il2CppChar L_23 = (*(Il2CppChar*)L_22);
		bool L_24;
		L_24 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_23, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppChar* L_25 = ___searchSpace0;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_26, 4, NULL);
		Il2CppChar* L_28;
		L_28 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_25, L_27);
		Il2CppChar L_29 = (*(Il2CppChar*)L_28);
		bool L_30;
		L_30 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_29, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppChar* L_31 = ___searchSpace0;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_32, 5, NULL);
		Il2CppChar* L_34;
		L_34 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_31, L_33);
		Il2CppChar L_35 = (*(Il2CppChar*)L_34);
		bool L_36;
		L_36 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_35, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppChar* L_37 = ___searchSpace0;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_38, 6, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39);
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_41, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppChar* L_43 = ___searchSpace0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_44, 7, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45);
		Il2CppChar L_47 = (*(Il2CppChar*)L_46);
		bool L_48;
		L_48 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_47, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___length2;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___length2;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		Il2CppChar* L_54 = ___searchSpace0;
		intptr_t L_55 = V_0;
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_54, L_55);
		Il2CppChar L_57 = (*(Il2CppChar*)L_56);
		bool L_58;
		L_58 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_57, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppChar* L_59 = ___searchSpace0;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_60, 1, NULL);
		Il2CppChar* L_62;
		L_62 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_59, L_61);
		Il2CppChar L_63 = (*(Il2CppChar*)L_62);
		bool L_64;
		L_64 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_63, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppChar* L_65 = ___searchSpace0;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_66, 2, NULL);
		Il2CppChar* L_68;
		L_68 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_65, L_67);
		Il2CppChar L_69 = (*(Il2CppChar*)L_68);
		bool L_70;
		L_70 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_69, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppChar* L_71 = ___searchSpace0;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_72, 3, NULL);
		Il2CppChar* L_74;
		L_74 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_71, L_73);
		Il2CppChar L_75 = (*(Il2CppChar*)L_74);
		bool L_76;
		L_76 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_75, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppChar* L_79 = ___searchSpace0;
		intptr_t L_80 = V_0;
		Il2CppChar* L_81;
		L_81 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_79, L_80);
		Il2CppChar L_82 = (*(Il2CppChar*)L_81);
		bool L_83;
		L_83 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___value1), L_82, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___length2;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// System.Int32 System.SpanHelpers::IndexOf<System.Object>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisRuntimeObject_m9D3BF0167C10D932AB529D840AC14E953243EAFA_gshared (RuntimeObject** ___searchSpace0, RuntimeObject* ___value1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		RuntimeObject** L_2 = ___searchSpace0;
		intptr_t L_3 = V_0;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_2, L_3);
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_5);
		if (L_6)
		{
			goto IL_0202;
		}
	}
	{
		RuntimeObject** L_7 = ___searchSpace0;
		intptr_t L_8 = V_0;
		intptr_t L_9;
		L_9 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_8, 1, NULL);
		RuntimeObject** L_10;
		L_10 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_7, L_9);
		RuntimeObject* L_11 = (*(RuntimeObject**)L_10);
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_11);
		if (L_12)
		{
			goto IL_020a;
		}
	}
	{
		RuntimeObject** L_13 = ___searchSpace0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_14, 2, NULL);
		RuntimeObject** L_16;
		L_16 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_13, L_15);
		RuntimeObject* L_17 = (*(RuntimeObject**)L_16);
		bool L_18;
		L_18 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_17);
		if (L_18)
		{
			goto IL_0218;
		}
	}
	{
		RuntimeObject** L_19 = ___searchSpace0;
		intptr_t L_20 = V_0;
		intptr_t L_21;
		L_21 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_20, 3, NULL);
		RuntimeObject** L_22;
		L_22 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_19, L_21);
		RuntimeObject* L_23 = (*(RuntimeObject**)L_22);
		bool L_24;
		L_24 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_23);
		if (L_24)
		{
			goto IL_0226;
		}
	}
	{
		RuntimeObject** L_25 = ___searchSpace0;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_26, 4, NULL);
		RuntimeObject** L_28;
		L_28 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_25, L_27);
		RuntimeObject* L_29 = (*(RuntimeObject**)L_28);
		bool L_30;
		L_30 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_29);
		if (L_30)
		{
			goto IL_0234;
		}
	}
	{
		RuntimeObject** L_31 = ___searchSpace0;
		intptr_t L_32 = V_0;
		intptr_t L_33;
		L_33 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_32, 5, NULL);
		RuntimeObject** L_34;
		L_34 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_31, L_33);
		RuntimeObject* L_35 = (*(RuntimeObject**)L_34);
		bool L_36;
		L_36 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_35);
		if (L_36)
		{
			goto IL_0242;
		}
	}
	{
		RuntimeObject** L_37 = ___searchSpace0;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_38, 6, NULL);
		RuntimeObject** L_40;
		L_40 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_37, L_39);
		RuntimeObject* L_41 = (*(RuntimeObject**)L_40);
		bool L_42;
		L_42 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_41);
		if (L_42)
		{
			goto IL_0250;
		}
	}
	{
		RuntimeObject** L_43 = ___searchSpace0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_44, 7, NULL);
		RuntimeObject** L_46;
		L_46 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_43, L_45);
		RuntimeObject* L_47 = (*(RuntimeObject**)L_46);
		bool L_48;
		L_48 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_47);
		if (L_48)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_49 = V_0;
		intptr_t L_50;
		L_50 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_49, 8, NULL);
		V_0 = L_50;
	}

IL_0133:
	{
		int32_t L_51 = ___length2;
		if ((((int32_t)L_51) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_52 = ___length2;
		if ((((int32_t)L_52) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_53 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_53, 4));
		RuntimeObject** L_54 = ___searchSpace0;
		intptr_t L_55 = V_0;
		RuntimeObject** L_56;
		L_56 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_54, L_55);
		RuntimeObject* L_57 = (*(RuntimeObject**)L_56);
		bool L_58;
		L_58 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_57);
		if (L_58)
		{
			goto IL_0202;
		}
	}
	{
		RuntimeObject** L_59 = ___searchSpace0;
		intptr_t L_60 = V_0;
		intptr_t L_61;
		L_61 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_60, 1, NULL);
		RuntimeObject** L_62;
		L_62 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_59, L_61);
		RuntimeObject* L_63 = (*(RuntimeObject**)L_62);
		bool L_64;
		L_64 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_63);
		if (L_64)
		{
			goto IL_020a;
		}
	}
	{
		RuntimeObject** L_65 = ___searchSpace0;
		intptr_t L_66 = V_0;
		intptr_t L_67;
		L_67 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_66, 2, NULL);
		RuntimeObject** L_68;
		L_68 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_65, L_67);
		RuntimeObject* L_69 = (*(RuntimeObject**)L_68);
		bool L_70;
		L_70 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_69);
		if (L_70)
		{
			goto IL_0218;
		}
	}
	{
		RuntimeObject** L_71 = ___searchSpace0;
		intptr_t L_72 = V_0;
		intptr_t L_73;
		L_73 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_72, 3, NULL);
		RuntimeObject** L_74;
		L_74 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_71, L_73);
		RuntimeObject* L_75 = (*(RuntimeObject**)L_74);
		bool L_76;
		L_76 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_75);
		if (L_76)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_77 = V_0;
		intptr_t L_78;
		L_78 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_77, 4, NULL);
		V_0 = L_78;
		goto IL_01fc;
	}

IL_01d4:
	{
		RuntimeObject** L_79 = ___searchSpace0;
		intptr_t L_80 = V_0;
		RuntimeObject** L_81;
		L_81 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_79, L_80);
		RuntimeObject* L_82 = (*(RuntimeObject**)L_81);
		bool L_83;
		L_83 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(___value1), L_82);
		if (L_83)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_84 = V_0;
		intptr_t L_85;
		L_85 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_84, 1, NULL);
		V_0 = L_85;
		int32_t L_86 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
	}

IL_01fc:
	{
		int32_t L_87 = ___length2;
		if ((((int32_t)L_87) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_88 = V_0;
		void* L_89;
		L_89 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_88, NULL);
		return ((int32_t)(intptr_t)L_89);
	}

IL_020a:
	{
		intptr_t L_90 = V_0;
		intptr_t L_91;
		L_91 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_90, 1, NULL);
		void* L_92;
		L_92 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_91, NULL);
		return ((int32_t)(intptr_t)L_92);
	}

IL_0218:
	{
		intptr_t L_93 = V_0;
		intptr_t L_94;
		L_94 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_93, 2, NULL);
		void* L_95;
		L_95 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_94, NULL);
		return ((int32_t)(intptr_t)L_95);
	}

IL_0226:
	{
		intptr_t L_96 = V_0;
		intptr_t L_97;
		L_97 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_96, 3, NULL);
		void* L_98;
		L_98 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_97, NULL);
		return ((int32_t)(intptr_t)L_98);
	}

IL_0234:
	{
		intptr_t L_99 = V_0;
		intptr_t L_100;
		L_100 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_99, 4, NULL);
		void* L_101;
		L_101 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_100, NULL);
		return ((int32_t)(intptr_t)L_101);
	}

IL_0242:
	{
		intptr_t L_102 = V_0;
		intptr_t L_103;
		L_103 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_102, 5, NULL);
		void* L_104;
		L_104 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_103, NULL);
		return ((int32_t)(intptr_t)L_104);
	}

IL_0250:
	{
		intptr_t L_105 = V_0;
		intptr_t L_106;
		L_106 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_105, 6, NULL);
		void* L_107;
		L_107 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_106, NULL);
		return ((int32_t)(intptr_t)L_107);
	}

IL_025e:
	{
		intptr_t L_108 = V_0;
		intptr_t L_109;
		L_109 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_108, 7, NULL);
		void* L_110;
		L_110 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_109, NULL);
		return ((int32_t)(intptr_t)L_110);
	}
}
// System.Int32 System.SpanHelpers::IndexOfAny<System.Char>(T&,System.Int32,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mFE903475F73440A5CFC7002CFF50C139D5C9D671_gshared (Il2CppChar* ___searchSpace0, int32_t ___searchSpaceLength1, Il2CppChar* ___value2, int32_t ___valueLength3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___valueLength3;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		Il2CppChar* L_1 = ___searchSpace0;
		Il2CppChar* L_2 = ___value2;
		int32_t L_3 = V_1;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_2, L_3);
		Il2CppChar L_5 = (*(Il2CppChar*)L_4);
		int32_t L_6 = ___searchSpaceLength1;
		int32_t L_7;
		L_7 = ((  int32_t (*) (Il2CppChar*, Il2CppChar, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___searchSpaceLength1 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___valueLength3;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Int32 System.SpanHelpers::IndexOfAny<System.Object>(T&,System.Int32,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisRuntimeObject_m8A9C2038FD3542B7B9C0043DC5EE54C16F468CF4_gshared (RuntimeObject** ___searchSpace0, int32_t ___searchSpaceLength1, RuntimeObject** ___value2, int32_t ___valueLength3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___valueLength3;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		RuntimeObject** L_1 = ___searchSpace0;
		RuntimeObject** L_2 = ___value2;
		int32_t L_3 = V_1;
		RuntimeObject** L_4;
		L_4 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_2, L_3);
		RuntimeObject* L_5 = (*(RuntimeObject**)L_4);
		int32_t L_6 = ___searchSpaceLength1;
		int32_t L_7;
		L_7 = ((  int32_t (*) (RuntimeObject**, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___searchSpaceLength1 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___valueLength3;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Boolean System.SpanHelpers::SequenceEqual<System.Char>(T&,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC5F508F4FBF6832CC2DF1F8D4A3803C757817B41_gshared (Il2CppChar* ___first0, Il2CppChar* ___second1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar* L_0 = ___first0;
		Il2CppChar* L_1 = ___second1;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppChar* L_5 = ___first0;
		intptr_t L_6 = V_0;
		Il2CppChar* L_7;
		L_7 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_5, L_6);
		Il2CppChar* L_8 = ___second1;
		intptr_t L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_8, L_9);
		Il2CppChar L_11 = (*(Il2CppChar*)L_10);
		bool L_12;
		L_12 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_7, L_11, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_12)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_13 = ___first0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_14, 1, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_13, L_15);
		Il2CppChar* L_17 = ___second1;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_18, 1, NULL);
		Il2CppChar* L_20;
		L_20 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_17, L_19);
		Il2CppChar L_21 = (*(Il2CppChar*)L_20);
		bool L_22;
		L_22 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_16, L_21, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_22)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_23 = ___first0;
		intptr_t L_24 = V_0;
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_24, 2, NULL);
		Il2CppChar* L_26;
		L_26 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_23, L_25);
		Il2CppChar* L_27 = ___second1;
		intptr_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_28, 2, NULL);
		Il2CppChar* L_30;
		L_30 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_27, L_29);
		Il2CppChar L_31 = (*(Il2CppChar*)L_30);
		bool L_32;
		L_32 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_26, L_31, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_32)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_33 = ___first0;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_34, 3, NULL);
		Il2CppChar* L_36;
		L_36 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_33, L_35);
		Il2CppChar* L_37 = ___second1;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_38, 3, NULL);
		Il2CppChar* L_40;
		L_40 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_37, L_39);
		Il2CppChar L_41 = (*(Il2CppChar*)L_40);
		bool L_42;
		L_42 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_36, L_41, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_42)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_43 = ___first0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_44, 4, NULL);
		Il2CppChar* L_46;
		L_46 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_43, L_45);
		Il2CppChar* L_47 = ___second1;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_48, 4, NULL);
		Il2CppChar* L_50;
		L_50 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_47, L_49);
		Il2CppChar L_51 = (*(Il2CppChar*)L_50);
		bool L_52;
		L_52 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_46, L_51, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_52)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_53 = ___first0;
		intptr_t L_54 = V_0;
		intptr_t L_55;
		L_55 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_54, 5, NULL);
		Il2CppChar* L_56;
		L_56 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_53, L_55);
		Il2CppChar* L_57 = ___second1;
		intptr_t L_58 = V_0;
		intptr_t L_59;
		L_59 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_58, 5, NULL);
		Il2CppChar* L_60;
		L_60 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_57, L_59);
		Il2CppChar L_61 = (*(Il2CppChar*)L_60);
		bool L_62;
		L_62 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_56, L_61, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_62)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_63 = ___first0;
		intptr_t L_64 = V_0;
		intptr_t L_65;
		L_65 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_64, 6, NULL);
		Il2CppChar* L_66;
		L_66 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_63, L_65);
		Il2CppChar* L_67 = ___second1;
		intptr_t L_68 = V_0;
		intptr_t L_69;
		L_69 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_68, 6, NULL);
		Il2CppChar* L_70;
		L_70 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_67, L_69);
		Il2CppChar L_71 = (*(Il2CppChar*)L_70);
		bool L_72;
		L_72 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_66, L_71, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_72)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_73 = ___first0;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_74, 7, NULL);
		Il2CppChar* L_76;
		L_76 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_73, L_75);
		Il2CppChar* L_77 = ___second1;
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_78, 7, NULL);
		Il2CppChar* L_80;
		L_80 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_77, L_79);
		Il2CppChar L_81 = (*(Il2CppChar*)L_80);
		bool L_82;
		L_82 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_76, L_81, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_82)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_83, 8, NULL);
		V_0 = L_84;
	}

IL_0191:
	{
		int32_t L_85 = ___length2;
		if ((((int32_t)L_85) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_86 = ___length2;
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_87 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_87, 4));
		Il2CppChar* L_88 = ___first0;
		intptr_t L_89 = V_0;
		Il2CppChar* L_90;
		L_90 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_88, L_89);
		Il2CppChar* L_91 = ___second1;
		intptr_t L_92 = V_0;
		Il2CppChar* L_93;
		L_93 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_91, L_92);
		Il2CppChar L_94 = (*(Il2CppChar*)L_93);
		bool L_95;
		L_95 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_90, L_94, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_95)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_96 = ___first0;
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_97, 1, NULL);
		Il2CppChar* L_99;
		L_99 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_96, L_98);
		Il2CppChar* L_100 = ___second1;
		intptr_t L_101 = V_0;
		intptr_t L_102;
		L_102 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_101, 1, NULL);
		Il2CppChar* L_103;
		L_103 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_100, L_102);
		Il2CppChar L_104 = (*(Il2CppChar*)L_103);
		bool L_105;
		L_105 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_99, L_104, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_105)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_106 = ___first0;
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_107, 2, NULL);
		Il2CppChar* L_109;
		L_109 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_106, L_108);
		Il2CppChar* L_110 = ___second1;
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_111, 2, NULL);
		Il2CppChar* L_113;
		L_113 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_110, L_112);
		Il2CppChar L_114 = (*(Il2CppChar*)L_113);
		bool L_115;
		L_115 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_109, L_114, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppChar* L_116 = ___first0;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_117, 3, NULL);
		Il2CppChar* L_119;
		L_119 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_116, L_118);
		Il2CppChar* L_120 = ___second1;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_121, 3, NULL);
		Il2CppChar* L_123;
		L_123 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_120, L_122);
		Il2CppChar L_124 = (*(Il2CppChar*)L_123);
		bool L_125;
		L_125 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_119, L_124, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_125)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_126 = V_0;
		intptr_t L_127;
		L_127 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_126, 4, NULL);
		V_0 = L_127;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppChar* L_128 = ___first0;
		intptr_t L_129 = V_0;
		Il2CppChar* L_130;
		L_130 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_128, L_129);
		Il2CppChar* L_131 = ___second1;
		intptr_t L_132 = V_0;
		Il2CppChar* L_133;
		L_133 = il2cpp_unsafe_add<Il2CppChar,intptr_t>(L_131, L_132);
		Il2CppChar L_134 = (*(Il2CppChar*)L_133);
		bool L_135;
		L_135 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(L_130, L_134, il2cpp_rgctx_method(method->rgctx_data, 2));
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_136 = V_0;
		intptr_t L_137;
		L_137 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_136, 1, NULL);
		V_0 = L_137;
		int32_t L_138 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_0285:
	{
		int32_t L_139 = ___length2;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
// System.Boolean System.SpanHelpers::SequenceEqual<System.Object>(T&,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisRuntimeObject_m07C45A815A79B26EE1674D4E916ED15AE30E23D5_gshared (RuntimeObject** ___first0, RuntimeObject** ___second1, int32_t ___length2, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject** L_0 = ___first0;
		RuntimeObject** L_1 = ___second1;
		bool L_2;
		L_2 = il2cpp_unsafe_are_same(L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		RuntimeObject** L_5 = ___first0;
		intptr_t L_6 = V_0;
		RuntimeObject** L_7;
		L_7 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_5, L_6);
		RuntimeObject** L_8 = ___second1;
		intptr_t L_9 = V_0;
		RuntimeObject** L_10;
		L_10 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_8, L_9);
		RuntimeObject* L_11 = (*(RuntimeObject**)L_10);
		bool L_12;
		L_12 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_7), L_11);
		if (!L_12)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_13 = ___first0;
		intptr_t L_14 = V_0;
		intptr_t L_15;
		L_15 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_14, 1, NULL);
		RuntimeObject** L_16;
		L_16 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_13, L_15);
		RuntimeObject** L_17 = ___second1;
		intptr_t L_18 = V_0;
		intptr_t L_19;
		L_19 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_18, 1, NULL);
		RuntimeObject** L_20;
		L_20 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_17, L_19);
		RuntimeObject* L_21 = (*(RuntimeObject**)L_20);
		bool L_22;
		L_22 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_16), L_21);
		if (!L_22)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_23 = ___first0;
		intptr_t L_24 = V_0;
		intptr_t L_25;
		L_25 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_24, 2, NULL);
		RuntimeObject** L_26;
		L_26 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_23, L_25);
		RuntimeObject** L_27 = ___second1;
		intptr_t L_28 = V_0;
		intptr_t L_29;
		L_29 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_28, 2, NULL);
		RuntimeObject** L_30;
		L_30 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_27, L_29);
		RuntimeObject* L_31 = (*(RuntimeObject**)L_30);
		bool L_32;
		L_32 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_26), L_31);
		if (!L_32)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_33 = ___first0;
		intptr_t L_34 = V_0;
		intptr_t L_35;
		L_35 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_34, 3, NULL);
		RuntimeObject** L_36;
		L_36 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_33, L_35);
		RuntimeObject** L_37 = ___second1;
		intptr_t L_38 = V_0;
		intptr_t L_39;
		L_39 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_38, 3, NULL);
		RuntimeObject** L_40;
		L_40 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_37, L_39);
		RuntimeObject* L_41 = (*(RuntimeObject**)L_40);
		bool L_42;
		L_42 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_36), L_41);
		if (!L_42)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_43 = ___first0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_44, 4, NULL);
		RuntimeObject** L_46;
		L_46 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_43, L_45);
		RuntimeObject** L_47 = ___second1;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_48, 4, NULL);
		RuntimeObject** L_50;
		L_50 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_47, L_49);
		RuntimeObject* L_51 = (*(RuntimeObject**)L_50);
		bool L_52;
		L_52 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_46), L_51);
		if (!L_52)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_53 = ___first0;
		intptr_t L_54 = V_0;
		intptr_t L_55;
		L_55 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_54, 5, NULL);
		RuntimeObject** L_56;
		L_56 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_53, L_55);
		RuntimeObject** L_57 = ___second1;
		intptr_t L_58 = V_0;
		intptr_t L_59;
		L_59 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_58, 5, NULL);
		RuntimeObject** L_60;
		L_60 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_57, L_59);
		RuntimeObject* L_61 = (*(RuntimeObject**)L_60);
		bool L_62;
		L_62 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_56), L_61);
		if (!L_62)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_63 = ___first0;
		intptr_t L_64 = V_0;
		intptr_t L_65;
		L_65 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_64, 6, NULL);
		RuntimeObject** L_66;
		L_66 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_63, L_65);
		RuntimeObject** L_67 = ___second1;
		intptr_t L_68 = V_0;
		intptr_t L_69;
		L_69 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_68, 6, NULL);
		RuntimeObject** L_70;
		L_70 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_67, L_69);
		RuntimeObject* L_71 = (*(RuntimeObject**)L_70);
		bool L_72;
		L_72 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_66), L_71);
		if (!L_72)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_73 = ___first0;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_74, 7, NULL);
		RuntimeObject** L_76;
		L_76 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_73, L_75);
		RuntimeObject** L_77 = ___second1;
		intptr_t L_78 = V_0;
		intptr_t L_79;
		L_79 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_78, 7, NULL);
		RuntimeObject** L_80;
		L_80 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_77, L_79);
		RuntimeObject* L_81 = (*(RuntimeObject**)L_80);
		bool L_82;
		L_82 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_76), L_81);
		if (!L_82)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_83, 8, NULL);
		V_0 = L_84;
	}

IL_0191:
	{
		int32_t L_85 = ___length2;
		if ((((int32_t)L_85) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_86 = ___length2;
		if ((((int32_t)L_86) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_87 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_87, 4));
		RuntimeObject** L_88 = ___first0;
		intptr_t L_89 = V_0;
		RuntimeObject** L_90;
		L_90 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_88, L_89);
		RuntimeObject** L_91 = ___second1;
		intptr_t L_92 = V_0;
		RuntimeObject** L_93;
		L_93 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_91, L_92);
		RuntimeObject* L_94 = (*(RuntimeObject**)L_93);
		bool L_95;
		L_95 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_90), L_94);
		if (!L_95)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_96 = ___first0;
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_97, 1, NULL);
		RuntimeObject** L_99;
		L_99 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_96, L_98);
		RuntimeObject** L_100 = ___second1;
		intptr_t L_101 = V_0;
		intptr_t L_102;
		L_102 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_101, 1, NULL);
		RuntimeObject** L_103;
		L_103 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_100, L_102);
		RuntimeObject* L_104 = (*(RuntimeObject**)L_103);
		bool L_105;
		L_105 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_99), L_104);
		if (!L_105)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_106 = ___first0;
		intptr_t L_107 = V_0;
		intptr_t L_108;
		L_108 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_107, 2, NULL);
		RuntimeObject** L_109;
		L_109 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_106, L_108);
		RuntimeObject** L_110 = ___second1;
		intptr_t L_111 = V_0;
		intptr_t L_112;
		L_112 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_111, 2, NULL);
		RuntimeObject** L_113;
		L_113 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_110, L_112);
		RuntimeObject* L_114 = (*(RuntimeObject**)L_113);
		bool L_115;
		L_115 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_109), L_114);
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		RuntimeObject** L_116 = ___first0;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_117, 3, NULL);
		RuntimeObject** L_119;
		L_119 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_116, L_118);
		RuntimeObject** L_120 = ___second1;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_121, 3, NULL);
		RuntimeObject** L_123;
		L_123 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_120, L_122);
		RuntimeObject* L_124 = (*(RuntimeObject**)L_123);
		bool L_125;
		L_125 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_119), L_124);
		if (!L_125)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_126 = V_0;
		intptr_t L_127;
		L_127 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_126, 4, NULL);
		V_0 = L_127;
		goto IL_0285;
	}

IL_0258:
	{
		RuntimeObject** L_128 = ___first0;
		intptr_t L_129 = V_0;
		RuntimeObject** L_130;
		L_130 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_128, L_129);
		RuntimeObject** L_131 = ___second1;
		intptr_t L_132 = V_0;
		RuntimeObject** L_133;
		L_133 = il2cpp_unsafe_add<RuntimeObject*,intptr_t>(L_131, L_132);
		RuntimeObject* L_134 = (*(RuntimeObject**)L_133);
		bool L_135;
		L_135 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.IEquatable`1<System.Object>::Equals(T) */, il2cpp_rgctx_data(method->rgctx_data, 1), (RuntimeObject*)(*L_130), L_134);
		if (!L_135)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_136 = V_0;
		intptr_t L_137;
		L_137 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_136, 1, NULL);
		V_0 = L_137;
		int32_t L_138 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_138, 1));
	}

IL_0285:
	{
		int32_t L_139 = ___length2;
		if ((((int32_t)L_139) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
// System.String System.String::Create<System.ValueTuple`3<System.Object,System.Int32,System.Int32>>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_m5E409288A7637C431B8D0248F411CC1378386DE4_gshared (int32_t ___length0, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___state1, SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_m5E409288A7637C431B8D0248F411CC1378386DE4_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_m5E409288A7637C431B8D0248F411CC1378386DE4_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_8 = ___action2;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 L_13 = ___state1;
		((  void (*) (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String System.String::Create<System.ValueTuple`5<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean>>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mF676274E492719C5208121DF9AB97D732DEC1E06_gshared (int32_t ___length0, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___state1, SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mF676274E492719C5208121DF9AB97D732DEC1E06_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mF676274E492719C5208121DF9AB97D732DEC1E06_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_8 = ___action2;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_13 = ___state1;
		((  void (*) (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String System.String::Create<System.ValueTuple`8<System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.IntPtr,System.Int32,System.Boolean,System.ValueTuple`1<System.Boolean>>>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85_m22A7C4F9BF060F3D52D764B53845DD506A473A04_gshared (int32_t ___length0, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___state1, SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85_m22A7C4F9BF060F3D52D764B53845DD506A473A04_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85_m22A7C4F9BF060F3D52D764B53845DD506A473A04_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* L_8 = ___action2;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_13 = ___state1;
		((  void (*) (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String System.String::Create<System.Object>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisRuntimeObject_m4B49E10375F1BE32439BE26CBBB4F960EDD45B05_gshared (int32_t ___length0, RuntimeObject* ___state1, SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisRuntimeObject_m4B49E10375F1BE32439BE26CBBB4F960EDD45B05_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisRuntimeObject_m4B49E10375F1BE32439BE26CBBB4F960EDD45B05_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3* L_8 = ___action2;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		RuntimeObject* L_13 = ___state1;
		((  void (*) (SpanAction_2_t0CB19FBAD63F42C01432B842C5169FC10C1777E3*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 1));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.String System.String::Join<System.Object>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_m7F966936BE15193A65D544C972FAF2D35A83A221_gshared (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___separator0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_2;
	}

IL_000a:
	{
		___separator0 = G_B2_0;
		String_t* L_3 = ___separator0;
		Il2CppChar* L_4 = (Il2CppChar*)(&L_3->____firstChar_5);
		V_0 = L_4;
		Il2CppChar* L_5 = V_0;
		String_t* L_6 = ___separator0;
		int32_t L_7 = (int32_t)L_6->____stringLength_4;
		RuntimeObject* L_8 = ___values1;
		String_t* L_9;
		L_9 = ((  String_t* (*) (Il2CppChar*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Il2CppChar*)((uintptr_t)L_5), L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_9;
	}
}
// System.String System.String::JoinCore<System.Object>(System.Char*,System.Int32,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisRuntimeObject_m41B5D26FFEE1F087D7030B2722B1D0CA692595BD_gshared (Il2CppChar* ___separator0, int32_t ___separatorLength1, RuntimeObject* ___values2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		RuntimeObject* L_0 = ___values2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_JoinCore_TisRuntimeObject_m41B5D26FFEE1F087D7030B2722B1D0CA692595BD_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___values2;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_00b6;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00b6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_6 = V_0;
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				if (L_7)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				V_4 = L_8;
				goto IL_00b7;
			}

IL_0029_1:
			{
				RuntimeObject* L_9 = V_0;
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 2), L_9);
				V_1 = L_10;
				RuntimeObject* L_11 = V_1;
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				goto IL_0048_1;
			}

IL_003b_1:
			{
				String_t* L_12;
				L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (V_1));
				G_B8_0 = L_12;
			}

IL_0048_1:
			{
				V_2 = G_B8_0;
				RuntimeObject* L_13 = V_0;
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_005f_1;
				}
			}
			{
				String_t* L_15 = V_2;
				String_t* L_16 = L_15;
				G_B10_0 = L_16;
				if (L_16)
				{
					G_B11_0 = L_16;
					goto IL_005b_1;
				}
			}
			{
				String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
				G_B11_0 = L_17;
			}

IL_005b_1:
			{
				V_4 = G_B11_0;
				goto IL_00b7;
			}

IL_005f_1:
			{
				StringBuilder_t* L_18;
				L_18 = StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1(((int32_t)16), NULL);
				V_3 = L_18;
				StringBuilder_t* L_19 = V_3;
				String_t* L_20 = V_2;
				StringBuilder_t* L_21;
				L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, L_20, NULL);
			}

IL_006f_1:
			{
				RuntimeObject* L_22 = V_0;
				RuntimeObject* L_23;
				L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 2), L_22);
				V_1 = L_23;
				StringBuilder_t* L_24 = V_3;
				Il2CppChar* L_25 = ___separator0;
				int32_t L_26 = ___separatorLength1;
				StringBuilder_t* L_27;
				L_27 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_24, L_25, L_26, NULL);
				RuntimeObject* L_28 = V_1;
				if (!L_28)
				{
					goto IL_009b_1;
				}
			}
			{
				StringBuilder_t* L_29 = V_3;
				String_t* L_30;
				L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (V_1));
				StringBuilder_t* L_31;
				L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, L_30, NULL);
			}

IL_009b_1:
			{
				RuntimeObject* L_32 = V_0;
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_006f_1;
				}
			}
			{
				StringBuilder_t* L_34 = V_3;
				String_t* L_35;
				L_35 = StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F(L_34, NULL);
				V_4 = L_35;
				goto IL_00b7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		String_t* L_36 = V_4;
		return L_36;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.Byte>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9C89D6A499A93EAEB46D21A005E7B7CDA8AF08DA_gshared (StringBuilder_t* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_1;
		L_1 = Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC((&___value0), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.Int32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B15D251663E1D9C147CD9DA1A8908CACF877570_gshared (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_1;
		L_1 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&___value0), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.Int64>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m3841AF7BF98E14639066CBA5E534988087E856FB_gshared (StringBuilder_t* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_1;
		L_1 = Int64_ToString_mBCE0DC50D6F802651A6AE75682FF67775CB19B3B((&___value0), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisRuntimeObject_mD51222AF7DE1F3198B5D7E15D990729A113B39E7_gshared (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0 /* System.String System.IFormattable::ToString(System.String,System.IFormatProvider) */, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, (RuntimeObject*)(___value0), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<System.UInt32>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F274B553164EF6FB0CB7D16AED9687CE7CA5FC_gshared (StringBuilder_t* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_1;
		L_1 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&___value0), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<System.Int32>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9048AFFB0C7A5956442DF748E86260D5748709DA_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___cancellationToken0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1;
		L_1 = ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCanceled_TisRuntimeObject_mA1A74CF482468B14FA95CC119EA2E167BED26A7E_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___cancellationToken0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1;
		L_1 = ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m00F2302E3E462922A07E7B2F02F8E7A965EE45B2_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m00F2302E3E462922A07E7B2F02F8E7A965EE45B2_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, bool, bool, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Int32>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA51A47C72EC006E6A4CAF65241EFBBEA46E85E9E_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA51A47C72EC006E6A4CAF65241EFBBEA46E85E9E_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, bool, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Int32>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E4DC6F097FFCAB74E86D76932C9E71964338089_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___exception0, const RuntimeMethod* method) 
{
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E4DC6F097FFCAB74E86D76932C9E71964338089_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___exception0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_4->____cancellationToken_18;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___exception0;
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m67B91E1DC1B473B7D61E3E95256FD1269E307143_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_m67B91E1DC1B473B7D61E3E95256FD1269E307143_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, bool, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_mC678EEDD9950CF4A59E9A0999AC34A4F72A3CBD0_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___exception0, const RuntimeMethod* method) 
{
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_mC678EEDD9950CF4A59E9A0999AC34A4F72A3CBD0_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___exception0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_4->____cancellationToken_18;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___exception0;
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Threading.Tasks.VoidTaskResult>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* Task_FromCancellation_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_mB2F0350650C01E6A91C0898A74CAB734EA86D738_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___exception0, const RuntimeMethod* method) 
{
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_mB2F0350650C01E6A91C0898A74CAB734EA86D738_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___exception0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_4->____cancellationToken_18;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___exception0;
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<System.Int32>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m465024A13A27440CC946A155660A5A718369A021_gshared (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m465024A13A27440CC946A155660A5A718369A021_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = L_2;
		Exception_t* L_4 = ___exception0;
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<System.Object>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromException_TisRuntimeObject_m35398C06E11238341BF02991511BD0457CB785BF_gshared (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisRuntimeObject_m35398C06E11238341BF02991511BD0457CB785BF_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_3 = L_2;
		Exception_t* L_4 = ___exception0;
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<System.Threading.Tasks.VoidTaskResult>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* Task_FromException_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_mB134D89822962D2C03A9DE135D592315835B214D_gshared (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_mB134D89822962D2C03A9DE135D592315835B214D_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_3 = L_2;
		Exception_t* L_4 = ___exception0;
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Int32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1AB522FB726C8CC51C9F00459B7CE60065461032_gshared (int32_t ___result0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___result0;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_mCF2DB27B9C76CBB36764EAAC15108BE463AC3A0A_gshared (RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___result0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_mC078577D8A3BAEB28AEE51A856A17C15B4CA1838_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___function0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = ___function0;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler_0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_3;
		L_3 = ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, L_0, L_1, (int32_t)8, (int32_t)0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_mD3EECA5B522E829A92D4AB1E43CEA3B59B64A720_gshared (Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* ___function0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* L_0 = ___function0;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2;
		L_2 = ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<System.Threading.Tasks.Task`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_m084D75E4C5017CC0448628A63B8B1E14B6B215A2_gshared (Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* ___function0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* L_0 = ___function0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD319493499620E43634FF644A0CEF1624086AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_Run_TisRuntimeObject_m084D75E4C5017CC0448628A63B8B1E14B6B215A2_RuntimeMethod_var)));
	}

IL_000e:
	{
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4;
		L_4 = ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_5 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField_15;
		Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* L_6 = ___function0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_8 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler_0;
		Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868* L_9;
		L_9 = ((  Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_5, L_6, L_7, (int32_t)8, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E* L_10 = (UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		((  void (*) (UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_10, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)L_10;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<System.Object>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_m4BE298A12FD46EA87A91B6D05F3616DFD4116D81_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* ___beginMethod0, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___endMethod1, RuntimeObject* ___arg12, RuntimeObject* ___state3, const RuntimeMethod* method) 
{
	{
		Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* L_0 = ___beginMethod0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___endMethod1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___state3;
		int32_t L_4 = (int32_t)__this->___m_defaultCreationOptions_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<System.Object>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_m15A3FDB23C39585CED64D8702F8DEAEA3D853C9F_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* ___beginMethod0, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___endMethod1, RuntimeObject* ___arg12, RuntimeObject* ___state3, int32_t ___creationOptions4, const RuntimeMethod* method) 
{
	{
		Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* L_0 = ___beginMethod0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___endMethod1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___state3;
		int32_t L_4 = ___creationOptions4;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_5;
		L_5 = ((  Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* (*) (Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<System.Object,System.Object>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_TisRuntimeObject_mB02CD5C4EC2D0F72F89D77D2406D6A1304E816C2_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_t318E92560B3BCC40982F5FD19861164DC9EFBA20* ___beginMethod0, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___endMethod1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___state4, const RuntimeMethod* method) 
{
	{
		Func_5_t318E92560B3BCC40982F5FD19861164DC9EFBA20* L_0 = ___beginMethod0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___endMethod1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___state4;
		int32_t L_5 = (int32_t)__this->___m_defaultCreationOptions_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_5_t318E92560B3BCC40982F5FD19861164DC9EFBA20*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_6;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<System.Object,System.Object>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_TisRuntimeObject_m7A05EF03CA2355B88220BF3156BFAD22B16274C1_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_t318E92560B3BCC40982F5FD19861164DC9EFBA20* ___beginMethod0, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___endMethod1, RuntimeObject* ___arg12, RuntimeObject* ___arg23, RuntimeObject* ___state4, int32_t ___creationOptions5, const RuntimeMethod* method) 
{
	{
		Func_5_t318E92560B3BCC40982F5FD19861164DC9EFBA20* L_0 = ___beginMethod0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___endMethod1;
		RuntimeObject* L_2 = ___arg12;
		RuntimeObject* L_3 = ___arg23;
		RuntimeObject* L_4 = ___state4;
		int32_t L_5 = ___creationOptions5;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
		L_6 = ((  Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* (*) (Func_5_t318E92560B3BCC40982F5FD19861164DC9EFBA20*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Object>(System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskFactory_StartNew_TisRuntimeObject_m14FDB1694FEE097B11C3119BD89F3C350F7DE51B_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___function0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, int32_t ___creationOptions2, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___creationOptions2;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_m1153A4F682B30E4FEEED553E1ACD14910AFC4996(L_0, NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_2 = ___function0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		int32_t L_4 = ___creationOptions2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = ___scheduler3;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_6;
		L_6 = ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, L_4, (int32_t)0, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Object>(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskFactory_StartNew_TisRuntimeObject_mEA7790049BB78A6FA740004288F21F44DBEE3E3B_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___function0, RuntimeObject* ___state1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, int32_t ___creationOptions3, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___creationOptions3;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_m1153A4F682B30E4FEEED553E1ACD14910AFC4996(L_0, NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___function0;
		RuntimeObject* L_3 = ___state1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6 = ___scheduler4;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_7;
		L_7 = ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, L_3, L_4, L_5, (int32_t)0, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_7;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708_gshared (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_2->___Task_0;
		V_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m577E476DCE1C20079E7CB423C743DAE72B5E1708_RuntimeMethod_var)));
	}

IL_0028:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_7 = V_0;
		TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_8;
		L_8 = ((  TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		int32_t L_9;
		L_9 = TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_9;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<System.Object>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_End_TisRuntimeObject_m9F08D96B98DCBED1BE8179B14889E818C559E43B_gshared (RuntimeObject* ___asyncResult0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_2->___Task_0;
		V_0 = ((Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = ((Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskToApm_End_TisRuntimeObject_m9F08D96B98DCBED1BE8179B14889E818C559E43B_RuntimeMethod_var)));
	}

IL_0028:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_7 = V_0;
		TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_8;
		L_8 = ((  TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		RuntimeObject* L_9;
		L_9 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_2), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_9;
	}
}
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem<System.Object>(System.Action`1<TState>,TState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisRuntimeObject_mB1A37615715691CA4742D75F50A27DFB5718871F_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack0, RuntimeObject* ___state1, bool ___preferLocal2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_0 = (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_1 = L_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___callBack0;
		L_1->___callBack_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack_0), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_3 = L_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_3->___callBack_0;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisRuntimeObject_mB1A37615715691CA4742D75F50A27DFB5718871F_RuntimeMethod_var)));
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		RuntimeObject* L_7 = ___state1;
		bool L_8 = ___preferLocal2;
		bool L_9;
		L_9 = ThreadPool_QueueUserWorkItemHelper_mADD7DAB054548E8B134A401F330D8957884F6B83(L_6, L_7, (&V_0), (bool)1, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
		return L_9;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Boolean>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5342DE3D9F047601DA96603685A95F09F7C51241_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE98222C6EBF5626830BEEEEADC1B8F7CBC5ACE20_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m482679ADE43FA9A8310196AF93E6812DA1BD72FB_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Resources.ResourceLocator>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_mD304B883E597A70BA557A2598227335A82986206_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* Tuple_Create_TisRuntimeObject_TisRuntimeObject_m1185C3D02620CC5F26786D9BE962850A28346DD2_gshared (RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___item10;
		RuntimeObject* L_1 = ___item21;
		Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* L_2 = (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
// System.Tuple`3<T1,T2,T3> System.Tuple::Create<System.Object,System.Object,System.Object>(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* Tuple_Create_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mB63DE33C49478C5DDC9208B959EFB9BC53C2E21E_gshared (RuntimeObject* ___item10, RuntimeObject* ___item21, RuntimeObject* ___item32, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___item10;
		RuntimeObject* L_1 = ___item21;
		RuntimeObject* L_2 = ___item32;
		Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* L_3 = (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Boolean>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Unsafe_Add_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6E23CA7C761B3D3189C33867B0B173C37826448A_gshared (bool* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(bool);
		return ((bool*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4A68552F1DC743EBD60C3302C813A77917407F2A_gshared (uint8_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD3FD9885D7DCF64B3CD5BB156810537CA9F32FDA_gshared (uint8_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::Add<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m753574AA07A6B87F00039BBB06C6DEE648423C8D_gshared (void* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(uint8_t);
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Char>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE81319461240AE0B662268C5CD28B5C3E2777BA5_gshared (Il2CppChar* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Char>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA540E5C7B875BF9FBBA82DA277B186D1D66730CB_gshared (Il2CppChar* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Int32>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m453886B415E4998526A1E69DE2EB5572AF0B760F_gshared (int32_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.IntPtr>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_Add_TisIntPtr_t_m38D01BF915735127E0BDEA3B56406EA2FD0D993E_gshared (intptr_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(intptr_t);
		return ((intptr_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.IntPtr>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_Add_TisIntPtr_t_m4110E292C29BBD6E2DA38304C59EE2A67E031A54_gshared (intptr_t* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(intptr_t);
		return ((intptr_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Object>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_m65310B4345815F3D22896E6D6543FF1EA6DED5C1_gshared (RuntimeObject** ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.Object>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_m5E189591B2B2CDA6BAB96A9C7D33790F69793583_gshared (RuntimeObject** ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::Add<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisRuntimeObject_mB4BC35B8AD620AD024D9B3C2954D085D8511E8E3_gshared (void* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<System.SByte>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_Add_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mDF514FBA7C4E9F4E8A84822A556BAB1556166F0D_gshared (int8_t* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = sizeof(int8_t);
		return ((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mA41D4DA1B6351213CB981A99F9505A45CF32389F_gshared (uint8_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Byte>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m977F986E96198374865467E0C8BCA8C996DC6709_gshared (uint8_t* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Char>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m81D68EA2B5C71342FBBCC70D4755AD2F89DCF1B5_gshared (Il2CppChar* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Char>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m626F9FC697AE48D88E07BDE4F575F5A2C52257FA_gshared (Il2CppChar* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<Il2CppChar,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Int32>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCE68D7FC154B9654C2EFADAD0081901D0AEA4015_gshared (int32_t* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Int32>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m99597CD32AEF8CFE18F00D8922B775637A05384D_gshared (int32_t* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		int32_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<int32_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Object>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AddByteOffset_TisRuntimeObject_mE80524BC43C88F7426858D0F2D76EA278347344C_gshared (RuntimeObject** ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<System.Object>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AddByteOffset_TisRuntimeObject_m865838483903046806DAADBFFC930C2F6ACA83C3_gshared (RuntimeObject** ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<RuntimeObject*,intptr_t>(L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Byte>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D8903DC056729188D576E7F6D297CC65D43BB83_gshared (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Char>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB3F359D1CA4DAB5E960916F940617B5555E293BA_gshared (Il2CppChar* ___left0, Il2CppChar* ___right1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___left0;
		Il2CppChar* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisRuntimeObject_mB9C0F2D2E871C420C229B3EB06DE154607B02268_gshared (RuntimeObject** ___left0, RuntimeObject** ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___left0;
		RuntimeObject** L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_m4BCC0ED093BFD47D807324EA964B9020D6203B95_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Memory`1<System.Byte>,System.ReadOnlyMemory`1<System.Byte>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* Unsafe_As_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_TisReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399_m28DAF2E4CF40AF9326166C9671568CA459373123_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* ___source0, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = ___source0;
		return (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Memory`1<System.Object>,System.ReadOnlyMemory`1<System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* Unsafe_As_TisMemory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA_TisReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC_mCC2B4341528913E721727C5523D721AB5477F66B_gshared (Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA* ___source0, const RuntimeMethod* method) 
{
	{
		Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA* L_0 = ___source0;
		return (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.ReadOnlyMemory`1<System.Object>,System.Memory`1<System.Object>>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA* Unsafe_As_TisReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC_TisMemory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA_m5BA25A45D57AE4DAEE699DCFB61291D9E96D01EE_gshared (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* ___source0, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* L_0 = ___source0;
		return (Memory_1_tFE195D25CCBF8766EF8DE394FB116ED523C220DA*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Boolean,System.Threading.Volatile/VolatileBoolean>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041* Unsafe_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_mCD0C2BF0CCC3B904DF803BF3F9EF11103BCD4F7B_gshared (bool* ___source0, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___source0;
		return (VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Boolean>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5255D808D144D3B8B8CEB258238D6DCBB8DCE2AA_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (bool*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mBBBF94FAEFE6ACF9937A9D5CB0AD67CFDBBC5FFE_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m675417BFAB48B7F7055A5D921C105C175ACCDF2E_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int16>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE8832539C9AACA1C5E2E1D937844260FBB2358B9_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int16_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m81F9F17E7C2AAE3840B2CCBF247A17F898184B1B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Int64>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mAF7D0EB169EB1E685A55A4817EA5A573207CD603_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (int64_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIntPtr_t_m68D6F8F1587DBD6E68BF787778230EDD9D1AEBA0_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m062C2E1C18C2BEFAB12E9ABFEF799CB33804BE4F_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Byte,System.UInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mCE01536D41313BB14C2373248FD472794C97DB40_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return (uint32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5CDBD1972E096D4D176783BA7D2F55EC593659B4_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA862CB8DDBD498DBF1D9BFDB6CA1164FB1ABEC77_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIntPtr_t_m56FBE72308801C8102F5BACF2FB5D627CD797881_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Char,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisRuntimeObject_m61B2BDAA53838DCA08A69F50AE69C94A05B6E447_gshared (Il2CppChar* ___source0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Decimal,System.Decimal/DecCalc>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9* Unsafe_As_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_TisDecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_m655BE5526023C16AC00CD6B803DE2B0DFD794324_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___source0, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_0 = ___source0;
		return (DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4805CE1591A68B97CB60221B779D7F28DD6E75F_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3802F4924AEA902550EDEA7FDF3A6DBD83FDB4C6_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mBB4534AB60C5924F665D2A157DA805643B2C2457_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.UInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD3C14204343AF6B57CA5A16AE342902E55A1960F_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (uint32_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int32,System.Threading.Volatile/VolatileInt32>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisVolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_m81EF59BFA0C85B83677FF80B4FF40771741D866E_gshared (int32_t* ___source0, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___source0;
		return (VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Int64,System.UInt64>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m088D7E6857BD4BBF5448E54572955E67820D3DD0_gshared (int64_t* ___source0, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___source0;
		return (uint64_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Byte>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisRuntimeObject_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m01FE0BE10311CE6384A6264314453C262AFE3376_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Char>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisRuntimeObject_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6F78DF114C69E12A3BD99748B63A4190CBE1844A_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.IntPtr>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisRuntimeObject_TisIntPtr_t_mFD164B43CE06D400CAA5FB024E751600994481CD_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (intptr_t*)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Object>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisRuntimeObject_TisRuntimeObject_m3E159F5FC9570A15B7E1F3FC0B60F2355DDB359A_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<System.Object,System.Threading.Volatile/VolatileObject>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* Unsafe_As_TisRuntimeObject_TisVolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_m3CF3EC45B1C0C599DAC55CC82268B1667987F41A_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return (VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Byte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFE9564E02F6277437F35368989885DC6A5EA35A5_gshared (uint8_t* ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Char>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m0AD32B0F3AC49717A13A2BBC1D4F22870963EAD6_gshared (Il2CppChar* ___value0, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisRuntimeObject_mAB8648A0D038AA0BC8E9791B0F07B7417214FD17_gshared (RuntimeObject** ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<System.Number/NumberBuffer/DigitsAndNullTerminator>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisDigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA_m50C725B5F441884D5668CB229CAB83C2D1EA2F5C_gshared (DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* ___value0, const RuntimeMethod* method) 
{
	{
		DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Byte>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDFABC34A7725F1807FFAF508A3F39C2ED7B7E30D_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Byte>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB69F8A5C8AC34D28CE255D958651E7308790D7E4_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (uint8_t*)(L_0);
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Char>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mEA9985C837E6BACDBA2D64A4425439584AA7ED57_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (Il2CppChar*)(L_0);
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AsRef_TisRuntimeObject_mEA31169F4A69CE64F46DB0525B359FB372B13784_gshared (RuntimeObject** ___source0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<System.Object>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_AsRef_TisRuntimeObject_m816F6707FFA35CD3D93392AE9E18DC1F25170D04_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		return (RuntimeObject**)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Boolean>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC02DAB7E44466131B69DD9302B624DA5CE50BE72_gshared (bool* ___left0, bool* ___right1, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___left0;
		bool* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Byte>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4E02D641D0F8180CCBBD2B7EF9E8DB4E6767B387_gshared (uint8_t* ___left0, uint8_t* ___right1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___left0;
		uint8_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Int32>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8D6733A9842E92B88E3DABC7E7AEF45A56330821_gshared (int32_t* ___left0, int32_t* ___right1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___left0;
		int32_t* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<System.Object>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuntimeObject_m7F604C05F9E8FDA6F973BD7640B3CFB63B89EBC1_gshared (RuntimeObject** ___left0, RuntimeObject** ___right1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___left0;
		RuntimeObject** L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<System.Numerics.Vector`1<System.UInt16>>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_Read_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mE7FD30B8ED7259EC7CF1DD9978909EA43BFA52E9_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<System.Object>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_Read_TisRuntimeObject_mE4C9D6B542D202B075488A0B484D583E63B175EF_gshared (void* ___source0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___source0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Numerics.Vector`1<System.UInt16>>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_ReadUnaligned_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_m19B8BC6045269AC7201FDEEE8BBBC7E0B8EBEA72_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Int32>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_ReadUnaligned_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m385DFBBD0FD3CF8B72069D142B8AAA375DB6FC54_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		int32_t L_1 = (*(int32_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.Object>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_ReadUnaligned_TisRuntimeObject_mCA74A4B8D120C37E493CBECDC3CD7310B0403435_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UInt16>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Unsafe_ReadUnaligned_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mE444B74BEB5C615DAB1AEFB35D4159A4A7B5723C_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint16_t L_1 = (*(uint16_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UInt32>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Unsafe_ReadUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m525EE4C96BF37CA9D8ADDC9969A115C4ED48F009_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uint32_t L_1 = (*(uint32_t*)L_0);
		return L_1;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<System.UIntPtr>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Unsafe_ReadUnaligned_TisUIntPtr_t_m954A0043ABD89608CAD7C7CEF794530C1952981B_gshared (uint8_t* ___source0, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___source0;
		uintptr_t L_1 = (*(uintptr_t*)L_0);
		return L_1;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Numerics.Vector`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mF7F8CE507D0D65CE769DD205191AC25A8057EAAC_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mEAF4DFAD570F6A0F25E17C34E9AAA9131B96AC9C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Char>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m234AEF941FF3D72B5570DBE807B3AFEB3343906A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m29CFE4DF51CADD200D23D7093D4C4AE7BE8747BD_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisRuntimeObject_mA22951023930DCF5FB04D26D4F61AFC71F5C364E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(RuntimeObject*);
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<System.Object>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisRuntimeObject_mEDA97602DC0EB8DC2665E08DAF87B32B5DC37396_gshared (uint8_t* ___destination0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		RuntimeObject* L_1 = ___value1;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<System.UInt32>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7B733AB630A479ABA40D0073873EE68B3E6496EB_gshared (uint8_t* ___destination0, uint32_t ___value1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___destination0;
		uint32_t L_1 = ___value1;
		*(uint32_t*)L_0 = L_1;
		return;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.UInt16>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB1290EF33E80A390B04A3A61E2ED8039C7C1D527_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___value0, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<System.UInt16>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDF58FEA5BFA35E22ED8C525BA9EE0B508F567406_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___left0, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___right1, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___left0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_m1BB143C73CA3A7A5B880A663FEE10E149F0F274F_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mB9B6B04771AC33604CEAD0611ADB13B54869254B_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m143009D8D6D0129C1D86B783427FADE8A0E61936_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, RuntimeObject** ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___ptr0;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m5BFF79141064122141ED34283347A634B9DF577D_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppChar));
		goto IL_0042;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___array0;
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_mDF51E7FDFA74ADCDDB1E43CFC4A3A3083692B010(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___start1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = ___array0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___length2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = ___array0;
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0055:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = ___array0;
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		Il2CppChar* L_16;
		L_16 = il2cpp_unsafe_as_ref<Il2CppChar>(L_15);
		int32_t L_17 = ___start1;
		Il2CppChar* L_18;
		L_18 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_16, L_17);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___length2;
		__this->____length_1 = L_20;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB699405722E96B949DE251894243517B81EDBBCD_gshared_inline (Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t3F436092261253E8F2AF9867CA253C3B370766C2));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___array0;
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m71AAC993EBBDBA44EE73847D68F71C70AF7AD1D5(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_mDF51E7FDFA74ADCDDB1E43CFC4A3A3083692B010(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___start1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = ___array0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___length2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = ___array0;
		int32_t L_13 = ___start1;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m272CE1B3040BA89B2C478E2CF629670574F30353(NULL);
	}

IL_0055:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = ___array0;
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		RuntimeObject** L_16;
		L_16 = il2cpp_unsafe_as_ref<RuntimeObject*>(L_15);
		int32_t L_17 = ___start1;
		RuntimeObject** L_18;
		L_18 = il2cpp_unsafe_add<RuntimeObject*,int32_t>(L_16, L_17);
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___length2;
		__this->____length_1 = L_20;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m62E30EE8205E9B8F79F1C6EFE9F113CB69E82DCD_gshared_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95));
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___array0;
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		RuntimeObject** L_3;
		L_3 = il2cpp_unsafe_as_ref<RuntimeObject*>(L_2);
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___array0;
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mB44468A232EBDBBAC3914B3664064CE336BAF744_gshared_inline (ReadOnlySpan_1_t40ECE3A478A7988D6572F814C5099ACFDE1FDF95* __this, RuntimeObject** ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___ptr0;
		ByReference_1_t98B79BFB40A2CA0814BC183B09B4339A5EBF8524 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_mA440F4E402507F256E8E66C774E9044CB0092073_gshared_inline (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____index_1;
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_2;
		*((int32_t*)L_2) = (int32_t)L_3;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____object_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyMemory_1_GetObjectStartLength_m3CE58FA492D3EFAAFAC0B0011726429FBFEB1749_gshared_inline (ReadOnlyMemory_1_tD0F5C18058EEAB5F76AA982D1F430D67DFB7FCBC* __this, int32_t* ___start0, int32_t* ___length1, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____index_1;
		*((int32_t*)L_0) = (int32_t)L_1;
		int32_t* L_2 = ___length1;
		int32_t L_3 = (int32_t)__this->____length_2;
		*((int32_t*)L_2) = (int32_t)L_3;
		RuntimeObject* L_4 = (RuntimeObject*)__this->____object_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___ptr0;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
