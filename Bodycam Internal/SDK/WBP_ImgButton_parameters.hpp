#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ImgButton

#include "Basic.hpp"

#include "STR_GamemodeWinInfo_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_ImgButton.WBP_ImgButton_C.ExecuteUbergraph_WBP_ImgButton
// 0x0218 (0x0218 - 0x0000)
struct WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0008(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSTR_GamemodeWinInfo                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x0070(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B2[0x6];                                       // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0050)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0118(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0168(0x0010)(ReferenceParm)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0178(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0188(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01A0(0x0018)()
	float                                         Temp_real_Variable;                                // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_real_Variable_1;                              // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x7];                                      // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APC_Lobby_C*>                    CallFunc_GetAllActorsOfClass_OutActors;            // 0x01C8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DD[0x3];                                      // 0x01DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F1[0x3];                                      // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default_1;                           // 0x01F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_Select_Default_2;                           // 0x01F8(0x0018)()
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton) == 0x000008, "Wrong alignment on WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton");
static_assert(sizeof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton) == 0x000218, "Wrong size on WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, EntryPoint) == 0x000000, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_bool_Variable) == 0x000004, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_text_Variable) == 0x000008, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_bool_Variable_1) == 0x000020, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_byte_Variable) == 0x000021, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_byte_Variable_1) == 0x000022, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_bool_Variable_2) == 0x000023, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_byte_Variable_2) == 0x000024, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_byte_Variable_3) == 0x000025, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_bool_Variable_3) == 0x000026, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_byte_Variable_4) == 0x000027, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_byte_Variable_5) == 0x000028, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_Event_IsDesignTime) == 0x000029, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000030, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_PlayAnimationForward_ReturnValue) == 0x000038, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_GetPlayerController_ReturnValue) == 0x000040, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_HasAuthority_ReturnValue) == 0x000048, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000050, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000060, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_Conv_StringToName_ReturnValue) == 0x000064, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_GetDataTableRowFromName_OutRow) == 0x000070, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B0, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_Select_Default) == 0x0000B1, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_Conv_IntToInt64_ReturnValue) == 0x0000B8, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x0000C0, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_MakeStruct_FormatArgumentData_1) == 0x000118, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_MakeArray_Array) == 0x000168, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_MakeArray_Array_1) == 0x000178, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_Format_ReturnValue) == 0x000188, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_Format_ReturnValue_1) == 0x0001A0, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_real_Variable) == 0x0001B8, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_real_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_real_Variable_1) == 0x0001BC, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_real_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, Temp_bool_Variable_4) == 0x0001C0, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_GetAllActorsOfClass_OutActors) == 0x0001C8, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_Array_Length_ReturnValue) == 0x0001D8, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001DC, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_Conv_IntToString_ReturnValue) == 0x0001E0, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, CallFunc_Not_PreBool_ReturnValue) == 0x0001F0, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_Select_Default_1) == 0x0001F4, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_Select_Default_2) == 0x0001F8, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_Select_Default_3) == 0x000210, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton, K2Node_Select_Default_4) == 0x000211, "Member 'WBP_ImgButton_C_ExecuteUbergraph_WBP_ImgButton::K2Node_Select_Default_4' has a wrong offset!");

// Function WBP_ImgButton.WBP_ImgButton_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_ImgButton_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ImgButton_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_ImgButton_C_PreConstruct");
static_assert(sizeof(WBP_ImgButton_C_PreConstruct) == 0x000001, "Wrong size on WBP_ImgButton_C_PreConstruct");
static_assert(offsetof(WBP_ImgButton_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_ImgButton_C_PreConstruct::IsDesignTime' has a wrong offset!");

}
