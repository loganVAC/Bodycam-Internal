#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FAL

#include "Basic.hpp"

#include "FAL_classes.hpp"
#include "FAL_parameters.hpp"


namespace SDK
{

// Function FAL.FAL_C.GetOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Offset                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFAL_C::GetOffset(struct FTransform* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FAL_C", "GetOffset");

	Params::FAL_C_GetOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}


// Function FAL.FAL_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_OverlayState                       Overlay                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFAL_C::GetOverlay(EALS_OverlayState* Overlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FAL_C", "GetOverlay");

	Params::FAL_C_GetOverlay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;
}

}
