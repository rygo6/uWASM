#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// uWAVMTests.TransformRotationTest
struct TransformRotationTest_tB8AE72C2E135E433A5CFD3251AAD11050DA8893C;
// uWAVM.uWAVMBehavior
struct uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t28FE946E7EC609E12828EBAB1223AFEC16451682 
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
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// uWAVMTests.TransformRotationTest
struct TransformRotationTest_tB8AE72C2E135E433A5CFD3251AAD11050DA8893C  : public uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA
{
	// System.Single uWAVMTests.TransformRotationTest::m_RotationSpeed
	float ___m_RotationSpeed_0;
	// System.Single uWAVMTests.TransformRotationTest::m_YRotation
	float ___m_YRotation_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void uWAVM.uWAVMBehavior::SetRotation(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior_SetRotation_m6D1BE4AD3EB53B8D4CE0A8BF783F44D2E0339530 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void uWAVM.uWAVMBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void uWAVMBehavior__ctor_m45B10E80192E3C3F096C8776F6B02B1035589646 (uWAVMBehavior_tDE5A488AE99233312C6A5A35D6641E1C3FA9D4DA* __this, const RuntimeMethod* method) ;
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
// System.Void uWAVMTests.TransformRotationTest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRotationTest_Update_mCD4245414D69ACEF0A6EC3E364E9A9C08C489F18 (TransformRotationTest_tB8AE72C2E135E433A5CFD3251AAD11050DA8893C* __this, const RuntimeMethod* method) 
{
	{
		// m_YRotation = m_YRotation + 1f;
		float L_0 = __this->___m_YRotation_1;
		__this->___m_YRotation_1 = ((float)il2cpp_codegen_add(L_0, (1.0f)));
		// SetRotation(0, m_YRotation, 0);
		float L_1 = __this->___m_YRotation_1;
		uWAVMBehavior_SetRotation_m6D1BE4AD3EB53B8D4CE0A8BF783F44D2E0339530((0.0f), L_1, (0.0f), NULL);
		// }
		return;
	}
}
// System.Int32 uWAVMTests.TransformRotationTest::Add(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformRotationTest_Add_m91E818F16AE3F6DFA4DFFBC9946DEAEC450AFB91 (TransformRotationTest_tB8AE72C2E135E433A5CFD3251AAD11050DA8893C* __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	{
		// return a + b;
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Int32 uWAVMTests.TransformRotationTest::Sub(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransformRotationTest_Sub_m952B493E6D8DFBC21437F0EF0406441ED433CD54 (TransformRotationTest_tB8AE72C2E135E433A5CFD3251AAD11050DA8893C* __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	{
		// return a - b;
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Void uWAVMTests.TransformRotationTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformRotationTest__ctor_m1DB596213BBC59C50A65251842F03303E8F2B586 (TransformRotationTest_tB8AE72C2E135E433A5CFD3251AAD11050DA8893C* __this, const RuntimeMethod* method) 
{
	{
		// public float m_RotationSpeed = 1;
		__this->___m_RotationSpeed_0 = (1.0f);
		uWAVMBehavior__ctor_m45B10E80192E3C3F096C8776F6B02B1035589646(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
