#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MenuContainer

#include "Basic.hpp"

#include "EInputDeviceType_structs.hpp"
#include "FTransitionAnimationMapping_structs.hpp"
#include "EnhancedInput_structs.hpp"
#include "Engine_structs.hpp"
#include "WBP_GlobalInteractableUserWidget_classes.hpp"
#include "ETransitionAnimation_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MenuContainer.WBP_MenuContainer_C
// 0x0358 (0x0668 - 0x0310)
class UWBP_MenuContainer_C : public UWBP_GlobalInteractableUserWidget_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_MenuContainer_C;                // 0x0310(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<TSoftClassPtr<class UClass>>           MenuNavigationStack;                               // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsMainMenuLevel;                                  // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_329[0x7];                                      // 0x0329(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MenuSystemActor_C*                  MenuSystemActor;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TSoftObjectPtr<class UUserWidget>             MenuBackground;                                    // 0x0338(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	TArray<struct FFTransitionAnimationMapping>   TransitionAnimationMappings;                       // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 HighlightedMenuLayer;                              // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ACameraActor*                           ActiveMenuCamera;                                  // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   MenuCameras;                                       // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	int32                                         LastInteractingLocalPlayerIndex;                   // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ControllerPlatformName;                            // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWBP_SoundManagerUI_C*                  SoundManager;                                      // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EInputDeviceType                              ContainerInputDeviceType;                          // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_3C1[0x7];                                      // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UWBP_InteractableMenu_C> MenuFooterBar;                                     // 0x03C8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	bool                                          bIsActionCooledDown;                               // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsBackCooledDown;                                 // 0x03F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsNavigationCooledDown;                           // 0x03FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3FB[0x5];                                      // 0x03FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UWBP_InteractableMenu_C> LoadingScreenWidget;                               // 0x0400(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, InstancedReference, HasGetValueTypeHash)
	bool                                          bAllowTransitionBack;                              // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_431[0x7];                                      // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           CanvasPanelRef;                                    // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                MainLayerRef;                                      // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                SubTabsLayerRef;                                   // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                SubMenuLayerRef;                                   // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                DialogLayerRef;                                    // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                FooterBarLayerRef;                                 // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                LoadingScreenLayerRef;                             // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                ForegroundLayerRef;                                // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                BackgroundLayerRef;                                // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   FirstShownMenu;                                    // 0x0480(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   IntroMenu;                                         // 0x04B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   TitleScreenMenu;                                   // 0x04E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                                Payload;                                           // 0x0510(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TMap<class FName, struct FEnhancedActionKeyMapping> MenuInputMap;                                      // 0x0518(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TSoftClassPtr<class UClass>                   Menu_to_Add;                                       // 0x0568(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   SelectionMapMenu;                                  // 0x0598(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   Intro_Menu_Obj_Ref;                                // 0x05C8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	TArray<class ACameraActor*>                   MenuCameras2;                                      // 0x05F8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	TSoftClassPtr<class UClass>                   MainMenuRef;                                       // 0x0608(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UClass>                   EarnRef;                                           // 0x0638(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Add_EarnItem_Menu_To_Canvas();
	void Add_Menu_To_Canvas(TSoftClassPtr<class UClass> MenuToAdd, const class FString& InMenuLayer, class UWBP_InteractableMenu_C* PreviousMenu, ETransitionAnimation TransitionAnimation, double TransitionAnimationSpeed, class UObject* InPayload, class UWBP_InteractableMenu_C** NewMenu);
	void AddMenuBackground();
	void AddMenuDuringTransition(const class FString& InMenuLayer, class UPanelWidget* MenuLayerWidget, TSoftClassPtr<class UClass> MenuToAdd, class UWBP_InteractableMenu_C* InPreviousMenu, class UObject* InPayload, class UWBP_InteractableMenu_C** NewMenu);
	void AddMenuFooterBar(class UWBP_InteractableMenu_C* FromMenu, TArray<struct FFFooterBarButtonData>& InFooterBarData);
	void Change_Active_Menu_Camera(class ACameraActor* Camera, float BlendTime, EViewTargetBlendFunction BlendFunc, float BlendExp, bool bLockOutgoing, bool Blend_);
	void ClearSublayerMenus();
	void Construct();
	void CreateAndShowDecisionDialog(class UWBP_InteractableMenu_C* SourceMenu, const class FText& HeaderText, const class FText& BodyText, const class FText& AcceptText, const class FText& DeclineText, double SecondsUntilRevert, const TDelegate<void()>& Accept, const TDelegate<void()>& Decline, const TDelegate<void()>& AutoRevert, const TDelegate<void()>& Cancel, class UObject* InPayload, class UWBP_DecisionDialog_Silence_C** DecisionDialog);
	void ExecuteUbergraph_WBP_MenuContainer(int32 EntryPoint);
	void GetCombinedInputBindings(TMap<class FName, struct FFEnhanchedActionKeyMappingWithContext>* CombinedInputBindings);
	class UWBP_InteractableMenu_C* GetMenuOnLayer(const class FString& MenuLayer_0);
	void GetWidgetAnimationFromMapping(ETransitionAnimation TransitionAnimation, class UWidgetAnimation** WidgetAnimationIn, class UWidgetAnimation** WidgetAnimationOut);
	void InitControllerPlatformName();
	struct FEventReply KeyDown(const struct FGeometry& Geometry, const struct FKeyEvent& KeyEvent, bool bPassBlackListedKeysToOtherMenuLayers);
	struct FEventReply KeyUp(const struct FGeometry& Geometry, const struct FKeyEvent& KeyEvent);
	void MenuLayerNameToWidget(const class FString& MenuLayer_0, class UBorder** LayerWidget);
	void OnActionCooldown(float Duration);
	void OnBackCooldown(float Duration);
	void OnNavigationCooldown(float Duration);
	void OnPreLoadBaseClasses();
	void OnTransitionInAnimationFinished(float Duration);
	void OnTransitionOutAnimationFinished(float Duration, const class FString& InMenuLayer, class UPanelWidget* MenuLayerWidget, TSoftClassPtr<class UClass> MenuToAdd, class UWBP_InteractableMenu_C* InPreviousMenu, ETransitionAnimation TransitionAnimation, double TransitionAnimationSpeed, class UObject* InPayload);
	void OnTransitionToTargetMenu(class UWBP_InteractableMenu_C* FromMenu, TSoftClassPtr<class UClass> ToMenu, const class FString& MenuLayer_0, ETransitionAnimation TransitionAnimation, double TransitionAnimationSpeed, class UObject* InPayload);
	void OpenFirstShownMenu(TSoftClassPtr<class UClass> ToMenu, ETransitionAnimation TransitionAnimation, double TransitionAnimationSpeed);
	void OpenMainMenu();
	void PassInputEventToOtherMenuLayer(const struct FEnhancedActionKeyMapping& KeyMapping, const struct FKeyEvent& KeyEvent, const class FString& SourceMenuLayer, bool* InputHandled);
	void PreConstruct(bool IsDesignTime);
	void RemoveLoadingScreen();
	void RemoveMenuFooterBar();
	void SetAllowNavigationOnAllMenuLayers(bool InAllowNavigation, bool InDontChangeAllowNavigationOfMenu);
	void SetControllerPlatformName(const class FString& ControllerType);
	void SetHighlightedMenuLayer(const class FString& MenuLayer_0);
	void SetInputDeviceTypeOnAllMenuLayers(const struct FKey& PressedKey, bool bIsMouseInput);
	void SetupMenuContainer();
	void SetupMenuInputMap();
	void SetupSoundManager();
	void SetupTransitionAnimationMapping();
	void Show_Loading_Screen(class UObject* ReceivedPayload, class UWBP_InteractableMenu_C** LoadingScreen);
	void StartMenuTransitionOut(TSoftClassPtr<class UClass> MenuToAdd, const class FString& InMenuLayer, class UBorder* MenuLayerWidget, class UWBP_InteractableMenu_C* InPreviousMenu, ETransitionAnimation TransitionAnimation, double TransitionAnimationSpeed, class UObject* InPayload);
	void TransitionBack(class UWBP_InteractableMenu_C* FromMenu);
	void TransitionBackFromFooter();
	void TransitionBackFromSpecialMenu();
	void TransitionToTargetMenu(class UWBP_InteractableMenu_C* FromMenu, TSoftClassPtr<class UClass> ToMenu, const class FString& MenuLayer_0, ETransitionAnimation TransitionAnimation, double TransitionAnimationSpeed, class UObject* InPayload);
	void UpdateAllInputIcons();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MenuContainer_C">();
	}
	static class UWBP_MenuContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MenuContainer_C>();
	}
};
static_assert(alignof(UWBP_MenuContainer_C) == 0x000008, "Wrong alignment on UWBP_MenuContainer_C");
static_assert(sizeof(UWBP_MenuContainer_C) == 0x000668, "Wrong size on UWBP_MenuContainer_C");
static_assert(offsetof(UWBP_MenuContainer_C, UberGraphFrame_WBP_MenuContainer_C) == 0x000310, "Member 'UWBP_MenuContainer_C::UberGraphFrame_WBP_MenuContainer_C' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MenuNavigationStack) == 0x000318, "Member 'UWBP_MenuContainer_C::MenuNavigationStack' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, bIsMainMenuLevel) == 0x000328, "Member 'UWBP_MenuContainer_C::bIsMainMenuLevel' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MenuSystemActor) == 0x000330, "Member 'UWBP_MenuContainer_C::MenuSystemActor' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MenuBackground) == 0x000338, "Member 'UWBP_MenuContainer_C::MenuBackground' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, TransitionAnimationMappings) == 0x000368, "Member 'UWBP_MenuContainer_C::TransitionAnimationMappings' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, HighlightedMenuLayer) == 0x000378, "Member 'UWBP_MenuContainer_C::HighlightedMenuLayer' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, ActiveMenuCamera) == 0x000388, "Member 'UWBP_MenuContainer_C::ActiveMenuCamera' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MenuCameras) == 0x000390, "Member 'UWBP_MenuContainer_C::MenuCameras' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, LastInteractingLocalPlayerIndex) == 0x0003A0, "Member 'UWBP_MenuContainer_C::LastInteractingLocalPlayerIndex' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, ControllerPlatformName) == 0x0003A8, "Member 'UWBP_MenuContainer_C::ControllerPlatformName' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, SoundManager) == 0x0003B8, "Member 'UWBP_MenuContainer_C::SoundManager' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, ContainerInputDeviceType) == 0x0003C0, "Member 'UWBP_MenuContainer_C::ContainerInputDeviceType' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MenuFooterBar) == 0x0003C8, "Member 'UWBP_MenuContainer_C::MenuFooterBar' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, bIsActionCooledDown) == 0x0003F8, "Member 'UWBP_MenuContainer_C::bIsActionCooledDown' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, bIsBackCooledDown) == 0x0003F9, "Member 'UWBP_MenuContainer_C::bIsBackCooledDown' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, bIsNavigationCooledDown) == 0x0003FA, "Member 'UWBP_MenuContainer_C::bIsNavigationCooledDown' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, LoadingScreenWidget) == 0x000400, "Member 'UWBP_MenuContainer_C::LoadingScreenWidget' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, bAllowTransitionBack) == 0x000430, "Member 'UWBP_MenuContainer_C::bAllowTransitionBack' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, CanvasPanelRef) == 0x000438, "Member 'UWBP_MenuContainer_C::CanvasPanelRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MainLayerRef) == 0x000440, "Member 'UWBP_MenuContainer_C::MainLayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, SubTabsLayerRef) == 0x000448, "Member 'UWBP_MenuContainer_C::SubTabsLayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, SubMenuLayerRef) == 0x000450, "Member 'UWBP_MenuContainer_C::SubMenuLayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, DialogLayerRef) == 0x000458, "Member 'UWBP_MenuContainer_C::DialogLayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, FooterBarLayerRef) == 0x000460, "Member 'UWBP_MenuContainer_C::FooterBarLayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, LoadingScreenLayerRef) == 0x000468, "Member 'UWBP_MenuContainer_C::LoadingScreenLayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, ForegroundLayerRef) == 0x000470, "Member 'UWBP_MenuContainer_C::ForegroundLayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, BackgroundLayerRef) == 0x000478, "Member 'UWBP_MenuContainer_C::BackgroundLayerRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, FirstShownMenu) == 0x000480, "Member 'UWBP_MenuContainer_C::FirstShownMenu' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, IntroMenu) == 0x0004B0, "Member 'UWBP_MenuContainer_C::IntroMenu' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, TitleScreenMenu) == 0x0004E0, "Member 'UWBP_MenuContainer_C::TitleScreenMenu' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, Payload) == 0x000510, "Member 'UWBP_MenuContainer_C::Payload' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MenuInputMap) == 0x000518, "Member 'UWBP_MenuContainer_C::MenuInputMap' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, Menu_to_Add) == 0x000568, "Member 'UWBP_MenuContainer_C::Menu_to_Add' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, SelectionMapMenu) == 0x000598, "Member 'UWBP_MenuContainer_C::SelectionMapMenu' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, Intro_Menu_Obj_Ref) == 0x0005C8, "Member 'UWBP_MenuContainer_C::Intro_Menu_Obj_Ref' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MenuCameras2) == 0x0005F8, "Member 'UWBP_MenuContainer_C::MenuCameras2' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, MainMenuRef) == 0x000608, "Member 'UWBP_MenuContainer_C::MainMenuRef' has a wrong offset!");
static_assert(offsetof(UWBP_MenuContainer_C, EarnRef) == 0x000638, "Member 'UWBP_MenuContainer_C::EarnRef' has a wrong offset!");

}

