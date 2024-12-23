#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ColorVisionDeficiencyTypeApply

#include "Basic.hpp"

#include "BP_ColorVisionDeficiencyTypeApply_classes.hpp"
#include "BP_ColorVisionDeficiencyTypeApply_parameters.hpp"


namespace SDK
{

// Function BP_ColorVisionDeficiencyTypeApply.BP_ColorVisionDeficiencyTypeApply_C.ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ColorVisionDeficiencyTypeApply_C::ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ColorVisionDeficiencyTypeApply_C", "ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply");

	Params::BP_ColorVisionDeficiencyTypeApply_C_ExecuteUbergraph_BP_ColorVisionDeficiencyTypeApply Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ColorVisionDeficiencyTypeApply.BP_ColorVisionDeficiencyTypeApply_C.OnApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPDA_SettingsData_C*              SettingsData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFValueTypes                     Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UBP_SettingsManager_C*            SettingsManager                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ColorVisionDeficiencyTypeApply_C::OnApply(class UPDA_SettingsData_C* SettingsData, const struct FFValueTypes& Value, class UBP_SettingsManager_C* SettingsManager)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ColorVisionDeficiencyTypeApply_C", "OnApply");

	Params::BP_ColorVisionDeficiencyTypeApply_C_OnApply Parms{};

	Parms.SettingsData = SettingsData;
	Parms.Value = std::move(Value);
	Parms.SettingsManager = SettingsManager;

	UObject::ProcessEvent(Func, &Parms);
}

}

