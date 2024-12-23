#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_interact

#include "Basic.hpp"

#include "BPI_interact_classes.hpp"
#include "BPI_interact_parameters.hpp"


namespace SDK
{

// Function BPI_interact.BPI_interact_C.CanInterract
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Interract_                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::CanInterract(bool* Interract_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "CanInterract");

	Params::BPI_interact_C_CanInterract Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Interract_ != nullptr)
		*Interract_ = Parms.Interract_;
}


// Function BPI_interact.BPI_interact_C.CanPickup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AALS_AnimMan_CharacterBP_C*       Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Pickup_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::CanPickup(class AALS_AnimMan_CharacterBP_C* Player, bool* Pickup_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "CanPickup");

	Params::BPI_interact_C_CanPickup Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (Pickup_ != nullptr)
		*Pickup_ = Parms.Pickup_;
}


// Function BPI_interact.BPI_interact_C.CanSwap?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsItemSwap_                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::CanSwap_(bool* IsItemSwap_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "CanSwap?");

	Params::BPI_interact_C_CanSwap_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsItemSwap_ != nullptr)
		*IsItemSwap_ = Parms.IsItemSwap_;
}


// Function BPI_interact.BPI_interact_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::Drop(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "Drop");

	Params::BPI_interact_C_Drop Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_interact.BPI_interact_C.GetItemPriority
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Priority                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::GetItemPriority(int32* Priority)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "GetItemPriority");

	Params::BPI_interact_C_GetItemPriority Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Priority != nullptr)
		*Priority = Parms.Priority;
}


// Function BPI_interact.BPI_interact_C.GetOffset
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Offset                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::GetOffset(struct FTransform* Offset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "GetOffset");

	Params::BPI_interact_C_GetOffset Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Offset != nullptr)
		*Offset = std::move(Parms.Offset);
}


// Function BPI_interact.BPI_interact_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EALS_OverlayState                       Overlay                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::GetOverlay(EALS_OverlayState* Overlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "GetOverlay");

	Params::BPI_interact_C_GetOverlay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;
}


// Function BPI_interact.BPI_interact_C.GetSocketToAttach
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             SocketToAttach                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::GetSocketToAttach(class FName* SocketToAttach)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "GetSocketToAttach");

	Params::BPI_interact_C_GetSocketToAttach Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SocketToAttach != nullptr)
		*SocketToAttach = Parms.SocketToAttach;
}


// Function BPI_interact.BPI_interact_C.Interract
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::Interract(class APawn* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "Interract");

	Params::BPI_interact_C_Interract Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_interact.BPI_interact_C.InterractDoor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Z_Angle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetDoor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::InterractDoor(double Z_Angle, bool ResetDoor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "InterractDoor");

	Params::BPI_interact_C_InterractDoor Parms{};

	Parms.Z_Angle = Z_Angle;
	Parms.ResetDoor = ResetDoor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_interact.BPI_interact_C.IsDefaultHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDefaultHandle_                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::IsDefaultHandle(bool* IsDefaultHandle_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "IsDefaultHandle");

	Params::BPI_interact_C_IsDefaultHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDefaultHandle_ != nullptr)
		*IsDefaultHandle_ = Parms.IsDefaultHandle_;
}


// Function BPI_interact.BPI_interact_C.Item Focus
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_interact_C::Item_Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "Item Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_interact.BPI_interact_C.LeftClickEvent
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_interact_C::LeftClickEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "LeftClickEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_interact.BPI_interact_C.LeftClickReleaseEvent
// (Public, BlueprintCallable, BlueprintEvent)

void IBPI_interact_C::LeftClickReleaseEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "LeftClickReleaseEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BPI_interact.BPI_interact_C.Pickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AALS_AnimMan_CharacterBP_C*       Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::Pickup(class AALS_AnimMan_CharacterBP_C* Owner)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "Pickup");

	Params::BPI_interact_C_Pickup Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BPI_interact.BPI_interact_C.SwitchAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     In                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     Out                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                        InSound                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                        OutSound                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_interact_C::SwitchAnimation(class UAnimMontage** In, class UAnimMontage** Out, class USoundCue** InSound, class USoundCue** OutSound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BPI_interact_C", "SwitchAnimation");

	Params::BPI_interact_C_SwitchAnimation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (In != nullptr)
		*In = Parms.In;

	if (Out != nullptr)
		*Out = Parms.Out;

	if (InSound != nullptr)
		*InSound = Parms.InSound;

	if (OutSound != nullptr)
		*OutSound = Parms.OutSound;
}

}

