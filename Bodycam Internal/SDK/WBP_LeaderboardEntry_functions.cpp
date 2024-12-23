#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LeaderboardEntry

#include "Basic.hpp"

#include "WBP_LeaderboardEntry_classes.hpp"
#include "WBP_LeaderboardEntry_parameters.hpp"


namespace SDK
{

// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaderboardEntry_C::BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEntry_C", "BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaderboardEntry_C::BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEntry_C", "BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_LeaderboardEntry_C::BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEntry_C", "BndEvt__WBP_LeaderboardEntry_Button_45_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LeaderboardEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.ExecuteUbergraph_WBP_LeaderboardEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LeaderboardEntry_C::ExecuteUbergraph_WBP_LeaderboardEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEntry_C", "ExecuteUbergraph_WBP_LeaderboardEntry");

	Params::WBP_LeaderboardEntry_C_ExecuteUbergraph_WBP_LeaderboardEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.PersonaStateChange_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPersonaStateChange              Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_LeaderboardEntry_C::PersonaStateChange_Event_0(const struct FPersonaStateChange& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEntry_C", "PersonaStateChange_Event_0");

	Params::WBP_LeaderboardEntry_C_PersonaStateChange_Event_0 Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LeaderboardEntry.WBP_LeaderboardEntry_C.UpdateEntry
// (BlueprintCallable, BlueprintEvent)

void UWBP_LeaderboardEntry_C::UpdateEntry()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LeaderboardEntry_C", "UpdateEntry");

	UObject::ProcessEvent(Func, nullptr);
}

}

