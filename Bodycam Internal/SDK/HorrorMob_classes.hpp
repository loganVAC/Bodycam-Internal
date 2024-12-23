#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HorrorMob

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HorrorMob.HorrorMob_C
// 0x0020 (0x0650 - 0x0630)
class AHorrorMob_C final : public ACharacter
{
public:
	uint8                                         Pad_628[0x8];                                      // 0x0628(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0630(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          CanMove_;                                          // 0x0638(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_639[0x7];                                      // 0x0639(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 NearPlayer;                                        // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_HorrorMob(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HorrorMob_C">();
	}
	static class AHorrorMob_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHorrorMob_C>();
	}
};
static_assert(alignof(AHorrorMob_C) == 0x000010, "Wrong alignment on AHorrorMob_C");
static_assert(sizeof(AHorrorMob_C) == 0x000650, "Wrong size on AHorrorMob_C");
static_assert(offsetof(AHorrorMob_C, UberGraphFrame) == 0x000630, "Member 'AHorrorMob_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AHorrorMob_C, CanMove_) == 0x000638, "Member 'AHorrorMob_C::CanMove_' has a wrong offset!");
static_assert(offsetof(AHorrorMob_C, NearPlayer) == 0x000640, "Member 'AHorrorMob_C::NearPlayer' has a wrong offset!");

}

