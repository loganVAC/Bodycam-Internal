#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bodycam_Interface

#include "Basic.hpp"

#include "Bodycam_Interface_classes.hpp"
#include "Bodycam_Interface_parameters.hpp"


namespace SDK
{

// Function Bodycam_Interface.Bodycam_Interface_C.BreakTimer
// (Public, BlueprintCallable, BlueprintEvent)

void IBodycam_Interface_C::BreakTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "BreakTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bodycam_Interface.Bodycam_Interface_C.CanCreateKickVote
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CanCreateKickVote_                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::CanCreateKickVote(bool* CanCreateKickVote_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "CanCreateKickVote");

	Params::Bodycam_Interface_C_CanCreateKickVote Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanCreateKickVote_ != nullptr)
		*CanCreateKickVote_ = Parms.CanCreateKickVote_;
}


// Function Bodycam_Interface.Bodycam_Interface_C.CanKickThisPlayer?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           PlayerID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    True_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::CanKickThisPlayer_(const class FString& PlayerID, bool* True_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "CanKickThisPlayer?");

	Params::Bodycam_Interface_C_CanKickThisPlayer_ Parms{};

	Parms.PlayerID = std::move(PlayerID);

	UObject::ProcessEvent(Func, &Parms);

	if (True_ != nullptr)
		*True_ = Parms.True_;
}


// Function Bodycam_Interface.Bodycam_Interface_C.ClearMap
// (Public, BlueprintCallable, BlueprintEvent)

void IBodycam_Interface_C::ClearMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "ClearMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bodycam_Interface.Bodycam_Interface_C.Event Ragdoll End
// (Public, BlueprintCallable, BlueprintEvent)

void IBodycam_Interface_C::Event_Ragdoll_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "Event Ragdoll End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bodycam_Interface.Bodycam_Interface_C.EventRagdollStart
// (Public, BlueprintCallable, BlueprintEvent)

void IBodycam_Interface_C::EventRagdollStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "EventRagdollStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bodycam_Interface.Bodycam_Interface_C.Get BP Menu Controller Component
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MenuControllerComponent_C*    BP_Menu_Controller_Component                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::Get_BP_Menu_Controller_Component(class UBP_MenuControllerComponent_C** BP_Menu_Controller_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "Get BP Menu Controller Component");

	Params::Bodycam_Interface_C_Get_BP_Menu_Controller_Component Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BP_Menu_Controller_Component != nullptr)
		*BP_Menu_Controller_Component = Parms.BP_Menu_Controller_Component;
}


// Function Bodycam_Interface.Bodycam_Interface_C.Get Stamina
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Stamina                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::Get_Stamina(double* Stamina)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "Get Stamina");

	Params::Bodycam_Interface_C_Get_Stamina Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Stamina != nullptr)
		*Stamina = Parms.Stamina;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetBlured
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Blured                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetBlured(double* Blured)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetBlured");

	Params::Bodycam_Interface_C_GetBlured Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Blured != nullptr)
		*Blured = Parms.Blured;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetBurnedRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  BurnedMesh                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetBurnedRef(class USceneComponent** BurnedMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetBurnedRef");

	Params::Bodycam_Interface_C_GetBurnedRef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (BurnedMesh != nullptr)
		*BurnedMesh = Parms.BurnedMesh;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetFlashBangEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  FlashEffect                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetFlashBangEffect(double* FlashEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetFlashBangEffect");

	Params::Bodycam_Interface_C_GetFlashBangEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FlashEffect != nullptr)
		*FlashEffect = Parms.FlashEffect;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetGameMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_GamemodeWinInfo             GameMode                                               (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetGameMode(struct FSTR_GamemodeWinInfo* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetGameMode");

	Params::Bodycam_Interface_C_GetGameMode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GameMode != nullptr)
		*GameMode = std::move(Parms.GameMode);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Health                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetHealth(double* Health)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetHealth");

	Params::Bodycam_Interface_C_GetHealth Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Health != nullptr)
		*Health = Parms.Health;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetKickedPlayerVoted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   KickplayerAlreadyVote                                  (Parm, OutParm)

void IBodycam_Interface_C::GetKickedPlayerVoted(TArray<class FString>* KickplayerAlreadyVote)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetKickedPlayerVoted");

	Params::Bodycam_Interface_C_GetKickedPlayerVoted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (KickplayerAlreadyVote != nullptr)
		*KickplayerAlreadyVote = std::move(Parms.KickplayerAlreadyVote);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetMenuSettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MenuControllerComponent_C*    Bp_MenuController                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetMenuSettings(class UBP_MenuControllerComponent_C** Bp_MenuController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetMenuSettings");

	Params::Bodycam_Interface_C_GetMenuSettings Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Bp_MenuController != nullptr)
		*Bp_MenuController = Parms.Bp_MenuController;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetMutePlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   MutePlayer                                             (Parm, OutParm)

void IBodycam_Interface_C::GetMutePlayer(TArray<class FString>* MutePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetMutePlayer");

	Params::Bodycam_Interface_C_GetMutePlayer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MutePlayer != nullptr)
		*MutePlayer = std::move(Parms.MutePlayer);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetPlayerConnected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTR_PCInfo>              PlayerConnected                                        (Parm, OutParm)

void IBodycam_Interface_C::GetPlayerConnected(TArray<struct FSTR_PCInfo>* PlayerConnected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetPlayerConnected");

	Params::Bodycam_Interface_C_GetPlayerConnected Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerConnected != nullptr)
		*PlayerConnected = std::move(Parms.PlayerConnected);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetPlayerKickVote
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTR_KickVote>            KickVotePlayer                                         (Parm, OutParm)

void IBodycam_Interface_C::GetPlayerKickVote(TArray<struct FSTR_KickVote>* KickVotePlayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetPlayerKickVote");

	Params::Bodycam_Interface_C_GetPlayerKickVote Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (KickVotePlayer != nullptr)
		*KickVotePlayer = std::move(Parms.KickVotePlayer);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetPlayerSkin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_TEST                        Player_Skin                                            (Parm, OutParm, HasGetValueTypeHash)
// bool                                    Valid_                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetPlayerSkin(struct FSTR_TEST* Player_Skin, bool* Valid_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetPlayerSkin");

	Params::Bodycam_Interface_C_GetPlayerSkin Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Skin != nullptr)
		*Player_Skin = std::move(Parms.Player_Skin);

	if (Valid_ != nullptr)
		*Valid_ = Parms.Valid_;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetRagdollSystem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWW_RagdollSystem_C*              Ragdoll_System                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetRagdollSystem(class UWW_RagdollSystem_C** Ragdoll_System)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetRagdollSystem");

	Params::Bodycam_Interface_C_GetRagdollSystem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ragdoll_System != nullptr)
		*Ragdoll_System = Parms.Ragdoll_System;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetReady?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsReady_                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetReady_(bool* IsReady_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetReady?");

	Params::Bodycam_Interface_C_GetReady_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsReady_ != nullptr)
		*IsReady_ = Parms.IsReady_;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetServerSteamID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SteamID                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetServerSteamID(class FString* SteamID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetServerSteamID");

	Params::Bodycam_Interface_C_GetServerSteamID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SteamID != nullptr)
		*SteamID = std::move(Parms.SteamID);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetStarterWeapons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTR_Actor>               Weapons                                                (Parm, OutParm)

void IBodycam_Interface_C::GetStarterWeapons(TArray<struct FSTR_Actor>* Weapons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetStarterWeapons");

	Params::Bodycam_Interface_C_GetStarterWeapons Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Weapons != nullptr)
		*Weapons = std::move(Parms.Weapons);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetSteamID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SteamID                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetSteamID(class FString* SteamID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetSteamID");

	Params::Bodycam_Interface_C_GetSteamID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SteamID != nullptr)
		*SteamID = std::move(Parms.SteamID);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetSurvivorStatuts
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWW_SurvivorStatus_C*             SurvivorComponant                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetSurvivorStatuts(class UWW_SurvivorStatus_C** SurvivorComponant)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetSurvivorStatuts");

	Params::Bodycam_Interface_C_GetSurvivorStatuts Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SurvivorComponant != nullptr)
		*SurvivorComponant = Parms.SurvivorComponant;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetTeam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Team                                  Team                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::GetTeam(E_Team* Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetTeam");

	Params::Bodycam_Interface_C_GetTeam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Team != nullptr)
		*Team = Parms.Team;
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetTeamList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Team                                  Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSTR_PCInfo>              Info                                                   (Parm, OutParm)

void IBodycam_Interface_C::GetTeamList(E_Team Team, TArray<struct FSTR_PCInfo>* Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetTeamList");

	Params::Bodycam_Interface_C_GetTeamList Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);

	if (Info != nullptr)
		*Info = std::move(Parms.Info);
}


// Function Bodycam_Interface.Bodycam_Interface_C.GetTopScore
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSTR_PCInfo>              TopScore                                               (Parm, OutParm)

void IBodycam_Interface_C::GetTopScore(TArray<struct FSTR_PCInfo>* TopScore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "GetTopScore");

	Params::Bodycam_Interface_C_GetTopScore Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TopScore != nullptr)
		*TopScore = std::move(Parms.TopScore);
}


// Function Bodycam_Interface.Bodycam_Interface_C.InitScoreBoard
// (Public, BlueprintCallable, BlueprintEvent)

void IBodycam_Interface_C::InitScoreBoard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "InitScoreBoard");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bodycam_Interface.Bodycam_Interface_C.IsDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Dead_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::IsDead(bool* Dead_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "IsDead");

	Params::Bodycam_Interface_C_IsDead Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Dead_ != nullptr)
		*Dead_ = Parms.Dead_;
}


// Function Bodycam_Interface.Bodycam_Interface_C.IsDestroyabe?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Destroyable_                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::IsDestroyabe_(bool* Destroyable_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "IsDestroyabe?");

	Params::Bodycam_Interface_C_IsDestroyabe_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Destroyable_ != nullptr)
		*Destroyable_ = Parms.Destroyable_;
}


// Function Bodycam_Interface.Bodycam_Interface_C.IsReady?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsReady__0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::IsReady_(bool IsReady__0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "IsReady?");

	Params::Bodycam_Interface_C_IsReady_ Parms{};

	Parms.IsReady__0 = IsReady__0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.IsStress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Yes_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::IsStress(bool* Yes_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "IsStress");

	Params::Bodycam_Interface_C_IsStress Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Yes_ != nullptr)
		*Yes_ = Parms.Yes_;
}


// Function Bodycam_Interface.Bodycam_Interface_C.IsTalking?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTalking__0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::IsTalking_(bool* IsTalking__0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "IsTalking?");

	Params::Bodycam_Interface_C_IsTalking_ Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsTalking__0 != nullptr)
		*IsTalking__0 = Parms.IsTalking__0;
}


// Function Bodycam_Interface.Bodycam_Interface_C.Kick?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_PCInfo                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBodycam_Interface_C::Kick_(const struct FSTR_PCInfo& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "Kick?");

	Params::Bodycam_Interface_C_Kick_ Parms{};

	Parms.Target = std::move(Target);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.KickPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_KickVote                    PlayerInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBodycam_Interface_C::KickPlayer(const struct FSTR_KickVote& PlayerInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "KickPlayer");

	Params::Bodycam_Interface_C_KickPlayer Parms{};

	Parms.PlayerInfo = std::move(PlayerInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.MuteID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           SteamID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBodycam_Interface_C::MuteID(const class FString& SteamID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "MuteID");

	Params::Bodycam_Interface_C_MuteID Parms{};

	Parms.SteamID = std::move(SteamID);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.NewKickVote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_PCInfo                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBodycam_Interface_C::NewKickVote(const struct FSTR_PCInfo& Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "NewKickVote");

	Params::Bodycam_Interface_C_NewKickVote Parms{};

	Parms.Target = std::move(Target);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.OnPlayerDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                PC                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::OnPlayerDeath(class APlayerController* PC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "OnPlayerDeath");

	Params::Bodycam_Interface_C_OnPlayerDeath Parms{};

	Parms.PC = PC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.OnTrySelectTeam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Team                                  Team                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::OnTrySelectTeam(E_Team Team)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "OnTrySelectTeam");

	Params::Bodycam_Interface_C_OnTrySelectTeam Parms{};

	Parms.Team = Team;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.ServerTravel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::ServerTravel(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "ServerTravel");

	Params::Bodycam_Interface_C_ServerTravel Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.Slomo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Slomo_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::Slomo(double Slomo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "Slomo");

	Params::Bodycam_Interface_C_Slomo Parms{};

	Parms.Slomo_0 = Slomo_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.Talk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsTalking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::Talk(bool IsTalking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "Talk");

	Params::Bodycam_Interface_C_Talk Parms{};

	Parms.IsTalking = IsTalking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateGamemode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameMode                               GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::UpdateGamemode(EGameMode GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateGamemode");

	Params::Bodycam_Interface_C_UpdateGamemode Parms{};

	Parms.GameMode = GameMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateKickVote
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_PCInfo                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Yes_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::UpdateKickVote(const struct FSTR_PCInfo& Target, bool Yes_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateKickVote");

	Params::Bodycam_Interface_C_UpdateKickVote Parms{};

	Parms.Target = std::move(Target);
	Parms.Yes_ = Yes_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateMapSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Selected_Level_Name                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::UpdateMapSelection(class FName Selected_Level_Name, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateMapSelection");

	Params::Bodycam_Interface_C_UpdateMapSelection Parms{};

	Parms.Selected_Level_Name = Selected_Level_Name;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateModeInfo
// (Public, BlueprintCallable, BlueprintEvent)

void IBodycam_Interface_C::UpdateModeInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateModeInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSTR_Score                       Score                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::UpdateScore(const struct FSTR_Score& Score)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateScore");

	Params::Bodycam_Interface_C_UpdateScore Parms{};

	Parms.Score = std::move(Score);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateTeamIndex (PlayerKilled)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_Team                                  Team_PlayerKilled_                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MilitaryIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TerroristIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_Team                                  WiiningTeam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::UpdateTeamIndex__PlayerKilled_(E_Team Team_PlayerKilled_, int32 MilitaryIndex, int32 TerroristIndex, E_Team WiiningTeam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateTeamIndex (PlayerKilled)");

	Params::Bodycam_Interface_C_UpdateTeamIndex__PlayerKilled_ Parms{};

	Parms.Team_PlayerKilled_ = Team_PlayerKilled_;
	Parms.MilitaryIndex = MilitaryIndex;
	Parms.TerroristIndex = TerroristIndex;
	Parms.WiiningTeam = WiiningTeam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateTeamXP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Win_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBodycam_Interface_C::UpdateTeamXP(bool Win_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateTeamXP");

	Params::Bodycam_Interface_C_UpdateTeamXP Parms{};

	Parms.Win_ = Win_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  TimeCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void IBodycam_Interface_C::UpdateTimer(double TimeCount, const class FText& NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateTimer");

	Params::Bodycam_Interface_C_UpdateTimer Parms{};

	Parms.TimeCount = TimeCount;
	Parms.NewParam = std::move(NewParam);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateTransitionMap
// (Public, BlueprintCallable, BlueprintEvent)

void IBodycam_Interface_C::UpdateTransitionMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateTransitionMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Bodycam_Interface.Bodycam_Interface_C.UpdateWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           String                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IBodycam_Interface_C::UpdateWarning(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bodycam_Interface_C", "UpdateWarning");

	Params::Bodycam_Interface_C_UpdateWarning Parms{};

	Parms.String = std::move(String);

	UObject::ProcessEvent(Func, &Parms);
}

}

