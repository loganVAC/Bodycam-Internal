#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Deagle_0

#include "Basic.hpp"

#include "Deagle_0_classes.hpp"
#include "Deagle_0_parameters.hpp"


namespace SDK
{

// Function Deagle.Deagle_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UDeagle_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Deagle_C", "AnimGraph");

	Params::Deagle_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Deagle.Deagle_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeagle_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Deagle_C", "BlueprintUpdateAnimation");

	Params::Deagle_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Deagle.Deagle_C.ExecuteUbergraph_Deagle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDeagle_C::ExecuteUbergraph_Deagle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Deagle_C", "ExecuteUbergraph_Deagle");

	Params::Deagle_C_ExecuteUbergraph_Deagle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Deagle.Deagle_C.Init Wep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWEP_C*                           WEP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDeagle_C::Init_Wep(class AWEP_C* WEP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Deagle_C", "Init Wep");

	Params::Deagle_C_Init_Wep Parms{};

	Parms.WEP = WEP;

	UObject::ProcessEvent(Func, &Parms);
}

}

