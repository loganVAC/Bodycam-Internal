#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GameEnd

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_InteractableMenu_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "GameMode_structs.hpp"
#include "UMG_structs.hpp"
#include "SteamCorePro_structs.hpp"
#include "EInputDeviceType_structs.hpp"
#include "ETransitionAnimation_structs.hpp"
#include "LeaderboardClass_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GameEnd.WBP_GameEnd_C
// 0x0200 (0x0588 - 0x0388)
class UWBP_GameEnd_C final : public UWBP_InteractableMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_GameEnd_C;                      // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewAnimation_0;                                    // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewAnimation_1;                                    // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Reissad;                                           // 0x03A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Zombie;                                            // 0x03A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NewAnimation;                                      // 0x03B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AddedR;                                            // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Basic_Death;                                       // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Basic_Kill;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeadlineTitleText;                                 // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             HeadlineTitleText_1;                               // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox;                                     // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_98;                                          // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LeaderboardEntries;                                // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageDetails;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageDetails_1;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageDetails_2;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageDetails_4;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageDetails_5;                                  // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageDetails_8;                                  // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageDetails_10;                                 // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageDetails_11;                                 // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleScreenButton_Silence_C*       No;                                                // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           NormalStats;                                       // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Stats;                                     // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PriceR;                                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 VHS_TEXTURE;                                       // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LeaderboardEntry_C*                WBP_LeaderboardEntry;                              // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LeaderboardEntry_C*                WBP_LeaderboardEntry_1;                            // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LeaderboardEntry_C*                WBP_LeaderboardEntry_2;                            // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LeaderboardEntry_C*                WBP_LeaderboardEntry_3;                            // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_LeaderboardEntry_C*                WBP_LeaderboardEntry_4;                            // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Rank_C*                            WBP_Rank;                                          // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleScreenButton_Silence_C*       Yes;                                               // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Zombie_Time;                                       // 0x04B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Zombie_Wave;                                       // 0x04C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ZombieStats;                                       // 0x04C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                         Value;                                             // 0x04D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                          RandomStreamUser;                                  // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	TArray<struct FSteamItemDef>                  RandomShopDrop;                                    // 0x04E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 NewVar;                                            // 0x04F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                          RandomStreamWorld;                                 // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	class UMediaPlayer*                           MediaPlayerTarget;                                 // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                           Media_Player_Target_4;                             // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         Anim_Reissad_Stats_Score;                          // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x0524(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EGameMode                                     GameMode;                                          // 0x0525(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526[0x2];                                      // 0x0526(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Kill_in_Text;                                      // 0x0528(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Zombie_Time_In_Text;                               // 0x0540(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Zombie_Wave_In_Text;                               // 0x0558(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   Death_In_Text;                                     // 0x0570(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void Construct();
	void ExecuteUbergraph_WBP_GameEnd(int32 EntryPoint);
	void OnCallback_7D20522B40B1B8F16BAEA69A5841FEBC(const struct FLeaderboardFindResult& Data, bool bWasSuccessful);
	void OnCallback_E054662447541F39438A06B3549CAEA2(const struct FLeaderboardScoresDownloaded& Data, bool bWasSuccessful);
	void OnFooterButtonBack();
	void OnNavigationEnter(class UWBP_InteractableMenu_C* NavigateFromMenu, EInputDeviceType InputDeviceType);
	void OnNavigationExit(TSoftClassPtr<class UClass> ToMenu, const class FString& MenuLayer_0, ETransitionAnimation TransitionAnimation, double TransitionSpeed, class UObject* InPayload);
	void OnPressedBack(const struct FKeyEvent& KeyEvent);
	void OnRep_bRefreshingInventory();
	void OnRep_bRefreshingItems();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GameEnd_C">();
	}
	static class UWBP_GameEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GameEnd_C>();
	}
};
static_assert(alignof(UWBP_GameEnd_C) == 0x000008, "Wrong alignment on UWBP_GameEnd_C");
static_assert(sizeof(UWBP_GameEnd_C) == 0x000588, "Wrong size on UWBP_GameEnd_C");
static_assert(offsetof(UWBP_GameEnd_C, UberGraphFrame_WBP_GameEnd_C) == 0x000388, "Member 'UWBP_GameEnd_C::UberGraphFrame_WBP_GameEnd_C' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, NewAnimation_0) == 0x000390, "Member 'UWBP_GameEnd_C::NewAnimation_0' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, NewAnimation_1) == 0x000398, "Member 'UWBP_GameEnd_C::NewAnimation_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Reissad) == 0x0003A0, "Member 'UWBP_GameEnd_C::Reissad' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Zombie) == 0x0003A8, "Member 'UWBP_GameEnd_C::Zombie' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, NewAnimation) == 0x0003B0, "Member 'UWBP_GameEnd_C::NewAnimation' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, AddedR) == 0x0003B8, "Member 'UWBP_GameEnd_C::AddedR' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Basic_Death) == 0x0003C0, "Member 'UWBP_GameEnd_C::Basic_Death' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Basic_Kill) == 0x0003C8, "Member 'UWBP_GameEnd_C::Basic_Kill' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, CanvasPanel_0) == 0x0003D0, "Member 'UWBP_GameEnd_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, HeadlineTitleText) == 0x0003D8, "Member 'UWBP_GameEnd_C::HeadlineTitleText' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, HeadlineTitleText_1) == 0x0003E0, "Member 'UWBP_GameEnd_C::HeadlineTitleText_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, HorizontalBox) == 0x0003E8, "Member 'UWBP_GameEnd_C::HorizontalBox' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, HorizontalBox_0) == 0x0003F0, "Member 'UWBP_GameEnd_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Image_0) == 0x0003F8, "Member 'UWBP_GameEnd_C::Image_0' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Image_98) == 0x000400, "Member 'UWBP_GameEnd_C::Image_98' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, LeaderboardEntries) == 0x000408, "Member 'UWBP_GameEnd_C::LeaderboardEntries' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MessageDetails) == 0x000410, "Member 'UWBP_GameEnd_C::MessageDetails' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MessageDetails_1) == 0x000418, "Member 'UWBP_GameEnd_C::MessageDetails_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MessageDetails_2) == 0x000420, "Member 'UWBP_GameEnd_C::MessageDetails_2' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MessageDetails_4) == 0x000428, "Member 'UWBP_GameEnd_C::MessageDetails_4' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MessageDetails_5) == 0x000430, "Member 'UWBP_GameEnd_C::MessageDetails_5' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MessageDetails_8) == 0x000438, "Member 'UWBP_GameEnd_C::MessageDetails_8' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MessageDetails_10) == 0x000440, "Member 'UWBP_GameEnd_C::MessageDetails_10' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MessageDetails_11) == 0x000448, "Member 'UWBP_GameEnd_C::MessageDetails_11' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, No) == 0x000450, "Member 'UWBP_GameEnd_C::No' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, NormalStats) == 0x000458, "Member 'UWBP_GameEnd_C::NormalStats' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Overlay_Stats) == 0x000460, "Member 'UWBP_GameEnd_C::Overlay_Stats' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, PriceR) == 0x000468, "Member 'UWBP_GameEnd_C::PriceR' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, SizeBox_1) == 0x000470, "Member 'UWBP_GameEnd_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, VHS_TEXTURE) == 0x000478, "Member 'UWBP_GameEnd_C::VHS_TEXTURE' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, WBP_LeaderboardEntry) == 0x000480, "Member 'UWBP_GameEnd_C::WBP_LeaderboardEntry' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, WBP_LeaderboardEntry_1) == 0x000488, "Member 'UWBP_GameEnd_C::WBP_LeaderboardEntry_1' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, WBP_LeaderboardEntry_2) == 0x000490, "Member 'UWBP_GameEnd_C::WBP_LeaderboardEntry_2' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, WBP_LeaderboardEntry_3) == 0x000498, "Member 'UWBP_GameEnd_C::WBP_LeaderboardEntry_3' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, WBP_LeaderboardEntry_4) == 0x0004A0, "Member 'UWBP_GameEnd_C::WBP_LeaderboardEntry_4' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, WBP_Rank) == 0x0004A8, "Member 'UWBP_GameEnd_C::WBP_Rank' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Yes) == 0x0004B0, "Member 'UWBP_GameEnd_C::Yes' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Zombie_Time) == 0x0004B8, "Member 'UWBP_GameEnd_C::Zombie_Time' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Zombie_Wave) == 0x0004C0, "Member 'UWBP_GameEnd_C::Zombie_Wave' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, ZombieStats) == 0x0004C8, "Member 'UWBP_GameEnd_C::ZombieStats' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Value) == 0x0004D0, "Member 'UWBP_GameEnd_C::Value' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, RandomStreamUser) == 0x0004E0, "Member 'UWBP_GameEnd_C::RandomStreamUser' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, RandomShopDrop) == 0x0004E8, "Member 'UWBP_GameEnd_C::RandomShopDrop' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, NewVar) == 0x0004F8, "Member 'UWBP_GameEnd_C::NewVar' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, RandomStreamWorld) == 0x000508, "Member 'UWBP_GameEnd_C::RandomStreamWorld' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, MediaPlayerTarget) == 0x000510, "Member 'UWBP_GameEnd_C::MediaPlayerTarget' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Media_Player_Target_4) == 0x000518, "Member 'UWBP_GameEnd_C::Media_Player_Target_4' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Anim_Reissad_Stats_Score) == 0x000520, "Member 'UWBP_GameEnd_C::Anim_Reissad_Stats_Score' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, NewVar_0) == 0x000524, "Member 'UWBP_GameEnd_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, GameMode) == 0x000525, "Member 'UWBP_GameEnd_C::GameMode' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Kill_in_Text) == 0x000528, "Member 'UWBP_GameEnd_C::Kill_in_Text' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Zombie_Time_In_Text) == 0x000540, "Member 'UWBP_GameEnd_C::Zombie_Time_In_Text' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Zombie_Wave_In_Text) == 0x000558, "Member 'UWBP_GameEnd_C::Zombie_Wave_In_Text' has a wrong offset!");
static_assert(offsetof(UWBP_GameEnd_C, Death_In_Text) == 0x000570, "Member 'UWBP_GameEnd_C::Death_In_Text' has a wrong offset!");

}

