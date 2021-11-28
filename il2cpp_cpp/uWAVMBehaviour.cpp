#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Action`3<System.Single,System.Single,System.Single>
struct Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// uWAVM.uWAVMBehavior
struct uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA;

IL2CPP_EXTERN_C RuntimeClass* Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


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
struct Il2CppArrayBounds;

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

// uWAVM.uWAVMBehavior
struct uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA  : public RuntimeObject
{
	// System.Action`3<System.Single,System.Single,System.Single> uWAVM.uWAVMBehavior::onTransformRotationSet
	Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* ___onTransformRotationSet_0;
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

// System.Action`3<System.Single,System.Single,System.Single>
struct Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetRotation(float, float, float);
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
// System.Void uWAVM.uWAVMBehavior::add_onTransformRotationSet(System.Action`3<System.Single,System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior_add_onTransformRotationSet_mEDCA9623911123B82692099421A2095C19D6E07A (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* V_0 = NULL;
	Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* V_1 = NULL;
	Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* V_2 = NULL;
	{
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_0 = __this->___onTransformRotationSet_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_1 = V_0;
		V_1 = L_1;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_2 = V_1;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E*)Castclass((RuntimeObject*)L_4, Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E_il2cpp_TypeInfo_var));
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E** L_5 = (&__this->___onTransformRotationSet_0);
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_6 = V_2;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_7 = V_1;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_9 = V_0;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E*)L_9) == ((RuntimeObject*)(Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void uWAVM.uWAVMBehavior::remove_onTransformRotationSet(System.Action`3<System.Single,System.Single,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior_remove_onTransformRotationSet_m6187F2AC1688D7764A970378A7355608A30B280E (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* V_0 = NULL;
	Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* V_1 = NULL;
	Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* V_2 = NULL;
	{
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_0 = __this->___onTransformRotationSet_0;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_1 = V_0;
		V_1 = L_1;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_2 = V_1;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E*)Castclass((RuntimeObject*)L_4, Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E_il2cpp_TypeInfo_var));
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E** L_5 = (&__this->___onTransformRotationSet_0);
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_6 = V_2;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_7 = V_1;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_9 = V_0;
		Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E*)L_9) == ((RuntimeObject*)(Action_3_tF90A37B94256820313F23F3DF74A70B0A814E93E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Int32 uWAVM.uWAVMBehavior::SetRotation(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t uWAVMBehavior_SetRotation_m7DCDAA6268F9F59F74A54BD35C1EBB2F5F3B4795 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float, float, float);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetRotation)(___x0, ___y1, ___z2);

	return returnValue;
}
// System.Void uWAVM.uWAVMBehavior::WEBGLFORSURE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior_WEBGLFORSURE_m750E9187A5AFE88AE53315774BDD0457B6ECF462 (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, const RuntimeMethod* method) 
{
	{
		// public void WEBGLFORSURE(){}
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
