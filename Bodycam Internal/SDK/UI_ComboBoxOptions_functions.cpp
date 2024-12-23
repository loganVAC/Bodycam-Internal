#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_ComboBoxOptions

#include "Basic.hpp"

#include "UI_ComboBoxOptions_classes.hpp"
#include "UI_ComboBoxOptions_parameters.hpp"


namespace SDK
{

// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.AddOption
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewItem                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)

void UUI_ComboBoxOptions_C::AddOption(const class FString& NewItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "AddOption");

	Params::UI_ComboBoxOptions_C_AddOption Parms{};

	Parms.NewItem = std::move(NewItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.ClearFilter
// (BlueprintCallable, BlueprintEvent)

void UUI_ComboBoxOptions_C::ClearFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "ClearFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.ClearOptions
// (BlueprintCallable, BlueprintEvent)

void UUI_ComboBoxOptions_C::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "ClearOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.ExecuteUbergraph_UI_ComboBoxOptions
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ComboBoxOptions_C::ExecuteUbergraph_UI_ComboBoxOptions(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "ExecuteUbergraph_UI_ComboBoxOptions");

	Params::UI_ComboBoxOptions_C_ExecuteUbergraph_UI_ComboBoxOptions Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.FilterOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           FilterKey                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_ComboBoxOptions_C::FilterOptions(const class FString& FilterKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "FilterOptions");

	Params::UI_ComboBoxOptions_C_FilterOptions Parms{};

	Parms.FilterKey = std::move(FilterKey);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.GenerateOptions
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Array                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ComboBoxOptions_C::GenerateOptions(const TArray<class FString>& Array)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "GenerateOptions");

	Params::UI_ComboBoxOptions_C_GenerateOptions Parms{};

	Parms.Array = std::move(Array);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ComboBoxOptions_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "PreConstruct");

	Params::UI_ComboBoxOptions_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.RefreshOptions
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Options_0                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUI_ComboBoxOptions_C::RefreshOptions(const TArray<class FString>& Options_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "RefreshOptions");

	Params::UI_ComboBoxOptions_C_RefreshOptions Parms{};

	Parms.Options_0 = std::move(Options_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.UpdateOption
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Option                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_ComboBoxOptions_C::UpdateOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "UpdateOption");

	Params::UI_ComboBoxOptions_C_UpdateOption Parms{};

	Parms.Option = std::move(Option);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.UpdateSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           CurrentOption_0                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_ComboBoxOptions_C::UpdateSelected(const class FString& CurrentOption_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "UpdateSelected");

	Params::UI_ComboBoxOptions_C_UpdateSelected Parms{};

	Parms.CurrentOption_0 = std::move(CurrentOption_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UI_ComboBoxOptions.UI_ComboBoxOptions_C.GetFirstElement
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Option                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UUI_ComboBoxSingle_C*             OptionReference                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UUI_ComboBoxOptions_C::GetFirstElement(bool* IsValid, class FString* Option, class UUI_ComboBoxSingle_C** OptionReference) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UI_ComboBoxOptions_C", "GetFirstElement");

	Params::UI_ComboBoxOptions_C_GetFirstElement Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

	if (OptionReference != nullptr)
		*OptionReference = Parms.OptionReference;
}

}

