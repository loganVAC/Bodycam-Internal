#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameEnd

#include "Basic.hpp"

#include "WBP_GameEnd_classes.hpp"
#include "WBP_GameEnd_parameters.hpp"


namespace SDK
{

// Function WBP_GameEnd.WBP_GameEnd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameEnd_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameEnd.WBP_GameEnd_C.ExecuteUbergraph_WBP_GameEnd
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameEnd_C::ExecuteUbergraph_WBP_GameEnd(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "ExecuteUbergraph_WBP_GameEnd");

	Params::WBP_GameEnd_C_ExecuteUbergraph_WBP_GameEnd Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameEnd.WBP_GameEnd_C.OnCallback_7D20522B40B1B8F16BAEA69A5841FEBC
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardFindResult           Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameEnd_C::OnCallback_7D20522B40B1B8F16BAEA69A5841FEBC(const struct FLeaderboardFindResult& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "OnCallback_7D20522B40B1B8F16BAEA69A5841FEBC");

	Params::WBP_GameEnd_C_OnCallback_7D20522B40B1B8F16BAEA69A5841FEBC Parms{};

	Parms.Data = std::move(Data);
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameEnd.WBP_GameEnd_C.OnCallback_E054662447541F39438A06B3549CAEA2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLeaderboardScoresDownloaded     Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameEnd_C::OnCallback_E054662447541F39438A06B3549CAEA2(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "OnCallback_E054662447541F39438A06B3549CAEA2");

	Params::WBP_GameEnd_C_OnCallback_E054662447541F39438A06B3549CAEA2 Parms{};

	Parms.Data = std::move(Data);
	Parms.bWasSuccessful = bWasSuccessful;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameEnd.WBP_GameEnd_C.OnFooterButtonBack
// (BlueprintCallable, BlueprintEvent)

void UWBP_GameEnd_C::OnFooterButtonBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "OnFooterButtonBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameEnd.WBP_GameEnd_C.OnNavigationEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InteractableMenu_C*          NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EInputDeviceType                        InputDeviceType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameEnd_C::OnNavigationEnter(class UWBP_InteractableMenu_C* NavigateFromMenu, EInputDeviceType InputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "OnNavigationEnter");

	Params::WBP_GameEnd_C_OnNavigationEnter Parms{};

	Parms.NavigateFromMenu = NavigateFromMenu;
	Parms.InputDeviceType = InputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameEnd.WBP_GameEnd_C.OnNavigationExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             ToMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           MenuLayer_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ETransitionAnimation                    TransitionAnimation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TransitionSpeed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InPayload                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GameEnd_C::OnNavigationExit(TSoftClassPtr<class UClass> ToMenu, const class FString& MenuLayer_0, ETransitionAnimation TransitionAnimation, double TransitionSpeed, class UObject* InPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "OnNavigationExit");

	Params::WBP_GameEnd_C_OnNavigationExit Parms{};

	Parms.ToMenu = ToMenu;
	Parms.MenuLayer_0 = std::move(MenuLayer_0);
	Parms.TransitionAnimation = TransitionAnimation;
	Parms.TransitionSpeed = TransitionSpeed;
	Parms.InPayload = InPayload;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameEnd.WBP_GameEnd_C.OnPressedBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GameEnd_C::OnPressedBack(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "OnPressedBack");

	Params::WBP_GameEnd_C_OnPressedBack Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameEnd.WBP_GameEnd_C.OnRep_bRefreshingInventory
// (BlueprintCallable, BlueprintEvent)

void UWBP_GameEnd_C::OnRep_bRefreshingInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "OnRep_bRefreshingInventory");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameEnd.WBP_GameEnd_C.OnRep_bRefreshingItems
// (BlueprintCallable, BlueprintEvent)

void UWBP_GameEnd_C::OnRep_bRefreshingItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "OnRep_bRefreshingItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameEnd.WBP_GameEnd_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameEnd_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameEnd_C", "Tick");

	Params::WBP_GameEnd_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
