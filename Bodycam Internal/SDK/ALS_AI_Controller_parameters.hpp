#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ALS_AI_Controller

#include "Basic.hpp"


namespace SDK::Params
{

// Function ALS_AI_Controller.ALS_AI_Controller_C.ExecuteUbergraph_ALS_AI_Controller
// 0x0010 (0x0010 - 0x0000)
struct ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RunBehaviorTree_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller) == 0x000008, "Wrong alignment on ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller");
static_assert(sizeof(ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller) == 0x000010, "Wrong size on ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller");
static_assert(offsetof(ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller, EntryPoint) == 0x000000, "Member 'ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller::EntryPoint' has a wrong offset!");
static_assert(offsetof(ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller, CallFunc_RunBehaviorTree_ReturnValue) == 0x000004, "Member 'ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller::CallFunc_RunBehaviorTree_ReturnValue' has a wrong offset!");
static_assert(offsetof(ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller, K2Node_Event_PossessedPawn) == 0x000008, "Member 'ALS_AI_Controller_C_ExecuteUbergraph_ALS_AI_Controller::K2Node_Event_PossessedPawn' has a wrong offset!");

// Function ALS_AI_Controller.ALS_AI_Controller_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct ALS_AI_Controller_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ALS_AI_Controller_C_ReceivePossess) == 0x000008, "Wrong alignment on ALS_AI_Controller_C_ReceivePossess");
static_assert(sizeof(ALS_AI_Controller_C_ReceivePossess) == 0x000008, "Wrong size on ALS_AI_Controller_C_ReceivePossess");
static_assert(offsetof(ALS_AI_Controller_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'ALS_AI_Controller_C_ReceivePossess::PossessedPawn' has a wrong offset!");

}

