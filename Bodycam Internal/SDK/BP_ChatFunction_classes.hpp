#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChatFunction

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChatFunction.BP_ChatFunction_C
// 0x0000 (0x0028 - 0x0028)
class UBP_ChatFunction_C final : public UBlueprintFunctionLibrary
{
public:
	static void GetActualTime(class UObject* __WorldContext, class FText* Result);
	static void GetNewPlayerID(int32& ActualPlayerID, class UObject* __WorldContext, int32* Output_Get);
	static void SendSystemMessageToPlayers(TArray<class AController*>& ConnectedPlayers, const class FText& Message, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChatFunction_C">();
	}
	static class UBP_ChatFunction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ChatFunction_C>();
	}
};
static_assert(alignof(UBP_ChatFunction_C) == 0x000008, "Wrong alignment on UBP_ChatFunction_C");
static_assert(sizeof(UBP_ChatFunction_C) == 0x000028, "Wrong size on UBP_ChatFunction_C");

}
