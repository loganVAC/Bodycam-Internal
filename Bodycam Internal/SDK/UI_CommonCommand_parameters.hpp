#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UI_CommonCommand

#include "Basic.hpp"


namespace SDK::Params
{

// Function UI_CommonCommand.UI_CommonCommand_C.ExecuteUbergraph_UI_CommonCommand
// 0x0018 (0x0018 - 0x0000)
struct UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUI_Tooltip_C*                          CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand) == 0x000008, "Wrong alignment on UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand");
static_assert(sizeof(UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand) == 0x000018, "Wrong size on UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand");
static_assert(offsetof(UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand, EntryPoint) == 0x000000, "Member 'UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand::EntryPoint' has a wrong offset!");
static_assert(offsetof(UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand, CallFunc_Create_ReturnValue) == 0x000008, "Member 'UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand, K2Node_Event_IsDesignTime) == 0x000010, "Member 'UI_CommonCommand_C_ExecuteUbergraph_UI_CommonCommand::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function UI_CommonCommand.UI_CommonCommand_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UI_CommonCommand_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UI_CommonCommand_C_PreConstruct) == 0x000001, "Wrong alignment on UI_CommonCommand_C_PreConstruct");
static_assert(sizeof(UI_CommonCommand_C_PreConstruct) == 0x000001, "Wrong size on UI_CommonCommand_C_PreConstruct");
static_assert(offsetof(UI_CommonCommand_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UI_CommonCommand_C_PreConstruct::IsDesignTime' has a wrong offset!");

}

