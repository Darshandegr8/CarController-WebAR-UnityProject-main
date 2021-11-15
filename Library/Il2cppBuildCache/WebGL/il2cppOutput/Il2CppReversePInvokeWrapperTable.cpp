#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B(char* ___json0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7(int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76(int32_t ___viewsCount0, float ___left_x1, float ___left_y2, float ___left_w3, float ___left_h4, float ___right_x5, float ___right_y6, float ___right_w7, float ___right_h8);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE(int32_t ___isARSupported0, int32_t ___isVRSupported1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39(int32_t ___visibilityState0);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[7] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebXRSubsystem_OnEndXR_m619B5F929D1B8F67A360917710695E1474E03F14),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebXRSubsystem_OnInputProfiles_m13B2017F20BC87FB5A6652011A0BA662CFD7F26B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebXRSubsystem_OnStartAR_mCD56D3757C78CD5745E78516435B8036BFF851B7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebXRSubsystem_OnStartVR_mBD08B936DAEAEF64B167868B8E75F837B6AAFD76),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebXRSubsystem_OnXRCapabilities_mFB0D9BE0B209BB2D46B00B8BDAAA4809D5C2AFFE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_WebXRSubsystem_UpdateVisibilityState_m315E0A2C9F0B076FE8B18D2898B4BAB50A324D39),
};
