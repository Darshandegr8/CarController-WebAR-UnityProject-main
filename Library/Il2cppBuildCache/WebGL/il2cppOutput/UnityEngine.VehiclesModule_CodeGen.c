#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.WheelCollider::set_motorTorque(System.Single)
extern void WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA (void);
// 0x00000002 System.Single UnityEngine.WheelCollider::get_steerAngle()
extern void WheelCollider_get_steerAngle_mE954E7540E1ACDE5F5FE0D3A32388F6A22378CF4 (void);
// 0x00000003 System.Void UnityEngine.WheelCollider::set_steerAngle(System.Single)
extern void WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968 (void);
// 0x00000004 System.Single UnityEngine.WheelCollider::get_rpm()
extern void WheelCollider_get_rpm_m5127D5BE0A627C29F38CFD8194C3F2470D8008B1 (void);
static Il2CppMethodPointer s_methodPointers[4] = 
{
	WheelCollider_set_motorTorque_mFE7962DF8003D10BA646545E56F0A6B3ED8803DA,
	WheelCollider_get_steerAngle_mE954E7540E1ACDE5F5FE0D3A32388F6A22378CF4,
	WheelCollider_set_steerAngle_m1E46602E8B77EB747B1EA44D84B5EC99F86BB968,
	WheelCollider_get_rpm_m5127D5BE0A627C29F38CFD8194C3F2470D8008B1,
};
static const int32_t s_InvokerIndices[4] = 
{
	1028,
	1179,
	1028,
	1179,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_VehiclesModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_VehiclesModule_CodeGenModule = 
{
	"UnityEngine.VehiclesModule.dll",
	4,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_VehiclesModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
