#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ComboBoxItemBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_ComboBoxItemBase.WBP_ComboBoxItemBase_C.ExecuteUbergraph_WBP_ComboBoxItemBase
// 0x0020 (0x0020 - 0x0000)
struct WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
};
static_assert(alignof(WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase) == 0x000008, "Wrong alignment on WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase");
static_assert(sizeof(WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase) == 0x000020, "Wrong size on WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase");
static_assert(offsetof(WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase, EntryPoint) == 0x000000, "Member 'WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'WBP_ComboBoxItemBase_C_ExecuteUbergraph_WBP_ComboBoxItemBase::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_ComboBoxItemBase.WBP_ComboBoxItemBase_C.OnComboBoxItemClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ComboBoxItemBase_C_OnComboBoxItemClicked__DelegateSignature final
{
public:
	class UWBP_ComboBoxItemBase_C*                ComboBoxItem;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBoxItemBase_C_OnComboBoxItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ComboBoxItemBase_C_OnComboBoxItemClicked__DelegateSignature");
static_assert(sizeof(WBP_ComboBoxItemBase_C_OnComboBoxItemClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_ComboBoxItemBase_C_OnComboBoxItemClicked__DelegateSignature");
static_assert(offsetof(WBP_ComboBoxItemBase_C_OnComboBoxItemClicked__DelegateSignature, ComboBoxItem) == 0x000000, "Member 'WBP_ComboBoxItemBase_C_OnComboBoxItemClicked__DelegateSignature::ComboBoxItem' has a wrong offset!");

// Function WBP_ComboBoxItemBase.WBP_ComboBoxItemBase_C.OnComboBoxItemHover__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ComboBoxItemBase_C_OnComboBoxItemHover__DelegateSignature final
{
public:
	class UWBP_ComboBoxItemBase_C*                ComboBoxItem;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBoxItemBase_C_OnComboBoxItemHover__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ComboBoxItemBase_C_OnComboBoxItemHover__DelegateSignature");
static_assert(sizeof(WBP_ComboBoxItemBase_C_OnComboBoxItemHover__DelegateSignature) == 0x000008, "Wrong size on WBP_ComboBoxItemBase_C_OnComboBoxItemHover__DelegateSignature");
static_assert(offsetof(WBP_ComboBoxItemBase_C_OnComboBoxItemHover__DelegateSignature, ComboBoxItem) == 0x000000, "Member 'WBP_ComboBoxItemBase_C_OnComboBoxItemHover__DelegateSignature::ComboBoxItem' has a wrong offset!");

// Function WBP_ComboBoxItemBase.WBP_ComboBoxItemBase_C.OnComboBoxItemUnhover__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_ComboBoxItemBase_C_OnComboBoxItemUnhover__DelegateSignature final
{
public:
	class UWBP_ComboBoxItemBase_C*                ComboBoxItem;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ComboBoxItemBase_C_OnComboBoxItemUnhover__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ComboBoxItemBase_C_OnComboBoxItemUnhover__DelegateSignature");
static_assert(sizeof(WBP_ComboBoxItemBase_C_OnComboBoxItemUnhover__DelegateSignature) == 0x000008, "Wrong size on WBP_ComboBoxItemBase_C_OnComboBoxItemUnhover__DelegateSignature");
static_assert(offsetof(WBP_ComboBoxItemBase_C_OnComboBoxItemUnhover__DelegateSignature, ComboBoxItem) == 0x000000, "Member 'WBP_ComboBoxItemBase_C_OnComboBoxItemUnhover__DelegateSignature::ComboBoxItem' has a wrong offset!");

}

