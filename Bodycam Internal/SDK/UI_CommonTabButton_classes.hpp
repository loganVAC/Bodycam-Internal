#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CommonTabButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_CommonTabButton.UI_CommonTabButton_C
// 0x0068 (0x02E8 - 0x0280)
class UUI_CommonTabButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ButtonTitle;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TabIcon;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x02A8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TabToOpen;                                         // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          StartSelected;                                     // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2D5[0x3];                                      // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Icon;                                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          UseImage;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Button_24_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_CommonTabButton(int32 EntryPoint);
	void ManualSelection();
	void OnClicked__DelegateSignature(int32 TabToOpen_0);
	void PreConstruct(bool IsDesignTime);
	void SelectButton(bool Select);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_CommonTabButton_C">();
	}
	static class UUI_CommonTabButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_CommonTabButton_C>();
	}
};
static_assert(alignof(UUI_CommonTabButton_C) == 0x000008, "Wrong alignment on UUI_CommonTabButton_C");
static_assert(sizeof(UUI_CommonTabButton_C) == 0x0002E8, "Wrong size on UUI_CommonTabButton_C");
static_assert(offsetof(UUI_CommonTabButton_C, UberGraphFrame) == 0x000280, "Member 'UUI_CommonTabButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, Button) == 0x000288, "Member 'UUI_CommonTabButton_C::Button' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, ButtonTitle) == 0x000290, "Member 'UUI_CommonTabButton_C::ButtonTitle' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, Overlay) == 0x000298, "Member 'UUI_CommonTabButton_C::Overlay' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, TabIcon) == 0x0002A0, "Member 'UUI_CommonTabButton_C::TabIcon' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, Title) == 0x0002A8, "Member 'UUI_CommonTabButton_C::Title' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, OnClicked) == 0x0002C0, "Member 'UUI_CommonTabButton_C::OnClicked' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, TabToOpen) == 0x0002D0, "Member 'UUI_CommonTabButton_C::TabToOpen' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, StartSelected) == 0x0002D4, "Member 'UUI_CommonTabButton_C::StartSelected' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, Icon) == 0x0002D8, "Member 'UUI_CommonTabButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UUI_CommonTabButton_C, UseImage) == 0x0002E0, "Member 'UUI_CommonTabButton_C::UseImage' has a wrong offset!");

}
