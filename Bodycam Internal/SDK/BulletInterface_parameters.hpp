#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BulletInterface

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BulletInterface.BulletInterface_C.Blur
// 0x0008 (0x0008 - 0x0000)
struct BulletInterface_C_Blur final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletInterface_C_Blur) == 0x000008, "Wrong alignment on BulletInterface_C_Blur");
static_assert(sizeof(BulletInterface_C_Blur) == 0x000008, "Wrong size on BulletInterface_C_Blur");
static_assert(offsetof(BulletInterface_C_Blur, Distance) == 0x000000, "Member 'BulletInterface_C_Blur::Distance' has a wrong offset!");

// Function BulletInterface.BulletInterface_C.BulletFly
// 0x0020 (0x0020 - 0x0000)
struct BulletInterface_C_BulletFly final
{
public:
	double                                        Distance;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Location;                                          // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BulletInterface_C_BulletFly) == 0x000008, "Wrong alignment on BulletInterface_C_BulletFly");
static_assert(sizeof(BulletInterface_C_BulletFly) == 0x000020, "Wrong size on BulletInterface_C_BulletFly");
static_assert(offsetof(BulletInterface_C_BulletFly, Distance) == 0x000000, "Member 'BulletInterface_C_BulletFly::Distance' has a wrong offset!");
static_assert(offsetof(BulletInterface_C_BulletFly, Location) == 0x000008, "Member 'BulletInterface_C_BulletFly::Location' has a wrong offset!");

}
