#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LensAndFilmPostProcess

#include "Basic.hpp"

#include "LensAndFilmPostProcess_classes.hpp"
#include "LensAndFilmPostProcess_parameters.hpp"


namespace SDK
{

// Function LensAndFilmPostProcess.LensAndFilmPostProcess_C.ExecuteUbergraph_LensAndFilmPostProcess
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALensAndFilmPostProcess_C::ExecuteUbergraph_LensAndFilmPostProcess(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensAndFilmPostProcess_C", "ExecuteUbergraph_LensAndFilmPostProcess");

	Params::LensAndFilmPostProcess_C_ExecuteUbergraph_LensAndFilmPostProcess Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LensAndFilmPostProcess.LensAndFilmPostProcess_C.MainFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALensAndFilmPostProcess_C::MainFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensAndFilmPostProcess_C", "MainFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LensAndFilmPostProcess.LensAndFilmPostProcess_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALensAndFilmPostProcess_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensAndFilmPostProcess_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LensAndFilmPostProcess.LensAndFilmPostProcess_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALensAndFilmPostProcess_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensAndFilmPostProcess_C", "ReceiveTick");

	Params::LensAndFilmPostProcess_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LensAndFilmPostProcess.LensAndFilmPostProcess_C.Timeline_RuntimeUpdate__FinishedFunc
// (BlueprintEvent)

void ALensAndFilmPostProcess_C::Timeline_RuntimeUpdate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensAndFilmPostProcess_C", "Timeline_RuntimeUpdate__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LensAndFilmPostProcess.LensAndFilmPostProcess_C.Timeline_RuntimeUpdate__UpdateFunc
// (BlueprintEvent)

void ALensAndFilmPostProcess_C::Timeline_RuntimeUpdate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensAndFilmPostProcess_C", "Timeline_RuntimeUpdate__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LensAndFilmPostProcess.LensAndFilmPostProcess_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALensAndFilmPostProcess_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LensAndFilmPostProcess_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
