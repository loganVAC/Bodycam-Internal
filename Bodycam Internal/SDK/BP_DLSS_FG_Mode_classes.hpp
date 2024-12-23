#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DLSS_FG_Mode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_CustomSettingsApplyClass_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DLSS_FG_Mode.BP_DLSS_FG_Mode_C
// 0x0008 (0x0038 - 0x0030)
class UBP_DLSS_FG_Mode_C final : public UBP_CustomSettingsApplyClass_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_DLSS_FG_Mode_C;                  // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_DLSS_FG_Mode(int32 EntryPoint);
	void OnApply(class UPDA_SettingsData_C* SettingsData, const struct FFValueTypes& Value, class UBP_SettingsManager_C* SettingsManager);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DLSS_FG_Mode_C">();
	}
	static class UBP_DLSS_FG_Mode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DLSS_FG_Mode_C>();
	}
};
static_assert(alignof(UBP_DLSS_FG_Mode_C) == 0x000008, "Wrong alignment on UBP_DLSS_FG_Mode_C");
static_assert(sizeof(UBP_DLSS_FG_Mode_C) == 0x000038, "Wrong size on UBP_DLSS_FG_Mode_C");
static_assert(offsetof(UBP_DLSS_FG_Mode_C, UberGraphFrame_BP_DLSS_FG_Mode_C) == 0x000030, "Member 'UBP_DLSS_FG_Mode_C::UberGraphFrame_BP_DLSS_FG_Mode_C' has a wrong offset!");

}

