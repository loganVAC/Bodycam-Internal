#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: STR_Rank

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK
{

// UserDefinedStruct STR_Rank.STR_Rank
// 0x0040 (0x0040 - 0x0000)
struct FSTR_Rank final
{
public:
	class FText                                   Rank_19_5A0C6400462C36EC0FD955804528F0D2;          // 0x0000(0x0018)(Edit, BlueprintVisible)
	int32                                         RankInteger_17_4F8985F7416B920CBF873F82C7804564;   // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Image_5_18E6F1A149CC003E742D48810546CE80;          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         RankScoreMin_10_C24493C4402FE8F83B70B5B350BD3545;  // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            Color_18_4A95AC2B422E9F45530600A124E49FC7;         // 0x002C(0x0014)(Edit, BlueprintVisible)
};
static_assert(alignof(FSTR_Rank) == 0x000008, "Wrong alignment on FSTR_Rank");
static_assert(sizeof(FSTR_Rank) == 0x000040, "Wrong size on FSTR_Rank");
static_assert(offsetof(FSTR_Rank, Rank_19_5A0C6400462C36EC0FD955804528F0D2) == 0x000000, "Member 'FSTR_Rank::Rank_19_5A0C6400462C36EC0FD955804528F0D2' has a wrong offset!");
static_assert(offsetof(FSTR_Rank, RankInteger_17_4F8985F7416B920CBF873F82C7804564) == 0x000018, "Member 'FSTR_Rank::RankInteger_17_4F8985F7416B920CBF873F82C7804564' has a wrong offset!");
static_assert(offsetof(FSTR_Rank, Image_5_18E6F1A149CC003E742D48810546CE80) == 0x000020, "Member 'FSTR_Rank::Image_5_18E6F1A149CC003E742D48810546CE80' has a wrong offset!");
static_assert(offsetof(FSTR_Rank, RankScoreMin_10_C24493C4402FE8F83B70B5B350BD3545) == 0x000028, "Member 'FSTR_Rank::RankScoreMin_10_C24493C4402FE8F83B70B5B350BD3545' has a wrong offset!");
static_assert(offsetof(FSTR_Rank, Color_18_4A95AC2B422E9F45530600A124E49FC7) == 0x00002C, "Member 'FSTR_Rank::Color_18_4A95AC2B422E9F45530600A124E49FC7' has a wrong offset!");

}

