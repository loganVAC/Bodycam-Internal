#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ColorVisionDeficiencyTypeApply

#include "Basic.hpp"

#include "FValueTypes_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_ColorVisionDeficiencyTypeApply.BP_ColorVisionDeficiencyTypeApply_C.ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply
// 0x0060 (0x0060 - 0x0000)
struct BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EColorVisionDeficiency                        Temp_byte_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EColorVisionDeficiency                        Temp_byte_Variable_1;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EColorVisionDeficiency                        Temp_byte_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EColorVisionDeficiency                        Temp_byte_Variable_3;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_SettingsData_C*                    K2Node_Event_SettingsData;                         // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFValueTypes                           K2Node_Event_Value;                                // 0x0018(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_SettingsManager_C*                  K2Node_Event_SettingsManager;                      // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetFloatValue_Success;                    // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_GetFloatValue_Value;                      // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EColorVisionDeficiency                        K2Node_Select_Default;                             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast; // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply) == 0x000008, "Wrong alignment on BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply");
static_assert(sizeof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply) == 0x000060, "Wrong size on BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, EntryPoint) == 0x000000, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, Temp_int_Variable) == 0x000004, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, Temp_byte_Variable) == 0x000008, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, Temp_byte_Variable_1) == 0x000009, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, Temp_byte_Variable_2) == 0x00000A, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, Temp_byte_Variable_3) == 0x00000B, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, K2Node_Event_SettingsData) == 0x000010, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::K2Node_Event_SettingsData' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, K2Node_Event_Value) == 0x000018, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, K2Node_Event_SettingsManager) == 0x000040, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::K2Node_Event_SettingsManager' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, CallFunc_GetFloatValue_Success) == 0x000048, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::CallFunc_GetFloatValue_Success' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, CallFunc_GetFloatValue_Value) == 0x000050, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::CallFunc_GetFloatValue_Value' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, K2Node_Select_Default) == 0x000058, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply, CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast) == 0x00005C, "Member 'BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply::CallFunc_SetColorVisionDeficiencyType_Severity_ImplicitCast' has a wrong offset!");

// Function BP_ColorVisionDeficiencyTypeApply.BP_ColorVisionDeficiencyTypeApply_C.OnApply
// 0x0038 (0x0038 - 0x0000)
struct BP_ColorVisionDeficiencyTypeApply_C_OnApply final
{
public:
	class UPDA_SettingsData_C*                    SettingsData;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFValueTypes                           Value;                                             // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_SettingsManager_C*                  SettingsManager;                                   // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ColorVisionDeficiencyTypeApply_C_OnApply) == 0x000008, "Wrong alignment on BP_ColorVisionDeficiencyTypeApply_C_OnApply");
static_assert(sizeof(BP_ColorVisionDeficiencyTypeApply_C_OnApply) == 0x000038, "Wrong size on BP_ColorVisionDeficiencyTypeApply_C_OnApply");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_OnApply, SettingsData) == 0x000000, "Member 'BP_ColorVisionDeficiencyTypeApply_C_OnApply::SettingsData' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_OnApply, Value) == 0x000008, "Member 'BP_ColorVisionDeficiencyTypeApply_C_OnApply::Value' has a wrong offset!");
static_assert(offsetof(BP_ColorVisionDeficiencyTypeApply_C_OnApply, SettingsManager) == 0x000030, "Member 'BP_ColorVisionDeficiencyTypeApply_C_OnApply::SettingsManager' has a wrong offset!");

}

