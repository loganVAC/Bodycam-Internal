#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Deagle

#include "Basic.hpp"

#include "Deagle_classes.hpp"
#include "Deagle_parameters.hpp"


namespace SDK
{

// Function Deagle.Deagle_C.GetOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Offset                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADeagle_C::GetOffset(struct FTransform* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Deagle_C", "GetOffset");

	Params::Deagle_C_GetOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}

}

