#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RuntimeMerger

#include "Basic.hpp"

#include "RuntimeMerger_classes.hpp"
#include "RuntimeMerger_parameters.hpp"


namespace SDK
{

// Function RuntimeMerger.SMMSkeletalMergerFunctionLibrary.MergeAllSkeletalMeshesInActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                           InActor                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeleton*                        InSkeleton                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bNeedCpuAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bMergeSkeletonsBefore                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* USMMSkeletalMergerFunctionLibrary::MergeAllSkeletalMeshesInActor(class AActor* InActor, class USkeleton* InSkeleton, bool bNeedCpuAccess, bool bMergeSkeletonsBefore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SMMSkeletalMergerFunctionLibrary", "MergeAllSkeletalMeshesInActor");

	Params::SMMSkeletalMergerFunctionLibrary_MergeAllSkeletalMeshesInActor Parms{};

	Parms.InActor = InActor;
	Parms.InSkeleton = InSkeleton;
	Parms.bNeedCpuAccess = bNeedCpuAccess;
	Parms.bMergeSkeletonsBefore = bMergeSkeletonsBefore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function RuntimeMerger.SMMSkeletalMergerFunctionLibrary.MergeSkeletalMeshes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class USkeletalMesh*>            Meshes                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class USkeleton*                        InSkeleton                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bNeedCpuAccess                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    bMergeSkeletonsBefore                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMesh*                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USkeletalMesh* USMMSkeletalMergerFunctionLibrary::MergeSkeletalMeshes(const TArray<class USkeletalMesh*>& Meshes, class USkeleton* InSkeleton, bool bNeedCpuAccess, bool bMergeSkeletonsBefore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SMMSkeletalMergerFunctionLibrary", "MergeSkeletalMeshes");

	Params::SMMSkeletalMergerFunctionLibrary_MergeSkeletalMeshes Parms{};

	Parms.Meshes = std::move(Meshes);
	Parms.InSkeleton = InSkeleton;
	Parms.bNeedCpuAccess = bNeedCpuAccess;
	Parms.bMergeSkeletonsBefore = bMergeSkeletonsBefore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

