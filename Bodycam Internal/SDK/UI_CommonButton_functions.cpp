#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CommonButton

#include "Basic.hpp"

#include "UI_CommonButton_classes.hpp"
#include "UI_CommonButton_parameters.hpp"


namespace SDK
{

// Function UI_CommonButton.UI_CommonButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUI_CommonButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CommonButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CommonButton.UI_CommonButton_C.ExecuteUbergraph_UI_CommonButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CommonButton_C::ExecuteUbergraph_UI_CommonButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CommonButton_C", "ExecuteUbergraph_UI_CommonButton");

	Params::UI_CommonButton_C_ExecuteUbergraph_UI_CommonButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_CommonButton.UI_CommonButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUI_CommonButton_C::OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CommonButton_C", "OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_CommonButton.UI_CommonButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_CommonButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_CommonButton_C", "PreConstruct");

	Params::UI_CommonButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

