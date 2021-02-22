// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSProjectile.generated.h"


class UProjectileMovementComponent;
class USphereComponent;
class AFPSBombActor;
class ACubeActor;


UCLASS()
class AFPSProjectile : public AActor
{
	GENERATED_BODY()

protected:

	/** Sphere collision component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category= "Projectile")
	USphereComponent* CollisionComp;

	UPROPERTY(EditDefaultsOnly, Category = "Bombs")
	TSubclassOf<AFPSBombActor> BombClass;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	UProjectileMovementComponent* ProjectileMovement;

	//cube actor
	UPROPERTY(EditDefaultsOnly, Category = "Cubes")
	TSubclassOf<ACubeActor> CubeClass;

	//same as explosion from bomb
	UPROPERTY(EditDefaultsOnly, Category = "Explosion")
	UParticleSystem* ExplosionTemplate;


public:

	AFPSProjectile();

	//void SpecialAttack();

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }

	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

