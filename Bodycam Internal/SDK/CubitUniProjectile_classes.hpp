#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CubitUniProjectile

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass CubitUniProjectile.CubitUniProjectile_C
// 0x0038 (0x02C8 - 0x0290)
class ACubitUniProjectile_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   TracerMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CollisionComponent;                                // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*           Projectile;                                        // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         BulletIndex;                                       // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CharacterOrigin;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void BndEvt__CubitUniProjectile_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_CubitUniProjectile(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CubitUniProjectile_C">();
	}
	static class ACubitUniProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACubitUniProjectile_C>();
	}
};
static_assert(alignof(ACubitUniProjectile_C) == 0x000008, "Wrong alignment on ACubitUniProjectile_C");
static_assert(sizeof(ACubitUniProjectile_C) == 0x0002C8, "Wrong size on ACubitUniProjectile_C");
static_assert(offsetof(ACubitUniProjectile_C, UberGraphFrame) == 0x000290, "Member 'ACubitUniProjectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACubitUniProjectile_C, TracerMesh) == 0x000298, "Member 'ACubitUniProjectile_C::TracerMesh' has a wrong offset!");
static_assert(offsetof(ACubitUniProjectile_C, Sphere) == 0x0002A0, "Member 'ACubitUniProjectile_C::Sphere' has a wrong offset!");
static_assert(offsetof(ACubitUniProjectile_C, CollisionComponent) == 0x0002A8, "Member 'ACubitUniProjectile_C::CollisionComponent' has a wrong offset!");
static_assert(offsetof(ACubitUniProjectile_C, Projectile) == 0x0002B0, "Member 'ACubitUniProjectile_C::Projectile' has a wrong offset!");
static_assert(offsetof(ACubitUniProjectile_C, BulletIndex) == 0x0002B8, "Member 'ACubitUniProjectile_C::BulletIndex' has a wrong offset!");
static_assert(offsetof(ACubitUniProjectile_C, CharacterOrigin) == 0x0002C0, "Member 'ACubitUniProjectile_C::CharacterOrigin' has a wrong offset!");

}

