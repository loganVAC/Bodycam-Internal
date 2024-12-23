#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SaveMessages

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "S_MessageData_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SaveMessages.BP_SaveMessages_C
// 0x0040 (0x0068 - 0x0028)
class UBP_SaveMessages_C final : public USaveGame
{
public:
	struct FDateTime                              LastSave;                                          // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_MessageData>                 SavedMessages;                                     // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsShowTime_;                                       // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCloseOnCommit_;                                  // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSaveMessages_;                                   // 0x0042(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayChatAnim_;                                   // 0x0043(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayMessageAnim_;                                // 0x0044(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsShowLogOnAllCat_;                                // 0x0045(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46[0x2];                                       // 0x0046(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ChatBoxHeight;                                     // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChatBoxWidth;                                      // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChatBoxPositionX;                                  // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChatBoxPositionY;                                  // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SaveMessages_C">();
	}
	static class UBP_SaveMessages_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SaveMessages_C>();
	}
};
static_assert(alignof(UBP_SaveMessages_C) == 0x000008, "Wrong alignment on UBP_SaveMessages_C");
static_assert(sizeof(UBP_SaveMessages_C) == 0x000068, "Wrong size on UBP_SaveMessages_C");
static_assert(offsetof(UBP_SaveMessages_C, LastSave) == 0x000028, "Member 'UBP_SaveMessages_C::LastSave' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, SavedMessages) == 0x000030, "Member 'UBP_SaveMessages_C::SavedMessages' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, IsShowTime_) == 0x000040, "Member 'UBP_SaveMessages_C::IsShowTime_' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, IsCloseOnCommit_) == 0x000041, "Member 'UBP_SaveMessages_C::IsCloseOnCommit_' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, IsSaveMessages_) == 0x000042, "Member 'UBP_SaveMessages_C::IsSaveMessages_' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, IsPlayChatAnim_) == 0x000043, "Member 'UBP_SaveMessages_C::IsPlayChatAnim_' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, IsPlayMessageAnim_) == 0x000044, "Member 'UBP_SaveMessages_C::IsPlayMessageAnim_' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, IsShowLogOnAllCat_) == 0x000045, "Member 'UBP_SaveMessages_C::IsShowLogOnAllCat_' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, ChatBoxHeight) == 0x000048, "Member 'UBP_SaveMessages_C::ChatBoxHeight' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, ChatBoxWidth) == 0x000050, "Member 'UBP_SaveMessages_C::ChatBoxWidth' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, ChatBoxPositionX) == 0x000058, "Member 'UBP_SaveMessages_C::ChatBoxPositionX' has a wrong offset!");
static_assert(offsetof(UBP_SaveMessages_C, ChatBoxPositionY) == 0x000060, "Member 'UBP_SaveMessages_C::ChatBoxPositionY' has a wrong offset!");

}

