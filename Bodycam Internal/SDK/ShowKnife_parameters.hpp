#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowKnife

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ShowKnife.ShowKnife_C.Received_Notify
// 0x00E0 (0x00E0 - 0x0000)
struct ShowKnife_C_Received_Notify final
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AALS_AnimMan_CharacterBP_C*             K2Node_DynamicCast_AsALS_Anim_Man_Character_BP;    // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AKnife_C*                               CallFunc_FinishSpawningActor_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShowKnife_C_Received_Notify) == 0x000010, "Wrong alignment on ShowKnife_C_Received_Notify");
static_assert(sizeof(ShowKnife_C_Received_Notify) == 0x0000E0, "Wrong size on ShowKnife_C_Received_Notify");
static_assert(offsetof(ShowKnife_C_Received_Notify, MeshComp) == 0x000000, "Member 'ShowKnife_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, Animation) == 0x000008, "Member 'ShowKnife_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, EventReference) == 0x000010, "Member 'ShowKnife_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, ReturnValue) == 0x000038, "Member 'ShowKnife_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'ShowKnife_C_Received_Notify::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, CallFunc_GetOwner_ReturnValue) == 0x0000A0, "Member 'ShowKnife_C_Received_Notify::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A8, "Member 'ShowKnife_C_Received_Notify::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, K2Node_DynamicCast_AsALS_Anim_Man_Character_BP) == 0x0000B0, "Member 'ShowKnife_C_Received_Notify::K2Node_DynamicCast_AsALS_Anim_Man_Character_BP' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'ShowKnife_C_Received_Notify::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000C0, "Member 'ShowKnife_C_Received_Notify::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, CallFunc_GetDisplayName_ReturnValue) == 0x0000C8, "Member 'ShowKnife_C_Received_Notify::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShowKnife_C_Received_Notify, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000D8, "Member 'ShowKnife_C_Received_Notify::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");

}
