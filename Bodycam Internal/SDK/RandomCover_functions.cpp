#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RandomCover

#include "Basic.hpp"

#include "RandomCover_classes.hpp"
#include "RandomCover_parameters.hpp"


namespace SDK
{

// Function RandomCover.RandomCover_C.ExecuteUbergraph_RandomCover
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARandomCover_C::ExecuteUbergraph_RandomCover(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomCover_C", "ExecuteUbergraph_RandomCover");

	Params::RandomCover_C_ExecuteUbergraph_RandomCover Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RandomCover.RandomCover_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARandomCover_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomCover_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RandomCover.RandomCover_C.SpawnRandomActor (Server)
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void ARandomCover_C::SpawnRandomActor__Server_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RandomCover_C", "SpawnRandomActor (Server)");

	UObject::ProcessEvent(Func, nullptr);
}

}

