#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bodycam_Interface

#include "Basic.hpp"

#include "E_Team_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "GameMode_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Bodycam_Interface.Bodycam_Interface_C
// 0x0000 (0x0028 - 0x0028)
class IBodycam_Interface_C final : public IInterface
{
public:
	void BreakTimer();
	void CanCreateKickVote(bool* CanCreateKickVote_);
	void CanKickThisPlayer_(const class FString& PlayerID, bool* True_);
	void ClearMap();
	void Event_Ragdoll_End();
	void EventRagdollStart();
	void Get_BP_Menu_Controller_Component(class UBP_MenuControllerComponent_C** BP_Menu_Controller_Component);
	void Get_Stamina(double* Stamina);
	void GetBlured(double* Blured);
	void GetBurnedRef(class USceneComponent** BurnedMesh);
	void GetFlashBangEffect(double* FlashEffect);
	void GetGameMode(struct FSTR_GamemodeWinInfo* GameMode);
	void GetHealth(double* Health);
	void GetKickedPlayerVoted(TArray<class FString>* KickplayerAlreadyVote);
	void GetMenuSettings(class UBP_MenuControllerComponent_C** Bp_MenuController);
	void GetMutePlayer(TArray<class FString>* MutePlayer);
	void GetPlayerConnected(TArray<struct FSTR_PCInfo>* PlayerConnected);
	void GetPlayerKickVote(TArray<struct FSTR_KickVote>* KickVotePlayer);
	void GetPlayerSkin(struct FSTR_TEST* Player_Skin, bool* Valid_);
	void GetRagdollSystem(class UWW_RagdollSystem_C** Ragdoll_System);
	void GetReady_(bool* IsReady_);
	void GetServerSteamID(class FString* SteamID);
	void GetStarterWeapons(TArray<struct FSTR_Actor>* Weapons);
	void GetSteamID(class FString* SteamID);
	void GetSurvivorStatuts(class UWW_SurvivorStatus_C** SurvivorComponant);
	void GetTeam(E_Team* Team);
	void GetTeamList(E_Team Team, TArray<struct FSTR_PCInfo>* Info);
	void GetTopScore(TArray<struct FSTR_PCInfo>* TopScore);
	void InitScoreBoard();
	void IsDead(bool* Dead_);
	void IsDestroyabe_(bool* Destroyable_);
	void IsReady_(bool IsReady__0);
	void IsStress(bool* Yes_);
	void IsTalking_(bool* IsTalking__0);
	void Kick_(const struct FSTR_PCInfo& Target);
	void KickPlayer(const struct FSTR_KickVote& PlayerInfo);
	void MuteID(const class FString& SteamID);
	void NewKickVote(const struct FSTR_PCInfo& Target);
	void OnPlayerDeath(class APlayerController* PC);
	void OnTrySelectTeam(E_Team Team);
	void ServerTravel(double Delay);
	void Slomo(double Slomo_0);
	void Talk(bool IsTalking);
	void UpdateGamemode(EGameMode GameMode);
	void UpdateKickVote(const struct FSTR_PCInfo& Target, bool Yes_);
	void UpdateMapSelection(class FName Selected_Level_Name, int32 Index_0);
	void UpdateModeInfo();
	void UpdateScore(const struct FSTR_Score& Score);
	void UpdateTeamIndex__PlayerKilled_(E_Team Team_PlayerKilled_, int32 MilitaryIndex, int32 TerroristIndex, E_Team WiiningTeam);
	void UpdateTeamXP(bool Win_);
	void UpdateTimer(double TimeCount, const class FText& NewParam);
	void UpdateTransitionMap();
	void UpdateWarning(const class FString& String);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Bodycam_Interface_C">();
	}
	static class IBodycam_Interface_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IBodycam_Interface_C>();
	}
};
static_assert(alignof(IBodycam_Interface_C) == 0x000008, "Wrong alignment on IBodycam_Interface_C");
static_assert(sizeof(IBodycam_Interface_C) == 0x000028, "Wrong size on IBodycam_Interface_C");

}

