#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UZI

#include "Basic.hpp"

#include "WEP_classes.hpp"
#include "ALS_OverlayState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass UZI.UZI_C
// 0x0000 (0x07D0 - 0x07D0)
class AUZI_C final : public AWEP_C
{
public:
	void GetOffset(struct FTransform* Offset);
	void GetOverlay(EALS_OverlayState* Overlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UZI_C">();
	}
	static class AUZI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUZI_C>();
	}
};
static_assert(alignof(AUZI_C) == 0x000008, "Wrong alignment on AUZI_C");
static_assert(sizeof(AUZI_C) == 0x0007D0, "Wrong size on AUZI_C");

}
