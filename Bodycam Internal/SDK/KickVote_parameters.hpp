#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KickVote

#include "Basic.hpp"

#include "SteamCorePro_structs.hpp"
#include "STR_KickVote_structs.hpp"


namespace SDK::Params
{

// Function KickVote.KickVote_C.ExecuteUbergraph_KickVote
// 0x0118 (0x0118 - 0x0000)
struct KickVote_C_ExecuteUbergraph_KickVote final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamID                               CallFunc_MakeSteamID_ReturnValue;                  // 0x0010(0x0008)(NoDestructor)
	class FString                                 CallFunc_GetFriendPersonaName_ReturnValue;         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBodycam_Interface_C>  K2Node_DynamicCast_AsBodycam_Interface;            // 0x0060(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSTR_KickVote>                  CallFunc_GetPlayerKickVote_KickVotePlayer;         // 0x0078(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSTR_KickVote                          CallFunc_Array_Get_Item;                           // 0x0090(0x0048)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00D8(0x0018)()
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00F8(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(KickVote_C_ExecuteUbergraph_KickVote) == 0x000008, "Wrong alignment on KickVote_C_ExecuteUbergraph_KickVote");
static_assert(sizeof(KickVote_C_ExecuteUbergraph_KickVote) == 0x000118, "Wrong size on KickVote_C_ExecuteUbergraph_KickVote");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, EntryPoint) == 0x000000, "Member 'KickVote_C_ExecuteUbergraph_KickVote::EntryPoint' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, Temp_bool_True_if_break_was_hit_Variable) == 0x000004, "Member 'KickVote_C_ExecuteUbergraph_KickVote::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, Temp_int_Array_Index_Variable) == 0x000008, "Member 'KickVote_C_ExecuteUbergraph_KickVote::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Not_PreBool_ReturnValue) == 0x00000C, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_MakeSteamID_ReturnValue) == 0x000010, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_MakeSteamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_GetFriendPersonaName_ReturnValue) == 0x000018, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_GetFriendPersonaName_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_GetGameState_ReturnValue) == 0x000050, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, Temp_int_Loop_Counter_Variable) == 0x000058, "Member 'KickVote_C_ExecuteUbergraph_KickVote::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, K2Node_DynamicCast_AsBodycam_Interface) == 0x000060, "Member 'KickVote_C_ExecuteUbergraph_KickVote::K2Node_DynamicCast_AsBodycam_Interface' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'KickVote_C_ExecuteUbergraph_KickVote::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_GetPlayerKickVote_KickVotePlayer) == 0x000078, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_GetPlayerKickVote_KickVotePlayer' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Array_Get_Item) == 0x000090, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Conv_IntToText_ReturnValue) == 0x0000D8, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000F0, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000F8, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Array_Length_ReturnValue) == 0x000110, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_Less_IntInt_ReturnValue) == 0x000114, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(KickVote_C_ExecuteUbergraph_KickVote, CallFunc_BooleanAND_ReturnValue) == 0x000115, "Member 'KickVote_C_ExecuteUbergraph_KickVote::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}
