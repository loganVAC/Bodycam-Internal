#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Camera

#include "Basic.hpp"

#include "Camera_classes.hpp"
#include "Camera_parameters.hpp"


namespace SDK
{

// Function Camera.Camera_C.Camera_HUD
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ACamera_C::Camera_HUD_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "Camera_HUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Camera.Camera_C.ElectricalAction (Server)
// (Net, NetReliable, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACamera_C::ElectricalAction__Server_(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "ElectricalAction (Server)");

	Params::Camera_C_ElectricalAction__Server_ Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.ElectricalEvent (client)
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void ACamera_C::ElectricalEvent__client_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "ElectricalEvent (client)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Camera.Camera_C.ExecuteUbergraph_Camera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_C::ExecuteUbergraph_Camera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "ExecuteUbergraph_Camera");

	Params::Camera_C_ExecuteUbergraph_Camera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.FlashLight (Multicast)
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Flashlight_ON__0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_C::FlashLight__Multicast_(bool Flashlight_ON__0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "FlashLight (Multicast)");

	Params::Camera_C_FlashLight__Multicast_ Parms{};

	Parms.Flashlight_ON__0 = Flashlight_ON__0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.FlashLightToggle (Server)
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ACamera_C::FlashLightToggle__Server_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "FlashLightToggle (Server)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Camera.Camera_C.InpActEvt_Escape_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACamera_C::InpActEvt_Escape_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "InpActEvt_Escape_K2Node_InputKeyEvent_2");

	Params::Camera_C_InpActEvt_Escape_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.InpActEvt_IA_Fire_K2Node_EnhancedInputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACamera_C::InpActEvt_IA_Fire_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "InpActEvt_IA_Fire_K2Node_EnhancedInputActionEvent_2");

	Params::Camera_C_InpActEvt_IA_Fire_K2Node_EnhancedInputActionEvent_2 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.InpActEvt_IA_Look_K2Node_EnhancedInputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACamera_C::InpActEvt_IA_Look_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "InpActEvt_IA_Look_K2Node_EnhancedInputActionEvent_3");

	Params::Camera_C_InpActEvt_IA_Look_K2Node_EnhancedInputActionEvent_3 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.InpActEvt_IA_Take_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACamera_C::InpActEvt_IA_Take_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "InpActEvt_IA_Take_K2Node_EnhancedInputActionEvent_1");

	Params::Camera_C_InpActEvt_IA_Take_K2Node_EnhancedInputActionEvent_1 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.InpActEvt_IA_ToggleFlashLight_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACamera_C::InpActEvt_IA_ToggleFlashLight_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "InpActEvt_IA_ToggleFlashLight_K2Node_EnhancedInputActionEvent_0");

	Params::Camera_C_InpActEvt_IA_ToggleFlashLight_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACamera_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0");

	Params::Camera_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ACamera_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1");

	Params::Camera_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.OnRep_Flashlight ON?
// (BlueprintCallable, BlueprintEvent)

void ACamera_C::OnRep_Flashlight_ON_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "OnRep_Flashlight ON?");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Camera.Camera_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACamera_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Camera.Camera_C.ReceivePossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      NewController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACamera_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "ReceivePossessed");

	Params::Camera_C_ReceivePossessed Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACamera_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "ReceiveTick");

	Params::Camera_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.ReceiveUnpossessed
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AController*                      OldController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ACamera_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "ReceiveUnpossessed");

	Params::Camera_C_ReceiveUnpossessed Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.RemoveCameraHUD (Multicast)
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ACamera_C::RemoveCameraHUD__Multicast_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "RemoveCameraHUD (Multicast)");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Camera.Camera_C.SmoothControlRotation (Server)
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                         SmoothControlRotation_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACamera_C::SmoothControlRotation__Server_(const struct FRotator& SmoothControlRotation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "SmoothControlRotation (Server)");

	Params::Camera_C_SmoothControlRotation__Server_ Parms{};

	Parms.SmoothControlRotation_0 = std::move(SmoothControlRotation_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Camera.Camera_C.SmoothFOVChanger
// (Public, BlueprintCallable, BlueprintEvent)

void ACamera_C::SmoothFOVChanger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Camera_C", "SmoothFOVChanger");

	UObject::ProcessEvent(Func, nullptr);
}

}
