#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_LoadingOverlay

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_LoadingOverlay.WBP_LoadingOverlay_C
// 0x0028 (0x02A8 - 0x0280)
class UWBP_LoadingOverlay_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                      CircularThrobber;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             FoundServersCountText;                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LoadingText;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Loading;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void CloseLoadingScreen();
	void ExecuteUbergraph_WBP_LoadingOverlay(int32 EntryPoint);
	void OpenLoadingScreen(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_LoadingOverlay_C">();
	}
	static class UWBP_LoadingOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_LoadingOverlay_C>();
	}
};
static_assert(alignof(UWBP_LoadingOverlay_C) == 0x000008, "Wrong alignment on UWBP_LoadingOverlay_C");
static_assert(sizeof(UWBP_LoadingOverlay_C) == 0x0002A8, "Wrong size on UWBP_LoadingOverlay_C");
static_assert(offsetof(UWBP_LoadingOverlay_C, UberGraphFrame) == 0x000280, "Member 'UWBP_LoadingOverlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingOverlay_C, CircularThrobber) == 0x000288, "Member 'UWBP_LoadingOverlay_C::CircularThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingOverlay_C, FoundServersCountText) == 0x000290, "Member 'UWBP_LoadingOverlay_C::FoundServersCountText' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingOverlay_C, LoadingText) == 0x000298, "Member 'UWBP_LoadingOverlay_C::LoadingText' has a wrong offset!");
static_assert(offsetof(UWBP_LoadingOverlay_C, Overlay_Loading) == 0x0002A0, "Member 'UWBP_LoadingOverlay_C::Overlay_Loading' has a wrong offset!");

}
