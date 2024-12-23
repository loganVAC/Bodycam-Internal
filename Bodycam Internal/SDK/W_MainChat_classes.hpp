#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: W_MainChat

#include "Basic.hpp"

#include "E_Prefix_structs.hpp"
#include "WBP_InteractableMenu_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "E_AnimOnCreate_structs.hpp"
#include "Engine_structs.hpp"
#include "E_ChatCategory_structs.hpp"
#include "E_ChatCommand_structs.hpp"
#include "S_MessageData_structs.hpp"
#include "E_Emote_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass W_MainChat.W_MainChat_C
// 0x0240 (0x05C8 - 0x0388)
class UW_MainChat_C final : public UWBP_InteractableMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_W_MainChat_C;                       // 0x0388(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnCreate;                                          // 0x0390(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeInOut;                                         // 0x0398(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Chat;                                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_Chat_1;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Commit;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_Settings;                                   // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableText_ChatEntry;                            // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleScreenButton_Silence_C*       General;                                           // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_Category;                            // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                MainMenuBorder;                                    // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Main;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_PM;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleScreenButton_Silence_C*       PRIVATE;                                           // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleScreenButton_Silence_C*       PROXIMTY;                                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           RetainerBox_0;                                     // 0x0400(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_Messages;                                // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TitleScreenButton_Silence_C*       Settings;                                          // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_MainChat;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_PM;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButtons_C*                   W_CategoryButtons_All;                             // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButtons_C*                   W_CategoryButtons_C_0;                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButtons_C*                   W_CategoryButtons_Global;                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButtons_C*                   W_CategoryButtons_Private;                         // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButtons_C*                   W_CategoryButtons_Proximity;                       // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_CategoryButtons_C*                   W_CategoryButtons_Team;                            // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_Settings_C*                          W_Settings;                                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          ChatOpen_;                                         // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_ChatCategory                                OnCategory;                                        // 0x0469(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_46A[0x6];                                      // 0x046A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FText>                           IgnoreUsername;                                    // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UW_MessageChat_C*>               AllMessages;                                       // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         PlayerID;                                          // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_494[0x4];                                      // 0x0494(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      ControllerRef;                                     // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MaximumMessageCount;                               // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_AnimOnCreate                                MessageAnimation;                                  // 0x04A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SaveMessages_;                                     // 0x04A5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowTime_;                                         // 0x04A6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CloseOnCommit_;                                    // 0x04A7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayChatAnim_;                                     // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ResetFocus_;                                       // 0x04A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowHideMouse_;                                    // 0x04AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4AB[0x5];                                      // 0x04AB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_ChatComponent_C*                    ChatCompRef;                                       // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UW_CategoryButtons_C*>           ButtonsArray;                                      // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         ToPlayerID;                                        // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CC[0x4];                                      // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CurrentPMUsername;                                 // 0x04D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   CurrentMessage;                                    // 0x04E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PlayerUserName;                                    // 0x0500(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Attempt;                                           // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51C[0x4];                                      // 0x051C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS_MessageData>                 MessagesData;                                      // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          InSpam_;                                           // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_531[0x3];                                      // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         OldMessageIndex;                                   // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableSetting_;                                   // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayerCanWrite_;                                   // 0x0539(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ShowLogOnAllCat_;                                  // 0x053A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInSpawnMode_;                                    // 0x053B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53C[0x4];                                      // 0x053C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        ChatBoxHeight;                                     // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChatBoxWidth;                                      // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChatBoxPositionX;                                  // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ChatBoxPositionY;                                  // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Attempt_0;                                         // 0x0560(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Global_Color;                                      // 0x0564(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Proximity_Color;                                   // 0x0574(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           System_Color;                                      // 0x0584(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Team_Color;                                        // 0x0594(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Combat_Color;                                      // 0x05A4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Private_Color;                                     // 0x05B4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AddNewMessage(const class FText& Prefix, const struct FS_MessageData& MessageData, const struct FSlateColor& PrefixColor, const struct FSlateColor& UsernameColor, const struct FSlateColor& MessageColor);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_597_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Commit_K2Node_ComponentBoundEvent_156_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EditableText__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__W_MainChat_Player_1_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature();
	void BndEvt__W_MainChat_Player_2_K2Node_ComponentBoundEvent_1_OnWidgetClicked__DelegateSignature();
	void BndEvt__W_MainChat_Player_K2Node_ComponentBoundEvent_2_OnWidgetClicked__DelegateSignature();
	void BndEvt__W_MainChat_PROXIMTY_K2Node_ComponentBoundEvent_3_OnWidgetClicked__DelegateSignature();
	void CheckBlocked(const class FText& Username, bool* Blocked_);
	void CheckForAddMessage(class UW_MessageChat_C* MessageRef);
	void CheckForAnimOnNewMessage(E_ChatCategory MessageCategory, bool* ScrollToEnd_);
	void CheckForChatCommand(const class FText& Message, bool* Continue_);
	void CheckForMessageCount();
	void ClearChatInstance();
	void Construct();
	void ContinueOnClickedPrivateMessage(int32 ToPlayerID_0, const class FText& ToUsername);
	void ContinuePrivateMessage(int32 ToPlayerID_0, const class FText& ToUsername, const class FText& Message, const class FText& FromUsername);
	void ExecuteUbergraph_W_MainChat(int32 EntryPoint);
	void GetSkipParameterVerification(E_ChatCommand Command, bool* Skip_);
	void LoadMessagesAndSettings();
	void MyCommit(const class FText& Text);
	void OnClean();
	void OnClickedCategory(E_ChatCategory NewCategory);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OpenCloseChat();
	void PlayerNotFound(const class FText& Username);
	void ReceivedMessage(const struct FS_MessageData& MessageData, bool Save_);
	void RefreshTimeVisibility(bool ShowTime__0);
	void RemoveBlocked(const class FText& Username);
	void Reply(const class FText& Message);
	void ResetChatboxSizePosition();
	void ResetFocus();
	void SaveMessages();
	void SaveSettings();
	void SelectNextTab(bool* Found_);
	void SelectOldMessage(bool Next_);
	void SendSystemMessage(const class FText& Message, const struct FLinearColor& MessageColor);
	void SetBlockedPlayer(bool Blocked_, const class FText& Username);
	void ShowTeamMessage(int32 TeamID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"W_MainChat_C">();
	}
	static class UW_MainChat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UW_MainChat_C>();
	}
};
static_assert(alignof(UW_MainChat_C) == 0x000008, "Wrong alignment on UW_MainChat_C");
static_assert(sizeof(UW_MainChat_C) == 0x0005C8, "Wrong size on UW_MainChat_C");
static_assert(offsetof(UW_MainChat_C, UberGraphFrame_W_MainChat_C) == 0x000388, "Member 'UW_MainChat_C::UberGraphFrame_W_MainChat_C' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, OnCreate) == 0x000390, "Member 'UW_MainChat_C::OnCreate' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, FadeInOut) == 0x000398, "Member 'UW_MainChat_C::FadeInOut' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Border_Chat) == 0x0003A0, "Member 'UW_MainChat_C::Border_Chat' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Border_Chat_1) == 0x0003A8, "Member 'UW_MainChat_C::Border_Chat_1' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Button_Commit) == 0x0003B0, "Member 'UW_MainChat_C::Button_Commit' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Button_Settings) == 0x0003B8, "Member 'UW_MainChat_C::Button_Settings' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, EditableText_ChatEntry) == 0x0003C0, "Member 'UW_MainChat_C::EditableText_ChatEntry' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, General) == 0x0003C8, "Member 'UW_MainChat_C::General' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, HorizontalBox_Category) == 0x0003D0, "Member 'UW_MainChat_C::HorizontalBox_Category' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, MainMenuBorder) == 0x0003D8, "Member 'UW_MainChat_C::MainMenuBorder' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Overlay_Main) == 0x0003E0, "Member 'UW_MainChat_C::Overlay_Main' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Overlay_PM) == 0x0003E8, "Member 'UW_MainChat_C::Overlay_PM' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, PRIVATE) == 0x0003F0, "Member 'UW_MainChat_C::PRIVATE' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, PROXIMTY) == 0x0003F8, "Member 'UW_MainChat_C::PROXIMTY' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, RetainerBox_0) == 0x000400, "Member 'UW_MainChat_C::RetainerBox_0' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ScrollBox_Messages) == 0x000408, "Member 'UW_MainChat_C::ScrollBox_Messages' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Settings) == 0x000410, "Member 'UW_MainChat_C::Settings' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, SizeBox_MainChat) == 0x000418, "Member 'UW_MainChat_C::SizeBox_MainChat' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, TextBlock_PM) == 0x000420, "Member 'UW_MainChat_C::TextBlock_PM' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, W_CategoryButtons_All) == 0x000428, "Member 'UW_MainChat_C::W_CategoryButtons_All' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, W_CategoryButtons_C_0) == 0x000430, "Member 'UW_MainChat_C::W_CategoryButtons_C_0' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, W_CategoryButtons_Global) == 0x000438, "Member 'UW_MainChat_C::W_CategoryButtons_Global' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, W_CategoryButtons_Private) == 0x000440, "Member 'UW_MainChat_C::W_CategoryButtons_Private' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, W_CategoryButtons_Proximity) == 0x000448, "Member 'UW_MainChat_C::W_CategoryButtons_Proximity' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, W_CategoryButtons_Team) == 0x000450, "Member 'UW_MainChat_C::W_CategoryButtons_Team' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, W_Settings) == 0x000458, "Member 'UW_MainChat_C::W_Settings' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, WidgetSwitcher_0) == 0x000460, "Member 'UW_MainChat_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ChatOpen_) == 0x000468, "Member 'UW_MainChat_C::ChatOpen_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, OnCategory) == 0x000469, "Member 'UW_MainChat_C::OnCategory' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, IgnoreUsername) == 0x000470, "Member 'UW_MainChat_C::IgnoreUsername' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, AllMessages) == 0x000480, "Member 'UW_MainChat_C::AllMessages' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, PlayerID) == 0x000490, "Member 'UW_MainChat_C::PlayerID' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ControllerRef) == 0x000498, "Member 'UW_MainChat_C::ControllerRef' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, MaximumMessageCount) == 0x0004A0, "Member 'UW_MainChat_C::MaximumMessageCount' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, MessageAnimation) == 0x0004A4, "Member 'UW_MainChat_C::MessageAnimation' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, SaveMessages_) == 0x0004A5, "Member 'UW_MainChat_C::SaveMessages_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ShowTime_) == 0x0004A6, "Member 'UW_MainChat_C::ShowTime_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, CloseOnCommit_) == 0x0004A7, "Member 'UW_MainChat_C::CloseOnCommit_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, PlayChatAnim_) == 0x0004A8, "Member 'UW_MainChat_C::PlayChatAnim_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ResetFocus_) == 0x0004A9, "Member 'UW_MainChat_C::ResetFocus_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ShowHideMouse_) == 0x0004AA, "Member 'UW_MainChat_C::ShowHideMouse_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ChatCompRef) == 0x0004B0, "Member 'UW_MainChat_C::ChatCompRef' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ButtonsArray) == 0x0004B8, "Member 'UW_MainChat_C::ButtonsArray' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ToPlayerID) == 0x0004C8, "Member 'UW_MainChat_C::ToPlayerID' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, CurrentPMUsername) == 0x0004D0, "Member 'UW_MainChat_C::CurrentPMUsername' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, CurrentMessage) == 0x0004E8, "Member 'UW_MainChat_C::CurrentMessage' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, PlayerUserName) == 0x000500, "Member 'UW_MainChat_C::PlayerUserName' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Attempt) == 0x000518, "Member 'UW_MainChat_C::Attempt' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, MessagesData) == 0x000520, "Member 'UW_MainChat_C::MessagesData' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, InSpam_) == 0x000530, "Member 'UW_MainChat_C::InSpam_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, OldMessageIndex) == 0x000534, "Member 'UW_MainChat_C::OldMessageIndex' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, DisableSetting_) == 0x000538, "Member 'UW_MainChat_C::DisableSetting_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, PlayerCanWrite_) == 0x000539, "Member 'UW_MainChat_C::PlayerCanWrite_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ShowLogOnAllCat_) == 0x00053A, "Member 'UW_MainChat_C::ShowLogOnAllCat_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, IsInSpawnMode_) == 0x00053B, "Member 'UW_MainChat_C::IsInSpawnMode_' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ChatBoxHeight) == 0x000540, "Member 'UW_MainChat_C::ChatBoxHeight' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ChatBoxWidth) == 0x000548, "Member 'UW_MainChat_C::ChatBoxWidth' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ChatBoxPositionX) == 0x000550, "Member 'UW_MainChat_C::ChatBoxPositionX' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, ChatBoxPositionY) == 0x000558, "Member 'UW_MainChat_C::ChatBoxPositionY' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Attempt_0) == 0x000560, "Member 'UW_MainChat_C::Attempt_0' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Global_Color) == 0x000564, "Member 'UW_MainChat_C::Global_Color' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Proximity_Color) == 0x000574, "Member 'UW_MainChat_C::Proximity_Color' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, System_Color) == 0x000584, "Member 'UW_MainChat_C::System_Color' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Team_Color) == 0x000594, "Member 'UW_MainChat_C::Team_Color' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Combat_Color) == 0x0005A4, "Member 'UW_MainChat_C::Combat_Color' has a wrong offset!");
static_assert(offsetof(UW_MainChat_C, Private_Color) == 0x0005B4, "Member 'UW_MainChat_C::Private_Color' has a wrong offset!");

}

