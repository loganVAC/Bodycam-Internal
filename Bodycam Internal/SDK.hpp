#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Bodycam
// 5.2.1-26001984+++UE5+Release-5.2

// Includes the entire SDK, include files directly for faster compilation!

#include "SDK/Basic.hpp"
#include "SDK/CoreUObject_structs.hpp"
#include "SDK/CoreUObject_classes.hpp"
#include "SDK/PhysicsCore_structs.hpp"
#include "SDK/Chaos_structs.hpp"
#include "SDK/InputCore_structs.hpp"
#include "SDK/Slate_structs.hpp"
#include "SDK/Engine_structs.hpp"
#include "SDK/AudioPlatformConfiguration_structs.hpp"
#include "SDK/PhysicsCore_classes.hpp"
#include "SDK/NetCore_structs.hpp"
#include "SDK/NetCore_classes.hpp"
#include "SDK/DeveloperSettings_structs.hpp"
#include "SDK/DeveloperSettings_classes.hpp"
#include "SDK/AudioExtensions_structs.hpp"
#include "SDK/AudioExtensions_classes.hpp"
#include "SDK/SlateCore_structs.hpp"
#include "SDK/Engine_classes.hpp"
#include "SDK/JsonBlueprintUtilities_classes.hpp"
#include "SDK/PacketHandler_classes.hpp"
#include "SDK/OnlineSubsystemSteamCore_classes.hpp"
#include "SDK/OnlineSubsystemUtils_structs.hpp"
#include "SDK/OnlineSubsystem_structs.hpp"
#include "SDK/OnlineSubsystemUtils_classes.hpp"
#include "SDK/MRMesh_structs.hpp"
#include "SDK/MRMesh_classes.hpp"
#include "SDK/SteamCorePro_structs.hpp"
#include "SDK/SteamCoreShared_structs.hpp"
#include "SDK/SteamCorePro_classes.hpp"
#include "SDK/SteamCoreSockets_classes.hpp"
#include "SDK/OnlineSubsystem_classes.hpp"
#include "SDK/AudioMixer_structs.hpp"
#include "SDK/AudioMixer_classes.hpp"
#include "SDK/MovieRenderPipelineCore_structs.hpp"
#include "SDK/OpenColorIO_structs.hpp"
#include "SDK/MovieRenderPipelineCore_classes.hpp"
#include "SDK/UMG_structs.hpp"
#include "SDK/MovieScene_structs.hpp"
#include "SDK/MovieScene_classes.hpp"
#include "SDK/UMG_classes.hpp"
#include "SDK/MovieRenderPipelineSettings_structs.hpp"
#include "SDK/MovieRenderPipelineSettings_classes.hpp"
#include "SDK/MovieRenderPipelineRenderPasses_structs.hpp"
#include "SDK/ActorLayerUtilities_structs.hpp"
#include "SDK/MovieRenderPipelineRenderPasses_classes.hpp"
#include "SDK/ActorLayerUtilities_classes.hpp"
#include "SDK/ConsoleVariablesEditorRuntime_structs.hpp"
#include "SDK/ConsoleVariablesEditorRuntime_classes.hpp"
#include "SDK/SequencerScripting_structs.hpp"
#include "SDK/SequencerScripting_classes.hpp"
#include "SDK/OpenColorIO_classes.hpp"
#include "SDK/DiscordRichPresence_structs.hpp"
#include "SDK/DiscordRichPresence_classes.hpp"
#include "SDK/Mantle_Asset_structs.hpp"
#include "SDK/Composure_structs.hpp"
#include "SDK/Composure_classes.hpp"
#include "SDK/EWidgetStyleState_structs.hpp"
#include "SDK/AnimationCore_structs.hpp"
#include "SDK/AnimGraphRuntime_structs.hpp"
#include "SDK/MovieSceneTracks_structs.hpp"
#include "SDK/Constraints_structs.hpp"
#include "SDK/MovieSceneTracks_classes.hpp"
#include "SDK/CinematicCamera_structs.hpp"
#include "SDK/CameraCalibrationCore_structs.hpp"
#include "SDK/CameraCalibrationCore_classes.hpp"
#include "SDK/ProceduralMeshComponent_structs.hpp"
#include "SDK/ProceduralMeshComponent_classes.hpp"
#include "SDK/CameraCalibrationCoreMovieScene_classes.hpp"
#include "SDK/LiveLinkInterface_structs.hpp"
#include "SDK/LiveLinkInterface_classes.hpp"
#include "SDK/LiveLink_structs.hpp"
#include "SDK/LiveLink_classes.hpp"
#include "SDK/TimeManagement_structs.hpp"
#include "SDK/TimeManagement_classes.hpp"
#include "SDK/BP_CustomSaveGameObject_classes.hpp"
#include "SDK/LiveLinkComponents_structs.hpp"
#include "SDK/LiveLinkComponents_classes.hpp"
#include "SDK/LiveLinkMovieScene_structs.hpp"
#include "SDK/LiveLinkMovieScene_classes.hpp"
#include "SDK/E_Team_structs.hpp"
#include "SDK/GameplayTags_structs.hpp"
#include "SDK/ALS_Gait_structs.hpp"
#include "SDK/EN_ShopItemPrice_structs.hpp"
#include "SDK/EN_ShopItemColor_structs.hpp"
#include "SDK/EN_ShopItemType_structs.hpp"
#include "SDK/ShopItemPromoRulesEnum_structs.hpp"
#include "SDK/EN_ShopItemSupClass_structs.hpp"
#include "SDK/EN_ShopItemClass_structs.hpp"
#include "SDK/ST_DefaultSteamItem_structs.hpp"
#include "SDK/MantleType_structs.hpp"
#include "SDK/ALS_OverlayState_structs.hpp"
#include "SDK/GameMode_structs.hpp"
#include "SDK/E_Emote_structs.hpp"
#include "SDK/ALS_AnimMan_CharacterBP_classes.hpp"
#include "SDK/TakeMovieScene_classes.hpp"
#include "SDK/E_Detection_structs.hpp"
#include "SDK/HUD_ItemDetection_classes.hpp"
#include "SDK/MediaIOCore_structs.hpp"
#include "SDK/ImageWriteQueue_structs.hpp"
#include "SDK/MediaIOCore_classes.hpp"
#include "SDK/UDS_Occlusion_Volume_Interface_classes.hpp"
#include "SDK/Spatialization_classes.hpp"
#include "SDK/UDS_OcclusionShape_structs.hpp"
#include "SDK/C3_KickstartBlueprintLibrary_structs.hpp"
#include "SDK/C3_KickstartBlueprintLibrary_classes.hpp"
#include "SDK/WebBrowserWidget_classes.hpp"
#include "SDK/NiagaraCore_structs.hpp"
#include "SDK/NiagaraCore_classes.hpp"
#include "SDK/NiagaraShader_structs.hpp"
#include "SDK/Niagara_structs.hpp"
#include "SDK/NiagaraShader_classes.hpp"
#include "SDK/Niagara_classes.hpp"
#include "SDK/NiagaraAnimNotifies_structs.hpp"
#include "SDK/NiagaraAnimNotifies_classes.hpp"
#include "SDK/RigLogicModule_structs.hpp"
#include "SDK/RigLogicModule_classes.hpp"
#include "SDK/RigVM_structs.hpp"
#include "SDK/ControlRig_structs.hpp"
#include "SDK/Constraints_classes.hpp"
#include "SDK/ControlRig_classes.hpp"
#include "SDK/BP_Effect_Fire_classes.hpp"
#include "SDK/UDS_DLWE_Mode_structs.hpp"
#include "SDK/RigVM_classes.hpp"
#include "SDK/LevelSequence_structs.hpp"
#include "SDK/LevelSequence_classes.hpp"
#include "SDK/AppleARKitFaceSupport_structs.hpp"
#include "SDK/AugmentedReality_structs.hpp"
#include "SDK/AppleARKitFaceSupport_classes.hpp"
#include "SDK/ST_BodycamSoundTrack_structs.hpp"
#include "SDK/AppleARKit_structs.hpp"
#include "SDK/AppleImageUtils_structs.hpp"
#include "SDK/AugmentedReality_classes.hpp"
#include "SDK/AppleARKit_classes.hpp"
#include "SDK/LiveLinkAnimationCore_structs.hpp"
#include "SDK/LiveLinkAnimationCore_classes.hpp"
#include "SDK/AppleARKitPoseTrackingLiveLink_classes.hpp"
#include "SDK/AppleImageUtils_classes.hpp"
#include "SDK/ARUtilities_structs.hpp"
#include "SDK/ARUtilities_classes.hpp"
#include "SDK/ComputeFramework_structs.hpp"
#include "SDK/ComputeFramework_classes.hpp"
#include "SDK/OptimusCore_structs.hpp"
#include "SDK/OptimusCore_classes.hpp"
#include "SDK/HairStrandsCore_structs.hpp"
#include "SDK/HairStrandsCore_classes.hpp"
#include "SDK/FFontStyle_structs.hpp"
#include "SDK/EInputDeviceType_structs.hpp"
#include "SDK/WBP_SliderBase_classes.hpp"
#include "SDK/GeometryCache_structs.hpp"
#include "SDK/GeometryCache_classes.hpp"
#include "SDK/E_AnimOnCreate_structs.hpp"
#include "SDK/GeometryCacheTracks_structs.hpp"
#include "SDK/GeometryCacheTracks_classes.hpp"
#include "SDK/OptimusSettings_structs.hpp"
#include "SDK/OptimusSettings_classes.hpp"
#include "SDK/ESettingsValueConversion_structs.hpp"
#include "SDK/FFXFSR3Settings_structs.hpp"
#include "SDK/FFXFSR3Settings_classes.hpp"
#include "SDK/STR_Score_structs.hpp"
#include "SDK/HostMigrationSystem_structs.hpp"
#include "SDK/HostMigrationSystem_classes.hpp"
#include "SDK/WinDualShock_classes.hpp"
#include "SDK/ChaosVehicles_structs.hpp"
#include "SDK/ChaosVehicles_classes.hpp"
#include "SDK/MultiUserClientLibrary_structs.hpp"
#include "SDK/MultiUserClientLibrary_classes.hpp"
#include "SDK/SkeletalMerging_structs.hpp"
#include "SDK/SkeletalMerging_classes.hpp"
#include "SDK/RuntimeMerger_classes.hpp"
#include "SDK/Paper2D_structs.hpp"
#include "SDK/Paper2D_classes.hpp"
#include "SDK/IKRig_structs.hpp"
#include "SDK/PBIK_structs.hpp"
#include "SDK/IKRig_classes.hpp"
#include "SDK/GameplayCameras_structs.hpp"
#include "SDK/GameplayCameras_classes.hpp"
#include "SDK/TemplateSequence_structs.hpp"
#include "SDK/TemplateSequence_classes.hpp"
#include "SDK/OodleNetworkHandlerComponent_structs.hpp"
#include "SDK/OodleNetworkHandlerComponent_classes.hpp"
#include "SDK/E_Prefix_structs.hpp"
#include "SDK/AnimationSharing_structs.hpp"
#include "SDK/AnimationSharing_classes.hpp"
#include "SDK/SignificanceManager_classes.hpp"
#include "SDK/UObjectPlugin_structs.hpp"
#include "SDK/UObjectPlugin_classes.hpp"
#include "SDK/FacialAnimation_classes.hpp"
#include "SDK/HiddeWeapon_classes.hpp"
#include "SDK/EnhancedInput_structs.hpp"
#include "SDK/EnhancedInput_classes.hpp"
#include "SDK/DatasmithContent_structs.hpp"
#include "SDK/DatasmithContent_classes.hpp"
#include "SDK/VariantManagerContent_structs.hpp"
#include "SDK/VariantManagerContent_classes.hpp"
#include "SDK/GLTFExporter_structs.hpp"
#include "SDK/GLTFExporter_classes.hpp"
#include "SDK/AutomationUtils_classes.hpp"
#include "SDK/ClothingSystemRuntimeInterface_structs.hpp"
#include "SDK/ClothingSystemRuntimeInterface_classes.hpp"
#include "SDK/S_SkeletalMeshType_structs.hpp"
#include "SDK/ClothingSystemRuntimeCommon_structs.hpp"
#include "SDK/ClothingSystemRuntimeCommon_classes.hpp"
#include "SDK/ChaosCloth_structs.hpp"
#include "SDK/ChaosCloth_classes.hpp"
#include "SDK/UI_ColorSliders_classes.hpp"
#include "SDK/ChaosCaching_structs.hpp"
#include "SDK/ChaosCaching_classes.hpp"
#include "SDK/GeometryCollectionTracks_structs.hpp"
#include "SDK/GeometryCollectionTracks_classes.hpp"
#include "SDK/DataflowEnginePlugin_classes.hpp"
#include "SDK/ChaosNiagara_structs.hpp"
#include "SDK/ChaosNiagara_classes.hpp"
#include "SDK/WBP_OptionsPickerSubButton_Silence_classes.hpp"
#include "SDK/AvfMediaFactory_classes.hpp"
#include "SDK/MediaAssets_structs.hpp"
#include "SDK/MediaAssets_classes.hpp"
#include "SDK/ImgMedia_structs.hpp"
#include "SDK/ImgMedia_classes.hpp"
#include "SDK/ImgMediaEngine_classes.hpp"
#include "SDK/ImgMediaFactory_classes.hpp"
#include "SDK/MediaCompositing_structs.hpp"
#include "SDK/MediaCompositing_classes.hpp"
#include "SDK/MediaPlate_structs.hpp"
#include "SDK/MediaPlate_classes.hpp"
#include "SDK/WmfMediaFactory_classes.hpp"
#include "SDK/TcpMessaging_classes.hpp"
#include "SDK/UdpMessaging_structs.hpp"
#include "SDK/UdpMessaging_classes.hpp"
#include "SDK/WBP_Vhs_classes.hpp"
#include "SDK/ActorSequence_structs.hpp"
#include "SDK/ActorSequence_classes.hpp"
#include "SDK/AndroidFileServer_structs.hpp"
#include "SDK/AndroidFileServer_classes.hpp"
#include "SDK/AndroidPermission_classes.hpp"
#include "SDK/ArchVisCharacter_classes.hpp"
#include "SDK/AssetTags_structs.hpp"
#include "SDK/AssetTags_classes.hpp"
#include "SDK/AudioCapture_structs.hpp"
#include "SDK/AudioCapture_classes.hpp"
#include "SDK/CableComponent_classes.hpp"
#include "SDK/CustomMeshComponent_structs.hpp"
#include "SDK/CustomMeshComponent_classes.hpp"
#include "SDK/Ump45_structs.hpp"
#include "SDK/Ump45_classes.hpp"
#include "SDK/GooglePAD_structs.hpp"
#include "SDK/GooglePAD_classes.hpp"
#include "SDK/LocationServicesBPLibrary_structs.hpp"
#include "SDK/LocationServicesBPLibrary_classes.hpp"
#include "SDK/GM_Statue_structs.hpp"
#include "SDK/STR_PCStats_structs.hpp"
#include "SDK/STR_PCInfo_structs.hpp"
#include "SDK/GM_Bodycam_classes.hpp"
#include "SDK/MetasoundFrontend_structs.hpp"
#include "SDK/MetasoundFrontend_classes.hpp"
#include "SDK/MetasoundEngine_structs.hpp"
#include "SDK/MetasoundEngine_classes.hpp"
#include "SDK/AudioWidgets_structs.hpp"
#include "SDK/AudioWidgets_classes.hpp"
#include "SDK/AudioAnalyzer_classes.hpp"
#include "SDK/AudioSynesthesia_structs.hpp"
#include "SDK/AudioSynesthesia_classes.hpp"
#include "SDK/WaveTable_structs.hpp"
#include "SDK/WaveTable_classes.hpp"
#include "SDK/MobilePatchingUtils_classes.hpp"
#include "SDK/FKeyBinderButtonData_structs.hpp"
#include "SDK/FEnhanchedActionKeyMappingWithContext_structs.hpp"
#include "SDK/WBP_KeyBinderButtonBase_classes.hpp"
#include "SDK/ResonanceAudio_structs.hpp"
#include "SDK/ResonanceAudio_classes.hpp"
#include "SDK/SoundFields_classes.hpp"
#include "SDK/Synthesis_structs.hpp"
#include "SDK/Synthesis_classes.hpp"
#include "SDK/TraceUtilities_classes.hpp"
#include "SDK/AnimationCore_classes.hpp"
#include "SDK/InputCore_classes.hpp"
#include "SDK/SlateCore_classes.hpp"
#include "SDK/Slate_classes.hpp"
#include "SDK/ImageWriteQueue_classes.hpp"
#include "SDK/MaterialShaderQualitySettings_structs.hpp"
#include "SDK/MaterialShaderQualitySettings_classes.hpp"
#include "SDK/EyeTracker_structs.hpp"
#include "SDK/EyeTracker_classes.hpp"
#include "SDK/Renderer_classes.hpp"
#include "SDK/EngineSettings_structs.hpp"
#include "SDK/EngineSettings_classes.hpp"
#include "SDK/UDS_SkyLightMode_structs.hpp"
#include "SDK/HeadMountedDisplay_structs.hpp"
#include "SDK/HeadMountedDisplay_classes.hpp"
#include "SDK/BuildPatchServices_structs.hpp"
#include "SDK/BuildPatchServices_classes.hpp"
#include "SDK/TypedElementFramework_structs.hpp"
#include "SDK/TypedElementFramework_classes.hpp"
#include "SDK/Foliage_structs.hpp"
#include "SDK/Foliage_classes.hpp"
#include "SDK/Landscape_structs.hpp"
#include "SDK/Landscape_classes.hpp"
#include "SDK/STR_SpawnDistance_structs.hpp"
#include "SDK/MeshDescription_structs.hpp"
#include "SDK/MeshDescription_classes.hpp"
#include "SDK/StaticMeshDescription_structs.hpp"
#include "SDK/StaticMeshDescription_classes.hpp"
#include "SDK/ChaosSolverEngine_structs.hpp"
#include "SDK/ChaosSolverEngine_classes.hpp"
#include "SDK/FieldSystemEngine_structs.hpp"
#include "SDK/FieldSystemEngine_classes.hpp"
#include "SDK/DataflowCore_structs.hpp"
#include "SDK/DataflowCore_classes.hpp"
#include "SDK/DataflowEngine_structs.hpp"
#include "SDK/DataflowEngine_classes.hpp"
#include "SDK/FFooterBarButtonData_structs.hpp"
#include "SDK/GeometryCollectionEngine_structs.hpp"
#include "SDK/GeometryCollectionEngine_classes.hpp"
#include "SDK/AnimGraphRuntime_classes.hpp"
#include "SDK/EN_WaveClass_structs.hpp"
#include "SDK/PropertyPath_structs.hpp"
#include "SDK/PropertyPath_classes.hpp"
#include "SDK/SG_PlayerInfo_classes.hpp"
#include "SDK/TypedElementRuntime_structs.hpp"
#include "SDK/TypedElementRuntime_classes.hpp"
#include "SDK/CinematicCamera_classes.hpp"
#include "SDK/AudioLinkCore_classes.hpp"
#include "SDK/AudioLinkEngine_classes.hpp"
#include "SDK/JsonUtilities_structs.hpp"
#include "SDK/JsonUtilities_classes.hpp"
#include "SDK/AssetRegistry_structs.hpp"
#include "SDK/AssetRegistry_classes.hpp"
#include "SDK/IrisCore_structs.hpp"
#include "SDK/IrisCore_classes.hpp"
#include "SDK/GameplayTags_classes.hpp"
#include "SDK/MovieSceneCapture_structs.hpp"
#include "SDK/MovieSceneCapture_classes.hpp"
#include "SDK/MoviePlayer_structs.hpp"
#include "SDK/MoviePlayer_classes.hpp"
#include "SDK/Overlay_structs.hpp"
#include "SDK/Overlay_classes.hpp"
#include "SDK/ClothingSystemRuntimeNv_structs.hpp"
#include "SDK/ClothingSystemRuntimeNv_classes.hpp"
#include "SDK/ChaosVehiclesEngine_classes.hpp"
#include "SDK/NavigationSystem_structs.hpp"
#include "SDK/NavigationSystem_classes.hpp"
#include "SDK/GameplayTasks_structs.hpp"
#include "SDK/GameplayTasks_classes.hpp"
#include "SDK/AIModule_structs.hpp"
#include "SDK/AIModule_classes.hpp"
#include "SDK/BP_VOIPInterface_classes.hpp"
#include "SDK/InteractiveToolsFramework_structs.hpp"
#include "SDK/InteractiveToolsFramework_classes.hpp"
#include "SDK/GeometryFramework_structs.hpp"
#include "SDK/GeometryFramework_classes.hpp"
#include "SDK/AdvancedWidgets_classes.hpp"
#include "SDK/ControlRigSpline_structs.hpp"
#include "SDK/Dragunov_classes.hpp"
#include "SDK/FullBodyIK_structs.hpp"
#include "SDK/GeometryCollectionNodes_structs.hpp"
#include "SDK/BP_MenuScrollBox_classes.hpp"
#include "SDK/ALS_AI_Controller_classes.hpp"
#include "SDK/Glock17_classes.hpp"
#include "SDK/CoreOnline_structs.hpp"
#include "SDK/MediaUtils_structs.hpp"
#include "SDK/LocalFileNetworkReplayStreaming_structs.hpp"
#include "SDK/HttpNetworkReplayStreaming_structs.hpp"
#include "SDK/VectorVM_structs.hpp"
#include "SDK/LiveLinkControlRig_structs.hpp"
#include "SDK/ETransitionAnimation_structs.hpp"
#include "SDK/WBP_IntroMenu_Silence_classes.hpp"
#include "SDK/CAM_Damage_classes.hpp"
#include "SDK/DataflowNodes_structs.hpp"
#include "SDK/ExplosionShake_classes.hpp"
#include "SDK/EngineMessages_structs.hpp"
#include "SDK/Serialization_structs.hpp"
#include "SDK/SessionMessages_structs.hpp"
#include "SDK/LiveLinkMessageBusFramework_structs.hpp"
#include "SDK/WebBrowser_structs.hpp"
#include "SDK/BP_Effect_Sparks_classes.hpp"
#include "SDK/Flash_classes.hpp"
#include "SDK/DmgTypeBP_Environmental_classes.hpp"
#include "SDK/Shotgun_classes.hpp"
#include "SDK/BulletInterface_classes.hpp"
#include "SDK/Transient_structs.hpp"
#include "SDK/EColorPalette_structs.hpp"
#include "SDK/EFontPalette_structs.hpp"
#include "SDK/PDA_DecisionDialogStyle_classes.hpp"
#include "SDK/Mantle_Params_structs.hpp"
#include "SDK/RS_Statues_structs.hpp"
#include "SDK/STR_GlobalStatues_structs.hpp"
#include "SDK/PDA_MenuSystemConfigRedirector_classes.hpp"
#include "SDK/EMenuInputAction_structs.hpp"
#include "SDK/Walk_CameraShake_classes.hpp"
#include "SDK/Enum_ProjectionType_structs.hpp"
#include "SDK/SG_SaveIconsSettings_classes.hpp"
#include "SDK/UDS_FeatureToggle_structs.hpp"
#include "SDK/STR_PlayerBody_structs.hpp"
#include "SDK/VelocityBlend_structs.hpp"
#include "SDK/EDeviceInputSwitchBehavior_structs.hpp"
#include "SDK/STR_PhysicsHand_structs.hpp"
#include "SDK/STR_Shell_structs.hpp"
#include "SDK/ALS_BTTask_GetRandomLocation_classes.hpp"
#include "SDK/HUD_TransitionLevels_classes.hpp"
#include "SDK/STR_ActorCover_structs.hpp"
#include "SDK/FootstepType_structs.hpp"
#include "SDK/Random_Weather_Variation_classes.hpp"
#include "SDK/FUISound_structs.hpp"
#include "SDK/Bodycam_CameraShake_classes.hpp"
#include "SDK/SSpringInterpVector_structs.hpp"
#include "SDK/BPI_Grenade_classes.hpp"
#include "SDK/ALS_Controller_BPI_classes.hpp"
#include "SDK/ALS_RotationMode_structs.hpp"
#include "SDK/Enum_LoadMethod_structs.hpp"
#include "SDK/BP_MenuSystemGameModeComponent_classes.hpp"
#include "SDK/S_Background_structs.hpp"
#include "SDK/ItemConfigEnum_structs.hpp"
#include "SDK/S_NamesArray_structs.hpp"
#include "SDK/STR_GamemodeWinInfo_structs.hpp"
#include "SDK/STR_TEST_structs.hpp"
#include "SDK/STR_MAG_structs.hpp"
#include "SDK/WEP_MAG_classes.hpp"
#include "SDK/TaserCable_classes.hpp"
#include "SDK/STR_ANIMATIONS_InOUT_structs.hpp"
#include "SDK/BPI_Xp_classes.hpp"
#include "SDK/E_ChatCategory_structs.hpp"
#include "SDK/S_MessageData_structs.hpp"
#include "SDK/Sprint_CameraShake_classes.hpp"
#include "SDK/Zombie_Interface_classes.hpp"
#include "SDK/MovementSettings_structs.hpp"
#include "SDK/STR_ANIMATIONS_structs.hpp"
#include "SDK/FValueTypes_structs.hpp"
#include "SDK/S_AnimationsToPlay_structs.hpp"
#include "SDK/ImpactType_structs.hpp"
#include "SDK/CustomActionKeyMapping_structs.hpp"
#include "SDK/UDS_Project_Mode_structs.hpp"
#include "SDK/Ultra_Dynamic_Weather_Interface_classes.hpp"
#include "SDK/FValueConversionParameters_structs.hpp"
#include "SDK/MovementSettings_Stance_structs.hpp"
#include "SDK/MovementSettings_State_structs.hpp"
#include "SDK/BPI_AnimationManager_classes.hpp"
#include "SDK/EValueDataType_structs.hpp"
#include "SDK/FXTypes_structs.hpp"
#include "SDK/ALS_Camera_BPI_classes.hpp"
#include "SDK/MapMoveZone_classes.hpp"
#include "SDK/LeanAmount_structs.hpp"
#include "SDK/EGameUserSettingsFunction_structs.hpp"
#include "SDK/FUILayer_structs.hpp"
#include "SDK/MovementDirection_structs.hpp"
#include "SDK/ALS_Stance_structs.hpp"
#include "SDK/EPauseBehavior_structs.hpp"
#include "SDK/ENavigationDirection_structs.hpp"
#include "SDK/Jump_Shake_classes.hpp"
#include "SDK/Enum_BackgroundType_structs.hpp"
#include "SDK/WBP_TextLabel_classes.hpp"
#include "SDK/W_PlayerList_classes.hpp"
#include "SDK/E_ChatCommand_structs.hpp"
#include "SDK/TurnInPlace_Asset_structs.hpp"
#include "SDK/Camera_HUD_classes.hpp"
#include "SDK/STR_Rank_structs.hpp"
#include "SDK/ALS_ComponentAndTransform_structs.hpp"
#include "SDK/GunShot_Shake_classes.hpp"
#include "SDK/BPI_RagdollGroundVelocity_classes.hpp"
#include "SDK/EN_SaveType_structs.hpp"
#include "SDK/S_StaticMeshType_structs.hpp"
#include "SDK/FConsoleCommandParameters_structs.hpp"
#include "SDK/WW_RagdollSystem_classes.hpp"
#include "SDK/Mantle_TraceSettings_structs.hpp"
#include "SDK/ESettingsApplyMethod_structs.hpp"
#include "SDK/STR_ZombieSkin_structs.hpp"
#include "SDK/BPFL_IG_Math_classes.hpp"
#include "SDK/HipsDirection_structs.hpp"
#include "SDK/ALS_MovementState_structs.hpp"
#include "SDK/EWidgetAnimation_structs.hpp"
#include "SDK/HUD_Character_classes.hpp"
#include "SDK/FGameUserSettingsParameters_structs.hpp"
#include "SDK/BPI_PauseGame_classes.hpp"
#include "SDK/UI_ExpandableSection_classes.hpp"
#include "SDK/W_VOIPAnim_classes.hpp"
#include "SDK/FWidgetAnimationData_structs.hpp"
#include "SDK/WBP_StatusIcon_classes.hpp"
#include "SDK/Lobby_Anim_structs.hpp"
#include "SDK/Lobby_Anim_classes.hpp"
#include "SDK/GroundedEntryState_structs.hpp"
#include "SDK/E_FireMode_structs.hpp"
#include "SDK/S_BlueprintType_structs.hpp"
#include "SDK/EMenuInputWhitelistPreset_structs.hpp"
#include "SDK/ALS_MovementAction_structs.hpp"
#include "SDK/CameraShake_Notify_classes.hpp"
#include "SDK/UI_ComboBoxOptions_classes.hpp"
#include "SDK/SHAKE_POWER_2_classes.hpp"
#include "SDK/SMesh_structs.hpp"
#include "SDK/ALS_Animation_BPI_classes.hpp"
#include "SDK/FTransitionAnimationMapping_structs.hpp"
#include "SDK/BP_ChatInterface_classes.hpp"
#include "SDK/UI_ComboBoxSingle_classes.hpp"
#include "SDK/Grenade_structs.hpp"
#include "SDK/Grenade_classes.hpp"
#include "SDK/BP_SaveMessages_classes.hpp"
#include "SDK/GroundedEntryState_AnimNotify_classes.hpp"
#include "SDK/UI_CommonComboBox_classes.hpp"
#include "SDK/UI_Tooltip_classes.hpp"
#include "SDK/UI_CommonButton_classes.hpp"
#include "SDK/UI_CommonCommand_classes.hpp"
#include "SDK/UI_Slider_classes.hpp"
#include "SDK/OverlayOverride_NotifyState_classes.hpp"
#include "SDK/AnimBP_HorrorMob_structs.hpp"
#include "SDK/AnimBP_HorrorMob_classes.hpp"
#include "SDK/BP_CustomSettingsApplyClass_classes.hpp"
#include "SDK/ALS_ComponentManagerCharacter_classes.hpp"
#include "SDK/BP_ChatComponent_classes.hpp"
#include "SDK/BP_OpenSubMenuPayload_classes.hpp"
#include "SDK/BP_MenuSystemActor_classes.hpp"
#include "SDK/WBP_MenuContainerInstantiator_classes.hpp"
#include "SDK/ZombieSpawnVolume_classes.hpp"
#include "SDK/STR_Grenade_structs.hpp"
#include "SDK/Grenade_0_classes.hpp"
#include "SDK/ShowKnife_classes.hpp"
#include "SDK/Cut_classes.hpp"
#include "SDK/UnEquip_classes.hpp"
#include "SDK/DropMag_classes.hpp"
#include "SDK/SpawnMag_classes.hpp"
#include "SDK/DestroyMag_classes.hpp"
#include "SDK/InitiateBomb_classes.hpp"
#include "SDK/PullSlider_classes.hpp"
#include "SDK/FAudioSettingsParameters_structs.hpp"
#include "SDK/BPI_interact_classes.hpp"
#include "SDK/Equip_classes.hpp"
#include "SDK/CameraControlTable_classes.hpp"
#include "SDK/FInputActionDataElement_structs.hpp"
#include "SDK/BlurTypeEnum_structs.hpp"
#include "SDK/UnsharpTypeEnum_structs.hpp"
#include "SDK/LensAndFilmPostProcess_classes.hpp"
#include "SDK/LeaderboardClass_structs.hpp"
#include "SDK/RotateInPlace_Asset_structs.hpp"
#include "SDK/PDA_MenuSystemConfig_classes.hpp"
#include "SDK/DynamicMontageParams_structs.hpp"
#include "SDK/ServerSlotEN_structs.hpp"
#include "SDK/BP_ChatFunction_classes.hpp"
#include "SDK/W_PlayerInfo_classes.hpp"
#include "SDK/STR_Actor_structs.hpp"
#include "SDK/PDA_InputActionData_classes.hpp"
#include "SDK/WBP_VOIP_Bar_classes.hpp"
#include "SDK/STR_KickVote_structs.hpp"
#include "SDK/WBP_ProgressBarSegmented_classes.hpp"
#include "SDK/STR_RANGE_structs.hpp"
#include "SDK/GM_Zombie_classes.hpp"
#include "SDK/Projectile_Size_structs.hpp"
#include "SDK/MaterialState_structs.hpp"
#include "SDK/ALS_ViewMode_structs.hpp"
#include "SDK/BPI_TaserAttach_classes.hpp"
#include "SDK/Bombe_classes.hpp"
#include "SDK/GT_zombie_classes.hpp"
#include "SDK/WBP_SoundManagerUI_classes.hpp"
#include "SDK/S_LocalFolderPath_structs.hpp"
#include "SDK/BP_ObjectRender_classes.hpp"
#include "SDK/BP_SettingsManager_classes.hpp"
#include "SDK/SaveLocalisationEnum_structs.hpp"
#include "SDK/PDA_WidgetStyle_classes.hpp"
#include "SDK/Inventory_classes.hpp"
#include "SDK/STR_RECOIL_structs.hpp"
#include "SDK/STR_IK_Values_structs.hpp"
#include "SDK/MaterialProperties_structs.hpp"
#include "SDK/FXMaterialData_structs.hpp"
#include "SDK/BP_HUD_Parallax_Component_classes.hpp"
#include "SDK/ItemQualityEnum_structs.hpp"
#include "SDK/PC_Lobby_classes.hpp"
#include "SDK/StatusConfigEN_structs.hpp"
#include "SDK/ALS_Character_BPI_classes.hpp"
#include "SDK/GT_Bodycam_classes.hpp"
#include "SDK/BP_MenuSystemLib_classes.hpp"
#include "SDK/BP_IconCreatorSpawner_classes.hpp"
#include "SDK/UI_CommonTabButton_classes.hpp"
#include "SDK/PDA_KeybinderStyle_classes.hpp"
#include "SDK/UI_Slot_classes.hpp"
#include "SDK/UI_CommonCheckbox_classes.hpp"
#include "SDK/BP_LightStudio_classes.hpp"
#include "SDK/PDA_SettingsData_classes.hpp"
#include "SDK/BPI_GameInstanceExtension_classes.hpp"
#include "SDK/PDA_MenuStyle_classes.hpp"
#include "SDK/PDA_ScrollBarStyle_classes.hpp"
#include "SDK/PDA_ButtonStyle_classes.hpp"
#include "SDK/CubitUniProjectile_classes.hpp"
#include "SDK/STR_WEP_ANIMATION_structs.hpp"
#include "SDK/Camera_classes.hpp"
#include "SDK/PDA_LevelMetaData_classes.hpp"
#include "SDK/MovementAction_NotifyState_classes.hpp"
#include "SDK/UI_Textures_classes.hpp"
#include "SDK/EarlyBlendOut_NotifyState_classes.hpp"
#include "SDK/WBP_LoadingOverlay_classes.hpp"
#include "SDK/HUD_FriendsDot_classes.hpp"
#include "SDK/W_MessageChat_classes.hpp"
#include "SDK/W_WorldMessage_classes.hpp"
#include "SDK/WBP_EditableText_classes.hpp"
#include "SDK/W_VOIPIndicator_classes.hpp"
#include "SDK/W_Settings_classes.hpp"
#include "SDK/Footstep_AnimNotify_classes.hpp"
#include "SDK/BP_GameLanguageApply_classes.hpp"
#include "SDK/BP_DLSS_FG_Mode_classes.hpp"
#include "SDK/BP_EnableSubtitlesApply_classes.hpp"
#include "SDK/BP_DLSS_ReflexMode_classes.hpp"
#include "SDK/BP_DLSSApply_classes.hpp"
#include "SDK/BP_DisplayResolutionApply_classes.hpp"
#include "SDK/BP_SaveGameManager_classes.hpp"
#include "SDK/BP_MenuControllerComponent_classes.hpp"
#include "SDK/PC_Bodycam_classes.hpp"
#include "SDK/BodycamGI_classes.hpp"
#include "SDK/WW_SurvivorStatus_classes.hpp"
#include "SDK/BP_RebindDialogPayload_classes.hpp"
#include "SDK/BP_CeilingLight_classes.hpp"
#include "SDK/HUD_Warning_classes.hpp"
#include "SDK/STR_WEP_structs.hpp"
#include "SDK/WEP_classes.hpp"
#include "SDK/BP_BC_ShowCase_classes.hpp"
#include "SDK/Preset7_classes.hpp"
#include "SDK/SG_PlayerCustomization_classes.hpp"
#include "SDK/HorrorMob_classes.hpp"
#include "SDK/W_CategoryButtons_classes.hpp"
#include "SDK/BP_Effect_Explosion_classes.hpp"
#include "SDK/BP_Effect_Steam_classes.hpp"
#include "SDK/BP_Effect_Smoke_classes.hpp"
#include "SDK/BP_ColorVisionDeficiencyTypeApply_classes.hpp"
#include "SDK/Bodycam_Interface_classes.hpp"
#include "SDK/WBP_GlobalInteractableUserWidget_classes.hpp"
#include "SDK/WBP_Rank_classes.hpp"
#include "SDK/BP_Drone_classes.hpp"
#include "SDK/CameraTransititon_classes.hpp"
#include "SDK/PlayWepSounds_classes.hpp"
#include "SDK/AKMinus47_classes.hpp"
#include "SDK/UZI_classes.hpp"
#include "SDK/M19_classes.hpp"
#include "SDK/UDS_Weather_Mask_Brush_structs.hpp"
#include "SDK/Weather_Mask_Brush_classes.hpp"
#include "SDK/Scar_classes.hpp"
#include "SDK/Kobra_classes.hpp"
#include "SDK/Deagle_classes.hpp"
#include "SDK/UDS_VersionInfo_classes.hpp"
#include "SDK/Fostech_classes.hpp"
#include "SDK/MP5_classes.hpp"
#include "SDK/UMP45_classes.hpp"
#include "SDK/M4A1_classes.hpp"
#include "SDK/FAL_classes.hpp"
#include "SDK/GT_Lobby_classes.hpp"
#include "SDK/Knife_classes.hpp"
#include "SDK/ALS_AnimBP_structs.hpp"
#include "SDK/ALS_AnimBP_classes.hpp"
#include "SDK/BP_FSR2Apply_classes.hpp"
#include "SDK/ALS_Base_CharacterBP_classes.hpp"
#include "SDK/PC_Zombie_classes.hpp"
#include "SDK/SpectatorCamera_classes.hpp"
#include "SDK/KickTicket_classes.hpp"
#include "SDK/CAM_FlashBang_classes.hpp"
#include "SDK/KickVote_classes.hpp"
#include "SDK/WBP_InputIcon_classes.hpp"
#include "SDK/HUD_ScorePlayerInfo_classes.hpp"
#include "SDK/WBP_LeaderboardEntry_classes.hpp"
#include "SDK/STR_ZombieAnimations_structs.hpp"
#include "SDK/Preset6_classes.hpp"
#include "SDK/Preset9_classes.hpp"
#include "SDK/Preset3_classes.hpp"
#include "SDK/Preset11_classes.hpp"
#include "SDK/Preset2_classes.hpp"
#include "SDK/Preset4_classes.hpp"
#include "SDK/Preset8_classes.hpp"
#include "SDK/Preset10_classes.hpp"
#include "SDK/Preset5_classes.hpp"
#include "SDK/Preset1_classes.hpp"
#include "SDK/Dragunov_0_structs.hpp"
#include "SDK/Dragunov_0_classes.hpp"
#include "SDK/FAL_0_structs.hpp"
#include "SDK/FAL_0_classes.hpp"
#include "SDK/UZI_0_structs.hpp"
#include "SDK/UZI_0_classes.hpp"
#include "SDK/M1911_structs.hpp"
#include "SDK/M1911_classes.hpp"
#include "SDK/Scar_0_structs.hpp"
#include "SDK/Scar_0_classes.hpp"
#include "SDK/GlockMinus17_structs.hpp"
#include "SDK/GlockMinus17_classes.hpp"
#include "SDK/Kobra_0_structs.hpp"
#include "SDK/Kobra_0_classes.hpp"
#include "SDK/Deagle_0_structs.hpp"
#include "SDK/Deagle_0_classes.hpp"
#include "SDK/Remington_structs.hpp"
#include "SDK/Remington_classes.hpp"
#include "SDK/Fostech_0_structs.hpp"
#include "SDK/Fostech_0_classes.hpp"
#include "SDK/Mp5_structs.hpp"
#include "SDK/Mp5_classes.hpp"
#include "SDK/M4a1_structs.hpp"
#include "SDK/M4a1_classes.hpp"
#include "SDK/AKM_structs.hpp"
#include "SDK/AKM_classes.hpp"
#include "SDK/Shell_classes.hpp"
#include "SDK/KickOverlay_classes.hpp"
#include "SDK/WBP_MenuContainer_classes.hpp"
#include "SDK/Cubit_ImpactFX_Spawner_classes.hpp"
#include "SDK/Zombie_classes.hpp"
#include "SDK/Optic_classes.hpp"
#include "SDK/WBP_MenuContainer_Silence_classes.hpp"
#include "SDK/WBP_InteractableUserWidget_classes.hpp"
#include "SDK/G68_classes.hpp"
#include "SDK/G67_classes.hpp"
#include "SDK/AnimBP_Zombie_structs.hpp"
#include "SDK/AnimBP_Zombie_classes.hpp"
#include "SDK/RandomCover_classes.hpp"
#include "SDK/WBP_InteractableMenu_classes.hpp"
#include "SDK/WBP_ButtonBase_classes.hpp"
#include "SDK/WBP_DroneInterface_classes.hpp"
#include "SDK/UI_ObjectRender_classes.hpp"
#include "SDK/WBP_LevelSelectionMenu_Silence_classes.hpp"
#include "SDK/WBP_MenuFooterBar_Silence_classes.hpp"
#include "SDK/SpectatorHud_classes.hpp"
#include "SDK/WBP_ImgButton_classes.hpp"
#include "SDK/WBP_KeyBinderButton_Silence_classes.hpp"
#include "SDK/WBP_GameEnd_classes.hpp"
#include "SDK/HUD_Rankinfo_classes.hpp"
#include "SDK/W_MainChat_classes.hpp"
#include "SDK/WBP_PlayerScore_classes.hpp"
#include "SDK/WBP_FriendPP_classes.hpp"
#include "SDK/WBP_TitleScreenButton_Silence1_classes.hpp"
#include "SDK/WBP_TitleScreenButton_Silence_classes.hpp"
#include "SDK/WBP_FooterButtonBase_classes.hpp"
#include "SDK/WBP_Locker_classes.hpp"
#include "SDK/HUD_ScoreBoardMenu_classes.hpp"
#include "SDK/WBP_ItemPrice_classes.hpp"
#include "SDK/WBP_DecisionDialog_Silence_classes.hpp"
#include "SDK/WBP_FooterButton_Silence_classes.hpp"
#include "SDK/WBP_Shop_classes.hpp"
#include "SDK/WBP_LockerField_classes.hpp"
#include "SDK/UDS_Weather_Display_Names_structs.hpp"
#include "SDK/UDS_ControlPointMode_structs.hpp"
#include "SDK/UDS_Occlusion_Mode_structs.hpp"
#include "SDK/UDS_SkyMode_structs.hpp"
#include "SDK/UDS_SeasonMode_structs.hpp"
#include "SDK/UDS_LensFlareType_structs.hpp"
#include "SDK/UDS_Weather_Settings_classes.hpp"
#include "SDK/UDS_Space_Parent_structs.hpp"
#include "SDK/UDS_PropertyType_structs.hpp"
#include "SDK/UDS_CityPresets_structs.hpp"
#include "SDK/UDS_Weather_Override_Mode_structs.hpp"
#include "SDK/Weather_Effects_Interface_classes.hpp"
#include "SDK/UDS_VolRT_Mode_structs.hpp"
#include "SDK/UDS_NoiseType_structs.hpp"
#include "SDK/UDW_CachedProperties_structs.hpp"
#include "SDK/UDS_Post_Process_Stage_structs.hpp"
#include "SDK/UDS_PlayerOcclusion_classes.hpp"
#include "SDK/UDS_ColorMode_structs.hpp"
#include "SDK/UDS_CachedProperties_structs.hpp"
#include "SDK/UDS_Cloud_Paint_Cell_classes.hpp"
#include "SDK/UDS_Planet_Lightsource_structs.hpp"
#include "SDK/UDS_TemperatureType_structs.hpp"
#include "SDK/UDS_FogColorMode_structs.hpp"
#include "SDK/RandomWeatherVariation_State_structs.hpp"
#include "SDK/UDS_Space_Planet_structs.hpp"
#include "SDK/GM_Menu_classes.hpp"
#include "SDK/UDS_and_UDW_State_structs.hpp"
#include "SDK/UDS_Planet_Preset_classes.hpp"
#include "SDK/UDS_Occlusion_Volume_classes.hpp"
#include "SDK/Close_Thunder_Audio_Player_classes.hpp"
#include "SDK/CargoDoor_classes.hpp"
#include "SDK/Cargo_classes.hpp"
#include "SDK/Alarm_classes.hpp"
#include "SDK/Ultra_Dynamic_Sky_classes.hpp"
#include "SDK/Lobby_classes.hpp"
#include "SDK/Ultra_Dynamic_Weather_classes.hpp"
#include "SDK/UDS_Cloud_Paint_Container_classes.hpp"
#include "SDK/Weather_Mask_Projection_Box_classes.hpp"
#include "SDK/Weather_Override_Volume_classes.hpp"
#include "SDK/WBP_MenuBackground_Silence_classes.hpp"
#include "SDK/PDA_OptionsPickerStyle_classes.hpp"
#include "SDK/WBP_OptionsPickerSubButtonBase_classes.hpp"
#include "SDK/WBP_OptionsPickerBase_classes.hpp"
#include "SDK/PDA_SliderStyle_classes.hpp"
#include "SDK/WBP_KeyBinderBase_classes.hpp"
#include "SDK/PDA_TextInputStyle_classes.hpp"
#include "SDK/WBP_TextInputBase_classes.hpp"
#include "SDK/WBP_ComboBoxItemBase_classes.hpp"
#include "SDK/PDA_ComboBoxStyle_classes.hpp"
#include "SDK/WBP_ComboBoxBase_classes.hpp"
