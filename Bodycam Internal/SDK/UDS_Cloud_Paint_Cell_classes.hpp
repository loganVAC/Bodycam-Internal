#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UDS_Cloud_Paint_Cell

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UDS_Cloud_Paint_Cell.UDS_Cloud_Paint_Cell_C
// 0x0048 (0x0078 - 0x0030)
class UUDS_Cloud_Paint_Cell_C final : public UPrimaryDataAsset
{
public:
	TArray<struct FLinearColor>                   Painting_Array;                                    // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0040(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Zero_Coverage_Present;                             // 0x0070(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Mid_Coverage_Present;                              // 0x0071(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Full_Coverage_Present;                             // 0x0072(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UDS_Cloud_Paint_Cell_C">();
	}
	static class UUDS_Cloud_Paint_Cell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUDS_Cloud_Paint_Cell_C>();
	}
};
static_assert(alignof(UUDS_Cloud_Paint_Cell_C) == 0x000008, "Wrong alignment on UUDS_Cloud_Paint_Cell_C");
static_assert(sizeof(UUDS_Cloud_Paint_Cell_C) == 0x000078, "Wrong size on UUDS_Cloud_Paint_Cell_C");
static_assert(offsetof(UUDS_Cloud_Paint_Cell_C, Painting_Array) == 0x000030, "Member 'UUDS_Cloud_Paint_Cell_C::Painting_Array' has a wrong offset!");
static_assert(offsetof(UUDS_Cloud_Paint_Cell_C, Texture) == 0x000040, "Member 'UUDS_Cloud_Paint_Cell_C::Texture' has a wrong offset!");
static_assert(offsetof(UUDS_Cloud_Paint_Cell_C, Zero_Coverage_Present) == 0x000070, "Member 'UUDS_Cloud_Paint_Cell_C::Zero_Coverage_Present' has a wrong offset!");
static_assert(offsetof(UUDS_Cloud_Paint_Cell_C, Mid_Coverage_Present) == 0x000071, "Member 'UUDS_Cloud_Paint_Cell_C::Mid_Coverage_Present' has a wrong offset!");
static_assert(offsetof(UUDS_Cloud_Paint_Cell_C, Full_Coverage_Present) == 0x000072, "Member 'UUDS_Cloud_Paint_Cell_C::Full_Coverage_Present' has a wrong offset!");

}
