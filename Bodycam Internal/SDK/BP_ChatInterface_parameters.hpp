#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChatInterface

#include "Basic.hpp"

#include "E_Emote_structs.hpp"


namespace SDK::Params
{

// Function BP_ChatInterface.BP_ChatInterface_C.MSG_ChatGetConnectedPlayers
// 0x0010 (0x0010 - 0x0000)
struct BP_ChatInterface_C_MSG_ChatGetConnectedPlayers final
{
public:
	TArray<class AController*>                    Players;                                           // 0x0000(0x0010)(Parm, OutParm)
};
static_assert(alignof(BP_ChatInterface_C_MSG_ChatGetConnectedPlayers) == 0x000008, "Wrong alignment on BP_ChatInterface_C_MSG_ChatGetConnectedPlayers");
static_assert(sizeof(BP_ChatInterface_C_MSG_ChatGetConnectedPlayers) == 0x000010, "Wrong size on BP_ChatInterface_C_MSG_ChatGetConnectedPlayers");
static_assert(offsetof(BP_ChatInterface_C_MSG_ChatGetConnectedPlayers, Players) == 0x000000, "Member 'BP_ChatInterface_C_MSG_ChatGetConnectedPlayers::Players' has a wrong offset!");

// Function BP_ChatInterface.BP_ChatInterface_C.MSG_ChatGetPlayerID
// 0x0004 (0x0004 - 0x0000)
struct BP_ChatInterface_C_MSG_ChatGetPlayerID final
{
public:
	int32                                         PlayerID;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChatInterface_C_MSG_ChatGetPlayerID) == 0x000004, "Wrong alignment on BP_ChatInterface_C_MSG_ChatGetPlayerID");
static_assert(sizeof(BP_ChatInterface_C_MSG_ChatGetPlayerID) == 0x000004, "Wrong size on BP_ChatInterface_C_MSG_ChatGetPlayerID");
static_assert(offsetof(BP_ChatInterface_C_MSG_ChatGetPlayerID, PlayerID) == 0x000000, "Member 'BP_ChatInterface_C_MSG_ChatGetPlayerID::PlayerID' has a wrong offset!");

// Function BP_ChatInterface.BP_ChatInterface_C.MSG_ChatGetTeamID
// 0x0004 (0x0004 - 0x0000)
struct BP_ChatInterface_C_MSG_ChatGetTeamID final
{
public:
	int32                                         TeamID;                                            // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChatInterface_C_MSG_ChatGetTeamID) == 0x000004, "Wrong alignment on BP_ChatInterface_C_MSG_ChatGetTeamID");
static_assert(sizeof(BP_ChatInterface_C_MSG_ChatGetTeamID) == 0x000004, "Wrong size on BP_ChatInterface_C_MSG_ChatGetTeamID");
static_assert(offsetof(BP_ChatInterface_C_MSG_ChatGetTeamID, TeamID) == 0x000000, "Member 'BP_ChatInterface_C_MSG_ChatGetTeamID::TeamID' has a wrong offset!");

// Function BP_ChatInterface.BP_ChatInterface_C.MSG_ChatGetUsername
// 0x0020 (0x0020 - 0x0000)
struct BP_ChatInterface_C_MSG_ChatGetUsername final
{
public:
	bool                                          Success_;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Username;                                          // 0x0008(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_ChatInterface_C_MSG_ChatGetUsername) == 0x000008, "Wrong alignment on BP_ChatInterface_C_MSG_ChatGetUsername");
static_assert(sizeof(BP_ChatInterface_C_MSG_ChatGetUsername) == 0x000020, "Wrong size on BP_ChatInterface_C_MSG_ChatGetUsername");
static_assert(offsetof(BP_ChatInterface_C_MSG_ChatGetUsername, Success_) == 0x000000, "Member 'BP_ChatInterface_C_MSG_ChatGetUsername::Success_' has a wrong offset!");
static_assert(offsetof(BP_ChatInterface_C_MSG_ChatGetUsername, Username) == 0x000008, "Member 'BP_ChatInterface_C_MSG_ChatGetUsername::Username' has a wrong offset!");

// Function BP_ChatInterface.BP_ChatInterface_C.MSG_ChatPlayEmote
// 0x0001 (0x0001 - 0x0000)
struct BP_ChatInterface_C_MSG_ChatPlayEmote final
{
public:
	E_Emote                                       EmoteToPlay;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChatInterface_C_MSG_ChatPlayEmote) == 0x000001, "Wrong alignment on BP_ChatInterface_C_MSG_ChatPlayEmote");
static_assert(sizeof(BP_ChatInterface_C_MSG_ChatPlayEmote) == 0x000001, "Wrong size on BP_ChatInterface_C_MSG_ChatPlayEmote");
static_assert(offsetof(BP_ChatInterface_C_MSG_ChatPlayEmote, EmoteToPlay) == 0x000000, "Member 'BP_ChatInterface_C_MSG_ChatPlayEmote::EmoteToPlay' has a wrong offset!");

// Function BP_ChatInterface.BP_ChatInterface_C.MSG_ChatRequestPlayerID
// 0x0008 (0x0008 - 0x0000)
struct BP_ChatInterface_C_MSG_ChatRequestPlayerID final
{
public:
	int32                                         PlayerID;                                          // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success_;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ChatInterface_C_MSG_ChatRequestPlayerID) == 0x000004, "Wrong alignment on BP_ChatInterface_C_MSG_ChatRequestPlayerID");
static_assert(sizeof(BP_ChatInterface_C_MSG_ChatRequestPlayerID) == 0x000008, "Wrong size on BP_ChatInterface_C_MSG_ChatRequestPlayerID");
static_assert(offsetof(BP_ChatInterface_C_MSG_ChatRequestPlayerID, PlayerID) == 0x000000, "Member 'BP_ChatInterface_C_MSG_ChatRequestPlayerID::PlayerID' has a wrong offset!");
static_assert(offsetof(BP_ChatInterface_C_MSG_ChatRequestPlayerID, Success_) == 0x000004, "Member 'BP_ChatInterface_C_MSG_ChatRequestPlayerID::Success_' has a wrong offset!");

}
