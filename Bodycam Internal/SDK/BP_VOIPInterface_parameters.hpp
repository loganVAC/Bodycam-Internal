#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_VOIPInterface

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_VOIPInterface.BP_VOIPInterface_C.MSG_AVP_GetPlayerUsername
// 0x0020 (0x0020 - 0x0000)
struct BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername final
{
public:
	bool                                          Success_;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Username;                                          // 0x0008(0x0018)(Parm, OutParm)
};
static_assert(alignof(BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername) == 0x000008, "Wrong alignment on BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername");
static_assert(sizeof(BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername) == 0x000020, "Wrong size on BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername");
static_assert(offsetof(BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername, Success_) == 0x000000, "Member 'BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername::Success_' has a wrong offset!");
static_assert(offsetof(BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername, Username) == 0x000008, "Member 'BP_VOIPInterface_C_MSG_AVP_GetPlayerUsername::Username' has a wrong offset!");

// Function BP_VOIPInterface.BP_VOIPInterface_C.MSG_AVP_GetWidgetVoice
// 0x0008 (0x0008 - 0x0000)
struct BP_VOIPInterface_C_MSG_AVP_GetWidgetVoice final
{
public:
	class UWidgetComponent*                       WidgetVoiceRef;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_VOIPInterface_C_MSG_AVP_GetWidgetVoice) == 0x000008, "Wrong alignment on BP_VOIPInterface_C_MSG_AVP_GetWidgetVoice");
static_assert(sizeof(BP_VOIPInterface_C_MSG_AVP_GetWidgetVoice) == 0x000008, "Wrong size on BP_VOIPInterface_C_MSG_AVP_GetWidgetVoice");
static_assert(offsetof(BP_VOIPInterface_C_MSG_AVP_GetWidgetVoice, WidgetVoiceRef) == 0x000000, "Member 'BP_VOIPInterface_C_MSG_AVP_GetWidgetVoice::WidgetVoiceRef' has a wrong offset!");

}
