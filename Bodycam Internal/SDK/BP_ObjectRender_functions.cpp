#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ObjectRender

#include "Basic.hpp"

#include "BP_ObjectRender_classes.hpp"
#include "BP_ObjectRender_parameters.hpp"


namespace SDK
{

// Function BP_ObjectRender.BP_ObjectRender_C.Adjust Background and Foreground Dimension
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ObjectRender_C::Adjust_Background_and_Foreground_Dimension()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "Adjust Background and Foreground Dimension");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectRender.BP_ObjectRender_C.CreateRender
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Width                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*         SceneCapture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           TextureRender                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::CreateRender(int32 Width, int32 Height, class USceneCaptureComponent2D* SceneCapture, class UTextureRenderTarget2D** TextureRender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "CreateRender");

	Params::BP_ObjectRender_C_CreateRender Parms{};

	Parms.Width = Width;
	Parms.Height = Height;
	Parms.SceneCapture = SceneCapture;

	UObject::ProcessEvent(Func, &Parms);

	if (TextureRender != nullptr)
		*TextureRender = Parms.TextureRender;
}


// Function BP_ObjectRender.BP_ObjectRender_C.CreateRenderAndTransparency
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Width                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*         SceneCapture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*         SceneCaptureTransparency                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           TextureRender                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*           TextureRenderTransparency                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::CreateRenderAndTransparency(int32 Width, int32 Height, class USceneCaptureComponent2D* SceneCapture, class USceneCaptureComponent2D* SceneCaptureTransparency, class UTextureRenderTarget2D** TextureRender, class UTextureRenderTarget2D** TextureRenderTransparency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "CreateRenderAndTransparency");

	Params::BP_ObjectRender_C_CreateRenderAndTransparency Parms{};

	Parms.Width = Width;
	Parms.Height = Height;
	Parms.SceneCapture = SceneCapture;
	Parms.SceneCaptureTransparency = SceneCaptureTransparency;

	UObject::ProcessEvent(Func, &Parms);

	if (TextureRender != nullptr)
		*TextureRender = Parms.TextureRender;

	if (TextureRenderTransparency != nullptr)
		*TextureRenderTransparency = Parms.TextureRenderTransparency;
}


// Function BP_ObjectRender.BP_ObjectRender_C.EnableDirectionalLight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::EnableDirectionalLight(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "EnableDirectionalLight");

	Params::BP_ObjectRender_C_EnableDirectionalLight Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.ExecuteUbergraph_BP_ObjectRender
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::ExecuteUbergraph_BP_ObjectRender(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "ExecuteUbergraph_BP_ObjectRender");

	Params::BP_ObjectRender_C_ExecuteUbergraph_BP_ObjectRender Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ObjectRender_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0");

	Params::BP_ObjectRender_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ObjectRender_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1");

	Params::BP_ObjectRender_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.InpActEvt_R_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ObjectRender_C::InpActEvt_R_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "InpActEvt_R_K2Node_InputKeyEvent_4");

	Params::BP_ObjectRender_C_InpActEvt_R_K2Node_InputKeyEvent_4 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.InpActEvt_T_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ObjectRender_C::InpActEvt_T_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "InpActEvt_T_K2Node_InputKeyEvent_3");

	Params::BP_ObjectRender_C_InpActEvt_T_K2Node_InputKeyEvent_3 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.InpActEvt_X_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_ObjectRender_C::InpActEvt_X_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "InpActEvt_X_K2Node_InputKeyEvent_2");

	Params::BP_ObjectRender_C_InpActEvt_X_K2Node_InputKeyEvent_2 Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.MakeIcon
// (BlueprintCallable, BlueprintEvent)

void ABP_ObjectRender_C::MakeIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "MakeIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectRender.BP_ObjectRender_C.MakePreview
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Width                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::MakePreview(int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "MakePreview");

	Params::BP_ObjectRender_C_MakePreview Parms{};

	Parms.Width = Width;
	Parms.Height = Height;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.PixelizeBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Pixelize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::PixelizeBackground(bool Pixelize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "PixelizeBackground");

	Params::BP_ObjectRender_C_PixelizeBackground Parms{};

	Parms.Pixelize = Pixelize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.PixelizeForeground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Pixelize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::PixelizeForeground(bool Pixelize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "PixelizeForeground");

	Params::BP_ObjectRender_C_PixelizeForeground Parms{};

	Parms.Pixelize = Pixelize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ObjectRender_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectRender.BP_ObjectRender_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "ReceiveTick");

	Params::BP_ObjectRender_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)

void ABP_ObjectRender_C::ResetCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "ResetCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectRender.BP_ObjectRender_C.ResetObjectRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_ObjectRender_C::ResetObjectRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "ResetObjectRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ObjectRender.BP_ObjectRender_C.SetBounds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  Mesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::SetBounds(class USceneComponent* Mesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "SetBounds");

	Params::BP_ObjectRender_C_SetBounds Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.SetLocalPath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LocalFolderPath_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::SetLocalPath(const class FString& LocalFolderPath_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "SetLocalPath");

	Params::BP_ObjectRender_C_SetLocalPath Parms{};

	Parms.LocalFolderPath_0 = std::move(LocalFolderPath_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.SetObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Class_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetMaterial                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::SetObject(class UObject* Object, class UClass* Class_0, bool ResetMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "SetObject");

	Params::BP_ObjectRender_C_SetObject Parms{};

	Parms.Object = Object;
	Parms.Class_0 = Class_0;
	Parms.ResetMaterial = ResetMaterial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.SetOutputPath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OutputFolderPath_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::SetOutputPath(const class FString& OutputFolderPath_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "SetOutputPath");

	Params::BP_ObjectRender_C_SetOutputPath Parms{};

	Parms.OutputFolderPath_0 = std::move(OutputFolderPath_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateBackgroundColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateBackgroundColor(const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateBackgroundColor");

	Params::BP_ObjectRender_C_UpdateBackgroundColor Parms{};

	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateBackgroundDimensions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    KeepDimensions                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateBackgroundDimensions(bool KeepDimensions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateBackgroundDimensions");

	Params::BP_ObjectRender_C_UpdateBackgroundDimensions Parms{};

	Parms.KeepDimensions = KeepDimensions;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateBackgroundRotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CurrentBackgroundRotation_0                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateBackgroundRotation(double CurrentBackgroundRotation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateBackgroundRotation");

	Params::BP_ObjectRender_C_UpdateBackgroundRotation Parms{};

	Parms.CurrentBackgroundRotation_0 = CurrentBackgroundRotation_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateBackgroundScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CurrentBackgroundScale_0                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateBackgroundScale(double CurrentBackgroundScale_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateBackgroundScale");

	Params::BP_ObjectRender_C_UpdateBackgroundScale Parms{};

	Parms.CurrentBackgroundScale_0 = CurrentBackgroundScale_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateBackgroundTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateBackgroundTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateBackgroundTexture");

	Params::BP_ObjectRender_C_UpdateBackgroundTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateBackgroundType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// Enum_BackgroundType                     BackgroundType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateBackgroundType(Enum_BackgroundType BackgroundType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateBackgroundType");

	Params::BP_ObjectRender_C_UpdateBackgroundType Parms{};

	Parms.BackgroundType = BackgroundType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateBackgroundVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bNewVisibility                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateBackgroundVisibility(bool bNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateBackgroundVisibility");

	Params::BP_ObjectRender_C_UpdateBackgroundVisibility Parms{};

	Parms.bNewVisibility = bNewVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateCaptureSource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingFilter                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateCaptureSource(bool UsingFilter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateCaptureSource");

	Params::BP_ObjectRender_C_UpdateCaptureSource Parms{};

	Parms.UsingFilter = UsingFilter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateForegroundDimensions
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    KeepDimensions                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateForegroundDimensions(bool KeepDimensions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateForegroundDimensions");

	Params::BP_ObjectRender_C_UpdateForegroundDimensions Parms{};

	Parms.KeepDimensions = KeepDimensions;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateForegroundScale
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CurrentForegroundScale_0                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateForegroundScale(double CurrentForegroundScale_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateForegroundScale");

	Params::BP_ObjectRender_C_UpdateForegroundScale Parms{};

	Parms.CurrentForegroundScale_0 = CurrentForegroundScale_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateForegroundTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateForegroundTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateForegroundTexture");

	Params::BP_ObjectRender_C_UpdateForegroundTexture Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateForegroundVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingForeground_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateForegroundVisibility(bool UsingForeground_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateForegroundVisibility");

	Params::BP_ObjectRender_C_UpdateForegroundVisibility Parms{};

	Parms.UsingForeground_0 = UsingForeground_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateFOV
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  FOVAngle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateFOV(double FOVAngle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateFOV");

	Params::BP_ObjectRender_C_UpdateFOV Parms{};

	Parms.FOVAngle = FOVAngle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateObject
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                           Class_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    KeepRotation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ResetMaterial                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateObject(class UObject* Object, class UClass* Class_0, bool KeepRotation, bool ResetMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateObject");

	Params::BP_ObjectRender_C_UpdateObject Parms{};

	Parms.Object = Object;
	Parms.Class_0 = Class_0;
	Parms.KeepRotation = KeepRotation;
	Parms.ResetMaterial = ResetMaterial;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateOrtho
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  OrthoValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateOrtho(double OrthoValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateOrtho");

	Params::BP_ObjectRender_C_UpdateOrtho Parms{};

	Parms.OrthoValue = OrthoValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdatePixelization
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ApplyPixelization                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdatePixelization(bool ApplyPixelization)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdatePixelization");

	Params::BP_ObjectRender_C_UpdatePixelization Parms{};

	Parms.ApplyPixelization = ApplyPixelization;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdatePixelsNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Number                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdatePixelsNumber(double Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdatePixelsNumber");

	Params::BP_ObjectRender_C_UpdatePixelsNumber Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateProjection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECameraProjectionMode                   ProjectionType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateProjection(ECameraProjectionMode ProjectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateProjection");

	Params::BP_ObjectRender_C_UpdateProjection Parms{};

	Parms.ProjectionType = ProjectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateProjectionType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECameraProjectionMode                   ProjectionType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateProjectionType(ECameraProjectionMode ProjectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateProjectionType");

	Params::BP_ObjectRender_C_UpdateProjectionType Parms{};

	Parms.ProjectionType = ProjectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateSilhouette
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    UsingSilhouette_0                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateSilhouette(bool UsingSilhouette_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateSilhouette");

	Params::BP_ObjectRender_C_UpdateSilhouette Parms{};

	Parms.UsingSilhouette_0 = UsingSilhouette_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UpdateSilhouetteColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ObjectRender_C::UpdateSilhouetteColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UpdateSilhouetteColor");

	Params::BP_ObjectRender_C_UpdateSilhouetteColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ObjectRender.BP_ObjectRender_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ObjectRender_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ObjectRender_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
