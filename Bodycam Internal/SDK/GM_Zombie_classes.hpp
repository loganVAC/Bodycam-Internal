#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GM_Zombie

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "EN_WaveClass_structs.hpp"
#include "E_Team_structs.hpp"
#include "GameMode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GM_Zombie.GM_Zombie_C
// 0x0068 (0x0398 - 0x0330)
class AGM_Zombie_C final : public AGameModeBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_MenuSystemGameModeComponent_C*      BP_MenuSystemGameModeComponent;                    // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Wave;                                              // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Zombie_Amount;                                     // 0x034C(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GlobalRoundZombiesAmount;                          // 0x0350(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxAliveZombies;                                   // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        SPEEDZ;                                            // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGT_zombie_C*                           GT_Zombie;                                         // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                         ZombieDead;                                        // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_WaveClass                                  EN_WaveClass;                                      // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36D[0x3];                                      // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            Exiting_Controller;                                // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                                AvailableSpeed;                                    // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                        ZombieHealth;                                      // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Chrono;                                            // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BreakTimer();
	void CanCreateKickVote(bool* CanCreateKickVote_);
	void CanKickThisPlayer_(const class FString& PlayerID, bool* True_);
	bool CanReachDestination(const struct FVector& PathStart, const struct FVector& PathEnd);
	void ClearMap();
	void ConnectionInfos(const struct FLinearColor& Color);
	void DeleteZombies(class AActor* Target);
	void DestroyAllDeadbodies();
	void ElectricalAction();
	void EndWave(int32 Wave_0, EN_WaveClass EN_WaveClass_0);
	void Event_Ragdoll_End();
	void EventRagdollStart();
	void ExecuteUbergraph_GM_Zombie(int32 EntryPoint);
	void Get_BP_Menu_Controller_Component(class UBP_MenuControllerComponent_C** BP_Menu_Controller_Component);
	void Get_Stamina(double* Stamina);
	void GetAvailableSpawn(TArray<class AZombieSpawnVolume_C*>* AvailableSpawn_Return);
	void GetBlured(double* Blured);
	void GetBurnedRef(class USceneComponent** BurnedMesh);
	void GetFlashBangEffect(double* FlashEffect);
	void GetGameMode(struct FSTR_GamemodeWinInfo* GameMode);
	void GetHealth(double* Health);
	void GetKickedPlayerVoted(TArray<class FString>* KickplayerAlreadyVote);
	void GetMenuSettings(class UBP_MenuControllerComponent_C** Bp_MenuController);
	void GetMutePlayer(TArray<class FString>* MutePlayer);
	void GetPlayerAlives(TArray<class AALS_AnimMan_CharacterBP_C*>* Players_Alives_Return);
	void GetPlayerConnected(TArray<struct FSTR_PCInfo>* PlayerConnected);
	void GetPlayerKickVote(TArray<struct FSTR_KickVote>* KickVotePlayer);
	void GetPlayersDeaths(TArray<class APC_Zombie_C*>* Players_Alives_Return);
	void GetPlayerSkin(struct FSTR_TEST* Player_Skin, bool* Valid_);
	void GetRagdollSystem(class UWW_RagdollSystem_C** Ragdoll_System);
	void GetRandomSpeedForZombies();
	void GetReady_(bool* IsReady_);
	void GetServerSteamID(class FString* SteamID);
	void GetStarterWeapons(TArray<struct FSTR_Actor>* Weapons);
	void GetSteamID(class FString* SteamID);
	void GetSurvivorStatuts(class UWW_SurvivorStatus_C** SurvivorComponant);
	void GetTeam(E_Team* Team);
	void GetTeamList(E_Team Team, TArray<struct FSTR_PCInfo>* Info);
	void GetTopScore(TArray<struct FSTR_PCInfo>* TopScore);
	void GetZombiesAlives(TArray<class AZombie_C*>* ZombiesAlives_Return);
	void GetZombiesDeaths(TArray<class AZombie_C*>* ZombiesDeaths_Return);
	void InitScoreBoard();
	void Is_All_Players_Dead(bool* AllPlayersDead_Return);
	void IsDead(bool* Dead_);
	void IsDestroyabe_(bool* Destroyable_);
	void IsReady_(bool IsReady__0);
	void IsStress(bool* Yes_);
	void IsTalking_(bool* IsTalking__0);
	void K2_OnLogout(class AController* ExitingController);
	void Kick_(const struct FSTR_PCInfo& Target);
	void KickPlayer(const struct FSTR_KickVote& PlayerInfo);
	void KillAllZombies();
	void MuteID(const class FString& SteamID);
	void NewKickVote(const struct FSTR_PCInfo& Target);
	void NewWaves(int32 Wave_0, EN_WaveClass EN_WaveClass_0);
	void OnPlayerDeath(class APlayerController* PC);
	void OnTrySelectTeam(E_Team Team);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void RegisterZombiesUpdates();
	void RespawnDeadPlayer();
	void ServerTravel(double Delay);
	void Slomo(double Slomo_0);
	void SpawnScreamer(bool Destroy_);
	void SpawnZombieEvent();
	void Start_Wave(bool FirstWave_);
	void Talk(bool IsTalking);
	void Try_Start_Wave();
	void TryToSpawn();
	void UpdateChrono();
	void UpdateGamemode(EGameMode GameMode);
	void UpdateKickVote(const struct FSTR_PCInfo& Target, bool Yes_);
	void UpdateMapSelection(class FName Selected_Level_Name, int32 Index_0);
	void UpdateModeInfo();
	void UpdatePower(bool On_);
	void UpdateScore(const struct FSTR_Score& Score);
	void UpdateTeamIndex__PlayerKilled_(E_Team Team_PlayerKilled_, int32 MilitaryIndex, int32 TerroristIndex, E_Team WiiningTeam);
	void UpdateTeamXP(bool Win_);
	void UpdateTimer(double TimeCount, const class FText& NewParam);
	void UpdateTransitionMap();
	void UpdateWarning(const class FString& String);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GM_Zombie_C">();
	}
	static class AGM_Zombie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGM_Zombie_C>();
	}
};
static_assert(alignof(AGM_Zombie_C) == 0x000008, "Wrong alignment on AGM_Zombie_C");
static_assert(sizeof(AGM_Zombie_C) == 0x000398, "Wrong size on AGM_Zombie_C");
static_assert(offsetof(AGM_Zombie_C, UberGraphFrame) == 0x000330, "Member 'AGM_Zombie_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, BP_MenuSystemGameModeComponent) == 0x000338, "Member 'AGM_Zombie_C::BP_MenuSystemGameModeComponent' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, DefaultSceneRoot) == 0x000340, "Member 'AGM_Zombie_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, Wave) == 0x000348, "Member 'AGM_Zombie_C::Wave' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, Zombie_Amount) == 0x00034C, "Member 'AGM_Zombie_C::Zombie_Amount' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, GlobalRoundZombiesAmount) == 0x000350, "Member 'AGM_Zombie_C::GlobalRoundZombiesAmount' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, MaxAliveZombies) == 0x000354, "Member 'AGM_Zombie_C::MaxAliveZombies' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, SPEEDZ) == 0x000358, "Member 'AGM_Zombie_C::SPEEDZ' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, GT_Zombie) == 0x000360, "Member 'AGM_Zombie_C::GT_Zombie' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, ZombieDead) == 0x000368, "Member 'AGM_Zombie_C::ZombieDead' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, EN_WaveClass) == 0x00036C, "Member 'AGM_Zombie_C::EN_WaveClass' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, Exiting_Controller) == 0x000370, "Member 'AGM_Zombie_C::Exiting_Controller' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, AvailableSpeed) == 0x000378, "Member 'AGM_Zombie_C::AvailableSpeed' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, ZombieHealth) == 0x000388, "Member 'AGM_Zombie_C::ZombieHealth' has a wrong offset!");
static_assert(offsetof(AGM_Zombie_C, Chrono) == 0x000390, "Member 'AGM_Zombie_C::Chrono' has a wrong offset!");

}
