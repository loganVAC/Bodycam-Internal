#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_FriendPP

#include "Basic.hpp"

#include "SteamCorePro_structs.hpp"


namespace SDK::Params
{

// Function WBP_FriendPP.WBP_FriendPP_C.ExecuteUbergraph_WBP_FriendPP
// 0x0058 (0x0058 - 0x0000)
struct WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_BreakSteamID_ReturnValue;                 // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetSmallFriendAvatar_ReturnValue;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamID                               CallFunc_GetSteamID_ReturnValue;                   // 0x0038(0x0008)(NoDestructor)
	ESteamPersonaState                            CallFunc_GetFriendPersonaState_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP) == 0x000008, "Wrong alignment on WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP");
static_assert(sizeof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP) == 0x000058, "Wrong size on WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, EntryPoint) == 0x000000, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, CallFunc_BreakSteamID_ReturnValue) == 0x000010, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::CallFunc_BreakSteamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000020, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, CallFunc_GetSmallFriendAvatar_ReturnValue) == 0x000028, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::CallFunc_GetSmallFriendAvatar_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, K2Node_Event_IsDesignTime) == 0x000030, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, CallFunc_GetSteamID_ReturnValue) == 0x000038, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::CallFunc_GetSteamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, CallFunc_GetFriendPersonaState_ReturnValue) == 0x000040, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::CallFunc_GetFriendPersonaState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, CallFunc_PlayAnimationForward_ReturnValue) == 0x000048, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'WBP_FriendPP_C_ExecuteUbergraph_WBP_FriendPP::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_FriendPP.WBP_FriendPP_C.OnFriendClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_FriendPP_C_OnFriendClicked__DelegateSignature final
{
public:
	struct FSteamID                               SteamIDFriend;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_FriendPP_C_OnFriendClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_FriendPP_C_OnFriendClicked__DelegateSignature");
static_assert(sizeof(WBP_FriendPP_C_OnFriendClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_FriendPP_C_OnFriendClicked__DelegateSignature");
static_assert(offsetof(WBP_FriendPP_C_OnFriendClicked__DelegateSignature, SteamIDFriend) == 0x000000, "Member 'WBP_FriendPP_C_OnFriendClicked__DelegateSignature::SteamIDFriend' has a wrong offset!");

// Function WBP_FriendPP.WBP_FriendPP_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_FriendPP_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_FriendPP_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_FriendPP_C_PreConstruct");
static_assert(sizeof(WBP_FriendPP_C_PreConstruct) == 0x000001, "Wrong size on WBP_FriendPP_C_PreConstruct");
static_assert(offsetof(WBP_FriendPP_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_FriendPP_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

