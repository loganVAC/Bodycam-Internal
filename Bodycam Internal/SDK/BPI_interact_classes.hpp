#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_interact

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "ALS_OverlayState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_interact.BPI_interact_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_interact_C final : public IInterface
{
public:
	void CanInterract(bool* Interract_);
	void CanPickup(class AALS_AnimMan_CharacterBP_C* Player, bool* Pickup_);
	void CanSwap_(bool* IsItemSwap_);
	void Drop(double Delay);
	void GetItemPriority(int32* Priority);
	void GetOffset(struct FTransform* Offset);
	void GetOverlay(EALS_OverlayState* Overlay);
	void GetSocketToAttach(class FName* SocketToAttach);
	void Interract(class APawn* Owner);
	void InterractDoor(double Z_Angle, bool ResetDoor);
	void IsDefaultHandle(bool* IsDefaultHandle_);
	void Item_Focus();
	void LeftClickEvent();
	void LeftClickReleaseEvent();
	void Pickup(class AALS_AnimMan_CharacterBP_C* Owner);
	void SwitchAnimation(class UAnimMontage** In, class UAnimMontage** Out, class USoundCue** InSound, class USoundCue** OutSound);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_interact_C">();
	}
	static class IBPI_interact_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_interact_C>();
	}
};
static_assert(alignof(IBPI_interact_C) == 0x000008, "Wrong alignment on IBPI_interact_C");
static_assert(sizeof(IBPI_interact_C) == 0x000028, "Wrong size on IBPI_interact_C");

}
