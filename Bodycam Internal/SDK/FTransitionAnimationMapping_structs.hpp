#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FTransitionAnimationMapping

#include "Basic.hpp"

#include "ETransitionAnimation_structs.hpp"


namespace SDK
{

// UserDefinedStruct FTransitionAnimationMapping.FTransitionAnimationMapping
// 0x0018 (0x0018 - 0x0000)
struct FFTransitionAnimationMapping final
{
public:
	ETransitionAnimation                          TransitionAnimation_7_30D2FF27467A7B0216633FB34E6FD334; // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       WidgetAnimationIn_10_CD88BF894B080C73C8E755A53961ECA7; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WidgetAnimationOut_11_F7F91648443D77436DD2A3B7723DFD56; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFTransitionAnimationMapping) == 0x000008, "Wrong alignment on FFTransitionAnimationMapping");
static_assert(sizeof(FFTransitionAnimationMapping) == 0x000018, "Wrong size on FFTransitionAnimationMapping");
static_assert(offsetof(FFTransitionAnimationMapping, TransitionAnimation_7_30D2FF27467A7B0216633FB34E6FD334) == 0x000000, "Member 'FFTransitionAnimationMapping::TransitionAnimation_7_30D2FF27467A7B0216633FB34E6FD334' has a wrong offset!");
static_assert(offsetof(FFTransitionAnimationMapping, WidgetAnimationIn_10_CD88BF894B080C73C8E755A53961ECA7) == 0x000008, "Member 'FFTransitionAnimationMapping::WidgetAnimationIn_10_CD88BF894B080C73C8E755A53961ECA7' has a wrong offset!");
static_assert(offsetof(FFTransitionAnimationMapping, WidgetAnimationOut_11_F7F91648443D77436DD2A3B7723DFD56) == 0x000010, "Member 'FFTransitionAnimationMapping::WidgetAnimationOut_11_F7F91648443D77436DD2A3B7723DFD56' has a wrong offset!");

}
