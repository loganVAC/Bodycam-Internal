#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FWidgetAnimationData

#include "Basic.hpp"

#include "EWidgetAnimation_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// UserDefinedStruct FWidgetAnimationData.FWidgetAnimationData
// 0x0028 (0x0028 - 0x0000)
struct FFWidgetAnimationData final
{
public:
	EWidgetAnimation                              Animation_13_7837A17549C9E860155F5E9FCFD1C388;     // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        StartatTime_14_15CB79C1417AC7B6AD06FBB27811BCD0;   // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumLoopstoPlay_20_E6C0680C4AEB918DEE1BFB99801A60A0; // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUMGSequencePlayMode                          PlayMode_15_DE8AB38A41B25E9EE6AB82A8F62CAF09;      // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        PlaybackSpeed_16_2B790DB34FF28A7E78F51DAF82BC10CB; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RestoreState_17_20E4A27F479C055A620CD9BD14A54D01;  // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFWidgetAnimationData) == 0x000008, "Wrong alignment on FFWidgetAnimationData");
static_assert(sizeof(FFWidgetAnimationData) == 0x000028, "Wrong size on FFWidgetAnimationData");
static_assert(offsetof(FFWidgetAnimationData, Animation_13_7837A17549C9E860155F5E9FCFD1C388) == 0x000000, "Member 'FFWidgetAnimationData::Animation_13_7837A17549C9E860155F5E9FCFD1C388' has a wrong offset!");
static_assert(offsetof(FFWidgetAnimationData, StartatTime_14_15CB79C1417AC7B6AD06FBB27811BCD0) == 0x000008, "Member 'FFWidgetAnimationData::StartatTime_14_15CB79C1417AC7B6AD06FBB27811BCD0' has a wrong offset!");
static_assert(offsetof(FFWidgetAnimationData, NumLoopstoPlay_20_E6C0680C4AEB918DEE1BFB99801A60A0) == 0x000010, "Member 'FFWidgetAnimationData::NumLoopstoPlay_20_E6C0680C4AEB918DEE1BFB99801A60A0' has a wrong offset!");
static_assert(offsetof(FFWidgetAnimationData, PlayMode_15_DE8AB38A41B25E9EE6AB82A8F62CAF09) == 0x000014, "Member 'FFWidgetAnimationData::PlayMode_15_DE8AB38A41B25E9EE6AB82A8F62CAF09' has a wrong offset!");
static_assert(offsetof(FFWidgetAnimationData, PlaybackSpeed_16_2B790DB34FF28A7E78F51DAF82BC10CB) == 0x000018, "Member 'FFWidgetAnimationData::PlaybackSpeed_16_2B790DB34FF28A7E78F51DAF82BC10CB' has a wrong offset!");
static_assert(offsetof(FFWidgetAnimationData, RestoreState_17_20E4A27F479C055A620CD9BD14A54D01) == 0x000020, "Member 'FFWidgetAnimationData::RestoreState_17_20E4A27F479C055A620CD9BD14A54D01' has a wrong offset!");

}

