#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SG_SaveIconsSettings

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass SG_SaveIconsSettings.SG_SaveIconsSettings_C
// 0x0068 (0x0090 - 0x0028)
class USG_SaveIconsSettings_C final : public USaveGame
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0028(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	double                                        CameraDistance;                                    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraPosition;                                    // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               ObjectRotation;                                    // 0x0050(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FString                                 OutputPath;                                        // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 ImportPath;                                        // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          SaveCameraLocation;                                // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SaveObjectRotation;                                // 0x0089(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SaveOutputPath;                                    // 0x008A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SaveImportPath;                                    // 0x008B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SG_SaveIconsSettings(int32 EntryPoint);
	void LoadSettings(double* CameraDistance_0, struct FVector* CameraPosition_0, struct FRotator* ObjectRotation_0, class FString* OutputPath_0, class FString* ImportPath_0, bool* SaveCameraLocation_0, bool* SaveObjectRotation_0, bool* SaveOutputPath_0, bool* SaveImportPath_0);
	void SaveSettings(bool SaveCameraLocation_0, bool SaveObjectRotation_0, bool SaveOutputPath_0, bool SaveImportPath_0, double CameraDistance_0, const struct FVector& CameraPosition_0, const struct FRotator& ObjectRotation_0, const class FString& OutputPath_0, const class FString& ImportPath_0);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SG_SaveIconsSettings_C">();
	}
	static class USG_SaveIconsSettings_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USG_SaveIconsSettings_C>();
	}
};
static_assert(alignof(USG_SaveIconsSettings_C) == 0x000008, "Wrong alignment on USG_SaveIconsSettings_C");
static_assert(sizeof(USG_SaveIconsSettings_C) == 0x000090, "Wrong size on USG_SaveIconsSettings_C");
static_assert(offsetof(USG_SaveIconsSettings_C, UberGraphFrame) == 0x000028, "Member 'USG_SaveIconsSettings_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, CameraDistance) == 0x000030, "Member 'USG_SaveIconsSettings_C::CameraDistance' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, CameraPosition) == 0x000038, "Member 'USG_SaveIconsSettings_C::CameraPosition' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, ObjectRotation) == 0x000050, "Member 'USG_SaveIconsSettings_C::ObjectRotation' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, OutputPath) == 0x000068, "Member 'USG_SaveIconsSettings_C::OutputPath' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, ImportPath) == 0x000078, "Member 'USG_SaveIconsSettings_C::ImportPath' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, SaveCameraLocation) == 0x000088, "Member 'USG_SaveIconsSettings_C::SaveCameraLocation' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, SaveObjectRotation) == 0x000089, "Member 'USG_SaveIconsSettings_C::SaveObjectRotation' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, SaveOutputPath) == 0x00008A, "Member 'USG_SaveIconsSettings_C::SaveOutputPath' has a wrong offset!");
static_assert(offsetof(USG_SaveIconsSettings_C, SaveImportPath) == 0x00008B, "Member 'USG_SaveIconsSettings_C::SaveImportPath' has a wrong offset!");

}

