#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HostMigrationSystem

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"
#include "HostMigrationSystem_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// Class HostMigrationSystem.HMS_CustomGameSaveDataObject
// 0x0000 (0x0028 - 0x0028)
class UHMS_CustomGameSaveDataObject final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HMS_CustomGameSaveDataObject">();
	}
	static class UHMS_CustomGameSaveDataObject* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHMS_CustomGameSaveDataObject>();
	}
};
static_assert(alignof(UHMS_CustomGameSaveDataObject) == 0x000008, "Wrong alignment on UHMS_CustomGameSaveDataObject");
static_assert(sizeof(UHMS_CustomGameSaveDataObject) == 0x000028, "Wrong size on UHMS_CustomGameSaveDataObject");

// Class HostMigrationSystem.HMS_FunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UHMS_FunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool HMS_AreWeReconnecting(class UObject* WorldContextObject);
	static bool HMS_AreWeTheChosenNewHost(class UObject* WorldContextObject);
	static class UTexture2D* HMS_CaptureViewportToTexture2D(class UObject* WorldContextObject);
	static class FString HMS_ClassToString(class UClass* Class_0);
	static void HMS_CompressByteBuffer(struct FHMS_ByteBuffer* InBuffer, const struct FHMS_ByteBuffer& CompressedBuffer);
	static void HMS_DecompressByteBuffer(struct FHMS_ByteBuffer* InBuffer, const struct FHMS_ByteBuffer& DecompressedBuffer);
	static void HMS_DeserializeObjectProperties(class UObject* Object, const struct FHMS_StringToByteBufferMap& PropertyNameToBufferMap, bool SaveGameOnly);
	static class AActor* HMS_GetActorReference(class UObject* WorldContextObject, struct FHMS_ActorReference& Reference);
	static class UHMS_GameInstance* HMS_GetGameInstance(class UObject* WorldContextObject);
	static class FString HMS_GetPlayerControllerPublicIP(class UObject* WorldContextObject, class APlayerController* PlayerController);
	static void HMS_GetPlayerUniqueNetID(const class APlayerController* PlayerController, class FString* ID);
	static void HMS_IsPlayerControllerInSession(class UObject* WorldContextObject, class APlayerController* PlayerController, bool* InSession);
	static bool HMS_MakeActorReference(class AActor* Actor, struct FHMS_ActorReference* Reference);
	static int64 HMS_RandomInt64();
	static void HMS_SerializeObjectProperties(class UObject* Object, struct FHMS_StringToByteBufferMap* PropertyNameToBufferMap, bool SaveGameOnly);
	static void HMS_SetViewportEnabled(class UObject* WorldContextObject, bool Enabled);
	static class AActor* HMS_SpawnActorFromActorSave(class UObject* WorldContextObject, const struct FHMS_ActorSave& ActorSave);
	static class UClass* HMS_StringToClass(const class FString& String);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HMS_FunctionLibrary">();
	}
	static class UHMS_FunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHMS_FunctionLibrary>();
	}
};
static_assert(alignof(UHMS_FunctionLibrary) == 0x000008, "Wrong alignment on UHMS_FunctionLibrary");
static_assert(sizeof(UHMS_FunctionLibrary) == 0x000028, "Wrong size on UHMS_FunctionLibrary");

// Class HostMigrationSystem.HMS_PlayerController
// 0x0048 (0x0898 - 0x0850)
class AHMS_PlayerController final : public APlayerController
{
public:
	struct FHMS_ByteBufferTransferState           HMS_CurrentGameSaveRemoteTransferState;            // 0x0850(0x0030)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                 HMS_MyReconnectAddress;                            // 0x0880(0x0010)(BlueprintVisible, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_890[0x8];                                      // 0x0890(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HMS_BeginCurrentGameSaveTransfer(int64 TargetBufferSize);
	void HMS_CurrentGameSaveTransferTick(const struct FHMS_ByteBuffer& NewBufferChunk);
	class FString HMS_GetReconnectNetAddress();
	void HMS_SetMyReconnectAddressForTheServer(const class FString& MyReconnectAddress);
	void HMS_SetReconnectAddressFromNewHost(const class FString& NewReconnectAddress);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HMS_PlayerController">();
	}
	static class AHMS_PlayerController* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHMS_PlayerController>();
	}
};
static_assert(alignof(AHMS_PlayerController) == 0x000008, "Wrong alignment on AHMS_PlayerController");
static_assert(sizeof(AHMS_PlayerController) == 0x000898, "Wrong size on AHMS_PlayerController");
static_assert(offsetof(AHMS_PlayerController, HMS_CurrentGameSaveRemoteTransferState) == 0x000850, "Member 'AHMS_PlayerController::HMS_CurrentGameSaveRemoteTransferState' has a wrong offset!");
static_assert(offsetof(AHMS_PlayerController, HMS_MyReconnectAddress) == 0x000880, "Member 'AHMS_PlayerController::HMS_MyReconnectAddress' has a wrong offset!");

// Class HostMigrationSystem.HMS_OnlineSession
// 0x0008 (0x0030 - 0x0028)
class UHMS_OnlineSession final : public UOnlineSession
{
public:
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HMS_OnlineSession">();
	}
	static class UHMS_OnlineSession* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHMS_OnlineSession>();
	}
};
static_assert(alignof(UHMS_OnlineSession) == 0x000008, "Wrong alignment on UHMS_OnlineSession");
static_assert(sizeof(UHMS_OnlineSession) == 0x000030, "Wrong size on UHMS_OnlineSession");

// Class HostMigrationSystem.HMS_GameInstance
// 0x0140 (0x0300 - 0x01C0)
class UHMS_GameInstance final : public UGameInstance
{
public:
	struct FHMS_GameSave                          HMS_RehostGameSave;                                // 0x01C0(0x0120)(BlueprintVisible, NativeAccessSpecifierPublic)
	class FString                                 HMS_ReconnectAddress;                              // 0x02E0(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HMS_IsRehosting;                                   // 0x02F0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HMS_IsReconnecting;                                // 0x02F1(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2F2[0xE];                                      // 0x02F2(0x000E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HMS_OnPostLoadMapWithWorld();
	void HMS_ReconnectToGame();
	void HMS_RehostGame();
	void HMS_ResetHostMigration();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HMS_GameInstance">();
	}
	static class UHMS_GameInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHMS_GameInstance>();
	}
};
static_assert(alignof(UHMS_GameInstance) == 0x000008, "Wrong alignment on UHMS_GameInstance");
static_assert(sizeof(UHMS_GameInstance) == 0x000300, "Wrong size on UHMS_GameInstance");
static_assert(offsetof(UHMS_GameInstance, HMS_RehostGameSave) == 0x0001C0, "Member 'UHMS_GameInstance::HMS_RehostGameSave' has a wrong offset!");
static_assert(offsetof(UHMS_GameInstance, HMS_ReconnectAddress) == 0x0002E0, "Member 'UHMS_GameInstance::HMS_ReconnectAddress' has a wrong offset!");
static_assert(offsetof(UHMS_GameInstance, HMS_IsRehosting) == 0x0002F0, "Member 'UHMS_GameInstance::HMS_IsRehosting' has a wrong offset!");
static_assert(offsetof(UHMS_GameInstance, HMS_IsReconnecting) == 0x0002F1, "Member 'UHMS_GameInstance::HMS_IsReconnecting' has a wrong offset!");

// Class HostMigrationSystem.HMS_GameMode
// 0x01C0 (0x0538 - 0x0378)
class AHMS_GameMode final : public AGameMode
{
public:
	struct FHMS_MigrationSettings                 HMS_MigrationSettings;                             // 0x0378(0x0028)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                          HMS_IsRunningAsyncCreateGameSaveTask;              // 0x03A0(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HMS_IsRunningGameSaveUpdate;                       // 0x03A1(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3A2[0x2];                                      // 0x03A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HMS_CurrentPreviousPlayersReconnectTimeout;        // 0x03A4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHMS_GameSave                          HMS_CurrentGameSave;                               // 0x03A8(0x0120)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FHMS_ByteBufferTransferState           HMS_CurrentGameSaveSourceTransferState;            // 0x04C8(0x0030)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AHMS_PlayerController>   HMS_CurrentChosenNewHost;                          // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHMS_CustomGameSaveDataObject*          HMS_CustomGameSaveDataObject;                      // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHMS_MigrationFlags                    HMS_MigrationFlags;                                // 0x0508(0x0002)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_50A[0x2E];                                     // 0x050A(0x002E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HMS_LoadGameSave(const struct FHMS_GameSave& GameSave);
	void HMS_OnCreateGameSaveTaskComplete();
	void HMS_OnCreateGameSaveTaskStarted();
	void HMS_OnGameRehosted();
	class AHMS_PlayerController* HMS_PickNewHost();
	void HMS_StartAsyncCreateGameSaveTask(const struct FHMS_CreateGameSaveParams& CreateGameSaveParams);
	bool HMS_StartGameSaveUpdateTimer();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HMS_GameMode">();
	}
	static class AHMS_GameMode* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHMS_GameMode>();
	}
};
static_assert(alignof(AHMS_GameMode) == 0x000008, "Wrong alignment on AHMS_GameMode");
static_assert(sizeof(AHMS_GameMode) == 0x000538, "Wrong size on AHMS_GameMode");
static_assert(offsetof(AHMS_GameMode, HMS_MigrationSettings) == 0x000378, "Member 'AHMS_GameMode::HMS_MigrationSettings' has a wrong offset!");
static_assert(offsetof(AHMS_GameMode, HMS_IsRunningAsyncCreateGameSaveTask) == 0x0003A0, "Member 'AHMS_GameMode::HMS_IsRunningAsyncCreateGameSaveTask' has a wrong offset!");
static_assert(offsetof(AHMS_GameMode, HMS_IsRunningGameSaveUpdate) == 0x0003A1, "Member 'AHMS_GameMode::HMS_IsRunningGameSaveUpdate' has a wrong offset!");
static_assert(offsetof(AHMS_GameMode, HMS_CurrentPreviousPlayersReconnectTimeout) == 0x0003A4, "Member 'AHMS_GameMode::HMS_CurrentPreviousPlayersReconnectTimeout' has a wrong offset!");
static_assert(offsetof(AHMS_GameMode, HMS_CurrentGameSave) == 0x0003A8, "Member 'AHMS_GameMode::HMS_CurrentGameSave' has a wrong offset!");
static_assert(offsetof(AHMS_GameMode, HMS_CurrentGameSaveSourceTransferState) == 0x0004C8, "Member 'AHMS_GameMode::HMS_CurrentGameSaveSourceTransferState' has a wrong offset!");
static_assert(offsetof(AHMS_GameMode, HMS_CurrentChosenNewHost) == 0x0004F8, "Member 'AHMS_GameMode::HMS_CurrentChosenNewHost' has a wrong offset!");
static_assert(offsetof(AHMS_GameMode, HMS_CustomGameSaveDataObject) == 0x000500, "Member 'AHMS_GameMode::HMS_CustomGameSaveDataObject' has a wrong offset!");
static_assert(offsetof(AHMS_GameMode, HMS_MigrationFlags) == 0x000508, "Member 'AHMS_GameMode::HMS_MigrationFlags' has a wrong offset!");

// Class HostMigrationSystem.HMS_InterfaceComponent
// 0x0030 (0x00D0 - 0x00A0)
class UHMS_InterfaceComponent final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             HMS_PreSaveActor;                                  // 0x00A0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             HMS_PostLoadActor;                                 // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int64                                         HMS_ActorID;                                       // 0x00C0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          HMS_ShouldSerialize;                               // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HMS_LoadActorSave(const struct FHMS_ActorSave& ActorSave);

	void HMS_MakeActorSave(struct FHMS_ActorSave* ActorSave) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HMS_InterfaceComponent">();
	}
	static class UHMS_InterfaceComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHMS_InterfaceComponent>();
	}
};
static_assert(alignof(UHMS_InterfaceComponent) == 0x000008, "Wrong alignment on UHMS_InterfaceComponent");
static_assert(sizeof(UHMS_InterfaceComponent) == 0x0000D0, "Wrong size on UHMS_InterfaceComponent");
static_assert(offsetof(UHMS_InterfaceComponent, HMS_PreSaveActor) == 0x0000A0, "Member 'UHMS_InterfaceComponent::HMS_PreSaveActor' has a wrong offset!");
static_assert(offsetof(UHMS_InterfaceComponent, HMS_PostLoadActor) == 0x0000B0, "Member 'UHMS_InterfaceComponent::HMS_PostLoadActor' has a wrong offset!");
static_assert(offsetof(UHMS_InterfaceComponent, HMS_ActorID) == 0x0000C0, "Member 'UHMS_InterfaceComponent::HMS_ActorID' has a wrong offset!");
static_assert(offsetof(UHMS_InterfaceComponent, HMS_ShouldSerialize) == 0x0000C8, "Member 'UHMS_InterfaceComponent::HMS_ShouldSerialize' has a wrong offset!");

// Class HostMigrationSystem.HMS_PersistentUserWidget
// 0x0008 (0x0288 - 0x0280)
class UHMS_PersistentUserWidget final : public UUserWidget
{
public:
	bool                                          HMS_Persistent;                                    // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HMS_PersistentUserWidget">();
	}
	static class UHMS_PersistentUserWidget* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHMS_PersistentUserWidget>();
	}
};
static_assert(alignof(UHMS_PersistentUserWidget) == 0x000008, "Wrong alignment on UHMS_PersistentUserWidget");
static_assert(sizeof(UHMS_PersistentUserWidget) == 0x000288, "Wrong size on UHMS_PersistentUserWidget");
static_assert(offsetof(UHMS_PersistentUserWidget, HMS_Persistent) == 0x000280, "Member 'UHMS_PersistentUserWidget::HMS_Persistent' has a wrong offset!");

}

