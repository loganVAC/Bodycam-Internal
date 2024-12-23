#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_PlayerInfo.W_PlayerInfo_C
// 0x0058 (0x02D8 - 0x0280)
class UW_PlayerInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_Block;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Block;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlayerName;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Team;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ACharacter*                             CharacterRef;                                      // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsBlocked_;                                        // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B1[0x7];                                      // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Username;                                          // 0x02B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_ChatComponent_C*                    ChatCompRef;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Button_Mute_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_W_PlayerInfo(int32 EntryPoint);
	void GetUsername(class FText* Username_0, class FText* UsernameTricked);
	void RefreshInfos();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_PlayerInfo_C">();
	}
	static class UW_PlayerInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_PlayerInfo_C>();
	}
};
static_assert(alignof(UW_PlayerInfo_C) == 0x000008, "Wrong alignment on UW_PlayerInfo_C");
static_assert(sizeof(UW_PlayerInfo_C) == 0x0002D8, "Wrong size on UW_PlayerInfo_C");
static_assert(offsetof(UW_PlayerInfo_C, UberGraphFrame) == 0x000280, "Member 'UW_PlayerInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UW_PlayerInfo_C, Button_Block) == 0x000288, "Member 'UW_PlayerInfo_C::Button_Block' has a wrong offset!");
static_assert(offsetof(UW_PlayerInfo_C, TextBlock_Block) == 0x000290, "Member 'UW_PlayerInfo_C::TextBlock_Block' has a wrong offset!");
static_assert(offsetof(UW_PlayerInfo_C, TextBlock_PlayerName) == 0x000298, "Member 'UW_PlayerInfo_C::TextBlock_PlayerName' has a wrong offset!");
static_assert(offsetof(UW_PlayerInfo_C, TextBlock_Team) == 0x0002A0, "Member 'UW_PlayerInfo_C::TextBlock_Team' has a wrong offset!");
static_assert(offsetof(UW_PlayerInfo_C, CharacterRef) == 0x0002A8, "Member 'UW_PlayerInfo_C::CharacterRef' has a wrong offset!");
static_assert(offsetof(UW_PlayerInfo_C, IsBlocked_) == 0x0002B0, "Member 'UW_PlayerInfo_C::IsBlocked_' has a wrong offset!");
static_assert(offsetof(UW_PlayerInfo_C, Username) == 0x0002B8, "Member 'UW_PlayerInfo_C::Username' has a wrong offset!");
static_assert(offsetof(UW_PlayerInfo_C, ChatCompRef) == 0x0002D0, "Member 'UW_PlayerInfo_C::ChatCompRef' has a wrong offset!");

}

