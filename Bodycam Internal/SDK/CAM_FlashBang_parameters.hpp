#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CAM_FlashBang

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function CAM_FlashBang.CAM_FlashBang_C.BlueprintModifyPostProcess
// 0x0E10 (0x0E10 - 0x0000)
struct CAM_FlashBang_C_BlueprintModifyPostProcess final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostProcessBlendWeight;                            // 0x0004(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   PostProcessSettings;                               // 0x0010(0x06E0)(Parm, OutParm)
	struct FPostProcessSettings                   K2Node_MakeStruct_PostProcessSettings;             // 0x06F0(0x06E0)()
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0DD0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0DD8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0DE0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DE1[0x7];                                      // 0x0DE1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBodycam_Interface_C>  K2Node_DynamicCast_AsBodycam_Interface;            // 0x0DE8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0DF8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DF9[0x7];                                      // 0x0DF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetFlashBangEffect_FlashEffect;           // 0x0E00(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_FunctionResult_PostProcessBlendWeight_ImplicitCast; // 0x0E08(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CAM_FlashBang_C_BlueprintModifyPostProcess) == 0x000010, "Wrong alignment on CAM_FlashBang_C_BlueprintModifyPostProcess");
static_assert(sizeof(CAM_FlashBang_C_BlueprintModifyPostProcess) == 0x000E10, "Wrong size on CAM_FlashBang_C_BlueprintModifyPostProcess");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, DeltaTime) == 0x000000, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::DeltaTime' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, PostProcessBlendWeight) == 0x000004, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::PostProcessBlendWeight' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, PostProcessSettings) == 0x000010, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::PostProcessSettings' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, K2Node_MakeStruct_PostProcessSettings) == 0x0006F0, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::K2Node_MakeStruct_PostProcessSettings' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, CallFunc_GetPlayerController_ReturnValue) == 0x000DD0, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, CallFunc_K2_GetPawn_ReturnValue) == 0x000DD8, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, CallFunc_DoesImplementInterface_ReturnValue) == 0x000DE0, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, K2Node_DynamicCast_AsBodycam_Interface) == 0x000DE8, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::K2Node_DynamicCast_AsBodycam_Interface' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, K2Node_DynamicCast_bSuccess) == 0x000DF8, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, CallFunc_GetFlashBangEffect_FlashEffect) == 0x000E00, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::CallFunc_GetFlashBangEffect_FlashEffect' has a wrong offset!");
static_assert(offsetof(CAM_FlashBang_C_BlueprintModifyPostProcess, K2Node_FunctionResult_PostProcessBlendWeight_ImplicitCast) == 0x000E08, "Member 'CAM_FlashBang_C_BlueprintModifyPostProcess::K2Node_FunctionResult_PostProcessBlendWeight_ImplicitCast' has a wrong offset!");

}
