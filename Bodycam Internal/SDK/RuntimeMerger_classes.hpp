#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RuntimeMerger

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class RuntimeMerger.SMMSkeletalMergerFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USMMSkeletalMergerFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class USkeletalMesh* MergeAllSkeletalMeshesInActor(class AActor* InActor, class USkeleton* InSkeleton, bool bNeedCpuAccess, bool bMergeSkeletonsBefore);
	static class USkeletalMesh* MergeSkeletalMeshes(const TArray<class USkeletalMesh*>& Meshes, class USkeleton* InSkeleton, bool bNeedCpuAccess, bool bMergeSkeletonsBefore);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SMMSkeletalMergerFunctionLibrary">();
	}
	static class USMMSkeletalMergerFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USMMSkeletalMergerFunctionLibrary>();
	}
};
static_assert(alignof(USMMSkeletalMergerFunctionLibrary) == 0x000008, "Wrong alignment on USMMSkeletalMergerFunctionLibrary");
static_assert(sizeof(USMMSkeletalMergerFunctionLibrary) == 0x000028, "Wrong size on USMMSkeletalMergerFunctionLibrary");

}
