#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GlockMinus17

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass Glock-17.Glock-17_C
// 0x02C0 (0x0610 - 0x0350)
class UGlockMinus17_C final : public UAnimInstance
{
public:
	uint8                                         Pad_348[0x8];                                      // 0x0348(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0350(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_PropertyAccess;             // 0x0358(0x0008)()
	struct FAnimSubsystemInstance                 AnimBlueprintExtension_Base;                       // 0x0360(0x0008)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x0368(0x0020)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0388(0x0048)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x03D0(0x0128)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x04F8(0x0020)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend;                    // 0x0518(0x00E0)()
	class AWEP_C*                                 As_WEP;                                            // 0x05F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SliderBack;                                        // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnimGraph(struct FPoseLink* AnimGraph_0);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_GlockMinus17(int32 EntryPoint);
	void Init_Wep(class AWEP_C* WEP);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Glock-17_C">();
	}
	static class UGlockMinus17_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGlockMinus17_C>();
	}
};
static_assert(alignof(UGlockMinus17_C) == 0x000010, "Wrong alignment on UGlockMinus17_C");
static_assert(sizeof(UGlockMinus17_C) == 0x000610, "Wrong size on UGlockMinus17_C");
static_assert(offsetof(UGlockMinus17_C, UberGraphFrame) == 0x000350, "Member 'UGlockMinus17_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, AnimBlueprintExtension_PropertyAccess) == 0x000358, "Member 'UGlockMinus17_C::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, AnimBlueprintExtension_Base) == 0x000360, "Member 'UGlockMinus17_C::AnimBlueprintExtension_Base' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, AnimGraphNode_Root) == 0x000368, "Member 'UGlockMinus17_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, AnimGraphNode_Slot) == 0x000388, "Member 'UGlockMinus17_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, AnimGraphNode_ModifyBone) == 0x0003D0, "Member 'UGlockMinus17_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, AnimGraphNode_ComponentToLocalSpace) == 0x0004F8, "Member 'UGlockMinus17_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, AnimGraphNode_LayeredBoneBlend) == 0x000518, "Member 'UGlockMinus17_C::AnimGraphNode_LayeredBoneBlend' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, As_WEP) == 0x0005F8, "Member 'UGlockMinus17_C::As_WEP' has a wrong offset!");
static_assert(offsetof(UGlockMinus17_C, SliderBack) == 0x000600, "Member 'UGlockMinus17_C::SliderBack' has a wrong offset!");

}

