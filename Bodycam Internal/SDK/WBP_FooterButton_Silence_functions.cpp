#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FooterButton_Silence

#include "Basic.hpp"

#include "WBP_FooterButton_Silence_classes.hpp"
#include "WBP_FooterButton_Silence_parameters.hpp"


namespace SDK
{

// Function WBP_FooterButton_Silence.WBP_FooterButton_Silence_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_FooterButton_Silence_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FooterButton_Silence_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FooterButton_Silence.WBP_FooterButton_Silence_C.BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_FooterButton_Silence_C::BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FooterButton_Silence_C", "BndEvt__NavigationKeyButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FooterButton_Silence.WBP_FooterButton_Silence_C.BndEvt__WBP_FooterButton_Silence_NavigationKeyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_FooterButton_Silence_C::BndEvt__WBP_FooterButton_Silence_NavigationKeyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FooterButton_Silence_C", "BndEvt__WBP_FooterButton_Silence_NavigationKeyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FooterButton_Silence.WBP_FooterButton_Silence_C.ExecuteUbergraph_WBP_FooterButton_Silence
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FooterButton_Silence_C::ExecuteUbergraph_WBP_FooterButton_Silence(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FooterButton_Silence_C", "ExecuteUbergraph_WBP_FooterButton_Silence");

	Params::WBP_FooterButton_Silence_C_ExecuteUbergraph_WBP_FooterButton_Silence Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FooterButton_Silence.WBP_FooterButton_Silence_C.OnPlayHighlightSound
// (BlueprintCallable, BlueprintEvent)

void UWBP_FooterButton_Silence_C::OnPlayHighlightSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FooterButton_Silence_C", "OnPlayHighlightSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_FooterButton_Silence.WBP_FooterButton_Silence_C.OnPressedSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FooterButton_Silence_C::OnPressedSelect(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FooterButton_Silence_C", "OnPressedSelect");

	Params::WBP_FooterButton_Silence_C_OnPressedSelect Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FooterButton_Silence.WBP_FooterButton_Silence_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FooterButton_Silence_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FooterButton_Silence_C", "PreConstruct");

	Params::WBP_FooterButton_Silence_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
