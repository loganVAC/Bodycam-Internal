#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDS_Occlusion_Volume_Interface

#include "Basic.hpp"

#include "UDS_Occlusion_Volume_Interface_classes.hpp"
#include "UDS_Occlusion_Volume_Interface_parameters.hpp"


namespace SDK
{

// Function UDS_Occlusion_Volume_Interface.UDS_Occlusion_Volume_Interface_C.Get Occlusion Result
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Weather                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Occluded                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUDS_Occlusion_Volume_Interface_C::Get_Occlusion_Result(bool Weather, bool* Occluded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UDS_Occlusion_Volume_Interface_C", "Get Occlusion Result");

	Params::UDS_Occlusion_Volume_Interface_C_Get_Occlusion_Result Parms{};

	Parms.Weather = Weather;

	UObject::ProcessEvent(Func, &Parms);

	if (Occluded != nullptr)
		*Occluded = Parms.Occluded;
}

}
