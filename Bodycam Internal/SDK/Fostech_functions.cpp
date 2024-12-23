#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fostech

#include "Basic.hpp"

#include "Fostech_classes.hpp"
#include "Fostech_parameters.hpp"


namespace SDK
{

// Function Fostech.Fostech_C.GetOffset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Offset                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFostech_C::GetOffset(struct FTransform* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fostech_C", "GetOffset");

	Params::Fostech_C_GetOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}


// Function Fostech.Fostech_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_OverlayState                       Overlay                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFostech_C::GetOverlay(EALS_OverlayState* Overlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fostech_C", "GetOverlay");

	Params::Fostech_C_GetOverlay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;
}

}

