#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_StatusIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StatusIcon.WBP_StatusIcon_C
// 0x0050 (0x02D0 - 0x0280)
class UWBP_StatusIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0280(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Background;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Icon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             Icon_Texture;                                      // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          bWarning;                                          // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A1[0x3];                                      // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            Icon_Color_Default;                                // 0x02A4(0x0014)(Edit, BlueprintVisible)
	struct FSlateColor                            Icon_Color_Warning;                                // 0x02B8(0x0014)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_WBP_StatusIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StatusIcon_C">();
	}
	static class UWBP_StatusIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StatusIcon_C>();
	}
};
static_assert(alignof(UWBP_StatusIcon_C) == 0x000008, "Wrong alignment on UWBP_StatusIcon_C");
static_assert(sizeof(UWBP_StatusIcon_C) == 0x0002D0, "Wrong size on UWBP_StatusIcon_C");
static_assert(offsetof(UWBP_StatusIcon_C, UberGraphFrame) == 0x000280, "Member 'UWBP_StatusIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StatusIcon_C, Background) == 0x000288, "Member 'UWBP_StatusIcon_C::Background' has a wrong offset!");
static_assert(offsetof(UWBP_StatusIcon_C, Image_Icon) == 0x000290, "Member 'UWBP_StatusIcon_C::Image_Icon' has a wrong offset!");
static_assert(offsetof(UWBP_StatusIcon_C, Icon_Texture) == 0x000298, "Member 'UWBP_StatusIcon_C::Icon_Texture' has a wrong offset!");
static_assert(offsetof(UWBP_StatusIcon_C, bWarning) == 0x0002A0, "Member 'UWBP_StatusIcon_C::bWarning' has a wrong offset!");
static_assert(offsetof(UWBP_StatusIcon_C, Icon_Color_Default) == 0x0002A4, "Member 'UWBP_StatusIcon_C::Icon_Color_Default' has a wrong offset!");
static_assert(offsetof(UWBP_StatusIcon_C, Icon_Color_Warning) == 0x0002B8, "Member 'UWBP_StatusIcon_C::Icon_Color_Warning' has a wrong offset!");

}

