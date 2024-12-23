#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scar_0

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// ScriptStruct Scar.Scar_C.AnimBlueprintGeneratedConstantData
// 0x00CF (0x00D0 - 0x0001)
struct Scar_0::FAnimBlueprintGeneratedConstantData final : public FAnimBlueprintConstantData
{
public:
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   __NameProperty_10;                                 // 0x0004(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   __NameProperty_11;                                 // 0x000C(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNodeFunctionRef                   __StructProperty_12;                               // 0x0018(0x0020)(BlueprintVisible, NoDestructor)
	struct FAnimSubsystem_PropertyAccess          AnimBlueprintExtension_PropertyAccess;             // 0x0038(0x0080)()
	struct FAnimSubsystem_Base                    AnimBlueprintExtension_Base;                       // 0x00B8(0x0018)()
};
static_assert(alignof(Scar_0::FAnimBlueprintGeneratedConstantData) == 0x000008, "Wrong alignment on Scar_0::FAnimBlueprintGeneratedConstantData");
static_assert(sizeof(Scar_0::FAnimBlueprintGeneratedConstantData) == 0x0000D0, "Wrong size on Scar_0::FAnimBlueprintGeneratedConstantData");
static_assert(offsetof(Scar_0::FAnimBlueprintGeneratedConstantData, __NameProperty_10) == 0x000004, "Member 'Scar_0::FAnimBlueprintGeneratedConstantData::__NameProperty_10' has a wrong offset!");
static_assert(offsetof(Scar_0::FAnimBlueprintGeneratedConstantData, __NameProperty_11) == 0x00000C, "Member 'Scar_0::FAnimBlueprintGeneratedConstantData::__NameProperty_11' has a wrong offset!");
static_assert(offsetof(Scar_0::FAnimBlueprintGeneratedConstantData, __StructProperty_12) == 0x000018, "Member 'Scar_0::FAnimBlueprintGeneratedConstantData::__StructProperty_12' has a wrong offset!");
static_assert(offsetof(Scar_0::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_PropertyAccess) == 0x000038, "Member 'Scar_0::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_PropertyAccess' has a wrong offset!");
static_assert(offsetof(Scar_0::FAnimBlueprintGeneratedConstantData, AnimBlueprintExtension_Base) == 0x0000B8, "Member 'Scar_0::FAnimBlueprintGeneratedConstantData::AnimBlueprintExtension_Base' has a wrong offset!");

}

