#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_Slider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_Slider.UI_Slider_C
// 0x00B8 (0x0338 - 0x0280)
class UUI_Slider_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ResetIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_187;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                Slider;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SliderTitle;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SliderValue;                                       // 0x02B0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CommonCommand_C*                    UI_DecreaseButton;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CommonCommand_C*                    UI_IncreaseButton;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_33;                                    // 0x02C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Title;                                             // 0x02D0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Unit;                                              // 0x02E8(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             OnChanged;                                         // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                        DefaultValue;                                      // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        MinValue;                                          // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        MaxValue;                                          // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        StepSize;                                          // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MaxFractionalDigits;                               // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__Button_87_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__UI_CommonCommand_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__UI_IncreaseButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void ChangeValue(double InValue);
	void CheckUserFocus();
	void ExecuteUbergraph_UI_Slider(int32 EntryPoint);
	bool FocusBind();
	class FText GetValueText();
	void IncreaseDecrease(double DeltaMultiplier);
	void OnChanged__DelegateSignature(double Value);
	void PreConstruct(bool IsDesignTime);
	void ResetSlider();
	void UpdateMaxMin(double MinValue_0, double MaxValue_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_Slider_C">();
	}
	static class UUI_Slider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_Slider_C>();
	}
};
static_assert(alignof(UUI_Slider_C) == 0x000008, "Wrong alignment on UUI_Slider_C");
static_assert(sizeof(UUI_Slider_C) == 0x000338, "Wrong size on UUI_Slider_C");
static_assert(offsetof(UUI_Slider_C, UberGraphFrame) == 0x000280, "Member 'UUI_Slider_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, Button) == 0x000288, "Member 'UUI_Slider_C::Button' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, ResetIcon) == 0x000290, "Member 'UUI_Slider_C::ResetIcon' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, SizeBox_187) == 0x000298, "Member 'UUI_Slider_C::SizeBox_187' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, Slider) == 0x0002A0, "Member 'UUI_Slider_C::Slider' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, SliderTitle) == 0x0002A8, "Member 'UUI_Slider_C::SliderTitle' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, SliderValue) == 0x0002B0, "Member 'UUI_Slider_C::SliderValue' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, UI_DecreaseButton) == 0x0002B8, "Member 'UUI_Slider_C::UI_DecreaseButton' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, UI_IncreaseButton) == 0x0002C0, "Member 'UUI_Slider_C::UI_IncreaseButton' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, VerticalBox_33) == 0x0002C8, "Member 'UUI_Slider_C::VerticalBox_33' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, Title) == 0x0002D0, "Member 'UUI_Slider_C::Title' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, Unit) == 0x0002E8, "Member 'UUI_Slider_C::Unit' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, OnChanged) == 0x000300, "Member 'UUI_Slider_C::OnChanged' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, DefaultValue) == 0x000310, "Member 'UUI_Slider_C::DefaultValue' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, MinValue) == 0x000318, "Member 'UUI_Slider_C::MinValue' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, MaxValue) == 0x000320, "Member 'UUI_Slider_C::MaxValue' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, StepSize) == 0x000328, "Member 'UUI_Slider_C::StepSize' has a wrong offset!");
static_assert(offsetof(UUI_Slider_C, MaxFractionalDigits) == 0x000330, "Member 'UUI_Slider_C::MaxFractionalDigits' has a wrong offset!");

}
