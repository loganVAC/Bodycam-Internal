#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GlobalInteractableUserWidget

#include "Basic.hpp"

#include "WBP_GlobalInteractableUserWidget_classes.hpp"
#include "WBP_GlobalInteractableUserWidget_parameters.hpp"


namespace SDK
{

// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GlobalInteractableUserWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.ExecuteUbergraph_WBP_GlobalInteractableUserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::ExecuteUbergraph_WBP_GlobalInteractableUserWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "ExecuteUbergraph_WBP_GlobalInteractableUserWidget");

	Params::WBP_GlobalInteractableUserWidget_C_ExecuteUbergraph_WBP_GlobalInteractableUserWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.GetAllowNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bAllowNavigation_0                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::GetAllowNavigation(bool* bAllowNavigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "GetAllowNavigation");

	Params::WBP_GlobalInteractableUserWidget_C_GetAllowNavigation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bAllowNavigation_0 != nullptr)
		*bAllowNavigation_0 = Parms.bAllowNavigation_0;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.GetLastInteractingLocalPlayerIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   LocalPlayerControllerIndex                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::GetLastInteractingLocalPlayerIndex(int32* LocalPlayerControllerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "GetLastInteractingLocalPlayerIndex");

	Params::WBP_GlobalInteractableUserWidget_C_GetLastInteractingLocalPlayerIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LocalPlayerControllerIndex != nullptr)
		*LocalPlayerControllerIndex = Parms.LocalPlayerControllerIndex;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.GetOwningContainer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWBP_MenuContainer_C*             OwningContainer                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::GetOwningContainer(class UWBP_MenuContainer_C** OwningContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "GetOwningContainer");

	Params::WBP_GlobalInteractableUserWidget_C_GetOwningContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OwningContainer != nullptr)
		*OwningContainer = Parms.OwningContainer;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.GetThisWidgetIsMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bIsMenu                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::GetThisWidgetIsMenu(bool* bIsMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "GetThisWidgetIsMenu");

	Params::WBP_GlobalInteractableUserWidget_C_GetThisWidgetIsMenu Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bIsMenu != nullptr)
		*bIsMenu = Parms.bIsMenu;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.HideMouseCursor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_GlobalInteractableUserWidget_C::HideMouseCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "HideMouseCursor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.KeyDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        Geometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bPassBlackListedKeysToOtherMenuLayers                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_GlobalInteractableUserWidget_C::KeyDown(const struct FGeometry& Geometry, const struct FKeyEvent& KeyEvent, bool bPassBlackListedKeysToOtherMenuLayers)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "KeyDown");

	Params::WBP_GlobalInteractableUserWidget_C_KeyDown Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.KeyEvent = std::move(KeyEvent);
	Parms.bPassBlackListedKeysToOtherMenuLayers = bPassBlackListedKeysToOtherMenuLayers;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.KeyUp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        Geometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_GlobalInteractableUserWidget_C::KeyUp(const struct FGeometry& Geometry, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "KeyUp");

	Params::WBP_GlobalInteractableUserWidget_C_KeyUp Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.MouseButtonDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        Geometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_GlobalInteractableUserWidget_C::MouseButtonDown(const struct FGeometry& Geometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "MouseButtonDown");

	Params::WBP_GlobalInteractableUserWidget_C_MouseButtonDown Parms{};

	Parms.Geometry = std::move(Geometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.MoveMouseCursorToDefaultPosition
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GlobalInteractableUserWidget_C::MoveMouseCursorToDefaultPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "MoveMouseCursorToDefaultPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_GlobalInteractableUserWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnKeyDown");

	Params::WBP_GlobalInteractableUserWidget_C_OnKeyDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                        InKeyEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_GlobalInteractableUserWidget_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnKeyUp");

	Params::WBP_GlobalInteractableUserWidget_C_OnKeyUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InKeyEvent = std::move(InKeyEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_GlobalInteractableUserWidget_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnMouseButtonDown");

	Params::WBP_GlobalInteractableUserWidget_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_GlobalInteractableUserWidget_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnMouseMove");

	Params::WBP_GlobalInteractableUserWidget_C_OnMouseMove Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedAnyKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bAnyKeyReleased                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::OnPressedAnyKey(const struct FKeyEvent& KeyEvent, bool bAnyKeyReleased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedAnyKey");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedAnyKey Parms{};

	Parms.KeyEvent = std::move(KeyEvent);
	Parms.bAnyKeyReleased = bAnyKeyReleased;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedApply
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedApply(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedApply");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedApply Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedBack(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedBack");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedBack Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedDown(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedDown");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedDown Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedExtra
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedExtra(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedExtra");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedExtra Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedLeft(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedLeft");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedLeft Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedReset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedReset(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedReset");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedReset Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedRight(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedRight");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedRight Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedSelect(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedSelect");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedSelect Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OnPressedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                        KeyEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GlobalInteractableUserWidget_C::OnPressedUp(const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OnPressedUp");

	Params::WBP_GlobalInteractableUserWidget_C_OnPressedUp Parms{};

	Parms.KeyEvent = std::move(KeyEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.OverrideWidgetStyleFromConfig
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GlobalInteractableUserWidget_C::OverrideWidgetStyleFromConfig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "OverrideWidgetStyleFromConfig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "PreConstruct");

	Params::WBP_GlobalInteractableUserWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.RebuildCustomInputBindings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_GlobalInteractableUserWidget_C::RebuildCustomInputBindings()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "RebuildCustomInputBindings");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.ResetInputBindingsToDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_GlobalInteractableUserWidget_C::ResetInputBindingsToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "ResetInputBindingsToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetAllowNavigation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAllowNavigation_0                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetAllowNavigation(bool bAllowNavigation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetAllowNavigation");

	Params::WBP_GlobalInteractableUserWidget_C_SetAllowNavigation Parms{};

	Parms.bAllowNavigation_0 = bAllowNavigation_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetAllowNavigationForAllWidgetsInMenuAndMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InAllowNavigation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InDontChangeAllowNavigationOfMenu                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetAllowNavigationForAllWidgetsInMenuAndMenu(bool InAllowNavigation, bool InDontChangeAllowNavigationOfMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetAllowNavigationForAllWidgetsInMenuAndMenu");

	Params::WBP_GlobalInteractableUserWidget_C_SetAllowNavigationForAllWidgetsInMenuAndMenu Parms{};

	Parms.InAllowNavigation = InAllowNavigation;
	Parms.InDontChangeAllowNavigationOfMenu = InDontChangeAllowNavigationOfMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetCurrentInputDevice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputDeviceType                        InputDeviceType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetCurrentInputDevice(EInputDeviceType InputDeviceType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetCurrentInputDevice");

	Params::WBP_GlobalInteractableUserWidget_C_SetCurrentInputDevice Parms{};

	Parms.InputDeviceType = InputDeviceType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetCustomUserFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          FocusWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetCustomUserFocus(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetCustomUserFocus");

	Params::WBP_GlobalInteractableUserWidget_C_SetCustomUserFocus Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetEditableTextStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_EditableText_C*              EditableText                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo                   Font                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ETextTransformPolicy                    TextTransformPolicy                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetEditableTextStyle(class UWBP_EditableText_C* EditableText, const struct FSlateFontInfo& Font, const struct FLinearColor& Color, ETextTransformPolicy TextTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetEditableTextStyle");

	Params::WBP_GlobalInteractableUserWidget_C_SetEditableTextStyle Parms{};

	Parms.EditableText = EditableText;
	Parms.Font = std::move(Font);
	Parms.Color = std::move(Color);
	Parms.TextTransformPolicy = TextTransformPolicy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetLastInteractingLocalPlayerIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LastInteractingLocalPlayerIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetLastInteractingLocalPlayerIndex(int32 LastInteractingLocalPlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetLastInteractingLocalPlayerIndex");

	Params::WBP_GlobalInteractableUserWidget_C_SetLastInteractingLocalPlayerIndex Parms{};

	Parms.LastInteractingLocalPlayerIndex = LastInteractingLocalPlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetMultiplayerUserFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          FocusWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetMultiplayerUserFocus(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetMultiplayerUserFocus");

	Params::WBP_GlobalInteractableUserWidget_C_SetMultiplayerUserFocus Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetSingleplayerUserFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          FocusWidget                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetSingleplayerUserFocus(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetSingleplayerUserFocus");

	Params::WBP_GlobalInteractableUserWidget_C_SetSingleplayerUserFocus Parms{};

	Parms.FocusWidget = FocusWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetTextStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                       TextObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFFontStyle                      Font                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetTextStyle(class UTextBlock* TextObject, const struct FFFontStyle& Font, const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetTextStyle");

	Params::WBP_GlobalInteractableUserWidget_C_SetTextStyle Parms{};

	Parms.TextObject = TextObject;
	Parms.Font = std::move(Font);
	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.SetThisWidgetIsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GlobalInteractableUserWidget_C::SetThisWidgetIsMenu(bool bIsMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "SetThisWidgetIsMenu");

	Params::WBP_GlobalInteractableUserWidget_C_SetThisWidgetIsMenu Parms{};

	Parms.bIsMenu = bIsMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GlobalInteractableUserWidget.WBP_GlobalInteractableUserWidget_C.ShowMouseCursor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_GlobalInteractableUserWidget_C::ShowMouseCursor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GlobalInteractableUserWidget_C", "ShowMouseCursor");

	UObject::ProcessEvent(Func, nullptr);
}

}
