#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FAL

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ALS_OverlayState_structs.hpp"


namespace SDK::Params
{

// Function FAL.FAL_C.GetOffset
// 0x00C0 (0x00C0 - 0x0000)
struct FAL_C_GetOffset final
{
public:
	struct FTransform                             Offset;                                            // 0x0000(0x0060)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FAL_C_GetOffset) == 0x000010, "Wrong alignment on FAL_C_GetOffset");
static_assert(sizeof(FAL_C_GetOffset) == 0x0000C0, "Wrong size on FAL_C_GetOffset");
static_assert(offsetof(FAL_C_GetOffset, Offset) == 0x000000, "Member 'FAL_C_GetOffset::Offset' has a wrong offset!");
static_assert(offsetof(FAL_C_GetOffset, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'FAL_C_GetOffset::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");

// Function FAL.FAL_C.GetOverlay
// 0x0001 (0x0001 - 0x0000)
struct FAL_C_GetOverlay final
{
public:
	EALS_OverlayState                             Overlay;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FAL_C_GetOverlay) == 0x000001, "Wrong alignment on FAL_C_GetOverlay");
static_assert(sizeof(FAL_C_GetOverlay) == 0x000001, "Wrong size on FAL_C_GetOverlay");
static_assert(offsetof(FAL_C_GetOverlay, Overlay) == 0x000000, "Member 'FAL_C_GetOverlay::Overlay' has a wrong offset!");

}
