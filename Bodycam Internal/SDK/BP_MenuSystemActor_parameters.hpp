#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MenuSystemActor

#include "Basic.hpp"

#include "EInputDeviceType_structs.hpp"
#include "FUILayer_structs.hpp"


namespace SDK::Params
{

// Function BP_MenuSystemActor.BP_MenuSystemActor_C.CreateAndShowMenu
// 0x0050 (0x0050 - 0x0000)
struct BP_MenuSystemActor_C_CreateAndShowMenu final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              CurrentInputDevice;                                // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   FirstShownMenu;                                    // 0x0010(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                Payload;                                           // 0x0040(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMainMenuLevel;                                   // 0x0048(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MenuSystemActor_C_CreateAndShowMenu) == 0x000008, "Wrong alignment on BP_MenuSystemActor_C_CreateAndShowMenu");
static_assert(sizeof(BP_MenuSystemActor_C_CreateAndShowMenu) == 0x000050, "Wrong size on BP_MenuSystemActor_C_CreateAndShowMenu");
static_assert(offsetof(BP_MenuSystemActor_C_CreateAndShowMenu, PlayerController) == 0x000000, "Member 'BP_MenuSystemActor_C_CreateAndShowMenu::PlayerController' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateAndShowMenu, CurrentInputDevice) == 0x000008, "Member 'BP_MenuSystemActor_C_CreateAndShowMenu::CurrentInputDevice' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateAndShowMenu, FirstShownMenu) == 0x000010, "Member 'BP_MenuSystemActor_C_CreateAndShowMenu::FirstShownMenu' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateAndShowMenu, Payload) == 0x000040, "Member 'BP_MenuSystemActor_C_CreateAndShowMenu::Payload' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateAndShowMenu, IsMainMenuLevel) == 0x000048, "Member 'BP_MenuSystemActor_C_CreateAndShowMenu::IsMainMenuLevel' has a wrong offset!");

// Function BP_MenuSystemActor.BP_MenuSystemActor_C.CreateMenuContainer
// 0x0108 (0x0108 - 0x0000)
struct BP_MenuSystemActor_C_CreateMenuContainer final
{
public:
	EInputDeviceType                              ContainerInputDeviceType;                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   FirstShownMenu;                                    // 0x0008(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UObject*                                Payload;                                           // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              CurrentInputDevice;                                // 0x0040(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      PlayerController;                                  // 0x0048(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMainMenuLevel;                                   // 0x0050(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MenuContainerInstantiator_C*       CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_DynamicCast_AsUser_Widget;                  // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UWBP_MenuContainerInstantiator_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x0078(0x0030)(InstancedReference, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_DynamicCast_AsUser_Widget_1;                // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_MenuSystemConfig_C*                CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSplitscreenForceDisabled_ReturnValue;   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetNumLocalPlayerControllers_ReturnValue; // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFUILayer                              CallFunc_GetUILayer_UILayer;                       // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFUILayer                              CallFunc_GetUILayer_UILayer_1;                     // 0x00E4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_MenuSystemConfig_C*                CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig_1; // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AddToPlayerScreen_ReturnValue;            // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MenuSystemActor_C_CreateMenuContainer) == 0x000008, "Wrong alignment on BP_MenuSystemActor_C_CreateMenuContainer");
static_assert(sizeof(BP_MenuSystemActor_C_CreateMenuContainer) == 0x000108, "Wrong size on BP_MenuSystemActor_C_CreateMenuContainer");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, ContainerInputDeviceType) == 0x000000, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::ContainerInputDeviceType' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, FirstShownMenu) == 0x000008, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::FirstShownMenu' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, Payload) == 0x000038, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::Payload' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CurrentInputDevice) == 0x000040, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CurrentInputDevice' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, PlayerController) == 0x000048, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::PlayerController' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, IsMainMenuLevel) == 0x000050, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::IsMainMenuLevel' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_Create_ReturnValue) == 0x000058, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000060, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, K2Node_DynamicCast_AsUser_Widget) == 0x000068, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::K2Node_DynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x000078, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1) == 0x0000A8, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, K2Node_DynamicCast_AsUser_Widget_1) == 0x0000B0, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::K2Node_DynamicCast_AsUser_Widget_1' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, K2Node_DynamicCast_bSuccess_1) == 0x0000B8, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig) == 0x0000C0, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_IsSplitscreenForceDisabled_ReturnValue) == 0x0000C8, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_IsSplitscreenForceDisabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_GetNumLocalPlayerControllers_ReturnValue) == 0x0000CC, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_GetNumLocalPlayerControllers_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_GetUILayer_UILayer) == 0x0000D0, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_GetUILayer_UILayer' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E0, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_GetUILayer_UILayer_1) == 0x0000E4, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_GetUILayer_UILayer_1' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig_1) == 0x0000F8, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig_1' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_CreateMenuContainer, CallFunc_AddToPlayerScreen_ReturnValue) == 0x000100, "Member 'BP_MenuSystemActor_C_CreateMenuContainer::CallFunc_AddToPlayerScreen_ReturnValue' has a wrong offset!");

// Function BP_MenuSystemActor.BP_MenuSystemActor_C.ExecuteUbergraph_BP_MenuSystemActor
// 0x00E0 (0x00E0 - 0x0000)
struct BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_Event_PlayerController_1;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_CustomEvent_PlayerController;               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              K2Node_CustomEvent_CurrentInputDevice;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftClassPtr<class UClass>                   K2Node_CustomEvent_FirstShownMenu;                 // 0x0020(0x0030)(HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Payload;                        // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsMainMenuLevel;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_CreatedByPlayerIndex;           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MenuControllerComponent_C*          CallFunc_GetComponentByClass_ReturnValue;          // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_Event_PlayerController;                     // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              K2Node_Event_InputDeviceType;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_MenuSystemConfig_C*                CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig; // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_BC_ShowCase_C*                      K2Node_DynamicCast_AsBP_BC_Show_Case;              // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_DynamicCast_AsUser_Widget;                  // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor) == 0x000008, "Wrong alignment on BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor");
static_assert(sizeof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor) == 0x0000E0, "Wrong size on BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, EntryPoint) == 0x000000, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_Event_PlayerController_1) == 0x000008, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_Event_PlayerController_1' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_CustomEvent_PlayerController) == 0x000010, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_CustomEvent_PlayerController' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_CustomEvent_CurrentInputDevice) == 0x000018, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_CustomEvent_CurrentInputDevice' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_CustomEvent_FirstShownMenu) == 0x000020, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_CustomEvent_FirstShownMenu' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_CustomEvent_Payload) == 0x000050, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_CustomEvent_Payload' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_CustomEvent_IsMainMenuLevel) == 0x000058, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_CustomEvent_IsMainMenuLevel' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_CustomEvent_CreatedByPlayerIndex) == 0x00005C, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_CustomEvent_CreatedByPlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_GetComponentByClass_ReturnValue) == 0x000068, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_Event_PlayerController) == 0x000070, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_Event_PlayerController' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_Event_InputDeviceType) == 0x000078, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_Event_InputDeviceType' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig) == 0x000080, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_GetMenuSystemConfigFromLibrary_MenuSystemConfig' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_GetGameInstance_ReturnValue) == 0x000088, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_DoesImplementInterface_ReturnValue) == 0x000090, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_GetPlayerController_ReturnValue_1) == 0x000098, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_GetPlayerCharacter_ReturnValue) == 0x0000A0, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_GetPlayerController_ReturnValue_2) == 0x0000A8, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_DynamicCast_AsBP_BC_Show_Case) == 0x0000B0, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_DynamicCast_AsBP_BC_Show_Case' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_IsValid_ReturnValue_1) == 0x0000B9, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x0000C0, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x0000C8, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_DynamicCast_AsUser_Widget) == 0x0000D0, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_DynamicCast_AsUser_Widget' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'BP_MenuSystemActor_C_ExecuteUbergraph_BP_MenuSystemActor::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function BP_MenuSystemActor.BP_MenuSystemActor_C.OnSetupErrorCheck
// 0x0004 (0x0004 - 0x0000)
struct BP_MenuSystemActor_C_OnSetupErrorCheck final
{
public:
	int32                                         CreatedByPlayerIndex;                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MenuSystemActor_C_OnSetupErrorCheck) == 0x000004, "Wrong alignment on BP_MenuSystemActor_C_OnSetupErrorCheck");
static_assert(sizeof(BP_MenuSystemActor_C_OnSetupErrorCheck) == 0x000004, "Wrong size on BP_MenuSystemActor_C_OnSetupErrorCheck");
static_assert(offsetof(BP_MenuSystemActor_C_OnSetupErrorCheck, CreatedByPlayerIndex) == 0x000000, "Member 'BP_MenuSystemActor_C_OnSetupErrorCheck::CreatedByPlayerIndex' has a wrong offset!");

// Function BP_MenuSystemActor.BP_MenuSystemActor_C.Pause
// 0x0010 (0x0010 - 0x0000)
struct BP_MenuSystemActor_C_Pause final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              InputDeviceType;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MenuSystemActor_C_Pause) == 0x000008, "Wrong alignment on BP_MenuSystemActor_C_Pause");
static_assert(sizeof(BP_MenuSystemActor_C_Pause) == 0x000010, "Wrong size on BP_MenuSystemActor_C_Pause");
static_assert(offsetof(BP_MenuSystemActor_C_Pause, PlayerController) == 0x000000, "Member 'BP_MenuSystemActor_C_Pause::PlayerController' has a wrong offset!");
static_assert(offsetof(BP_MenuSystemActor_C_Pause, InputDeviceType) == 0x000008, "Member 'BP_MenuSystemActor_C_Pause::InputDeviceType' has a wrong offset!");

// Function BP_MenuSystemActor.BP_MenuSystemActor_C.Resume
// 0x0008 (0x0008 - 0x0000)
struct BP_MenuSystemActor_C_Resume final
{
public:
	class APlayerController*                      PlayerController;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MenuSystemActor_C_Resume) == 0x000008, "Wrong alignment on BP_MenuSystemActor_C_Resume");
static_assert(sizeof(BP_MenuSystemActor_C_Resume) == 0x000008, "Wrong size on BP_MenuSystemActor_C_Resume");
static_assert(offsetof(BP_MenuSystemActor_C_Resume, PlayerController) == 0x000000, "Member 'BP_MenuSystemActor_C_Resume::PlayerController' has a wrong offset!");

}
