#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ColorSliders

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UI_ColorSliders.UI_ColorSliders_C
// 0x0070 (0x02F0 - 0x0280)
class UUI_ColorSliders_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_184;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Preview;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PreviewBorder;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                Spacer_Alpha;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Slider_C*                           UI_Alpha;                                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Slider_C*                           UI_Blue;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Slider_C*                           UI_Green;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Slider_C*                           UI_Red;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           DefaultColor;                                      // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnColorChanged;                                    // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShowAlpha;                                         // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__UI_Alpha_K2Node_ComponentBoundEvent_0_OnChanged__DelegateSignature(double Value);
	void BndEvt__UI_Blue_K2Node_ComponentBoundEvent_1_OnChanged__DelegateSignature(double Value);
	void BndEvt__UI_Green_K2Node_ComponentBoundEvent_2_OnChanged__DelegateSignature(double Value);
	void BndEvt__UI_Red_K2Node_ComponentBoundEvent_3_OnChanged__DelegateSignature(double Value);
	void ExecuteUbergraph_UI_ColorSliders(int32 EntryPoint);
	void OnColorChanged__DelegateSignature(const struct FLinearColor& Color);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UI_ColorSliders_C">();
	}
	static class UUI_ColorSliders_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUI_ColorSliders_C>();
	}
};
static_assert(alignof(UUI_ColorSliders_C) == 0x000008, "Wrong alignment on UUI_ColorSliders_C");
static_assert(sizeof(UUI_ColorSliders_C) == 0x0002F0, "Wrong size on UUI_ColorSliders_C");
static_assert(offsetof(UUI_ColorSliders_C, UberGraphFrame) == 0x000280, "Member 'UUI_ColorSliders_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, Image_184) == 0x000288, "Member 'UUI_ColorSliders_C::Image_184' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, Preview) == 0x000290, "Member 'UUI_ColorSliders_C::Preview' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, PreviewBorder) == 0x000298, "Member 'UUI_ColorSliders_C::PreviewBorder' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, Spacer_Alpha) == 0x0002A0, "Member 'UUI_ColorSliders_C::Spacer_Alpha' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, UI_Alpha) == 0x0002A8, "Member 'UUI_ColorSliders_C::UI_Alpha' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, UI_Blue) == 0x0002B0, "Member 'UUI_ColorSliders_C::UI_Blue' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, UI_Green) == 0x0002B8, "Member 'UUI_ColorSliders_C::UI_Green' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, UI_Red) == 0x0002C0, "Member 'UUI_ColorSliders_C::UI_Red' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, DefaultColor) == 0x0002C8, "Member 'UUI_ColorSliders_C::DefaultColor' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, OnColorChanged) == 0x0002D8, "Member 'UUI_ColorSliders_C::OnColorChanged' has a wrong offset!");
static_assert(offsetof(UUI_ColorSliders_C, ShowAlpha) == 0x0002E8, "Member 'UUI_ColorSliders_C::ShowAlpha' has a wrong offset!");

}
