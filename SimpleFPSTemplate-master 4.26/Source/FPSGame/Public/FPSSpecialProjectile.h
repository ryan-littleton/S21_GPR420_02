// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSSpecialProjectile.generated.h"

class UProjectileMovementComponent;
class USphereComponent;
class AFPSBombActor;
class ACubeActor;

UCLASS()
class FPSGAME_API AFPSSpecialProjectile : public AActor
{
	GENERATED_BODY()

protected:

	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SpecialProjectile")
		USphereComponent* CollisionComp;

	UPROPERTY(EditDefaultsOnly, Category = "Bombs")
		TSubclassOf<AFPSBombActor> BombClass;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
		UProjectileMovementComponent* ProjectileMovement;

	//same as explosion from bomb
	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
		UParticleSystem* ExplosionTemplate;

	float AttackScale = 0.0f;


public:

	AFPSSpecialProjectile();

	void SetAttackScale(float _Scale);

	/** called when projectile hits something */
	UFUNCTION()
		void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

};
