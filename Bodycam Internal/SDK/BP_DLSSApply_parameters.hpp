#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DLSSApply

#include "Basic.hpp"

#include "FValueTypes_structs.hpp"


namespace SDK::Params
{

// Function BP_DLSSApply.BP_DLSSApply_C.ExecuteUbergraph_BP_DLSSApply
// 0x0088 (0x0088 - 0x0000)
struct BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue_1;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPDA_SettingsData_C*                    K2Node_Event_SettingsData;                         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFValueTypes                           K2Node_Event_Value;                                // 0x0040(0x0028)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_SettingsManager_C*                  K2Node_Event_SettingsManager;                      // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetOuterObject_ReturnValue_2;             // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply) == 0x000008, "Wrong alignment on BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply");
static_assert(sizeof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply) == 0x000088, "Wrong size on BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, EntryPoint) == 0x000000, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, CallFunc_Concat_StrStr_ReturnValue) == 0x000008, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, CallFunc_GetOuterObject_ReturnValue) == 0x000018, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::CallFunc_GetOuterObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000020, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, CallFunc_GetOuterObject_ReturnValue_1) == 0x000030, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::CallFunc_GetOuterObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, K2Node_Event_SettingsData) == 0x000038, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::K2Node_Event_SettingsData' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, K2Node_Event_Value) == 0x000040, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, K2Node_Event_SettingsManager) == 0x000068, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::K2Node_Event_SettingsManager' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, CallFunc_GetOuterObject_ReturnValue_2) == 0x000070, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::CallFunc_GetOuterObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply, CallFunc_Concat_StrStr_ReturnValue_2) == 0x000078, "Member 'BP_DLSSApply_C_ExecuteUbergraph_BP_DLSSApply::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");

// Function BP_DLSSApply.BP_DLSSApply_C.OnApply
// 0x0038 (0x0038 - 0x0000)
struct BP_DLSSApply_C_OnApply final
{
public:
	class UPDA_SettingsData_C*                    SettingsData;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFValueTypes                           Value;                                             // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UBP_SettingsManager_C*                  SettingsManager;                                   // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_DLSSApply_C_OnApply) == 0x000008, "Wrong alignment on BP_DLSSApply_C_OnApply");
static_assert(sizeof(BP_DLSSApply_C_OnApply) == 0x000038, "Wrong size on BP_DLSSApply_C_OnApply");
static_assert(offsetof(BP_DLSSApply_C_OnApply, SettingsData) == 0x000000, "Member 'BP_DLSSApply_C_OnApply::SettingsData' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_OnApply, Value) == 0x000008, "Member 'BP_DLSSApply_C_OnApply::Value' has a wrong offset!");
static_assert(offsetof(BP_DLSSApply_C_OnApply, SettingsManager) == 0x000030, "Member 'BP_DLSSApply_C_OnApply::SettingsManager' has a wrong offset!");

}

