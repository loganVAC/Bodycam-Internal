#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_PlayerList

#include "Basic.hpp"

#include "W_PlayerList_classes.hpp"
#include "W_PlayerList_parameters.hpp"


namespace SDK
{

// Function W_PlayerList.W_PlayerList_C.BndEvt__Button_Mute_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_PlayerList_C::BndEvt__Button_Mute_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerList_C", "BndEvt__Button_Mute_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlayerList.W_PlayerList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_PlayerList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlayerList.W_PlayerList_C.ExecuteUbergraph_W_PlayerList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerList_C::ExecuteUbergraph_W_PlayerList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerList_C", "ExecuteUbergraph_W_PlayerList");

	Params::W_PlayerList_C_ExecuteUbergraph_W_PlayerList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function W_PlayerList.W_PlayerList_C.OnTimer
// (BlueprintCallable, BlueprintEvent)

void UW_PlayerList_C::OnTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerList_C", "OnTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlayerList.W_PlayerList_C.RefreshActualTeam
// (BlueprintCallable, BlueprintEvent)

void UW_PlayerList_C::RefreshActualTeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerList_C", "RefreshActualTeam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlayerList.W_PlayerList_C.RefreshPlayerList
// (BlueprintCallable, BlueprintEvent)

void UW_PlayerList_C::RefreshPlayerList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerList_C", "RefreshPlayerList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function W_PlayerList.W_PlayerList_C.ShowHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IgnoreInput_                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_PlayerList_C::ShowHide(bool IgnoreInput_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("W_PlayerList_C", "ShowHide");

	Params::W_PlayerList_C_ShowHide Parms{};

	Parms.IgnoreInput_ = IgnoreInput_;

	UObject::ProcessEvent(Func, &Parms);
}

}
