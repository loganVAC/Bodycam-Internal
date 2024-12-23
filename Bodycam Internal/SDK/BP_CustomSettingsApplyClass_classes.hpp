#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CustomSettingsApplyClass

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_CustomSettingsApplyClass.BP_CustomSettingsApplyClass_C
// 0x0008 (0x0030 - 0x0028)
class UBP_CustomSettingsApplyClass_C : public UObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_CustomSettingsApplyClass(int32 EntryPoint);
	void OnApply(class UPDA_SettingsData_C* SettingsData, const struct FFValueTypes& Value, class UBP_SettingsManager_C* SettingsManager);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CustomSettingsApplyClass_C">();
	}
	static class UBP_CustomSettingsApplyClass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CustomSettingsApplyClass_C>();
	}
};
static_assert(alignof(UBP_CustomSettingsApplyClass_C) == 0x000008, "Wrong alignment on UBP_CustomSettingsApplyClass_C");
static_assert(sizeof(UBP_CustomSettingsApplyClass_C) == 0x000030, "Wrong size on UBP_CustomSettingsApplyClass_C");
static_assert(offsetof(UBP_CustomSettingsApplyClass_C, UberGraphFrame) == 0x000028, "Member 'UBP_CustomSettingsApplyClass_C::UberGraphFrame' has a wrong offset!");

}

