#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Optic

#include "Basic.hpp"

#include "SMesh_structs.hpp"


namespace SDK::Params
{

// Function Optic.Optic_C.ExecuteUbergraph_Optic
// 0x0020 (0x0020 - 0x0000)
struct Optic_C_ExecuteUbergraph_Optic final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSMesh                                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Optic_C_ExecuteUbergraph_Optic) == 0x000008, "Wrong alignment on Optic_C_ExecuteUbergraph_Optic");
static_assert(sizeof(Optic_C_ExecuteUbergraph_Optic) == 0x000020, "Wrong size on Optic_C_ExecuteUbergraph_Optic");
static_assert(offsetof(Optic_C_ExecuteUbergraph_Optic, EntryPoint) == 0x000000, "Member 'Optic_C_ExecuteUbergraph_Optic::EntryPoint' has a wrong offset!");
static_assert(offsetof(Optic_C_ExecuteUbergraph_Optic, CallFunc_GetDataTableRowFromName_OutRow) == 0x000008, "Member 'Optic_C_ExecuteUbergraph_Optic::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Optic_C_ExecuteUbergraph_Optic, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000018, "Member 'Optic_C_ExecuteUbergraph_Optic::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Optic_C_ExecuteUbergraph_Optic, CallFunc_SetStaticMesh_ReturnValue) == 0x000019, "Member 'Optic_C_ExecuteUbergraph_Optic::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");

}

