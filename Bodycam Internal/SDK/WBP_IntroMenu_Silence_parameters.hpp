#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IntroMenu_Silence

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "FFontStyle_structs.hpp"
#include "SteamCorePro_structs.hpp"
#include "ETransitionAnimation_structs.hpp"
#include "OnlineSubsystemUtils_structs.hpp"
#include "EInputDeviceType_structs.hpp"


namespace SDK::Params
{

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.Completed_346511C34FB5E35C0E7CA89BA000E998
// 0x0010 (0x0010 - 0x0000)
struct WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998 final
{
public:
	class USaveGame*                              SaveGame;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bSuccess;                                          // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998) == 0x000008, "Wrong alignment on WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998");
static_assert(sizeof(WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998) == 0x000010, "Wrong size on WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998");
static_assert(offsetof(WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998, SaveGame) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998::SaveGame' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998, bSuccess) == 0x000008, "Member 'WBP_IntroMenu_Silence_C_Completed_346511C34FB5E35C0E7CA89BA000E998::bSuccess' has a wrong offset!");

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.ExecuteUbergraph_WBP_IntroMenu_Silence
// 0x01F8 (0x01F8 - 0x0000)
struct WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenSource_ReturnValue;                   // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKeyEvent                              K2Node_Event_KeyEvent;                             // 0x0008(0x0040)()
	bool                                          K2Node_Event_bAnyKeyReleased;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSaveGameExist_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBodycamGI_C*                           K2Node_DynamicCast_AsBodycam_GI;                   // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   K2Node_Event_ToMenu;                               // 0x0078(0x0030)(HasGetValueTypeHash)
	class FString                                 K2Node_Event_MenuLayer;                            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ETransitionAnimation                          K2Node_Event_TransitionAnimation;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_Event_TransitionSpeed;                      // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_Event_InPayload;                            // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetRichPresence_ReturnValue;              // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MenuContainer_C*                   CallFunc_GetOwningContainer_OwningContainer;       // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_InteractableMenu_C*                K2Node_Event_NavigateFromMenu;                     // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              K2Node_Event_InputDeviceType;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              Temp_object_Variable;                              // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_MenuContainer_C*                   CallFunc_GetOwningContainer_OwningContainer_1;     // 0x0108(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_MenuContainer_C*                   CallFunc_GetOwningContainer_OwningContainer_2;     // 0x0110(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                              K2Node_CustomEvent_SaveGame;                       // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USG_PlayerInfo_C*                       CallFunc_CreateSaveGameObject_ReturnValue;         // 0x0128(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncActionHandleSaveGame*             CallFunc_AsyncSaveGameToSlot_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class USaveGame* SaveGame, bool bSuccess)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x013C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14C[0x4];                                      // 0x014C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, struct FSteamSessionSearchSetting> K2Node_MakeMap_Map;                                // 0x0150(0x0050)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSteamID                               CallFunc_GetSteamID_ReturnValue;                   // 0x01B0(0x0008)(NoDestructor)
	class FString                                 CallFunc_GetFriendPersonaName_ReturnValue;         // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USteamCoreProUpdateSession*             CallFunc_UpdateSteamCoreProSession_ReturnValue;    // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DB[0x5];                                      // 0x01DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetIPCountry_ReturnValue;                 // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetCurrentCulture_ReturnValue;            // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence) == 0x000008, "Wrong alignment on WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence");
static_assert(sizeof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence) == 0x0001F8, "Wrong size on WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, EntryPoint) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_OpenSource_ReturnValue) == 0x000005, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_OpenSource_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_IsDesignTime) == 0x000006, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_KeyEvent) == 0x000008, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_bAnyKeyReleased) == 0x000048, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_bAnyKeyReleased' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_DoesSaveGameExist_ReturnValue) == 0x000049, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_DoesSaveGameExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_GetGameInstance_ReturnValue) == 0x000060, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_DynamicCast_AsBodycam_GI) == 0x000068, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_DynamicCast_AsBodycam_GI' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_ToMenu) == 0x000078, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_ToMenu' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_MenuLayer) == 0x0000A8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_MenuLayer' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_TransitionAnimation) == 0x0000B8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_TransitionAnimation' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_TransitionSpeed) == 0x0000C0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_TransitionSpeed' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_InPayload) == 0x0000C8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_InPayload' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_SetRichPresence_ReturnValue) == 0x0000D0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_SetRichPresence_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_GetOwningContainer_OwningContainer) == 0x0000D8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_GetOwningContainer_OwningContainer' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_NavigateFromMenu) == 0x0000E0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_NavigateFromMenu' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_Event_InputDeviceType) == 0x0000E8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_Event_InputDeviceType' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, Temp_object_Variable) == 0x0000F0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, Temp_bool_Variable) == 0x0000F8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_PlayAnimation_ReturnValue) == 0x000100, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_GetOwningContainer_OwningContainer_1) == 0x000108, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_GetOwningContainer_OwningContainer_1' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_GetOwningContainer_OwningContainer_2) == 0x000110, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_GetOwningContainer_OwningContainer_2' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_CustomEvent_SaveGame) == 0x000118, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_CustomEvent_SaveGame' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_CustomEvent_bSuccess) == 0x000120, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_CustomEvent_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_CreateSaveGameObject_ReturnValue) == 0x000128, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_CreateSaveGameObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_AsyncSaveGameToSlot_ReturnValue) == 0x000130, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_AsyncSaveGameToSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_IsValid_ReturnValue) == 0x000138, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_CreateDelegate_OutputDelegate_1) == 0x00013C, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, K2Node_MakeMap_Map) == 0x000150, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::K2Node_MakeMap_Map' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_Concat_StrStr_ReturnValue) == 0x0001A0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_GetSteamID_ReturnValue) == 0x0001B0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_GetSteamID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_GetFriendPersonaName_ReturnValue) == 0x0001B8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_GetFriendPersonaName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_GetPlayerController_ReturnValue) == 0x0001C8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_UpdateSteamCoreProSession_ReturnValue) == 0x0001D0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_UpdateSteamCoreProSession_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_HasAuthority_ReturnValue) == 0x0001D8, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_IsValid_ReturnValue_1) == 0x0001D9, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, Temp_bool_IsClosed_Variable) == 0x0001DA, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_GetIPCountry_ReturnValue) == 0x0001E0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_GetIPCountry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence, CallFunc_SetCurrentCulture_ReturnValue) == 0x0001F0, "Member 'WBP_IntroMenu_Silence_C_ExecuteUbergraph_WBP_IntroMenu_Silence::CallFunc_SetCurrentCulture_ReturnValue' has a wrong offset!");

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OnNavigationEnter
// 0x0010 (0x0010 - 0x0000)
struct WBP_IntroMenu_Silence_C_OnNavigationEnter final
{
public:
	class UWBP_InteractableMenu_C*                NavigateFromMenu;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              InputDeviceType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_OnNavigationEnter) == 0x000008, "Wrong alignment on WBP_IntroMenu_Silence_C_OnNavigationEnter");
static_assert(sizeof(WBP_IntroMenu_Silence_C_OnNavigationEnter) == 0x000010, "Wrong size on WBP_IntroMenu_Silence_C_OnNavigationEnter");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnNavigationEnter, NavigateFromMenu) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_OnNavigationEnter::NavigateFromMenu' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnNavigationEnter, InputDeviceType) == 0x000008, "Member 'WBP_IntroMenu_Silence_C_OnNavigationEnter::InputDeviceType' has a wrong offset!");

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OnNavigationExit
// 0x0058 (0x0058 - 0x0000)
struct WBP_IntroMenu_Silence_C_OnNavigationExit final
{
public:
	TSoftClassPtr<class UClass>                   ToMenu;                                            // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class FString                                 MenuLayer_0;                                       // 0x0030(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ETransitionAnimation                          TransitionAnimation;                               // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TransitionSpeed;                                   // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                InPayload;                                         // 0x0050(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_OnNavigationExit) == 0x000008, "Wrong alignment on WBP_IntroMenu_Silence_C_OnNavigationExit");
static_assert(sizeof(WBP_IntroMenu_Silence_C_OnNavigationExit) == 0x000058, "Wrong size on WBP_IntroMenu_Silence_C_OnNavigationExit");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnNavigationExit, ToMenu) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_OnNavigationExit::ToMenu' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnNavigationExit, MenuLayer_0) == 0x000030, "Member 'WBP_IntroMenu_Silence_C_OnNavigationExit::MenuLayer_0' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnNavigationExit, TransitionAnimation) == 0x000040, "Member 'WBP_IntroMenu_Silence_C_OnNavigationExit::TransitionAnimation' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnNavigationExit, TransitionSpeed) == 0x000048, "Member 'WBP_IntroMenu_Silence_C_OnNavigationExit::TransitionSpeed' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnNavigationExit, InPayload) == 0x000050, "Member 'WBP_IntroMenu_Silence_C_OnNavigationExit::InPayload' has a wrong offset!");

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OnPressedAnyKey
// 0x0048 (0x0048 - 0x0000)
struct WBP_IntroMenu_Silence_C_OnPressedAnyKey final
{
public:
	struct FKeyEvent                              KeyEvent;                                          // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          bAnyKeyReleased;                                   // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_OnPressedAnyKey) == 0x000008, "Wrong alignment on WBP_IntroMenu_Silence_C_OnPressedAnyKey");
static_assert(sizeof(WBP_IntroMenu_Silence_C_OnPressedAnyKey) == 0x000048, "Wrong size on WBP_IntroMenu_Silence_C_OnPressedAnyKey");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnPressedAnyKey, KeyEvent) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_OnPressedAnyKey::KeyEvent' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OnPressedAnyKey, bAnyKeyReleased) == 0x000040, "Member 'WBP_IntroMenu_Silence_C_OnPressedAnyKey::bAnyKeyReleased' has a wrong offset!");

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.OverrideWidgetStyleFromConfig
// 0x0080 (0x0080 - 0x0000)
struct WBP_IntroMenu_Silence_C_OverrideWidgetStyleFromConfig final
{
public:
	struct FFFontStyle                            CallFunc_GetFontStyleByName_FontStyle;             // 0x0000(0x0080)(HasGetValueTypeHash)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_OverrideWidgetStyleFromConfig) == 0x000008, "Wrong alignment on WBP_IntroMenu_Silence_C_OverrideWidgetStyleFromConfig");
static_assert(sizeof(WBP_IntroMenu_Silence_C_OverrideWidgetStyleFromConfig) == 0x000080, "Wrong size on WBP_IntroMenu_Silence_C_OverrideWidgetStyleFromConfig");
static_assert(offsetof(WBP_IntroMenu_Silence_C_OverrideWidgetStyleFromConfig, CallFunc_GetFontStyleByName_FontStyle) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_OverrideWidgetStyleFromConfig::CallFunc_GetFontStyleByName_FontStyle' has a wrong offset!");

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_IntroMenu_Silence_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_IntroMenu_Silence_C_PreConstruct");
static_assert(sizeof(WBP_IntroMenu_Silence_C_PreConstruct) == 0x000001, "Wrong size on WBP_IntroMenu_Silence_C_PreConstruct");
static_assert(offsetof(WBP_IntroMenu_Silence_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.SetSessionSettings
// 0x0030 (0x0030 - 0x0000)
struct WBP_IntroMenu_Silence_C_SetSessionSettings final
{
public:
	class FString                                 CallFunc_GetFriendPersonaName_ReturnValue;         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetIPCountry_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSteamID                               CallFunc_GetSteamID_ReturnValue;                   // 0x0028(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_SetSessionSettings) == 0x000008, "Wrong alignment on WBP_IntroMenu_Silence_C_SetSessionSettings");
static_assert(sizeof(WBP_IntroMenu_Silence_C_SetSessionSettings) == 0x000030, "Wrong size on WBP_IntroMenu_Silence_C_SetSessionSettings");
static_assert(offsetof(WBP_IntroMenu_Silence_C_SetSessionSettings, CallFunc_GetFriendPersonaName_ReturnValue) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_SetSessionSettings::CallFunc_GetFriendPersonaName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_SetSessionSettings, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000010, "Member 'WBP_IntroMenu_Silence_C_SetSessionSettings::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_SetSessionSettings, CallFunc_GetIPCountry_ReturnValue) == 0x000018, "Member 'WBP_IntroMenu_Silence_C_SetSessionSettings::CallFunc_GetIPCountry_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_SetSessionSettings, CallFunc_GetSteamID_ReturnValue) == 0x000028, "Member 'WBP_IntroMenu_Silence_C_SetSessionSettings::CallFunc_GetSteamID_ReturnValue' has a wrong offset!");

// Function WBP_IntroMenu_Silence.WBP_IntroMenu_Silence_C.VerifyAlreadyLobby
// 0x01C8 (0x01C8 - 0x0000)
struct WBP_IntroMenu_Silence_C_VerifyAlreadyLobby final
{
public:
	TArray<struct FSteamSessionSetting>           Array;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FBlueprintSessionResult                SessionResults;                                    // 0x0010(0x0120)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          AlreadyLobby_;                                     // 0x0130(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_131[0x3];                                      // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSteamSessionSetting                   CallFunc_Array_Get_Item;                           // 0x0140(0x0028)()
	class FString                                 CallFunc_GetString_Key;                            // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetString_OutValue;                       // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetString_ReturnValue;                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18A[0x6];                                      // 0x018A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_ToUpper_ReturnValue;                      // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A1[0x3];                                      // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetFriendPersonaName_ReturnValue;         // 0x01A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSteamID                               CallFunc_GetSteamID_ReturnValue;                   // 0x01C0(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby) == 0x000008, "Wrong alignment on WBP_IntroMenu_Silence_C_VerifyAlreadyLobby");
static_assert(sizeof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby) == 0x0001C8, "Wrong size on WBP_IntroMenu_Silence_C_VerifyAlreadyLobby");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, Array) == 0x000000, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::Array' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, SessionResults) == 0x000010, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::SessionResults' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, AlreadyLobby_) == 0x000130, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::AlreadyLobby_' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_Array_Length_ReturnValue) == 0x000134, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, Temp_int_Array_Index_Variable) == 0x000138, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, Temp_int_Loop_Counter_Variable) == 0x00013C, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_Array_Get_Item) == 0x000140, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_GetString_Key) == 0x000168, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_GetString_Key' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_GetString_OutValue) == 0x000178, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_GetString_OutValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_GetString_ReturnValue) == 0x000188, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_GetString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_Less_IntInt_ReturnValue) == 0x000189, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_ToUpper_ReturnValue) == 0x000190, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_ToUpper_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_EqualEqual_StriStri_ReturnValue) == 0x0001A0, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_EqualEqual_StriStri_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_Add_IntInt_ReturnValue) == 0x0001A4, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_GetFriendPersonaName_ReturnValue) == 0x0001A8, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_GetFriendPersonaName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001B8, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IntroMenu_Silence_C_VerifyAlreadyLobby, CallFunc_GetSteamID_ReturnValue) == 0x0001C0, "Member 'WBP_IntroMenu_Silence_C_VerifyAlreadyLobby::CallFunc_GetSteamID_ReturnValue' has a wrong offset!");

}

