#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSpringInterpVector

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SSpringInterpVector.SSpringInterpVector
// 0x000C (0x000C - 0x0000)
struct FSSpringInterpVector final
{
public:
	float                                         Stiffness_2_F221239E4E9D1E7922AF0A8EE6E74885;      // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CriticalDampingFactor_4_B7096E4F4BB46B8BAAFAA297C9D1879E; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Mass_6_852D91AF40014622E29904BD89B99612;           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSSpringInterpVector) == 0x000004, "Wrong alignment on FSSpringInterpVector");
static_assert(sizeof(FSSpringInterpVector) == 0x00000C, "Wrong size on FSSpringInterpVector");
static_assert(offsetof(FSSpringInterpVector, Stiffness_2_F221239E4E9D1E7922AF0A8EE6E74885) == 0x000000, "Member 'FSSpringInterpVector::Stiffness_2_F221239E4E9D1E7922AF0A8EE6E74885' has a wrong offset!");
static_assert(offsetof(FSSpringInterpVector, CriticalDampingFactor_4_B7096E4F4BB46B8BAAFAA297C9D1879E) == 0x000004, "Member 'FSSpringInterpVector::CriticalDampingFactor_4_B7096E4F4BB46B8BAAFAA297C9D1879E' has a wrong offset!");
static_assert(offsetof(FSSpringInterpVector, Mass_6_852D91AF40014622E29904BD89B99612) == 0x000008, "Member 'FSSpringInterpVector::Mass_6_852D91AF40014622E29904BD89B99612' has a wrong offset!");

}
