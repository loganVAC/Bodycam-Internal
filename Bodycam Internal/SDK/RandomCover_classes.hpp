#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RandomCover

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RandomCover.RandomCover_C
// 0x0018 (0x02A8 - 0x0290)
class ARandomCover_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 RandomCover;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_RandomCover(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SpawnRandomActor__Server_();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RandomCover_C">();
	}
	static class ARandomCover_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARandomCover_C>();
	}
};
static_assert(alignof(ARandomCover_C) == 0x000008, "Wrong alignment on ARandomCover_C");
static_assert(sizeof(ARandomCover_C) == 0x0002A8, "Wrong size on ARandomCover_C");
static_assert(offsetof(ARandomCover_C, UberGraphFrame) == 0x000290, "Member 'ARandomCover_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARandomCover_C, DefaultSceneRoot) == 0x000298, "Member 'ARandomCover_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARandomCover_C, RandomCover) == 0x0002A0, "Member 'ARandomCover_C::RandomCover' has a wrong offset!");

}

