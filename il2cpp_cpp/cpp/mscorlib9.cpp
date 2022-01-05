﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>

#include "icalls/mscorlib/System.Diagnostics/StackTrace.h"

template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>
struct ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.ISimpleCollator>
struct Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
// System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.AsyncStateMachineAttribute>
struct IEnumerable_1_t501E1CB9250380D1A4A946E95D7C78A5E7552E6A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Diagnostics.StackFrame>
struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Runtime.CompilerServices.Ephemeron[]
struct EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Collections.Generic.ByteEqualityComparer
struct ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Collections.Comparer
struct Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
// System.Exception
struct Exception_t;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Globalization.ISimpleCollator
struct ISimpleCollator_t084383013F96378AFFD4540649E086C9C13BFF5B;
// System.Collections.Generic.InternalStringComparer
struct InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Globalization.SortVersion
struct SortVersion_tBB62978F95905541FC817E11F73A0B1DB392F07E;
// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443;
// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853;
// System.Runtime.CompilerServices.StateMachineAttribute
struct StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA;
// System.Collections.Hashtable/HashtableEnumerator
struct HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061;
// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E;
// System.Collections.ListDictionaryInternal/NodeEnumerator
struct NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t501E1CB9250380D1A4A946E95D7C78A5E7552E6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE7CC2E5EDEFBE0180981C94EA16A56B00A622851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_27_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9;
IL2CPP_EXTERN_C String_t* _stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4;
IL2CPP_EXTERN_C String_t* _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804;
IL2CPP_EXTERN_C String_t* _stringLiteral06CB1F66B7E9F0650DB766506922FE677B69B992;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral0FB28D215F1C062EDB535A58AD8714B5A5FE4064;
IL2CPP_EXTERN_C String_t* _stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral461B901954DA68B031564E85615378AE7FACBEA9;
IL2CPP_EXTERN_C String_t* _stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495;
IL2CPP_EXTERN_C String_t* _stringLiteral62EDD94B35AE1C598F9C8060E6F26AD1470D672D;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE;
IL2CPP_EXTERN_C String_t* _stringLiteral77048C04058DC1CDDAE5B38B11B56EFD16467A77;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB657B9EBAD0A09A09ED1FD8D1CCD0E421CD7BDC7;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD28C94883387DBDDA48D56C715653DEF70A2DB6D;
IL2CPP_EXTERN_C String_t* _stringLiteralD48F64ABB05D3F39046297B361BD8AA53451659A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE209FAE75837720CC82067C1D76DCD103784C60B;
IL2CPP_EXTERN_C String_t* _stringLiteralE3037931DE899C4BCA58ECF059EF9BE27F54B681;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralED1269E5C23EE33C8DD1238BDFE8303F0D986C1F;
IL2CPP_EXTERN_C String_t* _stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18;
IL2CPP_EXTERN_C String_t* _stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer_Compare_mDD38FA42ECFEF28996EFF1EB6E504895A16FB021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer__ctor_m562E1FAFF9CAE3C9CEAF84C0C39CE73C41B940B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m5C2893A8ED931994CAB666229E5502827371887A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m66920BDFDDBAFDFA21C637D727CDA29F7B90A4DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_mC06DFF65DC119A6D40DE6581930AEEE5ED08B81A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListDictionaryInternal_Contains_m13B783F4FD105808A8D8016CB28BEAD89CC5350D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListDictionaryInternal_get_Item_mDC0A8FCCB80A0CCF56A23290EC0F0B0171D1DEA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_MoveNext_mAC3A8BA7AEB35F7D512ED301B352B2FC9E4C360B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Key_mBC1D321D60EAA8F3ADE1D6D5DED7D521EB545F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeEnumerator_get_Value_m5D35483F88E7B6A47F88B61158452979CE329969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858  : public RuntimeObject
{
	// System.Runtime.CompilerServices.Ephemeron[] System.Runtime.CompilerServices.ConditionalWeakTable`2::data
	EphemeronU5BU5D_t4F80428A1142C3102C946127F8190063001742E8* ___data_0;
	// System.Object System.Runtime.CompilerServices.ConditionalWeakTable`2::_lock
	RuntimeObject* ____lock_1;
	// System.Int32 System.Runtime.CompilerServices.ConditionalWeakTable`2::size
	int32_t ___size_2;
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

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.String>
struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A  : public RuntimeObject
{
};

struct EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A* ___defaultComparer_0;
};

// System.Collections.Generic.List`1<System.Diagnostics.StackFrame>
struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Buffers.Binary.BinaryPrimitives
struct BinaryPrimitives_tFEA1A3012A2BA5E1F6CD0F63173264A165CB6A7B  : public RuntimeObject
{
};

// System.Collections.Comparer
struct Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.Comparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

struct Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields
{
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* ___Default_1;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* ___DefaultInvariant_2;
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

// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
};

// System.Buffers.Text.FormattingHelpers
struct FormattingHelpers_t06A1B3D3DEEAE9313D177C6D62D99DBF100E151D  : public RuntimeObject
{
};

// System.Collections.HashHelpers
struct HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A  : public RuntimeObject
{
};

struct HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields
{
	// System.Int32[] System.Collections.HashHelpers::primes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primes_0;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_1;
};

// System.Collections.Generic.IntrospectiveSortUtilities
struct IntrospectiveSortUtilities_tD784154D54CAE81D6BD1F950B40A8C89EF328402  : public RuntimeObject
{
};

// System.Collections.Generic.KeyValuePair
struct KeyValuePair_t7874AE3B9245A56073B459BA3A218A817370F597  : public RuntimeObject
{
};

// System.Collections.ListDictionaryInternal
struct ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123  : public RuntimeObject
{
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal::head
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* ___head_0;
	// System.Int32 System.Collections.ListDictionaryInternal::version
	int32_t ___version_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_0;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_1;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_3;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_4;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_5;
};

// System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443  : public RuntimeObject
{
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset_1;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset_2;
	// System.Int64 System.Diagnostics.StackFrame::methodAddress
	int64_t ___methodAddress_3;
	// System.UInt32 System.Diagnostics.StackFrame::methodIndex
	uint32_t ___methodIndex_4;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t* ___methodBase_5;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName_6;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber_7;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber_8;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName_9;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_pinvoke
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	char* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	char* ___internalMethodName_9;
};
// Native definition for COM marshalling of System.Diagnostics.StackFrame
struct StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_marshaled_com
{
	int32_t ___ilOffset_1;
	int32_t ___nativeOffset_2;
	int64_t ___methodAddress_3;
	uint32_t ___methodIndex_4;
	MethodBase_t* ___methodBase_5;
	Il2CppChar* ___fileName_6;
	int32_t ___lineNumber_7;
	int32_t ___columnNumber_8;
	Il2CppChar* ___internalMethodName_9;
};

// System.Diagnostics.StackTrace
struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853  : public RuntimeObject
{
	// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::frames
	StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* ___frames_0;
	// System.Diagnostics.StackTrace[] System.Diagnostics.StackTrace::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_1;
	// System.Boolean System.Diagnostics.StackTrace::debug_info
	bool ___debug_info_2;
};

struct StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields
{
	// System.Boolean System.Diagnostics.StackTrace::isAotidSet
	bool ___isAotidSet_3;
	// System.String System.Diagnostics.StackTrace::aotid
	String_t* ___aotid_4;
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

// System.Buffers.Utilities
struct Utilities_t47DFEED0E704B42BDB4499194D7C812E763E6186  : public RuntimeObject
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

// System.Collections.ArrayList/ArrayListEnumeratorSimple
struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListEnumeratorSimple::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.ArrayList/ArrayListEnumeratorSimple::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::_currentElement
	RuntimeObject* ____currentElement_3;
	// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::_isArrayList
	bool ____isArrayList_4;
};

struct ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields
{
	// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::s_dummyObject
	RuntimeObject* ___s_dummyObject_5;
};

// System.Collections.Hashtable/HashtableEnumerator
struct HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Hashtable/HashtableEnumerator::_hashtable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____hashtable_0;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_bucket
	int32_t ____bucket_1;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_version
	int32_t ____version_2;
	// System.Boolean System.Collections.Hashtable/HashtableEnumerator::_current
	bool ____current_3;
	// System.Int32 System.Collections.Hashtable/HashtableEnumerator::_getObjectRetType
	int32_t ____getObjectRetType_4;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::_currentKey
	RuntimeObject* ____currentKey_5;
	// System.Object System.Collections.Hashtable/HashtableEnumerator::_currentValue
	RuntimeObject* ____currentValue_6;
};

// System.Collections.ListDictionaryInternal/DictionaryNode
struct DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E  : public RuntimeObject
{
	// System.Object System.Collections.ListDictionaryInternal/DictionaryNode::key
	RuntimeObject* ___key_0;
	// System.Object System.Collections.ListDictionaryInternal/DictionaryNode::value
	RuntimeObject* ___value_1;
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal/DictionaryNode::next
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* ___next_2;
};

// System.Collections.ListDictionaryInternal/NodeEnumerator
struct NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6  : public RuntimeObject
{
	// System.Collections.ListDictionaryInternal System.Collections.ListDictionaryInternal/NodeEnumerator::list
	ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* ___list_0;
	// System.Collections.ListDictionaryInternal/DictionaryNode System.Collections.ListDictionaryInternal/NodeEnumerator::current
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* ___current_1;
	// System.Int32 System.Collections.ListDictionaryInternal/NodeEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.ListDictionaryInternal/NodeEnumerator::start
	bool ___start_3;
};

// System.Buffers.ArrayPoolEventSource
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};

struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	// System.Buffers.ArrayPoolEventSource System.Buffers.ArrayPoolEventSource::Log
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log_0;
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

// System.Collections.Generic.ByteEqualityComparer
struct ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275  : public EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8
{
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

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
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

// System.Collections.Generic.InternalStringComparer
struct InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B  : public EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.SpinWait
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	// System.Int32 System.Threading.SpinWait::_count
	int32_t ____count_1;
};

struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	// System.Int32 System.Threading.SpinWait::SpinCountforSpinBeforeWait
	int32_t ___SpinCountforSpinBeforeWait_0;
};

// System.Runtime.CompilerServices.StateMachineAttribute
struct StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type System.Runtime.CompilerServices.StateMachineAttribute::<StateMachineType>k__BackingField
	Type_t* ___U3CStateMachineTypeU3Ek__BackingField_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018
struct __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55__padding[1018];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
struct __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07__padding[1024];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800
struct __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5__padding[10800];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130
struct __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E__padding[130];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472
struct __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070__padding[1472];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15
struct __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7__padding[15];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152
struct __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1__padding[152];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170
struct __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155__padding[170];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172
struct __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6__padding[172];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174
struct __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6__padding[174];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212
struct __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A__padding[212];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176
struct __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A__padding[2176];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350
struct __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC__padding[2350];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382
struct __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630__padding[2382];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240
struct __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265__padding[240];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262
struct __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37__padding[262];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51__padding[288];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336
struct __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970__padding[336];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360
struct __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00__padding[360];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38
struct __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E__padding[38];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42
struct __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A__padding[42];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952
struct __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD__padding[5952];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648
struct __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE__padding[648];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72
struct __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC__padding[72];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76
struct __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61__padding[76];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94
struct __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B__padding[94];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998
struct __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E__padding[998];
	};
};

// System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E 
{
	// System.Object System.Collections.Hashtable/bucket::key
	RuntimeObject* ___key_0;
	// System.Object System.Collections.Hashtable/bucket::val
	RuntimeObject* ___val_1;
	// System.Int32 System.Collections.Hashtable/bucket::hash_coll
	int32_t ___hash_coll_2;
};
// Native definition for P/Invoke marshalling of System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};
// Native definition for COM marshalling of System.Collections.Hashtable/bucket
struct bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com
{
	Il2CppIUnknown* ___key_0;
	Il2CppIUnknown* ___val_1;
	int32_t ___hash_coll_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=170 <PrivateImplementationDetails>::021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8
	__StaticArrayInitTypeSizeU3D170_tD5DDF5B1A4672BA6F4CB986B6CB5E4C8DA842155 ___021022D5891F99B3B525763EB77BAEC69B107268F560721F5060FCDBD4D5AAE8_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___042957A0DB5FF2D38A343AC5AE5F8635B88F10C32EB87A238B1DFB4756468476_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___0E499E7743BCDFF289B85890E4DFDD635594DB16246DC094C3C19556B6C1262C_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___0F9E3C7E66CDEF5C44FA29E65CA676C480F7A2A4A067F70107FDC292C68D38B0_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___1199C3B39A2FA058EFF5B3829616AE81EE2B59A51D89C107A5FA4B6FEF95DD16_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446
	__StaticArrayInitTypeSizeU3D128_t10A33C7E461046D5ECA4CF4B170F59664B1C43AF ___195ABC1ABB69B6BD65F20ACAFA79EED2D330BF513E25C830F24B8A78D8703446_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=360 <PrivateImplementationDetails>::1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B
	__StaticArrayInitTypeSizeU3D360_tD14687B8AE6042547DA97E61DFF1BC57C0AABB00 ___1C4B3A80ED7AEC83916479BCE280E1258D5785D07F0EA22A5E27592ACCAE692B_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___1F38DEB3F70291588D06D3830D0D4241CE0570C9F4EE8B00F606C4753EB016E2_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___2403FBEA85D0741C5727760E97EF16C9BF23294F21C0F1265A4BAF7F22202A64_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___25308BAB47481701F1E861B1EA4F2409E73ABB14E9579C26DF4ABE440A0DCF0A_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___2CCF4119215BDAD102DA7AD5B57E0E6CA19CC8FF5524856FC58907E824213E1F_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3444EB31231B2CCC1B05C7A44EBD1B2A009C1D9977A99B453F52E2F81DD6C32F_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___3D95E4501B1964D7FCE16E3F5682A038752B462357D87343880B1E819F6163FE_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___3F62692E2AD5078353EC4471A13421A61EE493294CF59DC66626A6EF9CCCD2C4_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___42E1421FC2A5A6A33E964D7EB9603EB101818D858DDA09B2BC9B5A888C1C351C_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___494C32E1A18F6E8AD8ED5FAB0A5AF07F801BE7AF3C936942B020918CE2953046_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2382 <PrivateImplementationDetails>::4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0
	__StaticArrayInitTypeSizeU3D2382_tE85B295E3B513D28493BAAC03ABC97A0349EE630 ___4E0B9E024FA510B6F03C92D95BB204E78CDC6E3FD2EC8D35787B7BC76F0655A0_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___510FDFA4743E58DD45DCDD7CB4F8509BF6294CC1D1D4958CA30A9E7604973006_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=42 <PrivateImplementationDetails>::5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E
	__StaticArrayInitTypeSizeU3D42_t2A4EC2E868CF39CFD190BCF4A4FD68F75532504A ___5292FD0A8E62FCCBE41F34EFE7575D097990A66FE23B3507971C5BF272A4362E_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___543172FF9822CE5240DF89FF3AD8C7FD9824F97D0EED9B1432E60345FBBDE9A9_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10800 <PrivateImplementationDetails>::56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854
	__StaticArrayInitTypeSizeU3D10800_tAF97D91E5007DF1AE1150F5C33EF60959135EBB5 ___56073E3CC3FC817690CC306D0DB7EA63EBCB0801359567CA44CA3D3B9BF63854_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___5857EE4CE98BFABBD62B385C1098507DD0052FF3951043AAD6A1DABD495F18AA_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___5EC4E50DA95A113769D73E5F7F8221A876185CEE6498ABB16FBB9F0563C15BBF_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=94 <PrivateImplementationDetails>::61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31
	__StaticArrayInitTypeSizeU3D94_tB88EB12652D5B06365F5A3B3AA4967DA5E6D724B ___61D639BE11384EE21CDE2B40357F4F9D80A106C97C592D18A9F4CAA442CA5D31_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=648 <PrivateImplementationDetails>::67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955
	__StaticArrayInitTypeSizeU3D648_tA7C66768813068A9779D5A0CCD24D484326985EE ___67856A16DB0550FDAB4D1A9B208B0C155C4679CA116BF867B74ED2A0AA4D2955_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___6DC92D3617F0357376502FBA4CDD465B5423818DABE8B2CA1A06E1351F2F1C85_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___71F7F6B226CBC11C8B26D506869FAE022928427389882579DB316F36FF34A096_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
	__StaticArrayInitTypeSizeU3D288_t26388A829D91CAEC8CC20855987F596B6D71DB51 ___74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1472 <PrivateImplementationDetails>::7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696
	__StaticArrayInitTypeSizeU3D1472_tCB6910E7C4264AC68C8166BF9509CA9C07C69070 ___7BEC6AD454781FDCD8D475B3418629CBABB3BF9CA66FA80009D608A1A60D0696_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___7F777906B0704EB248888E491577584D5BEBE71B375BD595A06444390B471915_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___801494072CDD59E61F9AA9345A80D045378705DFDCE94902C22EAEAE049BE780_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___8259E3EBA4D41CA02AE5322BBD280034A9C9860D9CD0D2038139FC9EBE6B6C77_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___861FD05B0EAD3D0AA9418B140CC37846BBC5F195214D90CEF42919D1E36EED10_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=998 <PrivateImplementationDetails>::86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73
	__StaticArrayInitTypeSizeU3D998_t3372981B27F1A388EC4F6F6F01BB32C9AB3E6E6E ___86BDA34D2165AC08F2DE4918B302E44205CDEA674FCA7F2C7F56D4F12D8B0C73_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5952 <PrivateImplementationDetails>::9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115
	__StaticArrayInitTypeSizeU3D5952_tFA61BCE25F463DACAE80095EF7F54BF3C32EC5FD ___9086502742CE7F0595B57A4E5B32901FF4CF97959B92F7E91A435E4765AC1115_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=336 <PrivateImplementationDetails>::93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6
	__StaticArrayInitTypeSizeU3D336_tCE45B5681EF21AE25502E6165F44A12AA857A970 ___93B42898102ACB2421875C45676880B8A07390D8DF0E1EE85C5D1AA26964B0C6_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___93F28AF88A06482BE13F8D0354B6A7676DDAED573EA3938C50F6E53E6D6BB0B6_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=174 <PrivateImplementationDetails>::95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB
	__StaticArrayInitTypeSizeU3D174_tB1C80F56568C4165B636338385647ABAEF02FDA6 ___95BDE712712F10D07813AE3DEEA40D1F38E3FCF1A92CC435F17A326CC22242EB_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=262 <PrivateImplementationDetails>::964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07
	__StaticArrayInitTypeSizeU3D262_t451C912E08CF973D9DB4ED4830AA613DDAAE1D37 ___964889A5283FD0A3DFC8AE256721E6F67B8212FD6841AB1C821DE3134DE79B07_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=15 <PrivateImplementationDetails>::96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6
	__StaticArrayInitTypeSizeU3D15_tFF02C3CB329BAAB88B3F50AE2C9AFD21390048D7 ___96E3FDE919EC36694EFBEC22FEF80F84EE640CC5E46CED07C3E65AC04607C7D6_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A252A93D042C5E2453990C2829A425C6DD749CCDCDF13DB58C11BBC78E8D3CE9_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=76 <PrivateImplementationDetails>::A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376
	__StaticArrayInitTypeSizeU3D76_t7FD69A5C941D293CE74920A6345BA98571A64A61 ___A2EC7CB9B0FE89F9A9BEA547D773225AFE6E4535DF28325A0D6CD7A5E2D20376_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___A30E1152CFB528AE968FAC58E83BBEB3611BFDE2E6CF60B4FA9535A7D0A9B8EA_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2
	__StaticArrayInitTypeSizeU3D40_t1829E21A9E581C04E0E6E428BCDF38D218380C08 ___A516EECB41051151F0183A8B0B6F6693C43F7D9E1815F85CAAAB18E00A5269A2_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___AAF4528994DD7C464F43C131F6CD44DF41ACC18462C95877252FFC7EAC0164EF_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___B21802DE889E5F4F5344C8E0D366F59B68F886F88EFE45EA5CE01534A3F5C0E5_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2176 <PrivateImplementationDetails>::B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838
	__StaticArrayInitTypeSizeU3D2176_tA278ED4E477855073B05C8EDF2E0D3BC18DE265A ___B55F94CD2F415D0279D7A1AF2265C4D9A90CE47F8C900D5D09AD088796210838_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___BB425A9B43E10C921902A25D07A4317DEFF9F606A788672E1B21633C143407F0_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___C5733A1245383FBF067B4A9BDB41E3FB8E3A6BDEF37B3D5418F389422875783F_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3
	__StaticArrayInitTypeSizeU3D1024_tFAF4058252F4F8B582A57FE003804BDA44C97A07 ___C8EC70AC5A448C3A45CF1DFCC1375BE4E80DC6793E97D5E89BD97A0DC232B2E3_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___C95D810E738DB5F591EE691CE884EED2F110D9F82B1F7A8BE6ED257FDF4CDBEB_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=130 <PrivateImplementationDetails>::C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063
	__StaticArrayInitTypeSizeU3D130_t3A1579E4920F810DB34F519DA2EA8410C6FF9A3E ___C9830DF6956357ACE51CE1F82298578B36EB45A0CFDB8AEC5B9FDA7DB17E8063_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___CAF8A46B3A07E26F84FE849B57A877051A0D06194B1C057985446B64BCC6E016_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D1A99909A2923269BB67E72C1AED693F74961BDA58360FCC133007740CEBF5F1_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D503954AE2C3616EA32CEB0D66F5B2E119D03CE722773E5D7E1A8BC8F1803631_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=172 <PrivateImplementationDetails>::D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15
	__StaticArrayInitTypeSizeU3D172_t50A59F10FF3AFEB82AF45171BD2A55F079B975D6 ___D6691EE5A533DE7E0859066942261B24D0C836D7EE016D2251377BFEE40FEA15_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___D8A29F3D197FBB54CF9F4B105AFBA6B1257ADF6449F0184F843380AAAA24639C_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DCDCF594464B904F763D4CE53B1DBE08A47E551AE86FD5D61F63FD0C3313FDC3_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2350 <PrivateImplementationDetails>::DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C
	__StaticArrayInitTypeSizeU3D2350_t06B3679372D33ED00832516310EE74D35B2DF1CC ___DCE88EE5233B9D0FD0D7A6222C82BC3AEE83B15E9992F939B17AB40530DB555C_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=152 <PrivateImplementationDetails>::DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D
	__StaticArrayInitTypeSizeU3D152_t93532A5884A6C4A42D7F939692873D7E88D937B1 ___DD471F12FFA94CC557A02A91C2CBB95F551AB28C8BBF297B2F953B8886BCCF6D_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___DF29A050CD2EBD9DFDC783DB1CC74D3D716DAEC1630A337EE31B9E2E03D34D2D_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=38 <PrivateImplementationDetails>::E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598
	__StaticArrayInitTypeSizeU3D38_t193D2F75A75C37EA34EAEBC8DCA5E21ED4C7382E ___E2C673A3A737B04369A63F1FB1A30F6E742B066E2CCCD9B1838793CBB5590598_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8
	__StaticArrayInitTypeSizeU3D12_tDFF629F9AABAF6DFF52BD9CFF6BB7164F28D2373 ___E32C465157D21F39B3DBF186A98FB02185C63B0260B47247A7A5FDF2B061EAA8_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___E5F4F6214036DF103321A8A0CE30C2EF935694B4199D52BC538E7EF3F045CB92_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1018 <PrivateImplementationDetails>::E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092
	__StaticArrayInitTypeSizeU3D1018_t16F11201DACFD04E420851027A24F477EDAE5B55 ___E8588351183F6F6A7DAD54DC28357628F3C4D4B358AB92A18AE7D08B0D9B0092_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE
	__StaticArrayInitTypeSizeU3D32_tEC324F451D326CED5BF4941A609638F08792EAF0 ___EE415D5C3ECC6C8C19F71BCD4E03847F5A15931374A7F5BF88C24B722F04B8FE_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9
	__StaticArrayInitTypeSizeU3D16_t78D5A9F654B7A1691F94A57AF19D350AE8F61BC3 ___EF82B163CA8252A793A6E73F57775D843C9A21F65586926EB11893FA8BB603E9_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=240 <PrivateImplementationDetails>::F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB
	__StaticArrayInitTypeSizeU3D240_t52E7E202732F47FF85E3F1FA78FE58AB7999C265 ___F0CF66F9B123DCEBB39C38C5D8E4821D4E94DB593889C506BCA0827036F1B7EB_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5
	__StaticArrayInitTypeSizeU3D3_tE200BA77B70F8D0805BDB2C5561AAB11A9B11312 ___F1945CD6C19E56B3C1C78943EF5EC18116907A4CA1EFC40A57D48AB1DB7ADFC5_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
	__StaticArrayInitTypeSizeU3D256_t776C4326DA3CB895C8BBF29F264C3A9CC48AE143 ___F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=72 <PrivateImplementationDetails>::F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563
	__StaticArrayInitTypeSizeU3D72_t384936810508E8786A5A026D6D7412465AC6F3AC ___F4BD8144313C3B67E191C6F3CD8B00540FF1809837C5BCA5C2FDA0D518681563_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=212 <PrivateImplementationDetails>::F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
	__StaticArrayInitTypeSizeU3D212_tFBB5CD331D3374EF82FB51954D58678789BFAB8A ___F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315
	__StaticArrayInitTypeSizeU3D52_t9748BC29170AC89E2D725B2EFAAC4F886C4C4B89 ___FADB218011E7702BB9575D0C32A685DA10B5C72EB809BD9A955DB1C76E4D8315_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB
	__StaticArrayInitTypeSizeU3D24_tF97F937C40D5FC1B94B735A6E7FDE4ED79B3DD14 ___FEC387BA57A54BB6066E4CA8A4F9C0FF9C36B9CBD6600C3683F6FB1BDB5077EB_73;
};

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct AssemblyHashAlgorithm_t6202395EA0C9A01D6342348A9535DF4CA47010D1 
{
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;
};

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct AssemblyVersionCompatibility_t1E27EE4AB4137C64EE164A25A184E844AC722159 
{
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;
};

// System.Runtime.CompilerServices.AsyncStateMachineAttribute
struct AsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4  : public StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76
{
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Globalization.CompareOptions
struct CompareOptions_tE5E7275E1FCBD5F8F3B53CC0038A11CABE120B00 
{
	// System.Int32 System.Globalization.CompareOptions::value__
	int32_t ___value___2;
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

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_0;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_1;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_2;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_3;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_6;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_7;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_8;
};

// System.Collections.Generic.InsertionBehavior
struct InsertionBehavior_tAD0393881947C559238D7041A36917BEE6E2C7B1 
{
	// System.Byte System.Collections.Generic.InsertionBehavior::value__
	uint8_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.Reflection.ParameterAttributes
struct ParameterAttributes_tDAEC8B3C5986B042F8F9B0845505D0FC15F92E68 
{
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// System.Diagnostics.StackTrace/TraceFormat
struct TraceFormat_t6061CD4509052E9C003B4467E458C031FDC5B9D5 
{
	// System.Int32 System.Diagnostics.StackTrace/TraceFormat::value__
	int32_t ___value___2;
};

// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57  : public RuntimeObject
{
	// System.String System.Globalization.CompareInfo::m_name
	String_t* ___m_name_5;
	// System.String System.Globalization.CompareInfo::_sortName
	String_t* ____sortName_6;
	// System.Globalization.SortVersion System.Globalization.CompareInfo::m_SortVersion
	SortVersion_tBB62978F95905541FC817E11F73A0B1DB392F07E* ___m_SortVersion_7;
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_8;
	// System.Globalization.ISimpleCollator System.Globalization.CompareInfo::collator
	RuntimeObject* ___collator_9;
};

struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_StaticFields
{
	// System.Globalization.CompareInfo System.Globalization.CompareInfo::Invariant
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___Invariant_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.ISimpleCollator> System.Globalization.CompareInfo::collators
	Dictionary_2_tFA0E7CD5951B83DD87A65E89D971A68E538F9470* ___collators_10;
	// System.Boolean System.Globalization.CompareInfo::managedCollation
	bool ___managedCollation_11;
	// System.Boolean System.Globalization.CompareInfo::managedCollationChecked
	bool ___managedCollationChecked_12;
};

// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0  : public RuntimeObject
{
};

struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_StaticFields
{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeNameIgnoreCase_1;
};
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_com
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_t98574FADF548B70B1F425B46CC940CEC3C38FB5F  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7  : public RuntimeArray
{
	ALIGN_FIELD (8) StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* m_Items[1];

	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF  : public RuntimeArray
{
	ALIGN_FIELD (8) StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* m_Items[1];

	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StackTrace_t7C150C7C14136F985311A83A93524B1019F70853** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
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
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587  : public RuntimeArray
{
	ALIGN_FIELD (8) bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E m_Items[1];

	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___val_1), (void*)NULL);
		#endif
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___val_1), (void*)NULL);
		#endif
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
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


// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> System.Reflection.CustomAttributeExtensions::GetCustomAttributes<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_TisRuntimeObject_m82C17F5D5FFAC8E641B79E4554D83A55BE377165_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, const RuntimeMethod* method) ;
// T System.Threading.LazyInitializer::EnsureInitialized<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LazyInitializer_EnsureInitialized_TisRuntimeObject_m25BE271FF975F2AF91B9CCCDB9454933708A2090_gshared (RuntimeObject** ___target0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared (ConditionalWeakTable_2_t87BE12792DC61EC9AE17609EC1ACA0671B3F5605* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_gshared (EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::.ctor()
inline void List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::Add(T)
inline void List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_inline (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* __this, StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackFrame__ctor_m4A3FF044DB0118EF4B019E29E7B79AEA394FDFC6 (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::op_Inequality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Inequality_m867339DE9EBA4C07B538DEA80722A9B9EB95349C (MethodBase_t* ___left0, MethodBase_t* ___right1, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Diagnostics.StackFrame>::ToArray()
inline StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3 (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7*)il2cppRetVal;
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7 (Exception_t* ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const RuntimeMethod* method) ;
// System.Byte[] System.Reflection.RuntimeAssembly::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RuntimeAssembly_GetAotId_m8E461807FC308BD78DA6843D28943BCB03C2E611 (const RuntimeMethod* method) ;
// System.Void System.Guid::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C (Guid_t* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) ;
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833 (Guid_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::op_Equality(System.Reflection.MethodBase,System.Reflection.MethodBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_op_Equality_m6A01E665278ED7A85822F5BC6B961A8FF0DC62E5 (MethodBase_t* ___left0, MethodBase_t* ___right1, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132 (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase,System.Boolean,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_GetFullNameForStackTrace_m4B2BACBB18F8441E1D601567D3A9E7D6E2B16F01 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, StringBuilder_t* ___sb0, MethodBase_t* ___mi1, bool ___needsNewLine2, bool* ___skipped3, bool* ___isAsync4, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Diagnostics.StackTrace::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_GetAotId_m91E687449F5715990ADF614F07C859481208260F (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.CustomAttributeExtensions::IsDefined(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CustomAttributeExtensions_IsDefined_mE7F6DB8E05505B4C5BC20B6E8D36F435B3D58210 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.StackTrace::ConvertAsyncStateMachineMethod(System.Reflection.MethodBase&,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_ConvertAsyncStateMachineMethod_m6CC0055266C66E71400FE153D80627D67F272BD2 (MethodBase_t** ___method0, Type_t** ___declaringType1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<T> System.Reflection.CustomAttributeExtensions::GetCustomAttributes<System.Runtime.CompilerServices.AsyncStateMachineAttribute>(System.Reflection.MemberInfo)
inline RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m5C2893A8ED931994CAB666229E5502827371887A (MemberInfo_t* ___element0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttributes_TisRuntimeObject_m82C17F5D5FFAC8E641B79E4554D83A55BE377165_gshared)(___element0, method);
}
// System.Type System.Runtime.CompilerServices.StateMachineAttribute::get_StateMachineType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* StateMachineAttribute_get_StateMachineType_m16997265B53C5BDFF41C8C8557226F631104B49C_inline (StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.StackTrace::AddFrames(System.Text.StringBuilder,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTrace_AddFrames_mFD2C38B4281C8B800FC463FD96DF39DA57BF13A9 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, StringBuilder_t* ___sb0, bool ___separator1, bool* ___isAsync2, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.Void System.Collections.Comparer::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.HashHelpers::IsPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashHelpers_IsPrime_m2F0723C1815F02D1E7CF69DDA9AE4E993DAC0AD9 (int32_t ___candidate0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E (int32_t ___min0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::.ctor()
inline void ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, const RuntimeMethod*))ConditionalWeakTable_2__ctor_m853F59C8991DABC257AA9EE373CF4061CDD53E94_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Collections.ListDictionaryInternal/NodeEnumerator::.ctor(System.Collections.ListDictionaryInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerator__ctor_m0F85D195064B3A6D129FF52D3B87E55C41784D4D (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* ___list0, const RuntimeMethod* method) ;
// System.Collections.DictionaryEntry System.Collections.ListDictionaryInternal/NodeEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F (String_t* ___resourceFormat0, RuntimeObject* ___p11, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Object::MemberwiseClone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T System.Threading.LazyInitializer::EnsureInitialized<System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>>(T&)
inline ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_mC06DFF65DC119A6D40DE6581930AEEE5ED08B81A (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858** ___target0, const RuntimeMethod* method)
{
	return ((  ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858**, const RuntimeMethod*))LazyInitializer_EnsureInitialized_TisRuntimeObject_m25BE271FF975F2AF91B9CCCDB9454933708A2090_gshared)(___target0, method);
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, float ___loadFactor1, const RuntimeMethod* method) ;
// System.String SR::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186 (String_t* ___resourceFormat0, RuntimeObject* ___p11, RuntimeObject* ___p22, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, float ___loadFactor1, RuntimeObject* ___equalityComparer2, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* Hashtable_get_SerializationInfoTable_mCB2E9EFC4A0705413E6277848106CE18E11C88E3 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>::Add(TKey,TValue)
inline void ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7 (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* __this, RuntimeObject* ___key0, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___value1, const RuntimeMethod* method)
{
	((  void (*) (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*, RuntimeObject*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, const RuntimeMethod*))ConditionalWeakTable_2_Add_mA45BB747BEE445F5A6D5ABC32B2070CAF5E9BE44_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) ;
// System.UInt32 System.Collections.Hashtable::InitHash(System.Object,System.Int32,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, int32_t ___hashsize1, uint32_t* ___seed2, uint32_t* ___incr3, const RuntimeMethod* method) ;
// System.Void System.Threading.SpinWait::SpinOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::Insert(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, RuntimeObject* ___nvalue1, bool ___add2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65 (int32_t ___oldSize0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::rehash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___newsize0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::putEntry(System.Collections.Hashtable/bucket[],System.Object,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ___newBuckets0, RuntimeObject* ___key1, RuntimeObject* ___nvalue2, int32_t ___hashcode3, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::UpdateVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable/HashtableEnumerator::.ctor(System.Collections.Hashtable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___hashtable0, int32_t ___getObjRetType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::expand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::rehash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.String System.Environment::GetResourceString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Buffer::IndexOfByte(System.Byte*,System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Buffer_IndexOfByte_m276C9999C9E045F990E434EFADF4F96B7C1230DE (uint8_t* ___src0, uint8_t ___value1, int32_t ___index2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.Byte>::.ctor()
inline void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*, const RuntimeMethod*))EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_gshared)((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.EqualityComparer`1<System.String>::.ctor()
inline void EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C (EqualityComparer_1_t7DB7FC11B7957026D1FB280BF9E0D8D8DBEE039A* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*, const RuntimeMethod*))EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_gshared)((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)__this, method);
}
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.StackTrace::.ctor()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_mD22253A455F1F750410D5E48BF7E14994EDA12BD (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, 0, (bool)0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m269D00E49783BC3205FD5C7E879888884D72107C (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, bool ___fNeedFileInfo0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___fNeedFileInfo0;
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, 0, L_0, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace__ctor_m7C03595A7D2ADA64E7CB5311C9563AF588DC8480 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___skipFrames0;
		bool L_1 = ___fNeedFileInfo1;
		StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* V_0 = NULL;
	List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* V_1 = NULL;
	{
		int32_t L_0 = ___skipFrames0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace_init_frames_m629CD3E1EAC7C0B3C27432C4BCB2EA6234DB54FA_RuntimeMethod_var)));
	}

IL_0014:
	{
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* L_2 = (List_1_tECF3D3C28087C516811A22319C02931F38CE1E95*)il2cpp_codegen_object_new(List_1_tECF3D3C28087C516811A22319C02931F38CE1E95_il2cpp_TypeInfo_var);
		List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B(L_2, List_1__ctor_mA3FE75FEC76C94CE18BF9A431EBF8932A50BB91B_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___skipFrames0;
		___skipFrames0 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		goto IL_002d;
	}

IL_0021:
	{
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* L_4 = V_1;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_5 = V_0;
		List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_inline(L_4, L_5, List_1_Add_m6A5DFEDAB6EAAAA107D77D98B1D687379D32D89C_RuntimeMethod_var);
		int32_t L_6 = ___skipFrames0;
		___skipFrames0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002d:
	{
		int32_t L_7 = ___skipFrames0;
		bool L_8 = ___fNeedFileInfo1;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_9 = (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*)il2cpp_codegen_object_new(StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443_il2cpp_TypeInfo_var);
		StackFrame__ctor_m4A3FF044DB0118EF4B019E29E7B79AEA394FDFC6(L_9, L_7, L_8, NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_10 = L_9;
		V_0 = L_10;
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_11 = V_0;
		MethodBase_t* L_12 = L_11->___methodBase_5;
		bool L_13;
		L_13 = MethodBase_op_Inequality_m867339DE9EBA4C07B538DEA80722A9B9EB95349C(L_12, (MethodBase_t*)NULL, NULL);
		if (L_13)
		{
			goto IL_0021;
		}
	}

IL_0046:
	{
		bool L_14 = ___fNeedFileInfo1;
		__this->___debug_info_2 = L_14;
		List_1_tECF3D3C28087C516811A22319C02931F38CE1E95* L_15 = V_1;
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_16;
		L_16 = List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3(L_15, List_1_ToArray_mDEAA909F42CB8AA7F4DBB51AFBAE9836D4BDFEB3_RuntimeMethod_var);
		__this->___frames_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frames_0), (void*)L_16);
		return;
	}
}
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7 (Exception_t* ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const RuntimeMethod* method) 
{
	typedef StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* (*StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7_ftn) (Exception_t*, int32_t, bool);
	using namespace il2cpp::icalls;
	return ((StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7_ftn)mscorlib::System::Diagnostics::StackTrace::get_trace) (___e0, ___skipFrames1, ___fNeedFileInfo2);
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m9BE489F499935CFA9AD4154B18A3AB35C52886DF (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___e0, bool ___fNeedFileInfo1, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = ___e0;
		bool L_1 = ___fNeedFileInfo1;
		StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, Exception_t* ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Exception_t* L_0 = ___e0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___skipFrames1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76090A3CE9567D0D26B5213CB891A873540230EE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF224A334AF1CFC62B512F53E3DAF372FDB579B18)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StackTrace__ctor_m3E3D95384EDE9CC0D716B88A37005F2FAB9A2BB1_RuntimeMethod_var)));
	}

IL_0028:
	{
		Exception_t* L_4 = ___e0;
		int32_t L_5 = ___skipFrames1;
		bool L_6 = ___fNeedFileInfo2;
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_7;
		L_7 = StackTrace_get_trace_mBB469C6E81D250CB717B75A94841D7A64E9B81A7(L_4, L_5, L_6, NULL);
		__this->___frames_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___frames_0), (void*)L_7);
		Exception_t* L_8 = ___e0;
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_9 = L_8->___captured_traces_14;
		__this->___captured_traces_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___captured_traces_1), (void*)L_9);
		return;
	}
}
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StackTrace_get_FrameCount_mB840FEC17263C1DB248EF594E7D008798AF4BB80 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, const RuntimeMethod* method) 
{
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_0 = __this->___frames_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_1 = __this->___frames_0;
		return ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}

IL_0011:
	{
		return 0;
	}
}
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* StackTrace_GetFrame_m019CFC0EAE6869E5100FBB84EC0348D885E2707B (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, __this);
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*)NULL;
	}

IL_000f:
	{
		StackFrameU5BU5D_tF4310E8FAB8C2853A3F0843921BF9FBEC18ABBF7* L_3 = __this->___frames_0;
		int32_t L_4 = ___index0;
		int32_t L_5 = L_4;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// System.String System.Diagnostics.StackTrace::GetAotId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_GetAotId_m91E687449F5715990ADF614F07C859481208260F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Guid_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = ((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___isAotidSet_3;
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = RuntimeAssembly_GetAotId_m8E461807FC308BD78DA6843D28943BCB03C2E611(NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Guid_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		Guid__ctor_m9BEFD9FC285BE9ACEC2EB97FC76C0E35E14D725C((&L_4), L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5;
		L_5 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_1), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_4), (void*)L_5);
	}

IL_0028:
	{
		((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___isAotidSet_3 = (bool)1;
	}

IL_002e:
	{
		String_t* L_6 = ((StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_StaticFields*)il2cpp_codegen_static_fields_for(StackTrace_t7C150C7C14136F985311A83A93524B1019F70853_il2cpp_TypeInfo_var))->___aotid_4;
		return L_6;
	}
}
// System.Boolean System.Diagnostics.StackTrace::AddFrames(System.Text.StringBuilder,System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StackTrace_AddFrames_mFD2C38B4281C8B800FC463FD96DF39DA57BF13A9 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, StringBuilder_t* ___sb0, bool ___separator1, bool* ___isAsync2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CB1F66B7E9F0650DB766506922FE677B69B992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	Guid_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		bool* L_0 = ___isAsync2;
		*((int8_t*)L_0) = (int8_t)0;
		V_0 = (bool)0;
		V_1 = 0;
		goto IL_0186;
	}

IL_000c:
	{
		int32_t L_1 = V_1;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_2;
		L_2 = VirtualFuncInvoker1< StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443*, int32_t >::Invoke(5 /* System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32) */, __this, L_1);
		V_2 = L_2;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_3 = V_2;
		MethodBase_t* L_4 = L_3->___methodBase_5;
		bool L_5;
		L_5 = MethodBase_op_Equality_m6A01E665278ED7A85822F5BC6B961A8FF0DC62E5(L_4, (MethodBase_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		bool L_6 = V_0;
		bool L_7 = ___separator1;
		if (!((int32_t)((int32_t)L_6|(int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t* L_8 = ___sb0;
		String_t* L_9;
		L_9 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_9, NULL);
	}

IL_0033:
	{
		StringBuilder_t* L_11 = ___sb0;
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495, NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_13 = V_2;
		String_t* L_14 = L_13->___internalMethodName_9;
		V_3 = L_14;
		String_t* L_15 = V_3;
		if (!L_15)
		{
			goto IL_0056;
		}
	}
	{
		StringBuilder_t* L_16 = ___sb0;
		String_t* L_17 = V_3;
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_17, NULL);
		goto IL_0180;
	}

IL_0056:
	{
		StringBuilder_t* L_19 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_20 = V_2;
		int64_t L_21 = L_20->___methodAddress_3;
		int64_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_22);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_24 = V_2;
		int32_t L_25 = L_24->___nativeOffset_2;
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_26);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_19, _stringLiteral06CB1F66B7E9F0650DB766506922FE677B69B992, L_23, L_27, NULL);
		goto IL_0180;
	}

IL_007d:
	{
		StringBuilder_t* L_29 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_30 = V_2;
		MethodBase_t* L_31 = L_30->___methodBase_5;
		bool L_32 = V_0;
		bool L_33 = ___separator1;
		bool* L_34 = ___isAsync2;
		StackTrace_GetFullNameForStackTrace_m4B2BACBB18F8441E1D601567D3A9E7D6E2B16F01(__this, L_29, L_31, (bool)((int32_t)((int32_t)L_32|(int32_t)L_33)), (&V_4), L_34, NULL);
		bool L_35 = V_4;
		if (L_35)
		{
			goto IL_0182;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_36 = V_2;
		int32_t L_37 = L_36->___ilOffset_1;
		if ((!(((uint32_t)L_37) == ((uint32_t)(-1)))))
		{
			goto IL_00e8;
		}
	}
	{
		StringBuilder_t* L_38 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_39 = V_2;
		int64_t L_40 = L_39->___methodAddress_3;
		int64_t L_41 = L_40;
		RuntimeObject* L_42 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_41);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_43 = V_2;
		int32_t L_44 = L_43->___nativeOffset_2;
		int32_t L_45 = L_44;
		RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_38, _stringLiteralD6856754C069BB887EACADAC5402DFC04DF58E7C, L_42, L_46, NULL);
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_48 = V_2;
		uint32_t L_49 = L_48->___methodIndex_4;
		if ((((int32_t)L_49) == ((int32_t)((int32_t)16777215))))
		{
			goto IL_00ff;
		}
	}
	{
		StringBuilder_t* L_50 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_51 = V_2;
		uint32_t L_52 = L_51->___methodIndex_4;
		uint32_t L_53 = L_52;
		RuntimeObject* L_54 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_53);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_50, _stringLiteral05BE11CA8745D9E40F7E780C852B45025FB15804, L_54, NULL);
		goto IL_00ff;
	}

IL_00e8:
	{
		StringBuilder_t* L_56 = ___sb0;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_57 = V_2;
		int32_t L_58 = L_57->___ilOffset_1;
		int32_t L_59 = L_58;
		RuntimeObject* L_60 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_59);
		StringBuilder_t* L_61;
		L_61 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_56, _stringLiteral1B0C93330E9DD2B87A22B6324E499950A892FE6C, L_60, NULL);
	}

IL_00ff:
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_62 = V_2;
		String_t* L_63;
		L_63 = StackFrame_GetSecureFileName_mE683AA07D71320222C830C4F468444AB1456911C(L_62, NULL);
		V_5 = L_63;
		String_t* L_64 = V_5;
		Il2CppChar L_65;
		L_65 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_64, 0, NULL);
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0167;
		}
	}
	{
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_66 = V_2;
		MethodBase_t* L_67 = L_66->___methodBase_5;
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* L_68;
		L_68 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* >::Invoke(10 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_67);
		Guid_t L_69;
		L_69 = VirtualFuncInvoker0< Guid_t >::Invoke(6 /* System.Guid System.Reflection.Module::get_ModuleVersionId() */, L_68);
		V_8 = L_69;
		String_t* L_70;
		L_70 = Guid_ToString_mDAA91A4A993E3A7AD8339665E3F0CC35FE00E833((&V_8), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, NULL);
		V_6 = L_70;
		String_t* L_71;
		L_71 = StackTrace_GetAotId_m91E687449F5715990ADF614F07C859481208260F(NULL);
		V_7 = L_71;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_72 = V_2;
		int32_t L_73 = L_72->___ilOffset_1;
		if ((!(((uint32_t)L_73) == ((uint32_t)(-1)))))
		{
			goto IL_0147;
		}
	}
	{
		String_t* L_74 = V_7;
		if (L_74)
		{
			goto IL_0157;
		}
	}

IL_0147:
	{
		String_t* L_75 = V_6;
		String_t* L_76;
		L_76 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral012D19DEDB7F268C61672C79B02816C18D097BF4, L_75, NULL);
		V_5 = L_76;
		goto IL_0167;
	}

IL_0157:
	{
		String_t* L_77 = V_6;
		String_t* L_78 = V_7;
		String_t* L_79;
		L_79 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral1F82196A6F25AC4E97E6DAE2D0F20D7DFE1A48F8, L_77, L_78, NULL);
		V_5 = L_79;
	}

IL_0167:
	{
		StringBuilder_t* L_80 = ___sb0;
		String_t* L_81 = V_5;
		StackFrame_tB901270D6679ED5D24D872C25D4AD053F22F3443* L_82 = V_2;
		int32_t L_83 = L_82->___lineNumber_7;
		int32_t L_84 = L_83;
		RuntimeObject* L_85 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_84);
		StringBuilder_t* L_86;
		L_86 = StringBuilder_AppendFormat_mAB076D92DC92723B2224D75987BE463AF1CE7132(L_80, _stringLiteral48F1B2E34DB21FCB5F2135CD6BDC706B5EC88DE4, L_81, L_85, NULL);
	}

IL_0180:
	{
		V_0 = (bool)1;
	}

IL_0182:
	{
		int32_t L_87 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0186:
	{
		int32_t L_88 = V_1;
		int32_t L_89;
		L_89 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Diagnostics.StackTrace::get_FrameCount() */, __this);
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_000c;
		}
	}
	{
		bool L_90 = V_0;
		return L_90;
	}
}
// System.Void System.Diagnostics.StackTrace::GetFullNameForStackTrace(System.Text.StringBuilder,System.Reflection.MethodBase,System.Boolean,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_GetFullNameForStackTrace_m4B2BACBB18F8441E1D601567D3A9E7D6E2B16F01 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, StringBuilder_t* ___sb0, MethodBase_t* ___mi1, bool ___needsNewLine2, bool* ___skipped3, bool* ___isAsync4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_1 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_2 = NULL;
	int32_t V_3 = 0;
	MethodInfo_t* V_4 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Type_t* V_8 = NULL;
	bool* G_B9_0 = NULL;
	bool* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	bool* G_B10_1 = NULL;
	{
		MethodBase_t* L_0 = ___mi1;
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		V_0 = L_1;
		Type_t* L_2 = V_0;
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Type::get_IsGenericType() */, L_2);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		Type_t* L_4 = V_0;
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_4);
		if (L_5)
		{
			goto IL_004f;
		}
	}
	{
		Type_t* L_6 = V_0;
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetGenericTypeDefinition() */, L_6);
		V_0 = L_7;
		Type_t* L_8 = V_0;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_9;
		L_9 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(84 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_8, ((int32_t)62));
		V_2 = L_9;
		V_3 = 0;
		goto IL_0049;
	}

IL_002b:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_10 = V_2;
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		MethodInfo_t* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		MethodInfo_t* L_14 = V_4;
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_14);
		MethodBase_t* L_16 = ___mi1;
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_16);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_17))))
		{
			goto IL_0045;
		}
	}
	{
		MethodInfo_t* L_18 = V_4;
		___mi1 = L_18;
		goto IL_004f;
	}

IL_0045:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0049:
	{
		int32_t L_20 = V_3;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_21 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_002b;
		}
	}

IL_004f:
	{
		bool* L_22 = ___isAsync4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		Type_t* L_25 = V_0;
		bool L_26;
		L_26 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(19 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_24, L_25);
		*((int8_t*)L_22) = (int8_t)L_26;
		bool* L_27 = ___skipped3;
		MethodBase_t* L_28 = ___mi1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		bool L_31;
		L_31 = CustomAttributeExtensions_IsDefined_mE7F6DB8E05505B4C5BC20B6E8D36F435B3D58210(L_28, L_30, NULL);
		G_B8_0 = L_27;
		if (L_31)
		{
			G_B9_0 = L_27;
			goto IL_0088;
		}
	}
	{
		Type_t* L_32 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (StackTraceHiddenAttribute_t3F439CC8592D5293ED0702E4184028F76FB7C7A2_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_33, NULL);
		bool L_35;
		L_35 = CustomAttributeExtensions_IsDefined_mE7F6DB8E05505B4C5BC20B6E8D36F435B3D58210(L_32, L_34, NULL);
		G_B10_0 = ((int32_t)(L_35));
		G_B10_1 = G_B8_0;
		goto IL_0089;
	}

IL_0088:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0089:
	{
		*((int8_t*)G_B10_1) = (int8_t)G_B10_0;
		bool* L_36 = ___skipped3;
		int32_t L_37 = *((uint8_t*)L_36);
		if (!L_37)
		{
			goto IL_0090;
		}
	}
	{
		return;
	}

IL_0090:
	{
		bool* L_38 = ___isAsync4;
		int32_t L_39 = *((uint8_t*)L_38);
		if (!L_39)
		{
			goto IL_009e;
		}
	}
	{
		StackTrace_ConvertAsyncStateMachineMethod_m6CC0055266C66E71400FE153D80627D67F272BD2((&___mi1), (&V_0), NULL);
	}

IL_009e:
	{
		bool L_40 = ___needsNewLine2;
		if (!L_40)
		{
			goto IL_00ad;
		}
	}
	{
		StringBuilder_t* L_41 = ___sb0;
		String_t* L_42;
		L_42 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, L_42, NULL);
	}

IL_00ad:
	{
		StringBuilder_t* L_44 = ___sb0;
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteral5DA35E1B916A810C5B4A6F2E686AF63495BB9495, NULL);
		StringBuilder_t* L_46 = ___sb0;
		Type_t* L_47 = V_0;
		String_t* L_48;
		L_48 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_47);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, L_48, NULL);
		StringBuilder_t* L_50 = ___sb0;
		StringBuilder_t* L_51;
		L_51 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		StringBuilder_t* L_52 = ___sb0;
		MethodBase_t* L_53 = ___mi1;
		String_t* L_54;
		L_54 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_53);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_52, L_54, NULL);
		MethodBase_t* L_56 = ___mi1;
		bool L_57;
		L_57 = VirtualFuncInvoker0< bool >::Invoke(22 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_56);
		if (!L_57)
		{
			goto IL_0149;
		}
	}
	{
		MethodBase_t* L_58 = ___mi1;
		MethodInfo_t* L_59;
		L_59 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(33 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetGenericMethodDefinition() */, ((MethodInfo_t*)CastclassClass((RuntimeObject*)L_58, MethodInfo_t_il2cpp_TypeInfo_var)));
		___mi1 = L_59;
		MethodBase_t* L_60 = ___mi1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_61;
		L_61 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(23 /* System.Type[] System.Reflection.MethodBase::GetGenericArguments() */, L_60);
		V_5 = L_61;
		StringBuilder_t* L_62 = ___sb0;
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_62, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		V_6 = 0;
		goto IL_0135;
	}

IL_010d:
	{
		int32_t L_64 = V_6;
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_011e;
		}
	}
	{
		StringBuilder_t* L_65 = ___sb0;
		StringBuilder_t* L_66;
		L_66 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_65, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
	}

IL_011e:
	{
		StringBuilder_t* L_67 = ___sb0;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_68 = V_5;
		int32_t L_69 = V_6;
		int32_t L_70 = L_69;
		Type_t* L_71 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		String_t* L_72;
		L_72 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_71);
		StringBuilder_t* L_73;
		L_73 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_67, L_72, NULL);
		int32_t L_74 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0135:
	{
		int32_t L_75 = V_6;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_76 = V_5;
		if ((((int32_t)L_75) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
		{
			goto IL_010d;
		}
	}
	{
		StringBuilder_t* L_77 = ___sb0;
		StringBuilder_t* L_78;
		L_78 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_77, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
	}

IL_0149:
	{
		MethodBase_t* L_79 = ___mi1;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_80;
		L_80 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_79);
		V_1 = L_80;
		StringBuilder_t* L_81 = ___sb0;
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_81, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		V_7 = 0;
		goto IL_01d3;
	}

IL_0161:
	{
		int32_t L_83 = V_7;
		if ((((int32_t)L_83) <= ((int32_t)0)))
		{
			goto IL_0172;
		}
	}
	{
		StringBuilder_t* L_84 = ___sb0;
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_84, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0172:
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_86 = V_1;
		int32_t L_87 = V_7;
		int32_t L_88 = L_87;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_89 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		Type_t* L_90 = L_89->___ClassImpl_1;
		V_8 = L_90;
		Type_t* L_91 = V_8;
		bool L_92;
		L_92 = VirtualFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Type::get_IsGenericType() */, L_91);
		if (!L_92)
		{
			goto IL_0198;
		}
	}
	{
		Type_t* L_93 = V_8;
		bool L_94;
		L_94 = VirtualFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_93);
		if (L_94)
		{
			goto IL_0198;
		}
	}
	{
		Type_t* L_95 = V_8;
		Type_t* L_96;
		L_96 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetGenericTypeDefinition() */, L_95);
		V_8 = L_96;
	}

IL_0198:
	{
		StringBuilder_t* L_97 = ___sb0;
		Type_t* L_98 = V_8;
		String_t* L_99;
		L_99 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_98);
		StringBuilder_t* L_100;
		L_100 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_97, L_99, NULL);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_101 = V_1;
		int32_t L_102 = V_7;
		int32_t L_103 = L_102;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_104 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		String_t* L_105 = L_104->___NameImpl_4;
		if (!L_105)
		{
			goto IL_01cd;
		}
	}
	{
		StringBuilder_t* L_106 = ___sb0;
		StringBuilder_t* L_107;
		L_107 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_106, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		StringBuilder_t* L_108 = ___sb0;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_109 = V_1;
		int32_t L_110 = V_7;
		int32_t L_111 = L_110;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_112 = (L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
		String_t* L_113 = L_112->___NameImpl_4;
		StringBuilder_t* L_114;
		L_114 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_108, L_113, NULL);
	}

IL_01cd:
	{
		int32_t L_115 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_01d3:
	{
		int32_t L_116 = V_7;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_117 = V_1;
		if ((((int32_t)L_116) < ((int32_t)((int32_t)(((RuntimeArray*)L_117)->max_length)))))
		{
			goto IL_0161;
		}
	}
	{
		StringBuilder_t* L_118 = ___sb0;
		StringBuilder_t* L_119;
		L_119 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_118, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		return;
	}
}
// System.Void System.Diagnostics.StackTrace::ConvertAsyncStateMachineMethod(System.Reflection.MethodBase&,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackTrace_ConvertAsyncStateMachineMethod_m6CC0055266C66E71400FE153D80627D67F272BD2 (MethodBase_t** ___method0, Type_t** ___declaringType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m5C2893A8ED931994CAB666229E5502827371887A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t501E1CB9250380D1A4A946E95D7C78A5E7552E6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE7CC2E5EDEFBE0180981C94EA16A56B00A622851_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_1 = NULL;
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_2 = NULL;
	int32_t V_3 = 0;
	MethodInfo_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		Type_t** L_0 = ___declaringType1;
		Type_t* L_1 = *((Type_t**)L_0);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_3, (Type_t*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Type_t* L_5 = V_0;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_6;
		L_6 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(84 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_5, ((int32_t)62));
		V_1 = L_6;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_7 = V_1;
		if (L_7)
		{
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_8 = V_1;
		V_2 = L_8;
		V_3 = 0;
		goto IL_0081;
	}

IL_0025:
	{
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = L_10;
		MethodInfo_t* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		MethodInfo_t* L_13 = V_4;
		RuntimeObject* L_14;
		L_14 = CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m5C2893A8ED931994CAB666229E5502827371887A(L_13, CustomAttributeExtensions_GetCustomAttributes_TisAsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4_m5C2893A8ED931994CAB666229E5502827371887A_RuntimeMethod_var);
		V_5 = L_14;
		RuntimeObject* L_15 = V_5;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		RuntimeObject* L_16 = V_5;
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.AsyncStateMachineAttribute>::GetEnumerator() */, IEnumerable_1_t501E1CB9250380D1A4A946E95D7C78A5E7552E6A_il2cpp_TypeInfo_var, L_16);
		V_6 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0071:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_18 = V_6;
					if (!L_18)
					{
						goto IL_007c;
					}
				}
				{
					RuntimeObject* L_19 = V_6;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_19);
				}

IL_007c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0066_1;
			}

IL_0042_1:
			{
				RuntimeObject* L_20 = V_6;
				AsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4* L_21;
				L_21 = InterfaceFuncInvoker0< AsyncStateMachineAttribute_tB4999E4DFF510AEB79A44F5D977522F2EA64F0C4* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.AsyncStateMachineAttribute>::get_Current() */, IEnumerator_1_tE7CC2E5EDEFBE0180981C94EA16A56B00A622851_il2cpp_TypeInfo_var, L_20);
				Type_t* L_22;
				L_22 = StateMachineAttribute_get_StateMachineType_m16997265B53C5BDFF41C8C8557226F631104B49C_inline(L_21, NULL);
				Type_t** L_23 = ___declaringType1;
				Type_t* L_24 = *((Type_t**)L_23);
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_22, L_24, NULL);
				if (!L_25)
				{
					goto IL_0066_1;
				}
			}
			{
				MethodBase_t** L_26 = ___method0;
				MethodInfo_t* L_27 = V_4;
				*((RuntimeObject**)L_26) = (RuntimeObject*)L_27;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_26, (void*)(RuntimeObject*)L_27);
				Type_t** L_28 = ___declaringType1;
				MethodInfo_t* L_29 = V_4;
				Type_t* L_30;
				L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_29);
				*((RuntimeObject**)L_28) = (RuntimeObject*)L_30;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)(RuntimeObject*)L_30);
				goto IL_0087;
			}

IL_0066_1:
			{
				RuntimeObject* L_31 = V_6;
				bool L_32;
				L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_31);
				if (L_32)
				{
					goto IL_0042_1;
				}
			}
			{
				goto IL_007d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007d:
	{
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0081:
	{
		int32_t L_34 = V_3;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_35 = V_2;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))
		{
			goto IL_0025;
		}
	}

IL_0087:
	{
		return;
	}
}
// System.String System.Diagnostics.StackTrace::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_ToString_m46323EE6573660B32A02BA5BC774FC1D1F529717 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_1 = __this->___captured_traces_1;
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_2 = __this->___captured_traces_1;
		V_2 = L_2;
		V_3 = 0;
		goto IL_0057;
	}

IL_001b:
	{
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_3 = V_2;
		int32_t L_4 = V_3;
		int32_t L_5 = L_4;
		StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		StringBuilder_t* L_7 = V_0;
		bool L_8 = V_1;
		bool L_9;
		L_9 = StackTrace_AddFrames_mFD2C38B4281C8B800FC463FD96DF39DA57BF13A9(L_6, L_7, L_8, (&V_4), NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		bool L_11 = V_4;
		if (L_11)
		{
			goto IL_0053;
		}
	}
	{
		StringBuilder_t* L_12 = V_0;
		String_t* L_13;
		L_13 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_13, NULL);
		StringBuilder_t* L_15 = V_0;
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralF306962EA63DA79E4806D8A7307784E9100B53CC, NULL);
		StringBuilder_t* L_17 = V_0;
		String_t* L_18;
		L_18 = Environment_get_NewLine_m86172FA1FF2F93F740EFB5760938B35750DD35C0(NULL);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
	}

IL_0053:
	{
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0057:
	{
		int32_t L_21 = V_3;
		StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* L_22 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_001b;
		}
	}

IL_005d:
	{
		StringBuilder_t* L_23 = V_0;
		bool L_24 = V_1;
		bool L_25;
		L_25 = StackTrace_AddFrames_mFD2C38B4281C8B800FC463FD96DF39DA57BF13A9(__this, L_23, L_24, (&V_5), NULL);
		StringBuilder_t* L_26 = V_0;
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		return L_27;
	}
}
// System.String System.Diagnostics.StackTrace::ToString(System.Diagnostics.StackTrace/TraceFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StackTrace_ToString_m8732EDFFAFD39EA9E34978B7563D19BD70CD8627 (StackTrace_t7C150C7C14136F985311A83A93524B1019F70853* __this, int32_t ___traceFormat0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_Finalize_m4E94F5985E3D687A2ABCCE0EE9150174EE09D92E (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Diagnostics.Tracing.EventSource::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_Dispose_mF14781ABBB50FDB6CAEC8D7DC1B7896C96CCDED8 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) 
{
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void System.Collections.Comparer::.ctor(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0 = ___culture0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB657B9EBAD0A09A09ED1FD8D1CCD0E421CD7BDC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568_RuntimeMethod_var)));
	}

IL_0014:
	{
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2 = ___culture0;
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_3;
		L_3 = VirtualFuncInvoker0< CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* >::Invoke(10 /* System.Globalization.CompareInfo System.Globalization.CultureInfo::get_CompareInfo() */, L_2);
		__this->____compareInfo_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____compareInfo_0), (void*)L_3);
		return;
	}
}
// System.Void System.Collections.Comparer::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__ctor_m562E1FAFF9CAE3C9CEAF84C0C39CE73C41B940B2 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD28C94883387DBDDA48D56C715653DEF70A2DB6D);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Comparer__ctor_m562E1FAFF9CAE3C9CEAF84C0C39CE73C41B940B2_RuntimeMethod_var)));
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		RuntimeObject* L_5;
		L_5 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_2, _stringLiteralD28C94883387DBDDA48D56C715653DEF70A2DB6D, L_4, NULL);
		__this->____compareInfo_0 = ((CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57*)CastclassClass((RuntimeObject*)L_5, CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____compareInfo_0), (void*)((CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57*)CastclassClass((RuntimeObject*)L_5, CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Int32 System.Collections.Comparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Comparer_Compare_mDD38FA42ECFEF28996EFF1EB6E504895A16FB021 (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* __this, RuntimeObject* ___a0, RuntimeObject* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___a0;
		RuntimeObject* L_1 = ___b1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return 0;
	}

IL_0006:
	{
		RuntimeObject* L_2 = ___a0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		RuntimeObject* L_3 = ___b1;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		RuntimeObject* L_4 = ___a0;
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = ___b1;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var));
		String_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* L_8 = __this->____compareInfo_0;
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		int32_t L_11;
		L_11 = VirtualFuncInvoker2< int32_t, String_t*, String_t* >::Invoke(5 /* System.Int32 System.Globalization.CompareInfo::Compare(System.String,System.String) */, L_8, L_9, L_10);
		return L_11;
	}

IL_0032:
	{
		RuntimeObject* L_12 = ___a0;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var));
		RuntimeObject* L_13 = V_2;
		if (!L_13)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_14 = V_2;
		RuntimeObject* L_15 = ___b1;
		int32_t L_16;
		L_16 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, L_14, L_15);
		return L_16;
	}

IL_0044:
	{
		RuntimeObject* L_17 = ___b1;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var));
		RuntimeObject* L_18 = V_3;
		if (!L_18)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_19 = V_3;
		RuntimeObject* L_20 = ___a0;
		int32_t L_21;
		L_21 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(0 /* System.Int32 System.IComparable::CompareTo(System.Object) */, IComparable_t4D82A120347A28A1042C1563720033B8DA6E5C21_il2cpp_TypeInfo_var, L_19, L_20);
		return ((-L_21));
	}

IL_0057:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3037931DE899C4BCA58ECF059EF9BE27F54B681)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Comparer_Compare_mDD38FA42ECFEF28996EFF1EB6E504895A16FB021_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Comparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparer__cctor_m691F5B4D4F5010A7070BE55C4E9DFFBA1759B40E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* L_1 = (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653*)il2cpp_codegen_object_new(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var);
		Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568(L_1, L_0, NULL);
		((Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var))->___Default_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var))->___Default_1), (void*)L_1);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653* L_3 = (Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653*)il2cpp_codegen_object_new(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var);
		Comparer__ctor_mD217D5CAFCB729C3F2DE01F51D6A30DC0D380568(L_3, L_2, NULL);
		((Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var))->___DefaultInvariant_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_StaticFields*)il2cpp_codegen_static_fields_for(Comparer_t489050BA9C6F7C6808A60F16D392DCB237050653_il2cpp_TypeInfo_var))->___DefaultInvariant_2), (void*)L_3);
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
// Conversion methods for marshalling of: System.Collections.DictionaryEntry
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke(const DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB& unmarshaled, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.____key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____key_0))
		{
			marshaled.____key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____key_0));
			(marshaled.____key_0)->AddRef();
		}
		else
		{
			marshaled.____key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____key_0);
		}
	}
	else
	{
		marshaled.____key_0 = NULL;
	}
	if (unmarshaled.____value_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____value_1))
		{
			marshaled.____value_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____value_1));
			(marshaled.____value_1)->AddRef();
		}
		else
		{
			marshaled.____value_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____value_1);
		}
	}
	else
	{
		marshaled.____value_1 = NULL;
	}
}
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_back(const DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke& marshaled, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____key_0 != NULL)
	{
		unmarshaled.____key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____key_0), Il2CppIUnknown::IID, marshaled.____key_0);
		}
	}
	else
	{
		unmarshaled.____key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____key_0), (void*)NULL);
	}
	if (marshaled.____value_1 != NULL)
	{
		unmarshaled.____value_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____value_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____value_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____value_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____value_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____value_1), Il2CppIUnknown::IID, marshaled.____value_1);
		}
	}
	else
	{
		unmarshaled.____value_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____value_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: System.Collections.DictionaryEntry
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_pinvoke_cleanup(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke& marshaled)
{
	if (marshaled.____key_0 != NULL)
	{
		(marshaled.____key_0)->Release();
		marshaled.____key_0 = NULL;
	}
	if (marshaled.____value_1 != NULL)
	{
		(marshaled.____value_1)->Release();
		marshaled.____value_1 = NULL;
	}
}
// Conversion methods for marshalling of: System.Collections.DictionaryEntry
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_com(const DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB& unmarshaled, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com& marshaled)
{
	if (unmarshaled.____key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____key_0))
		{
			marshaled.____key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____key_0));
			(marshaled.____key_0)->AddRef();
		}
		else
		{
			marshaled.____key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____key_0);
		}
	}
	else
	{
		marshaled.____key_0 = NULL;
	}
	if (unmarshaled.____value_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____value_1))
		{
			marshaled.____value_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.____value_1));
			(marshaled.____value_1)->AddRef();
		}
		else
		{
			marshaled.____value_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.____value_1);
		}
	}
	else
	{
		marshaled.____value_1 = NULL;
	}
}
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_com_back(const DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com& marshaled, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____key_0 != NULL)
	{
		unmarshaled.____key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____key_0), Il2CppIUnknown::IID, marshaled.____key_0);
		}
	}
	else
	{
		unmarshaled.____key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____key_0), (void*)NULL);
	}
	if (marshaled.____value_1 != NULL)
	{
		unmarshaled.____value_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____value_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____value_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____value_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.____value_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.____value_1), Il2CppIUnknown::IID, marshaled.____value_1);
		}
	}
	else
	{
		unmarshaled.____value_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.____value_1), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: System.Collections.DictionaryEntry
IL2CPP_EXTERN_C void DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshal_com_cleanup(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com& marshaled)
{
	if (marshaled.____key_0 != NULL)
	{
		(marshaled.____key_0)->Release();
		marshaled.____key_0 = NULL;
	}
	if (marshaled.____value_1 != NULL)
	{
		(marshaled.____value_1)->Release();
		marshaled.____value_1 = NULL;
	}
}
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		__this->____key_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____key_0), (void*)L_0);
		RuntimeObject* L_1 = ___value1;
		__this->____value_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_1), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*>(__this + _offset);
	DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA(_thisAdjusted, ___key0, ___value1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Collections.HashHelpers::IsPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashHelpers_IsPrime_m2F0723C1815F02D1E7CF69DDA9AE4E993DAC0AD9 (int32_t ___candidate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___candidate0;
		if (!((int32_t)(L_0&1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___candidate0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)L_1));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
		V_1 = 3;
		goto IL_001d;
	}

IL_0012:
	{
		int32_t L_3 = ___candidate0;
		int32_t L_4 = V_1;
		if (((int32_t)(L_3%L_4)))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 2));
	}

IL_001d:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0023:
	{
		int32_t L_8 = ___candidate0;
		return (bool)((((int32_t)L_8) == ((int32_t)2))? 1 : 0);
	}
}
// System.Int32 System.Collections.HashHelpers::GetPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E (int32_t ___min0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___min0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77048C04058DC1CDDAE5B38B11B56EFD16467A77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E_RuntimeMethod_var)));
	}

IL_000f:
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___primes_0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		int32_t L_6 = V_1;
		int32_t L_7 = ___min0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		int32_t L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___primes_0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_12 = ___min0;
		V_2 = ((int32_t)(L_12|1));
		goto IL_004b;
	}

IL_0035:
	{
		int32_t L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = HashHelpers_IsPrime_m2F0723C1815F02D1E7CF69DDA9AE4E993DAC0AD9(L_13, NULL);
		if (!L_14)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_15 = V_2;
		if (!((int32_t)(((int32_t)il2cpp_codegen_subtract(L_15, 1))%((int32_t)101))))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_16 = V_2;
		return L_16;
	}

IL_0047:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 2));
	}

IL_004b:
	{
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)2147483647LL))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_19 = ___min0;
		return L_19;
	}
}
// System.Int32 System.Collections.HashHelpers::ExpandPrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65 (int32_t ___oldSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___oldSize0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(2, L_0));
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)2146435069)))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = ___oldSize0;
		if ((((int32_t)((int32_t)2146435069)) <= ((int32_t)L_2)))
		{
			goto IL_001a;
		}
	}
	{
		return ((int32_t)2146435069);
	}

IL_001a:
	{
		int32_t L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(L_3, NULL);
		return L_4;
	}
}
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.HashHelpers::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* HashHelpers_get_SerializationInfoTable_m9A5D73C7D7F00AA2E762140957C084A2DFBAA324 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0 = ((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___s_serializationInfoTable_1;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_1 = (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*)il2cpp_codegen_object_new(ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5(L_1, ConditionalWeakTable_2__ctor_m58786AF1107DF4E4E21EF228A44B50186A4EEDD5_RuntimeMethod_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_2;
		L_2 = InterlockedCompareExchangeImpl<ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*>((&((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___s_serializationInfoTable_1), L_1, (ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858*)NULL);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_3 = ((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___s_serializationInfoTable_1;
		return L_3;
	}
}
// System.Void System.Collections.HashHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashHelpers__cctor_m33DF23BB068509B3BA62769F1861DFDB61C988E4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_27_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)72));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t9FFB0BEB067161CE52A63D5857FEA61F74F17A50____74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20_27_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___primes_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_StaticFields*)il2cpp_codegen_static_fields_for(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var))->___primes_0), (void*)L_1);
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
// System.Void System.Collections.ListDictionaryInternal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDictionaryInternal__ctor_mB7A6828B81425B52BE5C3F967471CFA703465FB0 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object System.Collections.ListDictionaryInternal::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListDictionaryInternal_get_Item_mDC0A8FCCB80A0CCF56A23290EC0F0B0171D1DEA9 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_get_Item_mDC0A8FCCB80A0CCF56A23290EC0F0B0171D1DEA9_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___head_0;
		V_0 = L_2;
		goto IL_0038;
	}

IL_001c:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_3 = V_0;
		RuntimeObject* L_4 = L_3->___key_0;
		RuntimeObject* L_5 = ___key0;
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_7 = V_0;
		RuntimeObject* L_8 = L_7->___value_1;
		return L_8;
	}

IL_0031:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_9 = V_0;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_10 = L_9->___next_2;
		V_0 = L_10;
	}

IL_0038:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_11 = V_0;
		if (L_11)
		{
			goto IL_001c;
		}
	}
	{
		return NULL;
	}
}
// System.Boolean System.Collections.ListDictionaryInternal::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDictionaryInternal_Contains_m13B783F4FD105808A8D8016CB28BEAD89CC5350D (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ListDictionaryInternal_Contains_m13B783F4FD105808A8D8016CB28BEAD89CC5350D_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___head_0;
		V_0 = L_2;
		goto IL_0033;
	}

IL_001c:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_3 = V_0;
		RuntimeObject* L_4 = L_3->___key_0;
		RuntimeObject* L_5 = ___key0;
		bool L_6;
		L_6 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_5);
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		return (bool)1;
	}

IL_002c:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_7 = V_0;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_8 = L_7->___next_2;
		V_0 = L_8;
	}

IL_0033:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_9 = V_0;
		if (L_9)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}
}
// System.Collections.IEnumerator System.Collections.ListDictionaryInternal::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ListDictionaryInternal_System_Collections_IEnumerable_GetEnumerator_m5030CCE9F2F60B321D715C9E6B183E7B34030063 (ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* L_0 = (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6*)il2cpp_codegen_object_new(NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6_il2cpp_TypeInfo_var);
		NodeEnumerator__ctor_m0F85D195064B3A6D129FF52D3B87E55C41784D4D(L_0, __this, NULL);
		return L_0;
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
// System.Void System.Collections.ListDictionaryInternal/NodeEnumerator::.ctor(System.Collections.ListDictionaryInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeEnumerator__ctor_m0F85D195064B3A6D129FF52D3B87E55C41784D4D (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* ___list0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_0 = ___list0;
		__this->___list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___list_0), (void*)L_0);
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_1 = ___list0;
		int32_t L_2 = L_1->___version_1;
		__this->___version_2 = L_2;
		__this->___start_3 = (bool)1;
		__this->___current_1 = (DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)(DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)NULL);
		return;
	}
}
// System.Object System.Collections.ListDictionaryInternal/NodeEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Current_m45C08019148F71364CA1C72BC10465549DA1608D (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_0;
		L_0 = NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_1 = L_0;
		RuntimeObject* L_2 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry System.Collections.ListDictionaryInternal/NodeEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_0 = __this->___current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Entry_m0D8782706E05D6695992D6ACC5ED2212DB777EDB_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___current_1;
		RuntimeObject* L_3 = L_2->___key_0;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_4 = __this->___current_1;
		RuntimeObject* L_5 = L_4->___value_1;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.ListDictionaryInternal/NodeEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Key_mBC1D321D60EAA8F3ADE1D6D5DED7D521EB545F3B (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_0 = __this->___current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Key_mBC1D321D60EAA8F3ADE1D6D5DED7D521EB545F3B_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___current_1;
		RuntimeObject* L_3 = L_2->___key_0;
		return L_3;
	}
}
// System.Object System.Collections.ListDictionaryInternal/NodeEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeEnumerator_get_Value_m5D35483F88E7B6A47F88B61158452979CE329969 (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_0 = __this->___current_1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_get_Value_m5D35483F88E7B6A47F88B61158452979CE329969_RuntimeMethod_var)));
	}

IL_0013:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_2 = __this->___current_1;
		RuntimeObject* L_3 = L_2->___value_1;
		return L_3;
	}
}
// System.Boolean System.Collections.ListDictionaryInternal/NodeEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeEnumerator_MoveNext_mAC3A8BA7AEB35F7D512ED301B352B2FC9E4C360B (NodeEnumerator_tF548404395C7ED6FE1E0DEA14D27A0E6478F1BD6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version_2;
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_1 = __this->___list_0;
		int32_t L_2 = L_1->___version_1;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeEnumerator_MoveNext_mAC3A8BA7AEB35F7D512ED301B352B2FC9E4C360B_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_4 = __this->___start_3;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		ListDictionaryInternal_tC5022F2C249477F5A90382A5A71661745C723123* L_5 = __this->___list_0;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_6 = L_5->___head_0;
		__this->___current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)L_6);
		__this->___start_3 = (bool)0;
		goto IL_0059;
	}

IL_0040:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_7 = __this->___current_1;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_8 = __this->___current_1;
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_9 = L_8->___next_2;
		__this->___current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_1), (void*)L_9);
	}

IL_0059:
	{
		DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* L_10 = __this->___current_1;
		return (bool)((!(((RuntimeObject*)(DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
// System.Void System.Collections.ListDictionaryInternal/DictionaryNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryNode__ctor_m9357A7727A8ED2BF9CDB7A674C49D0121DC00F22 (DictionaryNode_t301A117B591FAEB3FF910A321E6C44AE38251D5E* __this, const RuntimeMethod* method) 
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
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m07DC369002304B483B9FC41DBDAF4A25AC3C9F80 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_il2cpp_TypeInfo_var))->___Value_0;
		__this->____items_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_0);
		return;
	}
}
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_1;
		L_1 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral461B901954DA68B031564E85615378AE7FACBEA9)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0_RuntimeMethod_var)));
	}

IL_0024:
	{
		int32_t L_3 = ___capacity0;
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_il2cpp_TypeInfo_var))->___Value_0;
		__this->____items_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_4);
		return;
	}

IL_0033:
	{
		int32_t L_5 = ___capacity0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->____items_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items_0), (void*)L_6);
		return;
	}
}
// System.Int32 System.Collections.ArrayList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayList_get_Count_m0C8A956B9AADFEF064360B3A8EDF25487A00B62B (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_1;
		return L_0;
	}
}
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2 = __this->____size_1;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayList_get_Item_m0095B602FC62FCE80DBB647A4116414840AC2B82_RuntimeMethod_var)));
	}

IL_001d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____items_0;
		int32_t L_5 = ___index0;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Object System.Collections.ArrayList::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_Clone_m4F7BE074DFF28EA5E8D8076A67AFAD53949212C4 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_1, L_0, NULL);
		V_0 = L_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = V_0;
		int32_t L_3 = __this->____size_1;
		L_2->____size_1 = L_3;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_4 = V_0;
		int32_t L_5 = __this->____version_2;
		L_4->____version_2 = L_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____items_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7->____items_0;
		int32_t L_9 = __this->____size_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_6, 0, (RuntimeArray*)L_8, 0, L_9, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayList_GetEnumerator_m805139F78BF3FEAE1E5C64339010BFE215EEC208 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* L_0 = (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA*)il2cpp_codegen_object_new(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22(L_0, __this, NULL);
		return L_0;
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
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.ctor(System.Collections.ArrayList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__ctor_mD171473379C7B7D2632F9FB1156983000FC83F22 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___list0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___list0;
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		__this->____index_1 = (-1);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = ___list0;
		int32_t L_2 = L_1->____version_2;
		__this->____version_2 = L_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = ___list0;
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_mE6EDDDC900C50B222CF32BCD2AD027595F2D74B7(L_4, L_6, NULL);
		__this->____isArrayList_4 = L_7;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_8);
		return;
	}
}
// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayListEnumeratorSimple_Clone_mB8CAE8F92F790B72257148726FF453F8833228AB (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Collections.ArrayList/ArrayListEnumeratorSimple::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_1 = __this->____list_0;
		int32_t L_2 = L_1->____version_2;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_MoveNext_m8138ECAB6271595D2B271AD27DF8BC1242637E66_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_4 = __this->____isArrayList_4;
		if (!L_4)
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_5 = __this->____index_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_6 = __this->____list_0;
		int32_t L_7 = L_6->____size_1;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0060;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_8 = __this->____list_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8->____items_0;
		int32_t L_10 = __this->____index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_0;
		__this->____index_1 = L_11;
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		__this->____currentElement_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_14);
		return (bool)1;
	}

IL_0060:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_15);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16 = __this->____list_0;
		int32_t L_17 = L_16->____size_1;
		__this->____index_1 = L_17;
		return (bool)0;
	}

IL_007e:
	{
		int32_t L_18 = __this->____index_1;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_19 = __this->____list_0;
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_19);
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_00b7;
		}
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_21 = __this->____list_0;
		int32_t L_22 = __this->____index_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = V_0;
		__this->____index_1 = L_23;
		int32_t L_24 = V_0;
		RuntimeObject* L_25;
		L_25 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(7 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_21, L_24);
		__this->____currentElement_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_25);
		return (bool)1;
	}

IL_00b7:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_26 = __this->____list_0;
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_26);
		__this->____index_1 = L_27;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		__this->____currentElement_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentElement_3), (void*)L_28);
		return (bool)0;
	}
}
// System.Object System.Collections.ArrayList/ArrayListEnumeratorSimple::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613 (ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->____currentElement_3;
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5;
		RuntimeObject* L_2 = V_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_1) == ((RuntimeObject*)(RuntimeObject*)L_2))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = __this->____index_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var)));
	}

IL_0023:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayListEnumeratorSimple_get_Current_m37B813C38A8EE4BE18A4EC908DCAA02DF3DE4613_RuntimeMethod_var)));
	}

IL_002e:
	{
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// System.Void System.Collections.ArrayList/ArrayListEnumeratorSimple::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayListEnumeratorSimple__cctor_m8AB06B711B2D46361554CF68A35B7087C42623E2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_StaticFields*)il2cpp_codegen_static_fields_for(ArrayListEnumeratorSimple_tB829A175318C37ED5427A14633AC85D5816CF2DA_il2cpp_TypeInfo_var))->___s_dummyObject_5), (void*)L_0);
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
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::get_SerializationInfoTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* Hashtable_get_SerializationInfoTable_mCB2E9EFC4A0705413E6277848106CE18E11C88E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_mC06DFF65DC119A6D40DE6581930AEEE5ED08B81A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_mC06DFF65DC119A6D40DE6581930AEEE5ED08B81A((&((Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields*)il2cpp_codegen_static_fields_for(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var))->___s_serializationInfoTable_8), LazyInitializer_EnsureInitialized_TisConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858_mC06DFF65DC119A6D40DE6581930AEEE5ED08B81A_RuntimeMethod_var);
		return L_0;
	}
}
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A(__this, 0, (1.0f), NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, float ___loadFactor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int32_t G_B10_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_001a:
	{
		float L_2 = ___loadFactor1;
		if ((!(((float)L_2) >= ((float)(0.100000001f)))))
		{
			goto IL_002a;
		}
	}
	{
		float L_3 = ___loadFactor1;
		if ((((float)L_3) <= ((float)(1.0f))))
		{
			goto IL_005b;
		}
	}

IL_002a:
	{
		double L_4 = (0.10000000000000001);
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_4);
		double L_6 = (1.0);
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE209FAE75837720CC82067C1D76DCD103784C60B)), L_5, L_7, NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralED1269E5C23EE33C8DD1238BDFE8303F0D986C1F)), L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_005b:
	{
		float L_10 = ___loadFactor1;
		__this->____loadFactor_4 = ((float)il2cpp_codegen_multiply((0.720000029f), L_10));
		int32_t L_11 = ___capacity0;
		float L_12 = __this->____loadFactor_4;
		V_0 = ((double)((float)(((float)L_11)/L_12)));
		double L_13 = V_0;
		if ((!(((double)L_13) > ((double)(2147483647.0)))))
		{
			goto IL_008f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral77048C04058DC1CDDAE5B38B11B56EFD16467A77)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A_RuntimeMethod_var)));
	}

IL_008f:
	{
		double L_15 = V_0;
		if ((((double)L_15) > ((double)(3.0))))
		{
			goto IL_009e;
		}
	}
	{
		G_B10_0 = 3;
		goto IL_00a5;
	}

IL_009e:
	{
		double L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = HashHelpers_GetPrime_mE3F9C31360B417F267BCFF97423D50A229AB8F1E(il2cpp_codegen_cast_double_to_int<int32_t>(L_16), NULL);
		G_B10_0 = L_17;
	}

IL_00a5:
	{
		V_1 = G_B10_0;
		int32_t L_18 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_19 = (bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)SZArrayNew(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->____buckets_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_19);
		float L_20 = __this->____loadFactor_4;
		int32_t L_21 = V_1;
		__this->____loadsize_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_20, ((float)L_21))));
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)0;
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, float ___loadFactor1, RuntimeObject* ___equalityComparer2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		float L_1 = ___loadFactor1;
		Hashtable__ctor_mF77B5A58D1E293CE5F40A06146D9C24D7C7F638A(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___equalityComparer2;
		__this->____keycomparer_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____keycomparer_7), (void*)L_2);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		RuntimeObject* L_1 = ___equalityComparer1;
		Hashtable__ctor_mDDBD0273515277E4386A6D3D1E8F8ADB78D0FFDB(__this, L_0, (1.0f), L_1, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD50422D7B9D147207A33AB5BDC0B7CE963A51056 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* L_0;
		L_0 = Hashtable_get_SerializationInfoTable_mCB2E9EFC4A0705413E6277848106CE18E11C88E3(NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = ___info0;
		ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7(L_0, __this, L_1, ConditionalWeakTable_2_Add_mF98A2811734A37D856C622E7783FD7502AA7F0B7_RuntimeMethod_var);
		return;
	}
}
// System.UInt32 System.Collections.Hashtable::InitHash(System.Object,System.Int32,System.UInt32&,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, int32_t ___hashsize1, uint32_t* ___seed2, uint32_t* ___incr3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(14 /* System.Int32 System.Collections.Hashtable::GetHash(System.Object) */, __this, L_0);
		V_0 = ((int32_t)(L_1&((int32_t)2147483647LL)));
		uint32_t* L_2 = ___seed2;
		uint32_t L_3 = V_0;
		*((int32_t*)L_2) = (int32_t)L_3;
		uint32_t* L_4 = ___incr3;
		uint32_t* L_5 = ___seed2;
		int32_t L_6 = *((uint32_t*)L_5);
		int32_t L_7 = ___hashsize1;
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(1, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply(L_6, ((int32_t)101)))%(uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))));
		uint32_t L_8 = V_0;
		return L_8;
	}
}
// System.Object System.Collections.Hashtable::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_Clone_mB2563D44229924F89AE7F351E657CDF87CD7BF7B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_0;
		V_0 = L_0;
		int32_t L_1 = __this->____count_1;
		RuntimeObject* L_2 = __this->____keycomparer_7;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC(L_3, L_1, L_2, NULL);
		V_1 = L_3;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = V_1;
		int32_t L_5 = __this->____version_5;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		L_4->____version_5 = L_5;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_6 = V_1;
		float L_7 = __this->____loadFactor_4;
		L_6->____loadFactor_4 = L_7;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_8 = V_1;
		L_8->____count_1 = 0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_0;
		V_2 = ((int32_t)(((RuntimeArray*)L_9)->max_length));
		goto IL_006d;
	}

IL_0042:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = V_0;
		int32_t L_12 = V_2;
		RuntimeObject* L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___key_0;
		V_3 = L_13;
		RuntimeObject* L_14 = V_3;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_15 = V_3;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_16 = V_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_16)))
		{
			goto IL_006d;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_17 = V_1;
		RuntimeObject* L_18 = V_3;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_19 = V_0;
		int32_t L_20 = V_2;
		RuntimeObject* L_21 = ((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)))->___val_1;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(12 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_17, L_18, L_21);
	}

IL_006d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_23 = V_1;
		return L_23;
	}
}
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_Contains_m096438B2D1B051BAF09EEA1BB6A590A12DC1CA12 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(10 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, __this, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_ContainsKey_mD7547474EE4492B67247124EAEFCA6A92FE861E0_RuntimeMethod_var)));
	}

IL_0013:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_0;
		V_2 = L_2;
		RuntimeObject* L_3 = ___key0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = V_2;
		uint32_t L_5;
		L_5 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), (&V_0), (&V_1), NULL);
		V_3 = L_5;
		V_4 = 0;
		uint32_t L_6 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = V_2;
		V_6 = ((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
	}

IL_0033:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = V_2;
		int32_t L_9 = V_6;
		int32_t L_10 = L_9;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_5 = L_11;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_12 = V_5;
		RuntimeObject* L_13 = L_12.___key_0;
		if (L_13)
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_14 = V_5;
		int32_t L_15 = L_14.___hash_coll_2;
		uint32_t L_16 = V_3;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_15&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_16)))))
		{
			goto IL_006c;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_17 = V_5;
		RuntimeObject* L_18 = L_17.___key_0;
		RuntimeObject* L_19 = ___key0;
		bool L_20;
		L_20 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(15 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_18, L_19);
		if (!L_20)
		{
			goto IL_006c;
		}
	}
	{
		return (bool)1;
	}

IL_006c:
	{
		int32_t L_21 = V_6;
		uint32_t L_22 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_23 = V_2;
		V_6 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_21), ((int64_t)(uint64_t)L_22)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_24 = V_5;
		int32_t L_25 = L_24.___hash_coll_2;
		if ((((int32_t)L_25) >= ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_26 = V_4;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		V_4 = L_27;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_28 = V_2;
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_0090:
	{
		return (bool)0;
	}
}
// System.Object System.Collections.Hashtable::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_get_Item_m9E54CED9DB1DB76DD826C235F162BC2109D1D925_RuntimeMethod_var)));
	}

IL_0013:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_0;
		V_2 = L_2;
		RuntimeObject* L_3 = ___key0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = V_2;
		uint32_t L_5;
		L_5 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), (&V_0), (&V_1), NULL);
		V_3 = L_5;
		V_4 = 0;
		uint32_t L_6 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_7 = V_2;
		V_6 = ((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
	}

IL_0033:
	{
		il2cpp_codegen_initobj((&V_8), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
	}

IL_003b:
	{
		int32_t L_8 = __this->____version_5;
		il2cpp_codegen_memory_barrier();
		V_7 = L_8;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_9 = V_2;
		int32_t L_10 = V_6;
		int32_t L_11 = L_10;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		bool L_13 = __this->____isWriterInProgress_6;
		il2cpp_codegen_memory_barrier();
		if (L_13)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_14 = V_7;
		int32_t L_15 = __this->____version_5;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_006e;
		}
	}

IL_0065:
	{
		SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_8), NULL);
		goto IL_003b;
	}

IL_006e:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_16 = V_5;
		RuntimeObject* L_17 = L_16.___key_0;
		if (L_17)
		{
			goto IL_0079;
		}
	}
	{
		return NULL;
	}

IL_0079:
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_18 = V_5;
		int32_t L_19 = L_18.___hash_coll_2;
		uint32_t L_20 = V_3;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_19&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_20)))))
		{
			goto IL_00a3;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_21 = V_5;
		RuntimeObject* L_22 = L_21.___key_0;
		RuntimeObject* L_23 = ___key0;
		bool L_24;
		L_24 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(15 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_22, L_23);
		if (!L_24)
		{
			goto IL_00a3;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_25 = V_5;
		RuntimeObject* L_26 = L_25.___val_1;
		return L_26;
	}

IL_00a3:
	{
		int32_t L_27 = V_6;
		uint32_t L_28 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_29 = V_2;
		V_6 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_27), ((int64_t)(uint64_t)L_28)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))));
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_30 = V_5;
		int32_t L_31 = L_30.___hash_coll_2;
		if ((((int32_t)L_31) >= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_32 = V_4;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		V_4 = L_33;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_34 = V_2;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0033;
		}
	}

IL_00ca:
	{
		return NULL;
	}
}
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_set_Item_mDF3D54BA5F202F104D31EFAE9065380FEF8859EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___key0;
		RuntimeObject* L_1 = ___value1;
		Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291(__this, L_0, L_1, (bool)0, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::expand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_mB9DF3485DD95BD069BB3EF6E0A2E5C09B79E1D65(((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688(__this, L_2, NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::rehash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_0;
		Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688(__this, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		return;
	}
}
// System.Void System.Collections.Hashtable::UpdateVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version_5;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memory_barrier();
		__this->____version_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// System.Void System.Collections.Hashtable::rehash(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_rehash_m359C272F11FE496EAD29CD875CE080464AE5C688 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___newsize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* V_0 = NULL;
	int32_t V_1 = 0;
	bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		__this->____occupancy_2 = 0;
		int32_t L_0 = ___newsize0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_1 = (bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)SZArrayNew(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_005a;
	}

IL_0012:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = __this->____buckets_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_6 = V_2;
		RuntimeObject* L_7 = L_6.___key_0;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_8 = V_2;
		RuntimeObject* L_9 = L_8.___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_10 = __this->____buckets_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_10)))
		{
			goto IL_0056;
		}
	}
	{
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_11 = V_2;
		int32_t L_12 = L_11.___hash_coll_2;
		V_3 = ((int32_t)(L_12&((int32_t)2147483647LL)));
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_13 = V_0;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_14 = V_2;
		RuntimeObject* L_15 = L_14.___key_0;
		bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E L_16 = V_2;
		RuntimeObject* L_17 = L_16.___val_1;
		int32_t L_18 = V_3;
		Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B(__this, L_13, L_15, L_17, L_18, NULL);
	}

IL_0056:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_005a:
	{
		int32_t L_20 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_21 = __this->____buckets_0;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_22 = V_0;
		__this->____buckets_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_22);
		float L_23 = __this->____loadFactor_4;
		int32_t L_24 = ___newsize0;
		__this->____loadsize_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_23, ((float)L_24))));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)0;
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_System_Collections_IEnumerable_GetEnumerator_m1E7D435C0370CE614C891A645773762D0D04EC86 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_0 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_0, __this, 3, NULL);
		return L_0;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Hashtable_GetEnumerator_mFDC4AC74F7AB0A9DBDFC66B6A4A4EFFC8E33A453 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* L_0 = (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061*)il2cpp_codegen_object_new(HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061_il2cpp_TypeInfo_var);
		HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC(L_0, __this, 3, NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hashtable_GetHash_m459113F6E61C0DB4A4C015283CD15653D518E05A (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____keycomparer_7;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->____keycomparer_7;
		RuntimeObject* L_2 = ___key0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___key0;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		return L_5;
	}
}
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_KeyEquals_m95D23B7F952AA10E9127A936B01A64995ACE54F6 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___item0, RuntimeObject* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_0 = __this->____buckets_0;
		RuntimeObject* L_1 = ___item0;
		if ((!(((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___item0;
		RuntimeObject* L_3 = ___key1;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3))))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)1;
	}

IL_0011:
	{
		RuntimeObject* L_4 = __this->____keycomparer_7;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject* L_5 = __this->____keycomparer_7;
		RuntimeObject* L_6 = ___item0;
		RuntimeObject* L_7 = ___key1;
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return L_8;
	}

IL_0027:
	{
		RuntimeObject* L_9 = ___item0;
		if (!L_9)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_10 = ___item0;
		RuntimeObject* L_11 = ___key1;
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_11);
		return L_12;
	}

IL_0032:
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Hashtable::Insert(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, RuntimeObject* ___key0, RuntimeObject* ___nvalue1, bool ___add2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		RuntimeObject* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC94F5AC0843483C42F57211A309E77D97ADE18B1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->____count_1;
		int32_t L_3 = __this->____loadsize_3;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0029;
		}
	}
	{
		Hashtable_expand_m0FF616AD3323989E34824B1AE634759C3BAF8937(__this, NULL);
		goto IL_0047;
	}

IL_0029:
	{
		int32_t L_4 = __this->____occupancy_2;
		int32_t L_5 = __this->____loadsize_3;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_6 = __this->____count_1;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)100))))
		{
			goto IL_0047;
		}
	}
	{
		Hashtable_rehash_mF4C7E0C7240002F6E5FDFF32EF77C06EF2729DB5(__this, NULL);
	}

IL_0047:
	{
		RuntimeObject* L_7 = ___key0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = __this->____buckets_0;
		uint32_t L_9;
		L_9 = Hashtable_InitHash_mE575CF5A0F7C4EE34ACDEB12597E6FE5A3B13587(__this, L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length)), (&V_0), (&V_1), NULL);
		V_2 = L_9;
		V_3 = 0;
		V_4 = (-1);
		uint32_t L_10 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = __this->____buckets_0;
		V_5 = ((int32_t)((uint32_t)(int32_t)L_10%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
	}

IL_006c:
	{
		int32_t L_12 = V_4;
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_00a4;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_13 = __this->____buckets_0;
		int32_t L_14 = V_5;
		RuntimeObject* L_15 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_16 = __this->____buckets_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_15) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_16))))
		{
			goto IL_00a4;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_17 = __this->____buckets_0;
		int32_t L_18 = V_5;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hash_coll_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_20 = V_5;
		V_4 = L_20;
	}

IL_00a4:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_21 = __this->____buckets_0;
		int32_t L_22 = V_5;
		RuntimeObject* L_23 = ((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->___key_0;
		if (!L_23)
		{
			goto IL_00f1;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_24 = __this->____buckets_0;
		int32_t L_25 = V_5;
		RuntimeObject* L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_27 = __this->____buckets_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_26) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_27))))
		{
			goto IL_015e;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_28 = __this->____buckets_0;
		int32_t L_29 = V_5;
		int32_t L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___hash_coll_2;
		if (((int64_t)(((int64_t)L_30)&((int64_t)(uint64_t)((uint32_t)((int32_t)-2147483648LL))))))
		{
			goto IL_015e;
		}
	}

IL_00f1:
	{
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) == ((int32_t)(-1))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_32 = V_4;
		V_5 = L_32;
	}

IL_00fa:
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_33 = __this->____buckets_0;
		int32_t L_34 = V_5;
		RuntimeObject* L_35 = ___nvalue1;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___val_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___val_1), (void*)L_35);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_36 = __this->____buckets_0;
		int32_t L_37 = V_5;
		RuntimeObject* L_38 = ___key0;
		((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___key_0 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___key_0), (void*)L_38);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_39 = __this->____buckets_0;
		int32_t L_40 = V_5;
		int32_t* L_41 = (&((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40)))->___hash_coll_2);
		int32_t* L_42 = L_41;
		int32_t L_43 = *((int32_t*)L_42);
		uint32_t L_44 = V_2;
		*((int32_t*)L_42) = (int32_t)((int32_t)(L_43|(int32_t)L_44));
		int32_t L_45 = __this->____count_1;
		__this->____count_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)0;
		return;
	}

IL_015e:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_46 = __this->____buckets_0;
		int32_t L_47 = V_5;
		int32_t L_48 = ((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47)))->___hash_coll_2;
		uint32_t L_49 = V_2;
		if ((!(((uint64_t)((int64_t)((int32_t)(L_48&((int32_t)2147483647LL))))) == ((uint64_t)((int64_t)(uint64_t)L_49)))))
		{
			goto IL_01e8;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_50 = __this->____buckets_0;
		int32_t L_51 = V_5;
		RuntimeObject* L_52 = ((L_50)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_51)))->___key_0;
		RuntimeObject* L_53 = ___key0;
		bool L_54;
		L_54 = VirtualFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(15 /* System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object) */, __this, L_52, L_53);
		if (!L_54)
		{
			goto IL_01e8;
		}
	}
	{
		bool L_55 = ___add2;
		if (!L_55)
		{
			goto IL_01bc;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_56 = __this->____buckets_0;
		int32_t L_57 = V_5;
		RuntimeObject* L_58 = ((L_56)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_57)))->___key_0;
		RuntimeObject* L_59 = ___key0;
		String_t* L_60;
		L_60 = SR_Format_mCBC2E13309DB2E03F48F50E5189DD215B5BA7186(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral62EDD94B35AE1C598F9C8060E6F26AD1470D672D)), L_58, L_59, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_61 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_61, L_60, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}

IL_01bc:
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_62 = __this->____buckets_0;
		int32_t L_63 = V_5;
		RuntimeObject* L_64 = ___nvalue1;
		((L_62)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_63)))->___val_1 = L_64;
		Il2CppCodeGenWriteBarrier((void**)(&((L_62)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_63)))->___val_1), (void*)L_64);
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)0;
		return;
	}

IL_01e8:
	{
		int32_t L_65 = V_4;
		if ((!(((uint32_t)L_65) == ((uint32_t)(-1)))))
		{
			goto IL_022b;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_66 = __this->____buckets_0;
		int32_t L_67 = V_5;
		int32_t L_68 = ((L_66)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_67)))->___hash_coll_2;
		if ((((int32_t)L_68) < ((int32_t)0)))
		{
			goto IL_022b;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_69 = __this->____buckets_0;
		int32_t L_70 = V_5;
		int32_t* L_71 = (&((L_69)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_70)))->___hash_coll_2);
		int32_t* L_72 = L_71;
		int32_t L_73 = *((int32_t*)L_72);
		*((int32_t*)L_72) = (int32_t)((int32_t)(L_73|((int32_t)-2147483648LL)));
		int32_t L_74 = __this->____occupancy_2;
		__this->____occupancy_2 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_022b:
	{
		int32_t L_75 = V_5;
		uint32_t L_76 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_77 = __this->____buckets_0;
		V_5 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_75), ((int64_t)(uint64_t)L_76)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))))));
		int32_t L_78 = V_3;
		int32_t L_79 = ((int32_t)il2cpp_codegen_add(L_78, 1));
		V_3 = L_79;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_80 = __this->____buckets_0;
		if ((((int32_t)L_79) < ((int32_t)((int32_t)(((RuntimeArray*)L_80)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_81 = V_4;
		if ((((int32_t)L_81) == ((int32_t)(-1))))
		{
			goto IL_02b9;
		}
	}
	{
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_82 = __this->____buckets_0;
		int32_t L_83 = V_4;
		RuntimeObject* L_84 = ___nvalue1;
		((L_82)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_83)))->___val_1 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&((L_82)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_83)))->___val_1), (void*)L_84);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_85 = __this->____buckets_0;
		int32_t L_86 = V_4;
		RuntimeObject* L_87 = ___key0;
		((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86)))->___key_0 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&((L_85)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_86)))->___key_0), (void*)L_87);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_88 = __this->____buckets_0;
		int32_t L_89 = V_4;
		int32_t* L_90 = (&((L_88)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_89)))->___hash_coll_2);
		int32_t* L_91 = L_90;
		int32_t L_92 = *((int32_t*)L_91);
		uint32_t L_93 = V_2;
		*((int32_t*)L_91) = (int32_t)((int32_t)(L_92|(int32_t)L_93));
		int32_t L_94 = __this->____count_1;
		__this->____count_1 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		Hashtable_UpdateVersion_m1D0B844B95441A5B4328F413C245FBECF1D3538A(__this, NULL);
		il2cpp_codegen_memory_barrier();
		__this->____isWriterInProgress_6 = (bool)0;
		return;
	}

IL_02b9:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_95 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_95, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD48F64ABB05D3F39046297B361BD8AA53451659A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_95, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Hashtable_Insert_mCE383FCEDF95EF53D7A5FAA83454F65C20552291_RuntimeMethod_var)));
	}
}
// System.Void System.Collections.Hashtable::putEntry(System.Collections.Hashtable/bucket[],System.Object,System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable_putEntry_mAB0F8F0E2148856D87749F9623EFBEF913323C4B (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ___newBuckets0, RuntimeObject* ___key1, RuntimeObject* ___nvalue2, int32_t ___hashcode3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___hashcode3;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = ___newBuckets0;
		V_1 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)((uint32_t)(int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)101)))%(uint32_t)(int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1))))));
		uint32_t L_3 = V_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_4 = ___newBuckets0;
		V_2 = ((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
	}

IL_0016:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_5 = ___newBuckets0;
		int32_t L_6 = V_2;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___key_0;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_8 = ___newBuckets0;
		int32_t L_9 = V_2;
		RuntimeObject* L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___key_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_11 = __this->____buckets_0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_11))))
		{
			goto IL_0065;
		}
	}

IL_0038:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_12 = ___newBuckets0;
		int32_t L_13 = V_2;
		RuntimeObject* L_14 = ___nvalue2;
		((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___val_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___val_1), (void*)L_14);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_15 = ___newBuckets0;
		int32_t L_16 = V_2;
		RuntimeObject* L_17 = ___key1;
		((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___key_0), (void*)L_17);
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_18 = ___newBuckets0;
		int32_t L_19 = V_2;
		int32_t* L_20 = (&((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___hash_coll_2);
		int32_t* L_21 = L_20;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = ___hashcode3;
		*((int32_t*)L_21) = (int32_t)((int32_t)(L_22|L_23));
		return;
	}

IL_0065:
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_24 = ___newBuckets0;
		int32_t L_25 = V_2;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hash_coll_2;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0097;
		}
	}
	{
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_27 = ___newBuckets0;
		int32_t L_28 = V_2;
		int32_t* L_29 = (&((L_27)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_28)))->___hash_coll_2);
		int32_t* L_30 = L_29;
		int32_t L_31 = *((int32_t*)L_30);
		*((int32_t*)L_30) = (int32_t)((int32_t)(L_31|((int32_t)-2147483648LL)));
		int32_t L_32 = __this->____occupancy_2;
		__this->____occupancy_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0097:
	{
		int32_t L_33 = V_2;
		uint32_t L_34 = V_1;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_35 = ___newBuckets0;
		V_2 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)L_33), ((int64_t)(uint64_t)L_34)))%((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))));
		goto IL_0016;
	}
}
// System.Int32 System.Collections.Hashtable::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hashtable_get_Count_mA7BE8DF97C45F9046C93AC8F0C57EA31F1257999 (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_1;
		return L_0;
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
// Conversion methods for marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			marshaled.___key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___key_0));
			(marshaled.___key_0)->AddRef();
		}
		else
		{
			marshaled.___key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___key_0);
		}
	}
	else
	{
		marshaled.___key_0 = NULL;
	}
	if (unmarshaled.___val_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			marshaled.___val_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___val_1));
			(marshaled.___val_1)->AddRef();
		}
		else
		{
			marshaled.___val_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___val_1);
		}
	}
	else
	{
		marshaled.___val_1 = NULL;
	}
	marshaled.___hash_coll_2 = unmarshaled.___hash_coll_2;
}
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_back(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___key_0 != NULL)
	{
		unmarshaled.___key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___key_0), Il2CppIUnknown::IID, marshaled.___key_0);
		}
	}
	else
	{
		unmarshaled.___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)NULL);
	}
	if (marshaled.___val_1 != NULL)
	{
		unmarshaled.___val_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___val_1), Il2CppIUnknown::IID, marshaled.___val_1);
		}
	}
	else
	{
		unmarshaled.___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)NULL);
	}
	int32_t unmarshaledhash_coll_temp_2 = 0;
	unmarshaledhash_coll_temp_2 = marshaled.___hash_coll_2;
	unmarshaled.___hash_coll_2 = unmarshaledhash_coll_temp_2;
}
// Conversion method for clean up from marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_pinvoke_cleanup(bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_pinvoke& marshaled)
{
	if (marshaled.___key_0 != NULL)
	{
		(marshaled.___key_0)->Release();
		marshaled.___key_0 = NULL;
	}
	if (marshaled.___val_1 != NULL)
	{
		(marshaled.___val_1)->Release();
		marshaled.___val_1 = NULL;
	}
}
// Conversion methods for marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled)
{
	if (unmarshaled.___key_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			marshaled.___key_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___key_0));
			(marshaled.___key_0)->AddRef();
		}
		else
		{
			marshaled.___key_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___key_0);
		}
	}
	else
	{
		marshaled.___key_0 = NULL;
	}
	if (unmarshaled.___val_1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			marshaled.___val_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___val_1));
			(marshaled.___val_1)->AddRef();
		}
		else
		{
			marshaled.___val_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___val_1);
		}
	}
	else
	{
		marshaled.___val_1 = NULL;
	}
	marshaled.___hash_coll_2 = unmarshaled.___hash_coll_2;
}
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com_back(const bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled, bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___key_0 != NULL)
	{
		unmarshaled.___key_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___key_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___key_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___key_0), Il2CppIUnknown::IID, marshaled.___key_0);
		}
	}
	else
	{
		unmarshaled.___key_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___key_0), (void*)NULL);
	}
	if (marshaled.___val_1 != NULL)
	{
		unmarshaled.___val_1 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___val_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___val_1))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___val_1), Il2CppIUnknown::IID, marshaled.___val_1);
		}
	}
	else
	{
		unmarshaled.___val_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___val_1), (void*)NULL);
	}
	int32_t unmarshaledhash_coll_temp_2 = 0;
	unmarshaledhash_coll_temp_2 = marshaled.___hash_coll_2;
	unmarshaled.___hash_coll_2 = unmarshaledhash_coll_temp_2;
}
// Conversion method for clean up from marshalling of: System.Collections.Hashtable/bucket
IL2CPP_EXTERN_C void bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshal_com_cleanup(bucket_t3217998B0CD54EA2DEDD93DEF8556E72602C7D4E_marshaled_com& marshaled)
{
	if (marshaled.___key_0 != NULL)
	{
		(marshaled.___key_0)->Release();
		marshaled.___key_0 = NULL;
	}
	if (marshaled.___val_1 != NULL)
	{
		(marshaled.___val_1)->Release();
		marshaled.___val_1 = NULL;
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
// System.Void System.Collections.Hashtable/HashtableEnumerator::.ctor(System.Collections.Hashtable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashtableEnumerator__ctor_m39524FF87DAA4FBB78BED54175E69215AE47D2DC (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___hashtable0, int32_t ___getObjRetType1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = ___hashtable0;
		__this->____hashtable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____hashtable_0), (void*)L_0);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = ___hashtable0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_2 = L_1->____buckets_0;
		__this->____bucket_1 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = ___hashtable0;
		int32_t L_4 = L_3->____version_5;
		il2cpp_codegen_memory_barrier();
		__this->____version_2 = L_4;
		__this->____current_3 = (bool)0;
		int32_t L_5 = ___getObjRetType1;
		__this->____getObjectRetType_4 = L_5;
		return;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_Clone_m85F090BFD61509B1F8B16A10E0DFB78606C96873 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = Object_MemberwiseClone_m0676AEE25C3CF7C09F15ECF9EC5CC407863617B3(__this, NULL);
		return L_0;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Key_m0C1262C3A8839D8F5C7814E08A2AF850A544310C_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____currentKey_5;
		return L_2;
	}
}
// System.Boolean System.Collections.Hashtable/HashtableEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = __this->____version_2;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_1 = __this->____hashtable_0;
		int32_t L_2 = L_1->____version_5;
		il2cpp_codegen_memory_barrier();
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_008c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_MoveNext_m211FB14AC78F8E4A68AD090BB1942C18FF069A1E_RuntimeMethod_var)));
	}

IL_0020:
	{
		int32_t L_4 = __this->____bucket_1;
		__this->____bucket_1 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5 = __this->____hashtable_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_6 = L_5->____buckets_0;
		int32_t L_7 = __this->____bucket_1;
		RuntimeObject* L_8 = ((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)))->___key_0;
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		if (!L_9)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_11 = __this->____hashtable_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_12 = L_11->____buckets_0;
		if ((((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587*)L_12)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_13 = V_0;
		__this->____currentKey_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentKey_5), (void*)L_13);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_14 = __this->____hashtable_0;
		bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* L_15 = L_14->____buckets_0;
		int32_t L_16 = __this->____bucket_1;
		RuntimeObject* L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___val_1;
		__this->____currentValue_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentValue_6), (void*)L_17);
		__this->____current_3 = (bool)1;
		return (bool)1;
	}

IL_008c:
	{
		int32_t L_18 = __this->____bucket_1;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		__this->____current_3 = (bool)0;
		return (bool)0;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Current_mE6421EB7F4E1327453DE6D3BE41289DCC8BF8F15_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_2 = __this->____getObjectRetType_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_3 = __this->____currentKey_5;
		return L_3;
	}

IL_0023:
	{
		int32_t L_4 = __this->____getObjectRetType_4;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_5 = __this->____currentValue_6;
		return L_5;
	}

IL_0033:
	{
		RuntimeObject* L_6 = __this->____currentKey_5;
		RuntimeObject* L_7 = __this->____currentValue_6;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_6, L_7, /*hidden argument*/NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Object System.Collections.Hashtable/HashtableEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2 (HashtableEnumerator_t93BDDC1436F6FD60768440A50B96759CD0E01061* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____current_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashtableEnumerator_get_Value_m30BAEC76875DF2C4AF27B87F83FD960BE35503D2_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->____currentValue_6;
		return L_2;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Collections.Generic.KeyValuePair::PairToString(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValuePair_PairToString_m3E001B2DF3968E358925027C032B0FFBC25CC575 (RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0;
		L_0 = StringBuilderCache_Acquire_m6E2B81795F398D214356982DB78955434EA835B1(((int32_t)16), NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, ((int32_t)91), NULL);
		RuntimeObject* L_3 = ___key0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t* L_4 = V_0;
		RuntimeObject* L_5 = ___key0;
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_4, L_5, NULL);
	}

IL_001c:
	{
		StringBuilder_t* L_7 = V_0;
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		RuntimeObject* L_9 = ___value1;
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		StringBuilder_t* L_10 = V_0;
		RuntimeObject* L_11 = ___value1;
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_10, L_11, NULL);
	}

IL_0033:
	{
		StringBuilder_t* L_13 = V_0;
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)93), NULL);
		StringBuilder_t* L_15 = V_0;
		String_t* L_16;
		L_16 = StringBuilderCache_GetStringAndRelease_mE88D25734085D6BA6F1D82C692CC059D90EDF50F(L_15, NULL);
		return L_16;
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
// System.Int32 System.Collections.Generic.IntrospectiveSortUtilities::FloorLog2PlusOne(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntrospectiveSortUtilities_FloorLog2PlusOne_mC9B7A6ED156FDCB48756AEA428C34D0DA99E75EB (int32_t ___n0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000d;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___n0;
		___n0 = ((int32_t)(L_1/2));
	}

IL_000d:
	{
		int32_t L_2 = ___n0;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void System.Collections.Generic.IntrospectiveSortUtilities::ThrowOrIgnoreBadComparer(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m66920BDFDDBAFDFA21C637D727CDA29F7B90A4DF (RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		String_t* L_1;
		L_1 = SR_Format_mB99C6F1BE061EA1427A45176E0CAFB2A2C76D03F(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FB28D215F1C062EDB535A58AD8714B5A5FE4064)), L_0, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntrospectiveSortUtilities_ThrowOrIgnoreBadComparer_m66920BDFDDBAFDFA21C637D727CDA29F7B90A4DF_RuntimeMethod_var)));
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
// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteEqualityComparer_Equals_m4ABF0097A06636549CB7BB4ED696CB0D3B98563E (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, uint8_t ___x0, uint8_t ___y1, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___x0;
		uint8_t L_1 = ___y1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::GetHashCode(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_GetHashCode_m019849C226C9A0E22213E1EC02550F6739CFCF3B (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___b0), NULL);
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::IndexOf(System.Byte[],System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___startIndex2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3;
		L_3 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE68FFE708FFE8FC1D5DA3BEDB8B81DE1CCC64C34)), L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_0027:
	{
		int32_t L_5 = ___count3;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_6;
		L_6 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00BA133FF3D84EAB4FB7DB5FB38F235C4E108ED9)), NULL);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_0041:
	{
		int32_t L_8 = ___count3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___array0;
		int32_t L_10 = ___startIndex2;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)))))
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_11;
		L_11 = Environment_GetResourceString_mFEC4B5F893033F1B038B99CA6C7A72696AE801DC(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ByteEqualityComparer_IndexOf_mFFA29BDEAC6472E9942D453FDA4D88C409EFCDA8_RuntimeMethod_var)));
	}

IL_005a:
	{
		int32_t L_13 = ___count3;
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		return (-1);
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_1 = L_15;
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		if (((int32_t)(((RuntimeArray*)L_16)->max_length)))
		{
			goto IL_006f;
		}
	}

IL_006a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0078;
	}

IL_006f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		V_0 = (uint8_t*)((uintptr_t)((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0078:
	{
		uint8_t* L_18 = V_0;
		uint8_t L_19 = ___value1;
		int32_t L_20 = ___startIndex2;
		int32_t L_21 = ___count3;
		int32_t L_22;
		L_22 = Buffer_IndexOfByte_m276C9999C9E045F990E434EFADF4F96B7C1230DE(L_18, L_19, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::LastIndexOf(System.Byte[],System.Byte,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_LastIndexOf_m8A5A08F15AC6060CA70CC8AC280C32ADFBB749ED (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex2;
		int32_t L_1 = ___count3;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = ___startIndex2;
		V_1 = L_2;
		goto IL_0017;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___array0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		uint8_t L_7 = ___value1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0013:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0017:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}
}
// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ByteEqualityComparer_Equals_m9B113E83537F9F939D54627EAFAF81E463C1A468 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		return (bool)((!(((RuntimeObject*)(ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275*)((ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275*)IsInstClass((RuntimeObject*)L_0, ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Int32 System.Collections.Generic.ByteEqualityComparer::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteEqualityComparer_GetHashCode_mC71878E73D9E43C3DA44DA3BD0FD34A1337556E7 (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Generic.ByteEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteEqualityComparer__ctor_m6A7EE7FCB7B4275069DC078346C35ED9B6F71AAE (ByteEqualityComparer_tE254CF4C39341CB4BB9890C1CA90ACE14E1BA275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD(__this, EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_RuntimeMethod_var);
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
// System.Int32 System.Collections.Generic.InternalStringComparer::GetHashCode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalStringComparer_GetHashCode_m4EC162DE81A1F8235C20BD7ADFD2ED0BB12FD7C6 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, String_t* ___obj0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___obj0;
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
		String_t* L_1 = ___obj0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.InternalStringComparer::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalStringComparer_Equals_m788524086ADC25F1E939088DF22FF301DF3018B0 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, String_t* ___x0, String_t* ___y1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___x0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		String_t* L_1 = ___y1;
		return (bool)((((RuntimeObject*)(String_t*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0008:
	{
		String_t* L_2 = ___x0;
		String_t* L_3 = ___y1;
		if ((!(((RuntimeObject*)(String_t*)L_2) == ((RuntimeObject*)(String_t*)L_3))))
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		String_t* L_4 = ___x0;
		String_t* L_5 = ___y1;
		bool L_6;
		L_6 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Int32 System.Collections.Generic.InternalStringComparer::IndexOf(System.String[],System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalStringComparer_IndexOf_mE69D32A9D7690C656336174756E70C54C457067D (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___array0, String_t* ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___startIndex2;
		int32_t L_1 = ___count3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___startIndex2;
		V_1 = L_2;
		goto IL_001e;
	}

IL_0009:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___array0;
		int32_t L_4 = V_1;
		String_t* L_5;
		L_5 = IL2CPP_ARRAY_UNSAFE_LOAD(L_3, L_4);
		String_t* L_6 = ___value1;
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_001a:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001e:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0009;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Collections.Generic.InternalStringComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalStringComparer__ctor_m06A4CE888A27763DE6BD47DD2C2CF45C68736108 (InternalStringComparer_t04B2D1768998E940BC4619579B7044102591E38B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C(__this, EqualityComparer_1__ctor_m9D692A2446D3F93F9042D7CAC625E36F01658C0C_RuntimeMethod_var);
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
// System.Void System.Buffers.ArrayPoolEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, const RuntimeMethod* method) 
{
	{
		EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC(__this, NULL);
		return;
	}
}
// System.Void System.Buffers.ArrayPoolEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource__cctor_m5DE85879CD9F9747AE8148FEAE95D52B98EDCFF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_0 = (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888*)il2cpp_codegen_object_new(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		ArrayPoolEventSource__ctor_m630817B899F980174697248E423104D06EC63F2E(L_0, NULL);
		((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log_0), (void*)L_0);
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
// System.Int32 System.Buffers.Utilities::SelectBucketIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_SelectBucketIndex_m5C930437F004E03611DC27A7D9FBF79089EF768F (int32_t ___bufferSize0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___bufferSize0;
		V_0 = ((int32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, 1))>>4));
		V_1 = 0;
		uint32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)((uint32_t)L_2>>((int32_t)16)));
		V_1 = ((int32_t)16);
	}

IL_0018:
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)255)))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((uint32_t)L_4>>8));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 8));
	}

IL_0028:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)15)))))
		{
			goto IL_0035;
		}
	}
	{
		uint32_t L_7 = V_0;
		V_0 = ((int32_t)((uint32_t)L_7>>4));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 4));
	}

IL_0035:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) > ((uint32_t)3))))
		{
			goto IL_0041;
		}
	}
	{
		uint32_t L_10 = V_0;
		V_0 = ((int32_t)((uint32_t)L_10>>2));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 2));
	}

IL_0041:
	{
		uint32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) > ((uint32_t)1))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)((uint32_t)L_13>>1));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		uint32_t L_16 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_15, (int32_t)L_16));
	}
}
// System.Int32 System.Buffers.Utilities::GetMaxSizeForBucket(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utilities_GetMaxSizeForBucket_mD9E14DCD5CAD7A5F8DE6088FCD2B520D11AAF50F (int32_t ___binIndex0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___binIndex0;
		return ((int32_t)(((int32_t)16)<<((int32_t)(L_0&((int32_t)31)))));
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
// System.UInt16 System.Buffers.Binary.BinaryPrimitives::ReverseEndianness(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t BinaryPrimitives_ReverseEndianness_m7DD400A932B41A4DD144930C96C4AB1716F14AB3 (uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___value0;
		uint16_t L_1 = ___value0;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_0>>8)), ((int32_t)((int32_t)L_1<<8)))));
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
// System.Int32 System.Buffers.Text.FormattingHelpers::CountDigits(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_m414ABC00C2D60EB9B02F136EF732141929A1D934 (uint64_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)10000000))))))
		{
			goto IL_003b;
		}
	}
	{
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)L_1) >= ((uint64_t)((int64_t)100000000000000LL)))))
		{
			goto IL_002b;
		}
	}
	{
		uint64_t L_2 = ___value0;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)100000000000000LL))));
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)14)));
		goto IL_003e;
	}

IL_002b:
	{
		uint64_t L_4 = ___value0;
		V_1 = ((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_4/(uint64_t)(int64_t)((int64_t)((int32_t)10000000)))));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 7));
		goto IL_003e;
	}

IL_003b:
	{
		uint64_t L_6 = ___value0;
		V_1 = ((int32_t)(uint32_t)L_6);
	}

IL_003e:
	{
		uint32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_008a;
	}

IL_004e:
	{
		uint32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 2));
		goto IL_008a;
	}

IL_005c:
	{
		uint32_t L_12 = V_1;
		if ((!(((uint32_t)L_12) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		goto IL_008a;
	}

IL_006a:
	{
		uint32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) < ((uint32_t)((int32_t)100000)))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 4));
		goto IL_008a;
	}

IL_0078:
	{
		uint32_t L_16 = V_1;
		if ((!(((uint32_t)L_16) < ((uint32_t)((int32_t)1000000)))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 5));
		goto IL_008a;
	}

IL_0086:
	{
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 6));
	}

IL_008a:
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Int32 System.Buffers.Text.FormattingHelpers::CountDigits(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountDigits_mB2F4F9C0E84E3EE8FA3EFE0B71DF913DCCE21697 (uint32_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)L_0) >= ((uint32_t)((int32_t)100000)))))
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_1 = ___value0;
		___value0 = ((int32_t)((uint32_t)(int32_t)L_1/(uint32_t)(int32_t)((int32_t)100000)));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 5));
	}

IL_0017:
	{
		uint32_t L_3 = ___value0;
		if ((!(((uint32_t)L_3) >= ((uint32_t)((int32_t)10)))))
		{
			goto IL_0047;
		}
	}
	{
		uint32_t L_4 = ___value0;
		if ((!(((uint32_t)L_4) < ((uint32_t)((int32_t)100)))))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_0047;
	}

IL_0027:
	{
		uint32_t L_6 = ___value0;
		if ((!(((uint32_t)L_6) < ((uint32_t)((int32_t)1000)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		goto IL_0047;
	}

IL_0035:
	{
		uint32_t L_8 = ___value0;
		if ((!(((uint32_t)L_8) < ((uint32_t)((int32_t)10000)))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 3));
		goto IL_0047;
	}

IL_0043:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 4));
	}

IL_0047:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 System.Buffers.Text.FormattingHelpers::CountHexDigits(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FormattingHelpers_CountHexDigits_m1629CE96D27FEB68223B4D8C6BFE102D5E9E7D57 (uint64_t ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 1;
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)(uint64_t)((uint32_t)(-1)))))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 8));
		uint64_t L_2 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_2>>((int32_t)32)));
	}

IL_0011:
	{
		uint64_t L_3 = ___value0;
		if ((!(((uint64_t)L_3) > ((uint64_t)((int64_t)((int32_t)65535))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 4));
		uint64_t L_5 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_5>>((int32_t)16)));
	}

IL_0024:
	{
		uint64_t L_6 = ___value0;
		if ((!(((uint64_t)L_6) > ((uint64_t)((int64_t)((int32_t)255))))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 2));
		uint64_t L_8 = ___value0;
		___value0 = ((int64_t)((uint64_t)L_8>>8));
	}

IL_0036:
	{
		uint64_t L_9 = ___value0;
		if ((!(((uint64_t)L_9) > ((uint64_t)((int64_t)((int32_t)15))))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0040:
	{
		int32_t L_11 = V_0;
		return L_11;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6D7A35973B6DBEB3664F5C76AC1EAC65AB733088 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		int32_t L_8 = L_7->____stringLength_4;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_mCF7A8540CD52C39F8262F7F8C01ACE4821CFB7B9_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* StateMachineAttribute_get_StateMachineType_m16997265B53C5BDFF41C8C8557226F631104B49C_inline (StateMachineAttribute_t9D7900B1B0E39C142A948AFD6025BBE3CE09AA76* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CStateMachineTypeU3Ek__BackingField_0;
		return L_0;
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
