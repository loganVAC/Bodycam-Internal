#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flash

#include "Basic.hpp"

#include "Flash_classes.hpp"
#include "Flash_parameters.hpp"


namespace SDK
{

// Function Flash.Flash_C.ExecuteUbergraph_Flash
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFlash_C::ExecuteUbergraph_Flash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Flash_C", "ExecuteUbergraph_Flash");

	Params::Flash_C_ExecuteUbergraph_Flash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Flash.Flash_C.GrenadeExplosion
// (Public, BlueprintCallable, BlueprintEvent)

void AFlash_C::GrenadeExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Flash_C", "GrenadeExplosion");

	UObject::ProcessEvent(Func, nullptr);
}

}
