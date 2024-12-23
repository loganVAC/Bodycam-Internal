#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_PauseGame

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "EInputDeviceType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BPI_PauseGame.BPI_PauseGame_C
// 0x0000 (0x0028 - 0x0028)
class IBPI_PauseGame_C final : public IInterface
{
public:
	void Pause(class APlayerController* PlayerController, EInputDeviceType InputDeviceType);
	void Resume(class APlayerController* PlayerController);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BPI_PauseGame_C">();
	}
	static class IBPI_PauseGame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBPI_PauseGame_C>();
	}
};
static_assert(alignof(IBPI_PauseGame_C) == 0x000008, "Wrong alignment on IBPI_PauseGame_C");
static_assert(sizeof(IBPI_PauseGame_C) == 0x000028, "Wrong size on IBPI_PauseGame_C");

}

