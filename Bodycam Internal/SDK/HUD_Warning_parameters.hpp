#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HUD_Warning

#include "Basic.hpp"


namespace SDK::Params
{

// Function HUD_Warning.HUD_Warning_C.ExecuteUbergraph_HUD_Warning
// 0x0028 (0x0028 - 0x0000)
struct HUD_Warning_C_ExecuteUbergraph_HUD_Warning final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_CustomEvent_InText;                         // 0x0010(0x0018)()
};
static_assert(alignof(HUD_Warning_C_ExecuteUbergraph_HUD_Warning) == 0x000008, "Wrong alignment on HUD_Warning_C_ExecuteUbergraph_HUD_Warning");
static_assert(sizeof(HUD_Warning_C_ExecuteUbergraph_HUD_Warning) == 0x000028, "Wrong size on HUD_Warning_C_ExecuteUbergraph_HUD_Warning");
static_assert(offsetof(HUD_Warning_C_ExecuteUbergraph_HUD_Warning, EntryPoint) == 0x000000, "Member 'HUD_Warning_C_ExecuteUbergraph_HUD_Warning::EntryPoint' has a wrong offset!");
static_assert(offsetof(HUD_Warning_C_ExecuteUbergraph_HUD_Warning, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'HUD_Warning_C_ExecuteUbergraph_HUD_Warning::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(HUD_Warning_C_ExecuteUbergraph_HUD_Warning, K2Node_CustomEvent_InText) == 0x000010, "Member 'HUD_Warning_C_ExecuteUbergraph_HUD_Warning::K2Node_CustomEvent_InText' has a wrong offset!");

// Function HUD_Warning.HUD_Warning_C.Update (Warning)
// 0x0018 (0x0018 - 0x0000)
struct HUD_Warning_C_Update__Warning_ final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(HUD_Warning_C_Update__Warning_) == 0x000008, "Wrong alignment on HUD_Warning_C_Update__Warning_");
static_assert(sizeof(HUD_Warning_C_Update__Warning_) == 0x000018, "Wrong size on HUD_Warning_C_Update__Warning_");
static_assert(offsetof(HUD_Warning_C_Update__Warning_, InText) == 0x000000, "Member 'HUD_Warning_C_Update__Warning_::InText' has a wrong offset!");

}
