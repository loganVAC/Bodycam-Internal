#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IntroMenu_Silence

#include "Basic.hpp"

#include "WBP_IntroMenu_Silence_classes.hpp"
#include "WBP_IntroMenu_Silence_parameters.hpp"


namespace SDK
{

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.BndEvt__WBP_IntroMenu_Silence_Button_39_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_IntroMenu_Silence_C::BndEvt__WBP_IntroMenu_Silence_Button_39_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "BndEvt__WBP_IntroMenu_Silence_Button_39_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.Completed_346511C34FB5E35C0E7CA89BA000E998
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*                        SaveGame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bSuccess                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IntroMenu_Silence_C::Completed_346511C34FB5E35C0E7CA89BA000E998(class USaveGame* SaveGame, bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "Completed_346511C34FB5E35C0E7CA89BA000E998");

	Params::WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998 Parms{};

	Parms.SaveGame = SaveGame;
	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IntroMenu_Silence_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.ExecuteUbergraph_WBP_IntroMenu_Silence
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IntroMenu_Silence_C::ExecuteUbergraph_WBP_IntroMenu_Silence(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "ExecuteUbergraph_WBP_IntroMenu_Silence");

	Params::WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.JumpToNextPart
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IntroMenu_Silence_C::JumpToNextPart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "JumpToNextPart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OnBeginIntroImageAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_IntroMenu_Silence_C::OnBeginIntroImageAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "OnBeginIntroImageAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OnCallback_0C1748834A9F16A35E40ECB8E3919583
// (BlueprintCallable, BlueprintEvent)

void UWBP_IntroMenu_Silence_C::OnCallback_0C1748834A9F16A35E40ECB8E3919583()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "OnCallback_0C1748834A9F16A35E40ECB8E3919583");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OnNavigationEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InteractableMenu_C*          NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EInputDeviceType                        InputDeviceType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IntroMenu_Silence_C::OnNavigationEnter(class UWBP_InteractableMenu_C* NavigateFromMenu, EInputDeviceType InputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "OnNavigationEnter");

	Params::WBP_IntroMenu_Silence_C_OnNavigationEnter Parms{};

	Parms.NavigateFromMenu = NavigateFromMenu;
	Parms.InputDeviceType = InputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OnNavigationExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             ToMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           MenuLayer_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ETransitionAnimation                    TransitionAnimation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TransitionSpeed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InPayload                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IntroMenu_Silence_C::OnNavigationExit(TSoftClassPtr<class UClass> ToMenu, const class FString& MenuLayer_0, ETransitionAnimation TransitionAnimation, double TransitionSpeed, class UObject* InPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "OnNavigationExit");

	Params::WBP_IntroMenu_Silence_C_OnNavigationExit Parms{};

	Parms.ToMenu = ToMenu;
	Parms.MenuLayer_0 = std::move(MenuLayer_0);
	Parms.TransitionAnimation = TransitionAnimation;
	Parms.TransitionSpeed = TransitionSpeed;
	Parms.InPayload = InPayload;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OnPressedAnyKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bAnyKeyReleased                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IntroMenu_Silence_C::OnPressedAnyKey(const struct FKeyEvent& KeyEvent, bool bAnyKeyReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "OnPressedAnyKey");

	Params::WBP_IntroMenu_Silence_C_OnPressedAnyKey Parms{};

	Parms.KeyEvent = std::move(KeyEvent);
	Parms.bAnyKeyReleased = bAnyKeyReleased;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OverrideWidgetStyleFromConfig
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IntroMenu_Silence_C::OverrideWidgetStyleFromConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "OverrideWidgetStyleFromConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IntroMenu_Silence_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "PreConstruct");

	Params::WBP_IntroMenu_Silence_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.SetSessionSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_IntroMenu_Silence_C::SetSessionSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "SetSessionSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.VerifyAlreadyLobby
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSteamSessionSetting>     Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FBlueprintSessionResult          SessionResults                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    AlreadyLobby_                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IntroMenu_Silence_C::VerifyAlreadyLobby(TArray<struct FSteamSessionSetting>& Array, const struct FBlueprintSessionResult& SessionResults, bool* AlreadyLobby_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IntroMenu_Silence_C", "VerifyAlreadyLobby");

	Params::WBP_IntroMenu_Silence_C_VerifyAlreadyLobby Parms{};

	Parms.Array = std::move(Array);
	Parms.SessionResults = std::move(SessionResults);

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (AlreadyLobby_ != nullptr)
		*AlreadyLobby_ = Parms.AlreadyLobby_;
}

}
