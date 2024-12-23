#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DiscordRichPresence

#include "Basic.hpp"

#include "DiscordRichPresence_classes.hpp"
#include "DiscordRichPresence_parameters.hpp"


namespace SDK
{

// Function DiscordRichPresence.DiscordInterface.BindEvents
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(const class FString& JoinSecret)>OnDiscordUserJoin                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(const class FString& SpectateSecret)>OnDiscordUserSpectate                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(const struct FDiscordUser& User)>OnDiscordUserJoinRequest                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TDelegate<void(EDiscordPresenceActivityActionType Type, const struct FDiscordUser& User, const struct FDiscordActivityInfo& Activity)>OnDiscordInvite                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordInterface::BindEvents(TDelegate<void(const class FString& JoinSecret)> OnDiscordUserJoin, TDelegate<void(const class FString& SpectateSecret)> OnDiscordUserSpectate, TDelegate<void(const struct FDiscordUser& User)> OnDiscordUserJoinRequest, TDelegate<void(EDiscordPresenceActivityActionType Type, const struct FDiscordUser& User, const struct FDiscordActivityInfo& Activity)> OnDiscordInvite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "BindEvents");

	Params::DiscordInterface_BindEvents Parms{};

	Parms.OnDiscordUserJoin = OnDiscordUserJoin;
	Parms.OnDiscordUserSpectate = OnDiscordUserSpectate;
	Parms.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;
	Parms.OnDiscordInvite = OnDiscordInvite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.BindOnUserInvite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(EDiscordPresenceActivityActionType Type, const struct FDiscordUser& User, const struct FDiscordActivityInfo& Activity)>OnDiscordInvite                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordInterface::BindOnUserInvite(TDelegate<void(EDiscordPresenceActivityActionType Type, const struct FDiscordUser& User, const struct FDiscordActivityInfo& Activity)> OnDiscordInvite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "BindOnUserInvite");

	Params::DiscordInterface_BindOnUserInvite Parms{};

	Parms.OnDiscordInvite = OnDiscordInvite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.BindOnUserJoin
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(const class FString& JoinSecret)>OnDiscordUserJoin                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordInterface::BindOnUserJoin(TDelegate<void(const class FString& JoinSecret)> OnDiscordUserJoin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "BindOnUserJoin");

	Params::DiscordInterface_BindOnUserJoin Parms{};

	Parms.OnDiscordUserJoin = OnDiscordUserJoin;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.BindOnUserJoinRequest
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(const struct FDiscordUser& User)>OnDiscordUserJoinRequest                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordInterface::BindOnUserJoinRequest(TDelegate<void(const struct FDiscordUser& User)> OnDiscordUserJoinRequest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "BindOnUserJoinRequest");

	Params::DiscordInterface_BindOnUserJoinRequest Parms{};

	Parms.OnDiscordUserJoinRequest = OnDiscordUserJoinRequest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.BindOnUserSpectate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TDelegate<void(const class FString& SpectateSecret)>OnDiscordUserSpectate                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordInterface::BindOnUserSpectate(TDelegate<void(const class FString& SpectateSecret)> OnDiscordUserSpectate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "BindOnUserSpectate");

	Params::DiscordInterface_BindOnUserSpectate Parms{};

	Parms.OnDiscordUserSpectate = OnDiscordUserSpectate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.ClearActivity
// (Final, Native, Static, Public, BlueprintCallable)

void UDiscordInterface::ClearActivity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "ClearActivity");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.InitializeDiscord
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ClientID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDiscordInterface::InitializeDiscord(const class FString& ClientID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "InitializeDiscord");

	Params::DiscordInterface_InitializeDiscord Parms{};

	Parms.ClientID = std::move(ClientID);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function DiscordRichPresence.DiscordInterface.RegisterApplication
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           Command                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDiscordInterface::RegisterApplication(const class FString& Command)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "RegisterApplication");

	Params::DiscordInterface_RegisterApplication Parms{};

	Parms.Command = std::move(Command);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.RegisterApplicationSteam
// (Final, Native, Static, Public, BlueprintCallable)

void UDiscordInterface::RegisterApplicationSteam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "RegisterApplicationSteam");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.SetActivity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FDiscordActivityInfo             Activity                                               (Parm, NativeAccessSpecifierPublic)

void UDiscordInterface::SetActivity(const struct FDiscordActivityInfo& Activity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "SetActivity");

	Params::DiscordInterface_SetActivity Parms{};

	Parms.Activity = std::move(Activity);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.ShutdownDiscord
// (Final, Native, Static, Public, BlueprintCallable)

void UDiscordInterface::ShutdownDiscord()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "ShutdownDiscord");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function DiscordRichPresence.DiscordInterface.TickDiscord
// (Final, Native, Static, Public, BlueprintCallable)

void UDiscordInterface::TickDiscord()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("DiscordInterface", "TickDiscord");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}

}

