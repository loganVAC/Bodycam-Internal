#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lobby_Anim

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function Lobby_Anim.Lobby_Anim_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct Lobby_Anim_C_AnimGraph final
{
public:
	struct FPoseLink                              AnimGraph_0;                                       // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Lobby_Anim_C_AnimGraph) == 0x000008, "Wrong alignment on Lobby_Anim_C_AnimGraph");
static_assert(sizeof(Lobby_Anim_C_AnimGraph) == 0x000010, "Wrong size on Lobby_Anim_C_AnimGraph");
static_assert(offsetof(Lobby_Anim_C_AnimGraph, AnimGraph_0) == 0x000000, "Member 'Lobby_Anim_C_AnimGraph::AnimGraph_0' has a wrong offset!");

// Function Lobby_Anim.Lobby_Anim_C.ExecuteUbergraph_Lobby_Anim
// 0x0020 (0x0020 - 0x0000)
struct Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      K2Node_CustomEvent_Sequence;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                        CallFunc_RandomFloatInRange_Max_ImplicitCast;      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim) == 0x000008, "Wrong alignment on Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim");
static_assert(sizeof(Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim) == 0x000020, "Wrong size on Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim");
static_assert(offsetof(Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim, EntryPoint) == 0x000000, "Member 'Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim, CallFunc_RandomFloatInRange_ReturnValue) == 0x000008, "Member 'Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim, K2Node_CustomEvent_Sequence) == 0x000010, "Member 'Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim::K2Node_CustomEvent_Sequence' has a wrong offset!");
static_assert(offsetof(Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim, CallFunc_RandomFloatInRange_Max_ImplicitCast) == 0x000018, "Member 'Lobby_Anim_C_ExecuteUbergraph_Lobby_Anim::CallFunc_RandomFloatInRange_Max_ImplicitCast' has a wrong offset!");

// Function Lobby_Anim.Lobby_Anim_C.UpdateAnim
// 0x0008 (0x0008 - 0x0000)
struct Lobby_Anim_C_UpdateAnim final
{
public:
	class UAnimSequenceBase*                      Sequence_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(Lobby_Anim_C_UpdateAnim) == 0x000008, "Wrong alignment on Lobby_Anim_C_UpdateAnim");
static_assert(sizeof(Lobby_Anim_C_UpdateAnim) == 0x000008, "Wrong size on Lobby_Anim_C_UpdateAnim");
static_assert(offsetof(Lobby_Anim_C_UpdateAnim, Sequence_0) == 0x000000, "Member 'Lobby_Anim_C_UpdateAnim::Sequence_0' has a wrong offset!");

}
