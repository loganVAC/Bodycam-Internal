#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ST_DefaultSteamItem

#include "Basic.hpp"

#include "EN_ShopItemPrice_structs.hpp"
#include "EN_ShopItemColor_structs.hpp"
#include "EN_ShopItemType_structs.hpp"
#include "ShopItemPromoRulesEnum_structs.hpp"
#include "EN_ShopItemSupClass_structs.hpp"
#include "EN_ShopItemClass_structs.hpp"


namespace SDK
{

// UserDefinedStruct ST_DefaultSteamItem.ST_DefaultSteamItem
// 0x00A8 (0x00A8 - 0x0000)
struct FST_DefaultSteamItem final
{
public:
	int32                                         Itemdefid_81_720CA68340EE726562444E9FEFFEA124;     // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_ShopItemType                               Type_30_01C75ACB49EC3D242342D8AB67E16188;          // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EShopItemPromoRulesEnum                       Promo_117_27419B7E43483C262A17D5B37667DD09;        // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Drop_interval_135_6529218D483E4A50F1C628BC64FA7710; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 bundle_6_D9E8E92B4C91CA1269CE40B3E6D62C6D;         // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Description_37_9A0376C242ADD935B67760A7295AE6D8;   // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Icon_url_16_DE4C8CE647755D1F7BC4EC85FC362ECD;      // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EN_ShopItemPrice                              Price_138_0A2B24D74651E701CCEB2388CB600907;        // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Game_hidden_137_447DEFFB4E917030DC3475AAA320D591;  // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Shop_51_F8BB829247F5D153A9C0BCA2888B3511;          // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Shopdaystart_66_315E51C44AC3953295496D80F22FF0E8;  // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Shopdayend_48_2C00721E46B76D4DAF2927994267E0CC;    // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Displayname_86_86574C304F31014434138DB645592094;   // 0x0068(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EN_ShopItemColor                              Displaycolor_87_689EDE0D42FF53478C3424BE014E9388;  // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_ShopItemSupClass                           Itemclasssup_93_1C746F5D4541D87AD1517196000CA09C;  // 0x0079(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EN_ShopItemClass                              Itemclass_54_E58D587741A5294F71C4BF8F913A5F24;     // 0x007A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B[0x5];                                       // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          Meshname_59_BCE97CF24A41EFE8D141EF9F8E788430;      // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             MaterialSlots_140_18F3DD4E4CC3E45886818A8C09B34F16; // 0x0088(0x0010)(Edit, BlueprintVisible)
	class UTexture*                               Icon_106_F2911D9B4B7A1B534907E694B9A0E789;         // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Tradable_20_C23B776D49FF41ED79EEB8AE53231309;      // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Marketable_22_A51D3ABF48FCBD6AD5BD989A00968626;    // 0x00A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Store_hidden_95_7C790E2A4FFAF23ED12BE8BB860B3040;  // 0x00A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hidden_97_84B213154DA9DFF9B3FF21A610CE7A4A;        // 0x00A3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Game_only_99_FF4A37C9412064D6B65CD1AC08065703;     // 0x00A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FST_DefaultSteamItem) == 0x000008, "Wrong alignment on FST_DefaultSteamItem");
static_assert(sizeof(FST_DefaultSteamItem) == 0x0000A8, "Wrong size on FST_DefaultSteamItem");
static_assert(offsetof(FST_DefaultSteamItem, Itemdefid_81_720CA68340EE726562444E9FEFFEA124) == 0x000000, "Member 'FST_DefaultSteamItem::Itemdefid_81_720CA68340EE726562444E9FEFFEA124' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Type_30_01C75ACB49EC3D242342D8AB67E16188) == 0x000004, "Member 'FST_DefaultSteamItem::Type_30_01C75ACB49EC3D242342D8AB67E16188' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Promo_117_27419B7E43483C262A17D5B37667DD09) == 0x000005, "Member 'FST_DefaultSteamItem::Promo_117_27419B7E43483C262A17D5B37667DD09' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Drop_interval_135_6529218D483E4A50F1C628BC64FA7710) == 0x000008, "Member 'FST_DefaultSteamItem::Drop_interval_135_6529218D483E4A50F1C628BC64FA7710' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, bundle_6_D9E8E92B4C91CA1269CE40B3E6D62C6D) == 0x000010, "Member 'FST_DefaultSteamItem::bundle_6_D9E8E92B4C91CA1269CE40B3E6D62C6D' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Description_37_9A0376C242ADD935B67760A7295AE6D8) == 0x000020, "Member 'FST_DefaultSteamItem::Description_37_9A0376C242ADD935B67760A7295AE6D8' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Icon_url_16_DE4C8CE647755D1F7BC4EC85FC362ECD) == 0x000030, "Member 'FST_DefaultSteamItem::Icon_url_16_DE4C8CE647755D1F7BC4EC85FC362ECD' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Price_138_0A2B24D74651E701CCEB2388CB600907) == 0x000040, "Member 'FST_DefaultSteamItem::Price_138_0A2B24D74651E701CCEB2388CB600907' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Game_hidden_137_447DEFFB4E917030DC3475AAA320D591) == 0x000041, "Member 'FST_DefaultSteamItem::Game_hidden_137_447DEFFB4E917030DC3475AAA320D591' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Shop_51_F8BB829247F5D153A9C0BCA2888B3511) == 0x000044, "Member 'FST_DefaultSteamItem::Shop_51_F8BB829247F5D153A9C0BCA2888B3511' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Shopdaystart_66_315E51C44AC3953295496D80F22FF0E8) == 0x000048, "Member 'FST_DefaultSteamItem::Shopdaystart_66_315E51C44AC3953295496D80F22FF0E8' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Shopdayend_48_2C00721E46B76D4DAF2927994267E0CC) == 0x000058, "Member 'FST_DefaultSteamItem::Shopdayend_48_2C00721E46B76D4DAF2927994267E0CC' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Displayname_86_86574C304F31014434138DB645592094) == 0x000068, "Member 'FST_DefaultSteamItem::Displayname_86_86574C304F31014434138DB645592094' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Displaycolor_87_689EDE0D42FF53478C3424BE014E9388) == 0x000078, "Member 'FST_DefaultSteamItem::Displaycolor_87_689EDE0D42FF53478C3424BE014E9388' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Itemclasssup_93_1C746F5D4541D87AD1517196000CA09C) == 0x000079, "Member 'FST_DefaultSteamItem::Itemclasssup_93_1C746F5D4541D87AD1517196000CA09C' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Itemclass_54_E58D587741A5294F71C4BF8F913A5F24) == 0x00007A, "Member 'FST_DefaultSteamItem::Itemclass_54_E58D587741A5294F71C4BF8F913A5F24' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Meshname_59_BCE97CF24A41EFE8D141EF9F8E788430) == 0x000080, "Member 'FST_DefaultSteamItem::Meshname_59_BCE97CF24A41EFE8D141EF9F8E788430' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, MaterialSlots_140_18F3DD4E4CC3E45886818A8C09B34F16) == 0x000088, "Member 'FST_DefaultSteamItem::MaterialSlots_140_18F3DD4E4CC3E45886818A8C09B34F16' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Icon_106_F2911D9B4B7A1B534907E694B9A0E789) == 0x000098, "Member 'FST_DefaultSteamItem::Icon_106_F2911D9B4B7A1B534907E694B9A0E789' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Tradable_20_C23B776D49FF41ED79EEB8AE53231309) == 0x0000A0, "Member 'FST_DefaultSteamItem::Tradable_20_C23B776D49FF41ED79EEB8AE53231309' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Marketable_22_A51D3ABF48FCBD6AD5BD989A00968626) == 0x0000A1, "Member 'FST_DefaultSteamItem::Marketable_22_A51D3ABF48FCBD6AD5BD989A00968626' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Store_hidden_95_7C790E2A4FFAF23ED12BE8BB860B3040) == 0x0000A2, "Member 'FST_DefaultSteamItem::Store_hidden_95_7C790E2A4FFAF23ED12BE8BB860B3040' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Hidden_97_84B213154DA9DFF9B3FF21A610CE7A4A) == 0x0000A3, "Member 'FST_DefaultSteamItem::Hidden_97_84B213154DA9DFF9B3FF21A610CE7A4A' has a wrong offset!");
static_assert(offsetof(FST_DefaultSteamItem, Game_only_99_FF4A37C9412064D6B65CD1AC08065703) == 0x0000A4, "Member 'FST_DefaultSteamItem::Game_only_99_FF4A37C9412064D6B65CD1AC08065703' has a wrong offset!");

}
