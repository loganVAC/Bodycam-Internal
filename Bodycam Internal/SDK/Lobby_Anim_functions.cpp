#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_Anim

#include "Basic.hpp"

#include "Lobby_Anim_classes.hpp"
#include "Lobby_Anim_parameters.hpp"


namespace SDK
{

// Function Lobby_Anim.Lobby_Anim_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        AnimGraph_0                                            (Parm, OutParm, NoDestructor)

void ULobby_Anim_C::AnimGraph(struct FPoseLink* AnimGraph_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Anim_C", "AnimGraph");

	Params::Lobby_Anim_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph_0 != nullptr)
		*AnimGraph_0 = std::move(Parms.AnimGraph_0);
}


// Function Lobby_Anim.Lobby_Anim_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void ULobby_Anim_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Anim_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Lobby_Anim.Lobby_Anim_C.ExecuteUbergraph_Lobby_Anim
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobby_Anim_C::ExecuteUbergraph_Lobby_Anim(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Anim_C", "ExecuteUbergraph_Lobby_Anim");

	Params::Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Lobby_Anim.Lobby_Anim_C.UpdateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*                Sequence_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ULobby_Anim_C::UpdateAnim(class UAnimSequenceBase* Sequence_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Lobby_Anim_C", "UpdateAnim");

	Params::Lobby_Anim_C_UpdateAnim Parms{};

	Parms.Sequence_0 = Sequence_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

