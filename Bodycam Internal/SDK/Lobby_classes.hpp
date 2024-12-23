#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Lobby.Lobby_C
// 0x0000 (0x0298 - 0x0298)
class ALobby_C final : public ALevelScriptActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lobby_C">();
	}
	static class ALobby_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALobby_C>();
	}
};
static_assert(alignof(ALobby_C) == 0x000008, "Wrong alignment on ALobby_C");
static_assert(sizeof(ALobby_C) == 0x000298, "Wrong size on ALobby_C");

}

