#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemSteamCore

#include "Basic.hpp"


namespace SDK::Params
{

// Function OnlineSubsystemSteamCore.SteamCoreSubsystemUtilities.SendSessionInviteToFriend
// 0x0020 (0x0020 - 0x0000)
struct SteamCoreSubsystemUtilities_SendSessionInviteToFriend final
{
public:
	int32                                         LocalUserNum;                                      // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 FriendSteamId;                                     // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(SteamCoreSubsystemUtilities_SendSessionInviteToFriend) == 0x000008, "Wrong alignment on SteamCoreSubsystemUtilities_SendSessionInviteToFriend");
static_assert(sizeof(SteamCoreSubsystemUtilities_SendSessionInviteToFriend) == 0x000020, "Wrong size on SteamCoreSubsystemUtilities_SendSessionInviteToFriend");
static_assert(offsetof(SteamCoreSubsystemUtilities_SendSessionInviteToFriend, LocalUserNum) == 0x000000, "Member 'SteamCoreSubsystemUtilities_SendSessionInviteToFriend::LocalUserNum' has a wrong offset!");
static_assert(offsetof(SteamCoreSubsystemUtilities_SendSessionInviteToFriend, FriendSteamId) == 0x000008, "Member 'SteamCoreSubsystemUtilities_SendSessionInviteToFriend::FriendSteamId' has a wrong offset!");
static_assert(offsetof(SteamCoreSubsystemUtilities_SendSessionInviteToFriend, ReturnValue) == 0x000018, "Member 'SteamCoreSubsystemUtilities_SendSessionInviteToFriend::ReturnValue' has a wrong offset!");

}

