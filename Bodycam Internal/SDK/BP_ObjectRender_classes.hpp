#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectRender

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_ProjectionType_structs.hpp"
#include "Enum_BackgroundType_structs.hpp"
#include "S_LocalFolderPath_structs.hpp"
#include "Enum_LoadMethod_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "S_AnimationsToPlay_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ObjectRender.BP_ObjectRender_C
// 0x0368 (0x05F8 - 0x0290)
class ABP_ObjectRender_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActor;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SC_RenderTransparency;                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SC_ExportTransparency;                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLight;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SC_Export;                                         // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               SC_Render;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ScaleReference;                                    // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CurrentObject;                                     // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CurrentClass;                                      // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	Enum_LoadMethod                               LoadGameMethod;                                    // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_301[0x7];                                      // 0x0301(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_LocalFolderPath>             SpecificFolders;                                   // 0x0308(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                        ScreenInitialScale;                                // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynamic2DRenderTexture;                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MaterialToExport;                                  // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUI_ObjectRender_C*                     ObjectRenderUIReference;                           // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        CameraDistance;                                    // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MinCameraDistance;                                 // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxCameraDistance;                                 // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultCameraDistance;                             // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CameraPosition;                                    // 0x0358(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DefaultCameraPosition;                             // 0x0370(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              IconResolution;                                    // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               TwoDPreviewMaterial;                               // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, TSoftObjectPtr<class UObject>> StaticMeshesSoftReferences;                        // 0x0398(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, TSoftObjectPtr<class UObject>> SkeletalMeshesSoftReferences;                      // 0x03E8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, class UClass*>              Blueprints;                                        // 0x0438(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDataTable*                             StaticMeshesDT;                                    // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             SkeletalMeshesDT;                                  // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutputFolderPath;                                  // 0x0498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 OutputFormat;                                      // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          CanUpdate;                                         // 0x04B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ExportFile;                                        // 0x04B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4BA[0x6];                                      // 0x04BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalFolderPath;                                   // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          CreateTextureInEditor;                             // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4D1[0x7];                                      // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CurrentFOV;                                        // 0x04D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentBackgroundScale;                            // 0x04E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             BlueprintsDT;                                      // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class USkeletalMesh*, struct FS_AnimationsToPlay> SkeletalMeshesAnimations;                          // 0x04F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTextureRenderTarget2D*                 RenderTransparencyTexture;                         // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 PreviewRenderTexture;                              // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 PreviewTransparency;                               // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTexture;                                     // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          UsingPixelization;                                 // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_561[0x7];                                      // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CameraDistanceDelta;                               // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastCameraDistance;                                // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OrthoWidth;                                        // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DefaultOrthoWidth;                                 // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECameraProjectionMode                         RenderProjection;                                  // 0x0588(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_589[0x7];                                      // 0x0589(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        MinOrthoWidth;                                     // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxOrthoWidth;                                     // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        OrthoWidthDelta;                                   // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UsingSilhouette;                                   // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A9[0x7];                                      // 0x05A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LastBackgroundScale;                               // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentBackgroundRotation;                         // 0x05B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastBackgroundRotation;                            // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CurrentForegroundScale;                            // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LastForegroundScale;                               // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CurrentBackgroundTexture;                          // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CurrentForegroundTexture;                          // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	Enum_BackgroundType                           CurrentBackgroundType;                             // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeepBackgroundDimensions;                          // 0x05E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          KeepForegroundDimensions;                          // 0x05EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UsingBackground;                                   // 0x05EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UsingForeground;                                   // 0x05EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ED[0x3];                                      // 0x05ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ItemToFind;                                        // 0x05F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void Adjust_Background_and_Foreground_Dimension();
	void CreateRender(int32 Width, int32 Height, class USceneCaptureComponent2D* SceneCapture, class UTextureRenderTarget2D** TextureRender);
	void CreateRenderAndTransparency(int32 Width, int32 Height, class USceneCaptureComponent2D* SceneCapture, class USceneCaptureComponent2D* SceneCaptureTransparency, class UTextureRenderTarget2D** TextureRender, class UTextureRenderTarget2D** TextureRenderTransparency);
	void EnableDirectionalLight(bool bNewVisibility);
	void ExecuteUbergraph_BP_ObjectRender(int32 EntryPoint);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_X_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void MakeIcon();
	void MakePreview(int32 Width, int32 Height);
	void PixelizeBackground(bool Pixelize);
	void PixelizeForeground(bool Pixelize);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ResetCamera();
	void ResetObjectRotation();
	void SetBounds(class USceneComponent* Mesh);
	void SetLocalPath(const class FString& LocalFolderPath_0);
	void SetObject(class UObject* Object, class UClass* Class_0, bool ResetMaterial);
	void SetOutputPath(const class FString& OutputFolderPath_0);
	void UpdateBackgroundColor(const struct FLinearColor& Value);
	void UpdateBackgroundDimensions(bool KeepDimensions);
	void UpdateBackgroundRotation(double CurrentBackgroundRotation_0);
	void UpdateBackgroundScale(double CurrentBackgroundScale_0);
	void UpdateBackgroundTexture(class UTexture2D* Texture);
	void UpdateBackgroundType(Enum_BackgroundType BackgroundType);
	void UpdateBackgroundVisibility(bool bNewVisibility);
	void UpdateCaptureSource(bool UsingFilter);
	void UpdateForegroundDimensions(bool KeepDimensions);
	void UpdateForegroundScale(double CurrentForegroundScale_0);
	void UpdateForegroundTexture(class UTexture2D* Texture);
	void UpdateForegroundVisibility(bool UsingForeground_0);
	void UpdateFOV(double FOVAngle);
	void UpdateObject(class UObject* Object, class UClass* Class_0, bool KeepRotation, bool ResetMaterial);
	void UpdateOrtho(double OrthoValue);
	void UpdatePixelization(bool ApplyPixelization);
	void UpdatePixelsNumber(double Number);
	void UpdateProjection(ECameraProjectionMode ProjectionType);
	void UpdateProjectionType(ECameraProjectionMode ProjectionType);
	void UpdateSilhouette(bool UsingSilhouette_0);
	void UpdateSilhouetteColor(const struct FLinearColor& Color);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ObjectRender_C">();
	}
	static class ABP_ObjectRender_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ObjectRender_C>();
	}
};
static_assert(alignof(ABP_ObjectRender_C) == 0x000008, "Wrong alignment on ABP_ObjectRender_C");
static_assert(sizeof(ABP_ObjectRender_C) == 0x0005F8, "Wrong size on ABP_ObjectRender_C");
static_assert(offsetof(ABP_ObjectRender_C, UberGraphFrame) == 0x000290, "Member 'ABP_ObjectRender_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, ChildActor) == 0x000298, "Member 'ABP_ObjectRender_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SC_RenderTransparency) == 0x0002A0, "Member 'ABP_ObjectRender_C::SC_RenderTransparency' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SC_ExportTransparency) == 0x0002A8, "Member 'ABP_ObjectRender_C::SC_ExportTransparency' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, DirectionalLight) == 0x0002B0, "Member 'ABP_ObjectRender_C::DirectionalLight' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SC_Export) == 0x0002B8, "Member 'ABP_ObjectRender_C::SC_Export' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SC_Render) == 0x0002C0, "Member 'ABP_ObjectRender_C::SC_Render' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SpringArm) == 0x0002C8, "Member 'ABP_ObjectRender_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, Scene) == 0x0002D0, "Member 'ABP_ObjectRender_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, ScaleReference) == 0x0002D8, "Member 'ABP_ObjectRender_C::ScaleReference' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SkeletalMesh) == 0x0002E0, "Member 'ABP_ObjectRender_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, StaticMesh) == 0x0002E8, "Member 'ABP_ObjectRender_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentObject) == 0x0002F0, "Member 'ABP_ObjectRender_C::CurrentObject' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentClass) == 0x0002F8, "Member 'ABP_ObjectRender_C::CurrentClass' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, LoadGameMethod) == 0x000300, "Member 'ABP_ObjectRender_C::LoadGameMethod' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SpecificFolders) == 0x000308, "Member 'ABP_ObjectRender_C::SpecificFolders' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, ScreenInitialScale) == 0x000318, "Member 'ABP_ObjectRender_C::ScreenInitialScale' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, Dynamic2DRenderTexture) == 0x000320, "Member 'ABP_ObjectRender_C::Dynamic2DRenderTexture' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, MaterialToExport) == 0x000328, "Member 'ABP_ObjectRender_C::MaterialToExport' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, ObjectRenderUIReference) == 0x000330, "Member 'ABP_ObjectRender_C::ObjectRenderUIReference' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CameraDistance) == 0x000338, "Member 'ABP_ObjectRender_C::CameraDistance' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, MinCameraDistance) == 0x000340, "Member 'ABP_ObjectRender_C::MinCameraDistance' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, MaxCameraDistance) == 0x000348, "Member 'ABP_ObjectRender_C::MaxCameraDistance' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, DefaultCameraDistance) == 0x000350, "Member 'ABP_ObjectRender_C::DefaultCameraDistance' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CameraPosition) == 0x000358, "Member 'ABP_ObjectRender_C::CameraPosition' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, DefaultCameraPosition) == 0x000370, "Member 'ABP_ObjectRender_C::DefaultCameraPosition' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, IconResolution) == 0x000388, "Member 'ABP_ObjectRender_C::IconResolution' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, TwoDPreviewMaterial) == 0x000390, "Member 'ABP_ObjectRender_C::TwoDPreviewMaterial' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, StaticMeshesSoftReferences) == 0x000398, "Member 'ABP_ObjectRender_C::StaticMeshesSoftReferences' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SkeletalMeshesSoftReferences) == 0x0003E8, "Member 'ABP_ObjectRender_C::SkeletalMeshesSoftReferences' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, Blueprints) == 0x000438, "Member 'ABP_ObjectRender_C::Blueprints' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, StaticMeshesDT) == 0x000488, "Member 'ABP_ObjectRender_C::StaticMeshesDT' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SkeletalMeshesDT) == 0x000490, "Member 'ABP_ObjectRender_C::SkeletalMeshesDT' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, OutputFolderPath) == 0x000498, "Member 'ABP_ObjectRender_C::OutputFolderPath' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, OutputFormat) == 0x0004A8, "Member 'ABP_ObjectRender_C::OutputFormat' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CanUpdate) == 0x0004B8, "Member 'ABP_ObjectRender_C::CanUpdate' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, ExportFile) == 0x0004B9, "Member 'ABP_ObjectRender_C::ExportFile' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, LocalFolderPath) == 0x0004C0, "Member 'ABP_ObjectRender_C::LocalFolderPath' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CreateTextureInEditor) == 0x0004D0, "Member 'ABP_ObjectRender_C::CreateTextureInEditor' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentFOV) == 0x0004D8, "Member 'ABP_ObjectRender_C::CurrentFOV' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentBackgroundScale) == 0x0004E0, "Member 'ABP_ObjectRender_C::CurrentBackgroundScale' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, BlueprintsDT) == 0x0004E8, "Member 'ABP_ObjectRender_C::BlueprintsDT' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, SkeletalMeshesAnimations) == 0x0004F0, "Member 'ABP_ObjectRender_C::SkeletalMeshesAnimations' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, RenderTransparencyTexture) == 0x000540, "Member 'ABP_ObjectRender_C::RenderTransparencyTexture' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, PreviewRenderTexture) == 0x000548, "Member 'ABP_ObjectRender_C::PreviewRenderTexture' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, PreviewTransparency) == 0x000550, "Member 'ABP_ObjectRender_C::PreviewTransparency' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, RenderTexture) == 0x000558, "Member 'ABP_ObjectRender_C::RenderTexture' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, UsingPixelization) == 0x000560, "Member 'ABP_ObjectRender_C::UsingPixelization' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CameraDistanceDelta) == 0x000568, "Member 'ABP_ObjectRender_C::CameraDistanceDelta' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, LastCameraDistance) == 0x000570, "Member 'ABP_ObjectRender_C::LastCameraDistance' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, OrthoWidth) == 0x000578, "Member 'ABP_ObjectRender_C::OrthoWidth' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, DefaultOrthoWidth) == 0x000580, "Member 'ABP_ObjectRender_C::DefaultOrthoWidth' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, RenderProjection) == 0x000588, "Member 'ABP_ObjectRender_C::RenderProjection' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, MinOrthoWidth) == 0x000590, "Member 'ABP_ObjectRender_C::MinOrthoWidth' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, MaxOrthoWidth) == 0x000598, "Member 'ABP_ObjectRender_C::MaxOrthoWidth' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, OrthoWidthDelta) == 0x0005A0, "Member 'ABP_ObjectRender_C::OrthoWidthDelta' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, UsingSilhouette) == 0x0005A8, "Member 'ABP_ObjectRender_C::UsingSilhouette' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, LastBackgroundScale) == 0x0005B0, "Member 'ABP_ObjectRender_C::LastBackgroundScale' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentBackgroundRotation) == 0x0005B8, "Member 'ABP_ObjectRender_C::CurrentBackgroundRotation' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, LastBackgroundRotation) == 0x0005C0, "Member 'ABP_ObjectRender_C::LastBackgroundRotation' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentForegroundScale) == 0x0005C8, "Member 'ABP_ObjectRender_C::CurrentForegroundScale' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, LastForegroundScale) == 0x0005D0, "Member 'ABP_ObjectRender_C::LastForegroundScale' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentBackgroundTexture) == 0x0005D8, "Member 'ABP_ObjectRender_C::CurrentBackgroundTexture' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentForegroundTexture) == 0x0005E0, "Member 'ABP_ObjectRender_C::CurrentForegroundTexture' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, CurrentBackgroundType) == 0x0005E8, "Member 'ABP_ObjectRender_C::CurrentBackgroundType' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, KeepBackgroundDimensions) == 0x0005E9, "Member 'ABP_ObjectRender_C::KeepBackgroundDimensions' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, KeepForegroundDimensions) == 0x0005EA, "Member 'ABP_ObjectRender_C::KeepForegroundDimensions' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, UsingBackground) == 0x0005EB, "Member 'ABP_ObjectRender_C::UsingBackground' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, UsingForeground) == 0x0005EC, "Member 'ABP_ObjectRender_C::UsingForeground' has a wrong offset!");
static_assert(offsetof(ABP_ObjectRender_C, ItemToFind) == 0x0005F0, "Member 'ABP_ObjectRender_C::ItemToFind' has a wrong offset!");

}

