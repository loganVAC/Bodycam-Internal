#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CommonCommand

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CommonCommand.UI_CommonCommand_C
// 0x0090 (0x0310 - 0x0280)
class UUI_CommonCommand_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_55;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TitleButton;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x02A8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                             Icon;                                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   Tooltip;                                           // 0x02D8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UUI_Tooltip_C*                          TooltipRef;                                        // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              IconSize;                                          // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          ShowTooltip;                                       // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_CommonCommand(int32 EntryPoint);
	void OnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CommonCommand_C">();
	}
	static class UUI_CommonCommand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CommonCommand_C>();
	}
};
static_assert(alignof(UUI_CommonCommand_C) == 0x000008, "Wrong alignment on UUI_CommonCommand_C");
static_assert(sizeof(UUI_CommonCommand_C) == 0x000310, "Wrong size on UUI_CommonCommand_C");
static_assert(offsetof(UUI_CommonCommand_C, UberGraphFrame) == 0x000280, "Member 'UUI_CommonCommand_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, Button) == 0x000288, "Member 'UUI_CommonCommand_C::Button' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, ButtonIcon) == 0x000290, "Member 'UUI_CommonCommand_C::ButtonIcon' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, Overlay_55) == 0x000298, "Member 'UUI_CommonCommand_C::Overlay_55' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, TitleButton) == 0x0002A0, "Member 'UUI_CommonCommand_C::TitleButton' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, Title) == 0x0002A8, "Member 'UUI_CommonCommand_C::Title' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, Icon) == 0x0002C0, "Member 'UUI_CommonCommand_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, OnClicked) == 0x0002C8, "Member 'UUI_CommonCommand_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, Tooltip) == 0x0002D8, "Member 'UUI_CommonCommand_C::Tooltip' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, TooltipRef) == 0x0002F0, "Member 'UUI_CommonCommand_C::TooltipRef' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, IconSize) == 0x0002F8, "Member 'UUI_CommonCommand_C::IconSize' has a wrong offset!");
static_assert(offsetof(UUI_CommonCommand_C, ShowTooltip) == 0x000308, "Member 'UUI_CommonCommand_C::ShowTooltip' has a wrong offset!");

}

