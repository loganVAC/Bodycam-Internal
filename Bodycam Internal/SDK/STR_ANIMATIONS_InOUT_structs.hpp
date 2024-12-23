#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STR_ANIMATIONS_InOUT

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct STR_ANIMATIONS_InOUT.STR_ANIMATIONS_InOUT
// 0x0020 (0x0020 - 0x0000)
struct FSTR_ANIMATIONS_InOUT final
{
public:
	class UAnimMontage*                           In_2_8F9F0F0B4B8DD7386494F2A4B8091287;             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           Out_4_36B986C94FB428737C4E499738C2FB0F;            // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              InCue_7_4DCADC204972A08EB7E011924D66E3B6;          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              OutCue_11_03758F614E534BBD29620EB420B7F376;        // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSTR_ANIMATIONS_InOUT) == 0x000008, "Wrong alignment on FSTR_ANIMATIONS_InOUT");
static_assert(sizeof(FSTR_ANIMATIONS_InOUT) == 0x000020, "Wrong size on FSTR_ANIMATIONS_InOUT");
static_assert(offsetof(FSTR_ANIMATIONS_InOUT, In_2_8F9F0F0B4B8DD7386494F2A4B8091287) == 0x000000, "Member 'FSTR_ANIMATIONS_InOUT::In_2_8F9F0F0B4B8DD7386494F2A4B8091287' has a wrong offset!");
static_assert(offsetof(FSTR_ANIMATIONS_InOUT, Out_4_36B986C94FB428737C4E499738C2FB0F) == 0x000008, "Member 'FSTR_ANIMATIONS_InOUT::Out_4_36B986C94FB428737C4E499738C2FB0F' has a wrong offset!");
static_assert(offsetof(FSTR_ANIMATIONS_InOUT, InCue_7_4DCADC204972A08EB7E011924D66E3B6) == 0x000010, "Member 'FSTR_ANIMATIONS_InOUT::InCue_7_4DCADC204972A08EB7E011924D66E3B6' has a wrong offset!");
static_assert(offsetof(FSTR_ANIMATIONS_InOUT, OutCue_11_03758F614E534BBD29620EB420B7F376) == 0x000018, "Member 'FSTR_ANIMATIONS_InOUT::OutCue_11_03758F614E534BBD29620EB420B7F376' has a wrong offset!");

}

