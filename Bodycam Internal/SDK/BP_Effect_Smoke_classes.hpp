#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Effect_Smoke

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Effect_Smoke.BP_Effect_Smoke_C
// 0x0008 (0x0298 - 0x0290)
class ABP_Effect_Smoke_C final : public AActor
{
public:
	class UParticleSystemComponent*               P_Smoke;                                           // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Effect_Smoke_C">();
	}
	static class ABP_Effect_Smoke_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Effect_Smoke_C>();
	}
};
static_assert(alignof(ABP_Effect_Smoke_C) == 0x000008, "Wrong alignment on ABP_Effect_Smoke_C");
static_assert(sizeof(ABP_Effect_Smoke_C) == 0x000298, "Wrong size on ABP_Effect_Smoke_C");
static_assert(offsetof(ABP_Effect_Smoke_C, P_Smoke) == 0x000290, "Member 'ABP_Effect_Smoke_C::P_Smoke' has a wrong offset!");

}
