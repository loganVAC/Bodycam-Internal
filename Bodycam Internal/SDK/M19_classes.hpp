#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: M19

#include "Basic.hpp"

#include "WEP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass M19.M19_C
// 0x0000 (0x07D0 - 0x07D0)
class AM19_C final : public AWEP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"M19_C">();
	}
	static class AM19_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AM19_C>();
	}
};
static_assert(alignof(AM19_C) == 0x000008, "Wrong alignment on AM19_C");
static_assert(sizeof(AM19_C) == 0x0007D0, "Wrong size on AM19_C");

}
