#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuControllerComponent

#include "Basic.hpp"

#include "BP_MenuControllerComponent_classes.hpp"
#include "BP_MenuControllerComponent_parameters.hpp"


namespace SDK
{

// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.ExecuteUbergraph_BP_MenuControllerComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuControllerComponent_C::ExecuteUbergraph_BP_MenuControllerComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "ExecuteUbergraph_BP_MenuControllerComponent");

	Params::BP_MenuControllerComponent_C_ExecuteUbergraph_BP_MenuControllerComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.OnAddMenuInputContext
// (BlueprintCallable, BlueprintEvent)

void UBP_MenuControllerComponent_C::OnAddMenuInputContext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "OnAddMenuInputContext");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.OnChangePlayerMappedKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MappingName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             NewKey                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UBP_MenuControllerComponent_C::OnChangePlayerMappedKey(const class FName MappingName, const struct FKey& NewKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "OnChangePlayerMappedKey");

	Params::BP_MenuControllerComponent_C_OnChangePlayerMappedKey Parms{};

	Parms.MappingName = MappingName;
	Parms.NewKey = std::move(NewKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.OnRemoveMenuInputContext
// (BlueprintCallable, BlueprintEvent)

void UBP_MenuControllerComponent_C::OnRemoveMenuInputContext()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "OnRemoveMenuInputContext");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.OnRequestRebuildControlMappings
// (BlueprintCallable, BlueprintEvent)

void UBP_MenuControllerComponent_C::OnRequestRebuildControlMappings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "OnRequestRebuildControlMappings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.OnResumeGameMode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_MenuControllerComponent_C::OnResumeGameMode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "OnResumeGameMode__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.OnSetupErrorCheck
// (BlueprintCallable, BlueprintEvent)

void UBP_MenuControllerComponent_C::OnSetupErrorCheck()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "OnSetupErrorCheck");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.OpenDocumentsMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDeviceType                        CurrentInputDevice_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuControllerComponent_C::OpenDocumentsMenu(EInputDeviceType CurrentInputDevice_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "OpenDocumentsMenu");

	Params::BP_MenuControllerComponent_C_OpenDocumentsMenu Parms{};

	Parms.CurrentInputDevice_0 = CurrentInputDevice_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.OpenInventoryMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDeviceType                        CurrentInputDevice_0                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuControllerComponent_C::OpenInventoryMenu(EInputDeviceType CurrentInputDevice_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "OpenInventoryMenu");

	Params::BP_MenuControllerComponent_C_OpenInventoryMenu Parms{};

	Parms.CurrentInputDevice_0 = CurrentInputDevice_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.Pause
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EInputDeviceType                        InputDeviceType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_MenuControllerComponent_C::Pause(class APlayerController* PlayerController, EInputDeviceType InputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "Pause");

	Params::BP_MenuControllerComponent_C_Pause Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InputDeviceType = InputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_MenuControllerComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.Resume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_MenuControllerComponent_C::Resume(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "Resume");

	Params::BP_MenuControllerComponent_C_Resume Parms{};

	Parms.PlayerController = PlayerController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.Rumble
// (BlueprintCallable, BlueprintEvent)

void UBP_MenuControllerComponent_C::Rumble()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "Rumble");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MenuControllerComponent.BP_MenuControllerComponent_C.UpdateControlsValuesFromConfig
// (BlueprintCallable, BlueprintEvent)

void UBP_MenuControllerComponent_C::UpdateControlsValuesFromConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MenuControllerComponent_C", "UpdateControlsValuesFromConfig");

	UObject::ProcessEvent(Func, nullptr);
}

}
