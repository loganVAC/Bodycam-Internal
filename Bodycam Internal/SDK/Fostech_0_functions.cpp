#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fostech_0

#include "Basic.hpp"

#include "Fostech_0_classes.hpp"
#include "Fostech_0_parameters.hpp"


namespace SDK
{

// Function Fostech.Fostech_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UFostech_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fostech_C", "AnimGraph");

	Params::Fostech_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Fostech.Fostech_C.ExecuteUbergraph_Fostech
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFostech_C::ExecuteUbergraph_Fostech(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fostech_C", "ExecuteUbergraph_Fostech");

	Params::Fostech_C_ExecuteUbergraph_Fostech Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fostech.Fostech_C.Init Wep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWEP_C*                           WEP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UFostech_C::Init_Wep(class AWEP_C* WEP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fostech_C", "Init Wep");

	Params::Fostech_C_Init_Wep Parms{};

	Parms.WEP = WEP;

	UObject::ProcessEvent(Func, &Parms);
}

}
