#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STR_Actor

#include "Basic.hpp"

#include "E_Team_structs.hpp"


namespace SDK
{

// UserDefinedStruct STR_Actor.STR_Actor
// 0x0010 (0x0010 - 0x0000)
struct FSTR_Actor final
{
public:
	class UClass*                                 Item_2_A70E199147B8FC42DA84CB913DCD2753;           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	E_Team                                        TeamOnly_5_1DB6FC0F4110E65C284327AFDE4F17A7;       // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSTR_Actor) == 0x000008, "Wrong alignment on FSTR_Actor");
static_assert(sizeof(FSTR_Actor) == 0x000010, "Wrong size on FSTR_Actor");
static_assert(offsetof(FSTR_Actor, Item_2_A70E199147B8FC42DA84CB913DCD2753) == 0x000000, "Member 'FSTR_Actor::Item_2_A70E199147B8FC42DA84CB913DCD2753' has a wrong offset!");
static_assert(offsetof(FSTR_Actor, TeamOnly_5_1DB6FC0F4110E65C284327AFDE4F17A7) == 0x000008, "Member 'FSTR_Actor::TeamOnly_5_1DB6FC0F4110E65C284327AFDE4F17A7' has a wrong offset!");

}

