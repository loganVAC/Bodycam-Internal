#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_AnimationManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function BPI_AnimationManager.BPI_AnimationManager_C.Init Wep
// 0x0008 (0x0008 - 0x0000)
struct BPI_AnimationManager_C_Init_Wep final
{
public:
	class AWEP_C*                                 WEP;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_AnimationManager_C_Init_Wep) == 0x000008, "Wrong alignment on BPI_AnimationManager_C_Init_Wep");
static_assert(sizeof(BPI_AnimationManager_C_Init_Wep) == 0x000008, "Wrong size on BPI_AnimationManager_C_Init_Wep");
static_assert(offsetof(BPI_AnimationManager_C_Init_Wep, WEP) == 0x000000, "Member 'BPI_AnimationManager_C_Init_Wep::WEP' has a wrong offset!");

}
