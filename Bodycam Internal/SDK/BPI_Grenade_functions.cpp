#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_Grenade

#include "Basic.hpp"

#include "BPI_Grenade_classes.hpp"
#include "BPI_Grenade_parameters.hpp"


namespace SDK
{

// Function BPI_Grenade.BPI_Grenade_C.Blow?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Blow__0                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Grenade_C::Blow_(bool* Blow__0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Grenade_C", "Blow?");

	Params::BPI_Grenade_C_Blow_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Blow__0 != nullptr)
		*Blow__0 = Parms.Blow__0;
}


// Function BPI_Grenade.BPI_Grenade_C.GrenadeActivation
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Grenade_C::GrenadeActivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Grenade_C", "GrenadeActivation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_Grenade.BPI_Grenade_C.GrenadeExplosion
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_Grenade_C::GrenadeExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_Grenade_C", "GrenadeExplosion");

	UObject::ProcessEvent(Func, nullptr);
}

}
