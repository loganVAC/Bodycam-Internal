#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FXMaterialData

#include "Basic.hpp"

#include "PhysicsCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MaterialState_structs.hpp"


namespace SDK
{

// UserDefinedStruct FXMaterialData.FXMaterialData
// 0x0098 (0x0098 - 0x0000)
struct FFXMaterialData final
{
public:
	EPhysicalSurface                              Surface_5_A13BA84C444F7DFF70888788C6FCCCC2;        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        ImpactParticleFX_47_2D1ADA5E4AE492B40F6A018E974AFC88; // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        RicochetParticleTrailFX_89_A804146D4F1C22B014298B9F801BFD53; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        DebrisParticleFX_78_0D9CC68F469BBA2E68FE8BAD0FBA4293; // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              ImpactSoundFX_52_26AFC5FF4B225EF2B2C41E94EB0ED683; // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              ImpactDecal_72_AFAE4BE8469F751D5996A58C8AC0177C;   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              RicochetDecal_73_BA1A3A3147C74AFF1BE4C1823C48F711; // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DecalSize_39_3448E2FF4BC678271EB742853872E7C2;     // 0x0038(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              ParticleDecal_92_D26A7B3D4F10A3F168E1D0A0B8A04E1A; // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ParticleDecalSize_90_662BB5AF4483ED558A378B991B0319FB; // 0x0058(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                              RearSpatterDecal_124_69E3B9034ED961553C1830B154855E80; // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundCue*                              ParticleCollisionSounds_95_D12C7B394C9112DB7312428752345A16; // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5; // 0x0080(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HotSurface_97_40A8C1CC41B1B65462A21B98D09A678D;    // 0x0081(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ColdSurface_103_8A3EDA61407CAA9014059DA8707DE7BD;  // 0x0082(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Absorbant_99_1EA3FC5043D2C407F4FCD49B1484CF9F;     // 0x0083(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Conductive_101_68E6B3B1478513C4738E5690BE4F6175;   // 0x0084(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Flammable_110_20E5C07646851E782F138697A7FC19FC;    // 0x0085(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Caustic_121_992CDE584A6F006FC3F901A49916A947;      // 0x0086(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMaterialState                                MaterialState_109_530FAB1948850D8B126EC3A58F6426F5; // 0x0087(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temperature_113_01E4F81C469340C33D67C88676011699;  // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Flammability_115_635CCA024B0C5A5736CA668C10996472; // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Conductivity_117_BCB9477E4295BFB34F4BC2A04ECDFF8E; // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Absorbance_119_E906A72E4D061790AAA8D59C0A9C5580;   // 0x0094(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFXMaterialData) == 0x000008, "Wrong alignment on FFXMaterialData");
static_assert(sizeof(FFXMaterialData) == 0x000098, "Wrong size on FFXMaterialData");
static_assert(offsetof(FFXMaterialData, Surface_5_A13BA84C444F7DFF70888788C6FCCCC2) == 0x000000, "Member 'FFXMaterialData::Surface_5_A13BA84C444F7DFF70888788C6FCCCC2' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, ImpactParticleFX_47_2D1ADA5E4AE492B40F6A018E974AFC88) == 0x000008, "Member 'FFXMaterialData::ImpactParticleFX_47_2D1ADA5E4AE492B40F6A018E974AFC88' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, RicochetParticleTrailFX_89_A804146D4F1C22B014298B9F801BFD53) == 0x000010, "Member 'FFXMaterialData::RicochetParticleTrailFX_89_A804146D4F1C22B014298B9F801BFD53' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, DebrisParticleFX_78_0D9CC68F469BBA2E68FE8BAD0FBA4293) == 0x000018, "Member 'FFXMaterialData::DebrisParticleFX_78_0D9CC68F469BBA2E68FE8BAD0FBA4293' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, ImpactSoundFX_52_26AFC5FF4B225EF2B2C41E94EB0ED683) == 0x000020, "Member 'FFXMaterialData::ImpactSoundFX_52_26AFC5FF4B225EF2B2C41E94EB0ED683' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, ImpactDecal_72_AFAE4BE8469F751D5996A58C8AC0177C) == 0x000028, "Member 'FFXMaterialData::ImpactDecal_72_AFAE4BE8469F751D5996A58C8AC0177C' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, RicochetDecal_73_BA1A3A3147C74AFF1BE4C1823C48F711) == 0x000030, "Member 'FFXMaterialData::RicochetDecal_73_BA1A3A3147C74AFF1BE4C1823C48F711' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, DecalSize_39_3448E2FF4BC678271EB742853872E7C2) == 0x000038, "Member 'FFXMaterialData::DecalSize_39_3448E2FF4BC678271EB742853872E7C2' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, ParticleDecal_92_D26A7B3D4F10A3F168E1D0A0B8A04E1A) == 0x000050, "Member 'FFXMaterialData::ParticleDecal_92_D26A7B3D4F10A3F168E1D0A0B8A04E1A' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, ParticleDecalSize_90_662BB5AF4483ED558A378B991B0319FB) == 0x000058, "Member 'FFXMaterialData::ParticleDecalSize_90_662BB5AF4483ED558A378B991B0319FB' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, RearSpatterDecal_124_69E3B9034ED961553C1830B154855E80) == 0x000070, "Member 'FFXMaterialData::RearSpatterDecal_124_69E3B9034ED961553C1830B154855E80' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, ParticleCollisionSounds_95_D12C7B394C9112DB7312428752345A16) == 0x000078, "Member 'FFXMaterialData::ParticleCollisionSounds_95_D12C7B394C9112DB7312428752345A16' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5) == 0x000080, "Member 'FFXMaterialData::LiquidSurface_24_C03386A444373E401ED1CE9CBDE432C5' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, HotSurface_97_40A8C1CC41B1B65462A21B98D09A678D) == 0x000081, "Member 'FFXMaterialData::HotSurface_97_40A8C1CC41B1B65462A21B98D09A678D' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, ColdSurface_103_8A3EDA61407CAA9014059DA8707DE7BD) == 0x000082, "Member 'FFXMaterialData::ColdSurface_103_8A3EDA61407CAA9014059DA8707DE7BD' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, Absorbant_99_1EA3FC5043D2C407F4FCD49B1484CF9F) == 0x000083, "Member 'FFXMaterialData::Absorbant_99_1EA3FC5043D2C407F4FCD49B1484CF9F' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, Conductive_101_68E6B3B1478513C4738E5690BE4F6175) == 0x000084, "Member 'FFXMaterialData::Conductive_101_68E6B3B1478513C4738E5690BE4F6175' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, Flammable_110_20E5C07646851E782F138697A7FC19FC) == 0x000085, "Member 'FFXMaterialData::Flammable_110_20E5C07646851E782F138697A7FC19FC' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, Caustic_121_992CDE584A6F006FC3F901A49916A947) == 0x000086, "Member 'FFXMaterialData::Caustic_121_992CDE584A6F006FC3F901A49916A947' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, MaterialState_109_530FAB1948850D8B126EC3A58F6426F5) == 0x000087, "Member 'FFXMaterialData::MaterialState_109_530FAB1948850D8B126EC3A58F6426F5' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, Temperature_113_01E4F81C469340C33D67C88676011699) == 0x000088, "Member 'FFXMaterialData::Temperature_113_01E4F81C469340C33D67C88676011699' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, Flammability_115_635CCA024B0C5A5736CA668C10996472) == 0x00008C, "Member 'FFXMaterialData::Flammability_115_635CCA024B0C5A5736CA668C10996472' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, Conductivity_117_BCB9477E4295BFB34F4BC2A04ECDFF8E) == 0x000090, "Member 'FFXMaterialData::Conductivity_117_BCB9477E4295BFB34F4BC2A04ECDFF8E' has a wrong offset!");
static_assert(offsetof(FFXMaterialData, Absorbance_119_E906A72E4D061790AAA8D59C0A9C5580) == 0x000094, "Member 'FFXMaterialData::Absorbance_119_E906A72E4D061790AAA8D59C0A9C5580' has a wrong offset!");

}
