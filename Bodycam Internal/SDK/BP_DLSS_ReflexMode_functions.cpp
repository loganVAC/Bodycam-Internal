#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DLSS_ReflexMode

#include "Basic.hpp"

#include "BP_DLSS_ReflexMode_classes.hpp"
#include "BP_DLSS_ReflexMode_parameters.hpp"


namespace SDK
{

// Function BP_DLSS_ReflexMode.BP_DLSS_ReflexMode_C.ExecuteUbergraph_BP_DLSS_ReflexMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DLSS_ReflexMode_C::ExecuteUbergraph_BP_DLSS_ReflexMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DLSS_ReflexMode_C", "ExecuteUbergraph_BP_DLSS_ReflexMode");

	Params::BP_DLSS_ReflexMode_C_ExecuteUbergraph_BP_DLSS_ReflexMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DLSS_ReflexMode.BP_DLSS_ReflexMode_C.OnApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFValueTypes                     Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_SettingsManager_C*            SettingsManager                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DLSS_ReflexMode_C::OnApply(class UPDA_SettingsData_C* SettingsData, const struct FFValueTypes& Value, class UBP_SettingsManager_C* SettingsManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DLSS_ReflexMode_C", "OnApply");

	Params::BP_DLSS_ReflexMode_C_OnApply Parms{};

	Parms.SettingsData = SettingsData;
	Parms.Value = std::move(Value);
	Parms.SettingsManager = SettingsManager;

	UObject::ProcessEvent(Func, &Parms);
}

}
