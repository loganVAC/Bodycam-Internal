#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ImgButton

#include "Basic.hpp"

#include "WBP_ImgButton_classes.hpp"
#include "WBP_ImgButton_parameters.hpp"


namespace SDK
{

// Function WBP_ImgButton.WBP_ImgButton_C.BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ImgButton_C::BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ImgButton.WBP_ImgButton_C.BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ImgButton_C::BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ImgButton.WBP_ImgButton_C.BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ImgButton_C::BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "BndEvt__WBP_ImgButton_Button_Selection_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ImgButton.WBP_ImgButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ImgButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ImgButton.WBP_ImgButton_C.ExecuteUbergraph_WBP_ImgButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ImgButton_C::ExecuteUbergraph_WBP_ImgButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "ExecuteUbergraph_WBP_ImgButton");

	Params::WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ImgButton.WBP_ImgButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ImgButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ImgButton.WBP_ImgButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ImgButton_C::OnHovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "OnHovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ImgButton.WBP_ImgButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ImgButton_C::OnUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "OnUnhovered__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ImgButton.WBP_ImgButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ImgButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ImgButton_C", "PreConstruct");

	Params::WBP_ImgButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

