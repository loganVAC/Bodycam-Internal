#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InteractableMenu

#include "Basic.hpp"

#include "WBP_InteractableMenu_classes.hpp"
#include "WBP_InteractableMenu_parameters.hpp"


namespace SDK
{

// Function WBP_InteractableMenu.WBP_InteractableMenu_C.CheckMenuForDirtyOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsMenuDirty                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::CheckMenuForDirtyOptions(bool* bIsMenuDirty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "CheckMenuForDirtyOptions");

	Params::WBP_InteractableMenu_C_CheckMenuForDirtyOptions Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsMenuDirty != nullptr)
		*bIsMenuDirty = Parms.bIsMenuDirty;
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.ClearActiveUserWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::ClearActiveUserWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "ClearActiveUserWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InteractableMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.ExecuteUbergraph_WBP_InteractableMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::ExecuteUbergraph_WBP_InteractableMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "ExecuteUbergraph_WBP_InteractableMenu");

	Params::WBP_InteractableMenu_C_ExecuteUbergraph_WBP_InteractableMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.ForwardMenuSetupCompleteToChildren
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::ForwardMenuSetupCompleteToChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "ForwardMenuSetupCompleteToChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.GetAllWidgetsInMenuByTag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_InteractableUserWidget_C*>Widgets                                                (Parm, OutParm, ContainsInstancedReference)

void UWBP_InteractableMenu_C::GetAllWidgetsInMenuByTag(class FName Tag, TArray<class UWBP_InteractableUserWidget_C*>* Widgets)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "GetAllWidgetsInMenuByTag");

	Params::WBP_InteractableMenu_C_GetAllWidgetsInMenuByTag Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

	if (Widgets != nullptr)
		*Widgets = std::move(Parms.Widgets);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.GetFirstEnabledInteractableUserWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_InteractableUserWidget_C*    FirstInteractableUserWidget                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::GetFirstEnabledInteractableUserWidget(class UWBP_InteractableUserWidget_C** FirstInteractableUserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "GetFirstEnabledInteractableUserWidget");

	Params::WBP_InteractableMenu_C_GetFirstEnabledInteractableUserWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FirstInteractableUserWidget != nullptr)
		*FirstInteractableUserWidget = Parms.FirstInteractableUserWidget;
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.HighlightDefaultOrLastSelectedWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::HighlightDefaultOrLastSelectedWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "HighlightDefaultOrLastSelectedWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.KeyDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        Geometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bPassBlackListedKeysToOtherMenuLayers                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_InteractableMenu_C::KeyDown(const struct FGeometry& Geometry, const struct FKeyEvent& KeyEvent, bool bPassBlackListedKeysToOtherMenuLayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "KeyDown");

	Params::WBP_InteractableMenu_C_KeyDown Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.KeyEvent = std::move(KeyEvent);
	Parms.bPassBlackListedKeysToOtherMenuLayers = bPassBlackListedKeysToOtherMenuLayers;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.KeyUp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        Geometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_InteractableMenu_C::KeyUp(const struct FGeometry& Geometry, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "KeyUp");

	Params::WBP_InteractableMenu_C_KeyUp Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.NavigateBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::NavigateBack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "NavigateBack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.NavigateBackFromSpecialMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::NavigateBackFromSpecialMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "NavigateBackFromSpecialMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnAnyOptionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAnyOptionDirty                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::OnAnyOptionChanged(bool bIsAnyOptionDirty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnAnyOptionChanged");

	Params::WBP_InteractableMenu_C_OnAnyOptionChanged Parms{};

	Parms.bIsAnyOptionDirty = bIsAnyOptionDirty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnBenchmarkCompleted
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::OnBenchmarkCompleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnBenchmarkCompleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnChangeInputDeviceMenuUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDeviceType                        NewInputDeviceType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::OnChangeInputDeviceMenuUI(EInputDeviceType NewInputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnChangeInputDeviceMenuUI");

	Params::WBP_InteractableMenu_C_OnChangeInputDeviceMenuUI Parms{};

	Parms.NewInputDeviceType = NewInputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnEndApply
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::OnEndApply()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnEndApply");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnFocusChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InteractableUserWidget_C*    InteractableUserWidget                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::OnFocusChanged(class UWBP_InteractableUserWidget_C* InteractableUserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnFocusChanged");

	Params::WBP_InteractableMenu_C_OnFocusChanged Parms{};

	Parms.InteractableUserWidget = InteractableUserWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnFocusChangedInMenu__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InteractableUserWidget_C*    InteractableUserWidget                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::OnFocusChangedInMenu__DelegateSignature(class UWBP_InteractableUserWidget_C* InteractableUserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnFocusChangedInMenu__DelegateSignature");

	Params::WBP_InteractableMenu_C_OnFocusChangedInMenu__DelegateSignature Parms{};

	Parms.InteractableUserWidget = InteractableUserWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnFooterBarMenuSetupComplete
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_InteractableUserWidget_C*>MenuFooterBarButtons                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UWBP_InteractableMenu_C::OnFooterBarMenuSetupComplete(const TArray<class UWBP_InteractableUserWidget_C*>& MenuFooterBarButtons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnFooterBarMenuSetupComplete");

	Params::WBP_InteractableMenu_C_OnFooterBarMenuSetupComplete Parms{};

	Parms.MenuFooterBarButtons = std::move(MenuFooterBarButtons);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnGameUserSettingsUpdated
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::OnGameUserSettingsUpdated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnGameUserSettingsUpdated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnMenuSetupComplete
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::OnMenuSetupComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnMenuSetupComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_InteractableMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnMouseButtonDown");

	Params::WBP_InteractableMenu_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnNavigationEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InteractableMenu_C*          NavigateFromMenu                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EInputDeviceType                        InputDeviceType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::OnNavigationEnter(class UWBP_InteractableMenu_C* NavigateFromMenu, EInputDeviceType InputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnNavigationEnter");

	Params::WBP_InteractableMenu_C_OnNavigationEnter Parms{};

	Parms.NavigateFromMenu = NavigateFromMenu;
	Parms.InputDeviceType = InputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnNavigationExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UClass>             ToMenu                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                           MenuLayer_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ETransitionAnimation                    TransitionAnimation                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TransitionSpeed                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InPayload                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::OnNavigationExit(TSoftClassPtr<class UClass> ToMenu, const class FString& MenuLayer_0, ETransitionAnimation TransitionAnimation, double TransitionSpeed, class UObject* InPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnNavigationExit");

	Params::WBP_InteractableMenu_C_OnNavigationExit Parms{};

	Parms.ToMenu = ToMenu;
	Parms.MenuLayer_0 = std::move(MenuLayer_0);
	Parms.TransitionAnimation = TransitionAnimation;
	Parms.TransitionSpeed = TransitionSpeed;
	Parms.InPayload = InPayload;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnPressedApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InteractableMenu_C::OnPressedApply(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnPressedApply");

	Params::WBP_InteractableMenu_C_OnPressedApply Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnPressedBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InteractableMenu_C::OnPressedBack(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnPressedBack");

	Params::WBP_InteractableMenu_C_OnPressedBack Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnPressedExtra
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InteractableMenu_C::OnPressedExtra(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnPressedExtra");

	Params::WBP_InteractableMenu_C_OnPressedExtra Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnPressedReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InteractableMenu_C::OnPressedReset(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnPressedReset");

	Params::WBP_InteractableMenu_C_OnPressedReset Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnRunHardwareBenchmark
// (BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::OnRunHardwareBenchmark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnRunHardwareBenchmark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.OnSpecialPreConstruct
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     InMenuCanvasPanel                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::OnSpecialPreConstruct(class UPanelWidget* InMenuCanvasPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "OnSpecialPreConstruct");

	Params::WBP_InteractableMenu_C_OnSpecialPreConstruct Parms{};

	Parms.InMenuCanvasPanel = InMenuCanvasPanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "PreConstruct");

	Params::WBP_InteractableMenu_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.RefreshAllWidgetsInMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::RefreshAllWidgetsInMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "RefreshAllWidgetsInMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.ResetAllowNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::ResetAllowNavigation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "ResetAllowNavigation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.ResumeGameFromMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::ResumeGameFromMenu()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "ResumeGameFromMenu");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.SetActiveDefaultOrLastSelectedWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::SetActiveDefaultOrLastSelectedWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "SetActiveDefaultOrLastSelectedWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.SetActiveUserWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_InteractableUserWidget_C*    UserWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::SetActiveUserWidget(class UWBP_InteractableUserWidget_C* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "SetActiveUserWidget");

	Params::WBP_InteractableMenu_C_SetActiveUserWidget Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.SetInteractableUserWidgetReferences
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     InPanel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::SetInteractableUserWidgetReferences(class UPanelWidget* InPanel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "SetInteractableUserWidgetReferences");

	Params::WBP_InteractableMenu_C_SetInteractableUserWidgetReferences Parms{};

	Parms.InPanel = InPanel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.SetMenuAndChildReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                     MenuCanvasPanelWidget_0                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::SetMenuAndChildReferences(class UPanelWidget* MenuCanvasPanelWidget_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "SetMenuAndChildReferences");

	Params::WBP_InteractableMenu_C_SetMenuAndChildReferences Parms{};

	Parms.MenuCanvasPanelWidget_0 = MenuCanvasPanelWidget_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.SetStyleOnWidgetsWithTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Tag                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EWidgetStyleState                       Widget_Style                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::SetStyleOnWidgetsWithTag(class FName Tag, EWidgetStyleState Widget_Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "SetStyleOnWidgetsWithTag");

	Params::WBP_InteractableMenu_C_SetStyleOnWidgetsWithTag Parms{};

	Parms.Tag = Tag;
	Parms.Widget_Style = Widget_Style;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.SetupNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::SetupNavigation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "SetupNavigation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.SetWhitelistedInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMenuInputWhitelistPreset               MenuInputWhitelistPreset_0                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::SetWhitelistedInput(EMenuInputWhitelistPreset MenuInputWhitelistPreset_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "SetWhitelistedInput");

	Params::WBP_InteractableMenu_C_SetWhitelistedInput Parms{};

	Parms.MenuInputWhitelistPreset_0 = MenuInputWhitelistPreset_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.ShowDecisionDialogFromMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             HeaderText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             BodyText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             AcceptText                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             DeclineText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  SecondsUntilRevert                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       Accept                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       Decline                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       AutoRevert                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       Cancel                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                          InPayload                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DecisionDialog_Silence_C*    DecisionDialog                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::ShowDecisionDialogFromMenu(const class FText& HeaderText, const class FText& BodyText, const class FText& AcceptText, const class FText& DeclineText, double SecondsUntilRevert, const TDelegate<void()>& Accept, const TDelegate<void()>& Decline, const TDelegate<void()>& AutoRevert, const TDelegate<void()>& Cancel, class UObject* InPayload, class UWBP_DecisionDialog_Silence_C** DecisionDialog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "ShowDecisionDialogFromMenu");

	Params::WBP_InteractableMenu_C_ShowDecisionDialogFromMenu Parms{};

	Parms.HeaderText = std::move(HeaderText);
	Parms.BodyText = std::move(BodyText);
	Parms.AcceptText = std::move(AcceptText);
	Parms.DeclineText = std::move(DeclineText);
	Parms.SecondsUntilRevert = SecondsUntilRevert;
	Parms.Accept = Accept;
	Parms.Decline = Decline;
	Parms.AutoRevert = AutoRevert;
	Parms.Cancel = Cancel;
	Parms.InPayload = InPayload;

	UObject::ProcessEvent(Func, &Parms);

	if (DecisionDialog != nullptr)
		*DecisionDialog = Parms.DecisionDialog;
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.TriggerApplySettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::TriggerApplySettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "TriggerApplySettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.TriggerLoadSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::TriggerLoadSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "TriggerLoadSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.TriggerResetSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InteractableMenu_C::TriggerResetSettings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "TriggerResetSettings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_InteractableMenu.WBP_InteractableMenu_C.UpdateDisplayedInputIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDeviceType                        InputDeviceType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InteractableMenu_C::UpdateDisplayedInputIcons(EInputDeviceType InputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InteractableMenu_C", "UpdateDisplayedInputIcons");

	Params::WBP_InteractableMenu_C_UpdateDisplayedInputIcons Parms{};

	Parms.InputDeviceType = InputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}

}
