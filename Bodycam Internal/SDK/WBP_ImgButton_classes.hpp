#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ImgButton

#include "Basic.hpp"

#include "StatusConfigEN_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "GameMode_structs.hpp"
#include "SlateCore_structs.hpp"
#include "WBP_InteractableMenu_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ImgButton.WBP_ImgButton_C
// 0x0118 (0x04A0 - 0x0388)
class UWBP_ImgButton_C final : public UWBP_InteractableMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_ImgButton_C;                    // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hover;                                             // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_2;                                          // 0x0398(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                BorderMaxPlayerReach;                              // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Selection;                                  // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MaxPlayer_Desc;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Selection_1;                               // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_ActualSelection_1;                         // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock;                                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Desc;                                    // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_MaxPlayerReach;                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PlaytestMessage;                         // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTexture2D*                             Texture;                                           // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   In_Text;                                           // 0x0410(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   In_Text_Desc;                                      // 0x0428(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                         In_Height_Override;                                // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         In_Width_Override;                                 // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EStatusConfigEN                               StatusConfigEN;                                    // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_449[0x3];                                      // 0x0449(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            In_Color_and_Opacity;                              // 0x044C(0x0014)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnHovered;                                         // 0x0460(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhovered;                                       // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PlayerLimit;                                       // 0x0480(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EGameMode                                     DT_Gamemode;                                       // 0x0484(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_485[0x3];                                      // 0x0485(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Playtest_In_Text;                                  // 0x0488(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_WBP_ImgButton(int32 EntryPoint);
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ImgButton_C">();
	}
	static class UWBP_ImgButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ImgButton_C>();
	}
};
static_assert(alignof(UWBP_ImgButton_C) == 0x000008, "Wrong alignment on UWBP_ImgButton_C");
static_assert(sizeof(UWBP_ImgButton_C) == 0x0004A0, "Wrong size on UWBP_ImgButton_C");
static_assert(offsetof(UWBP_ImgButton_C, UberGraphFrame_WBP_ImgButton_C) == 0x000388, "Member 'UWBP_ImgButton_C::UberGraphFrame_WBP_ImgButton_C' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, Hover) == 0x000390, "Member 'UWBP_ImgButton_C::Hover' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, Border_2) == 0x000398, "Member 'UWBP_ImgButton_C::Border_2' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, BorderMaxPlayerReach) == 0x0003A0, "Member 'UWBP_ImgButton_C::BorderMaxPlayerReach' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, Button_Selection) == 0x0003A8, "Member 'UWBP_ImgButton_C::Button_Selection' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, Image) == 0x0003B0, "Member 'UWBP_ImgButton_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, Image_2) == 0x0003B8, "Member 'UWBP_ImgButton_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, MaxPlayer_Desc) == 0x0003C0, "Member 'UWBP_ImgButton_C::MaxPlayer_Desc' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, Overlay_Selection_1) == 0x0003C8, "Member 'UWBP_ImgButton_C::Overlay_Selection_1' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, SizeBox_ActualSelection_1) == 0x0003D0, "Member 'UWBP_ImgButton_C::SizeBox_ActualSelection_1' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, TextBlock) == 0x0003D8, "Member 'UWBP_ImgButton_C::TextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, TextBlock_Desc) == 0x0003E0, "Member 'UWBP_ImgButton_C::TextBlock_Desc' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, TextBlock_MaxPlayerReach) == 0x0003E8, "Member 'UWBP_ImgButton_C::TextBlock_MaxPlayerReach' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, TextBlock_PlaytestMessage) == 0x0003F0, "Member 'UWBP_ImgButton_C::TextBlock_PlaytestMessage' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, OnClicked) == 0x0003F8, "Member 'UWBP_ImgButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, Texture) == 0x000408, "Member 'UWBP_ImgButton_C::Texture' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, In_Text) == 0x000410, "Member 'UWBP_ImgButton_C::In_Text' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, In_Text_Desc) == 0x000428, "Member 'UWBP_ImgButton_C::In_Text_Desc' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, In_Height_Override) == 0x000440, "Member 'UWBP_ImgButton_C::In_Height_Override' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, In_Width_Override) == 0x000444, "Member 'UWBP_ImgButton_C::In_Width_Override' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, StatusConfigEN) == 0x000448, "Member 'UWBP_ImgButton_C::StatusConfigEN' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, In_Color_and_Opacity) == 0x00044C, "Member 'UWBP_ImgButton_C::In_Color_and_Opacity' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, OnHovered) == 0x000460, "Member 'UWBP_ImgButton_C::OnHovered' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, OnUnhovered) == 0x000470, "Member 'UWBP_ImgButton_C::OnUnhovered' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, PlayerLimit) == 0x000480, "Member 'UWBP_ImgButton_C::PlayerLimit' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, DT_Gamemode) == 0x000484, "Member 'UWBP_ImgButton_C::DT_Gamemode' has a wrong offset!");
static_assert(offsetof(UWBP_ImgButton_C, Playtest_In_Text) == 0x000488, "Member 'UWBP_ImgButton_C::Playtest_In_Text' has a wrong offset!");

}
