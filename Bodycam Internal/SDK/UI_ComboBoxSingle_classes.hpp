#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ComboBoxSingle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ComboBoxSingle.UI_ComboBoxSingle_C
// 0x0048 (0x02C8 - 0x0280)
class UUI_ComboBoxSingle_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundLayer;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HoveredLayer;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionText;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SelectionButton;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SelectionLayer;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Option;                                            // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_ComboBoxOptions_C*                  ComboBoxOptionsReference;                          // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Button_70_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_70_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_70_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_ComboBoxSingle(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetSelection(bool Selected);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ComboBoxSingle_C">();
	}
	static class UUI_ComboBoxSingle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ComboBoxSingle_C>();
	}
};
static_assert(alignof(UUI_ComboBoxSingle_C) == 0x000008, "Wrong alignment on UUI_ComboBoxSingle_C");
static_assert(sizeof(UUI_ComboBoxSingle_C) == 0x0002C8, "Wrong size on UUI_ComboBoxSingle_C");
static_assert(offsetof(UUI_ComboBoxSingle_C, UberGraphFrame) == 0x000280, "Member 'UUI_ComboBoxSingle_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ComboBoxSingle_C, BackgroundLayer) == 0x000288, "Member 'UUI_ComboBoxSingle_C::BackgroundLayer' has a wrong offset!");
static_assert(offsetof(UUI_ComboBoxSingle_C, HoveredLayer) == 0x000290, "Member 'UUI_ComboBoxSingle_C::HoveredLayer' has a wrong offset!");
static_assert(offsetof(UUI_ComboBoxSingle_C, OptionText) == 0x000298, "Member 'UUI_ComboBoxSingle_C::OptionText' has a wrong offset!");
static_assert(offsetof(UUI_ComboBoxSingle_C, SelectionButton) == 0x0002A0, "Member 'UUI_ComboBoxSingle_C::SelectionButton' has a wrong offset!");
static_assert(offsetof(UUI_ComboBoxSingle_C, SelectionLayer) == 0x0002A8, "Member 'UUI_ComboBoxSingle_C::SelectionLayer' has a wrong offset!");
static_assert(offsetof(UUI_ComboBoxSingle_C, Option) == 0x0002B0, "Member 'UUI_ComboBoxSingle_C::Option' has a wrong offset!");
static_assert(offsetof(UUI_ComboBoxSingle_C, ComboBoxOptionsReference) == 0x0002C0, "Member 'UUI_ComboBoxSingle_C::ComboBoxOptionsReference' has a wrong offset!");

}

