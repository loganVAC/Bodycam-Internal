#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CAM_Damage

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CAM_Damage.CAM_Damage_C
// 0x0008 (0x0050 - 0x0048)
class UCAM_Damage_C final : public UCameraModifier
{
public:
	double                                        Current;                                           // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CAM_Damage_C">();
	}
	static class UCAM_Damage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCAM_Damage_C>();
	}
};
static_assert(alignof(UCAM_Damage_C) == 0x000008, "Wrong alignment on UCAM_Damage_C");
static_assert(sizeof(UCAM_Damage_C) == 0x000050, "Wrong size on UCAM_Damage_C");
static_assert(offsetof(UCAM_Damage_C, Current) == 0x000048, "Member 'UCAM_Damage_C::Current' has a wrong offset!");

}
