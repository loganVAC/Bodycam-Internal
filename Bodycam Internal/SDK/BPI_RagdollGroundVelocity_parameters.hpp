#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_RagdollGroundVelocity

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BPI_RagdollGroundVelocity.BPI_RagdollGroundVelocity_C.GroudVelocity
// 0x0018 (0x0018 - 0x0000)
struct BPI_RagdollGroundVelocity_C_GroudVelocity final
{
public:
	struct FVector                                Velocity;                                          // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BPI_RagdollGroundVelocity_C_GroudVelocity) == 0x000008, "Wrong alignment on BPI_RagdollGroundVelocity_C_GroudVelocity");
static_assert(sizeof(BPI_RagdollGroundVelocity_C_GroudVelocity) == 0x000018, "Wrong size on BPI_RagdollGroundVelocity_C_GroudVelocity");
static_assert(offsetof(BPI_RagdollGroundVelocity_C_GroudVelocity, Velocity) == 0x000000, "Member 'BPI_RagdollGroundVelocity_C_GroudVelocity::Velocity' has a wrong offset!");

}

