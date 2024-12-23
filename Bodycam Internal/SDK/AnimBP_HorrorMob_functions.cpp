#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimBP_HorrorMob

#include "Basic.hpp"

#include "AnimBP_HorrorMob_classes.hpp"
#include "AnimBP_HorrorMob_parameters.hpp"


namespace SDK
{

// Function AnimBP_HorrorMob.AnimBP_HorrorMob_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void UAnimBP_HorrorMob_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_HorrorMob_C", "AnimGraph");

	Params::AnimBP_HorrorMob_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function AnimBP_HorrorMob.AnimBP_HorrorMob_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UAnimBP_HorrorMob_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_HorrorMob_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_HorrorMob.AnimBP_HorrorMob_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_HorrorMob_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_HorrorMob_C", "BlueprintUpdateAnimation");

	Params::AnimBP_HorrorMob_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AnimBP_HorrorMob.AnimBP_HorrorMob_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HorrorMob_AnimGraphNode_ModifyBone_0220CA614FC18EFB0DBCCE98CBE5662B
// (BlueprintEvent)

void UAnimBP_HorrorMob_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HorrorMob_AnimGraphNode_ModifyBone_0220CA614FC18EFB0DBCCE98CBE5662B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_HorrorMob_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_HorrorMob_AnimGraphNode_ModifyBone_0220CA614FC18EFB0DBCCE98CBE5662B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AnimBP_HorrorMob.AnimBP_HorrorMob_C.ExecuteUbergraph_AnimBP_HorrorMob
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimBP_HorrorMob_C::ExecuteUbergraph_AnimBP_HorrorMob(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimBP_HorrorMob_C", "ExecuteUbergraph_AnimBP_HorrorMob");

	Params::AnimBP_HorrorMob_C_ExecuteUbergraph_AnimBP_HorrorMob Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

