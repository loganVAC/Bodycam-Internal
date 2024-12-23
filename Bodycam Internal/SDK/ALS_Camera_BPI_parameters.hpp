#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALS_Camera_BPI

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_PivotTarget
// 0x0060 (0x0060 - 0x0000)
struct ALS_Camera_BPI_C_BPI_Get_3P_PivotTarget final
{
public:
	struct FTransform                             ReturnValue;                                       // 0x0000(0x0060)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Camera_BPI_C_BPI_Get_3P_PivotTarget) == 0x000010, "Wrong alignment on ALS_Camera_BPI_C_BPI_Get_3P_PivotTarget");
static_assert(sizeof(ALS_Camera_BPI_C_BPI_Get_3P_PivotTarget) == 0x000060, "Wrong size on ALS_Camera_BPI_C_BPI_Get_3P_PivotTarget");
static_assert(offsetof(ALS_Camera_BPI_C_BPI_Get_3P_PivotTarget, ReturnValue) == 0x000000, "Member 'ALS_Camera_BPI_C_BPI_Get_3P_PivotTarget::ReturnValue' has a wrong offset!");

// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_TraceParams
// 0x0028 (0x0028 - 0x0000)
struct ALS_Camera_BPI_C_BPI_Get_3P_TraceParams final
{
public:
	struct FVector                                TraceOrigin;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceRadius;                                       // 0x0018(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETraceTypeQuery                               TraceChannel;                                      // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Camera_BPI_C_BPI_Get_3P_TraceParams) == 0x000008, "Wrong alignment on ALS_Camera_BPI_C_BPI_Get_3P_TraceParams");
static_assert(sizeof(ALS_Camera_BPI_C_BPI_Get_3P_TraceParams) == 0x000028, "Wrong size on ALS_Camera_BPI_C_BPI_Get_3P_TraceParams");
static_assert(offsetof(ALS_Camera_BPI_C_BPI_Get_3P_TraceParams, TraceOrigin) == 0x000000, "Member 'ALS_Camera_BPI_C_BPI_Get_3P_TraceParams::TraceOrigin' has a wrong offset!");
static_assert(offsetof(ALS_Camera_BPI_C_BPI_Get_3P_TraceParams, TraceRadius) == 0x000018, "Member 'ALS_Camera_BPI_C_BPI_Get_3P_TraceParams::TraceRadius' has a wrong offset!");
static_assert(offsetof(ALS_Camera_BPI_C_BPI_Get_3P_TraceParams, TraceChannel) == 0x000020, "Member 'ALS_Camera_BPI_C_BPI_Get_3P_TraceParams::TraceChannel' has a wrong offset!");

// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_CameraParameters
// 0x0018 (0x0018 - 0x0000)
struct ALS_Camera_BPI_C_BPI_Get_CameraParameters final
{
public:
	double                                        TP_FOV;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        FP_FOV;                                            // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RightShoulder;                                     // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Camera_BPI_C_BPI_Get_CameraParameters) == 0x000008, "Wrong alignment on ALS_Camera_BPI_C_BPI_Get_CameraParameters");
static_assert(sizeof(ALS_Camera_BPI_C_BPI_Get_CameraParameters) == 0x000018, "Wrong size on ALS_Camera_BPI_C_BPI_Get_CameraParameters");
static_assert(offsetof(ALS_Camera_BPI_C_BPI_Get_CameraParameters, TP_FOV) == 0x000000, "Member 'ALS_Camera_BPI_C_BPI_Get_CameraParameters::TP_FOV' has a wrong offset!");
static_assert(offsetof(ALS_Camera_BPI_C_BPI_Get_CameraParameters, FP_FOV) == 0x000008, "Member 'ALS_Camera_BPI_C_BPI_Get_CameraParameters::FP_FOV' has a wrong offset!");
static_assert(offsetof(ALS_Camera_BPI_C_BPI_Get_CameraParameters, RightShoulder) == 0x000010, "Member 'ALS_Camera_BPI_C_BPI_Get_CameraParameters::RightShoulder' has a wrong offset!");

// Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_FP_CameraTarget
// 0x0018 (0x0018 - 0x0000)
struct ALS_Camera_BPI_C_BPI_Get_FP_CameraTarget final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_Camera_BPI_C_BPI_Get_FP_CameraTarget) == 0x000008, "Wrong alignment on ALS_Camera_BPI_C_BPI_Get_FP_CameraTarget");
static_assert(sizeof(ALS_Camera_BPI_C_BPI_Get_FP_CameraTarget) == 0x000018, "Wrong size on ALS_Camera_BPI_C_BPI_Get_FP_CameraTarget");
static_assert(offsetof(ALS_Camera_BPI_C_BPI_Get_FP_CameraTarget, ReturnValue) == 0x000000, "Member 'ALS_Camera_BPI_C_BPI_Get_FP_CameraTarget::ReturnValue' has a wrong offset!");

}

