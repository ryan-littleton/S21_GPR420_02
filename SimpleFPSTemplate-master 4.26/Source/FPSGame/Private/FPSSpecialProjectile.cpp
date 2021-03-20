// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSSpecialProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "FPSBombActor.h"
#include "CubeActor.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AFPSSpecialProjectile::AFPSSpecialProjectile()
{
    //create a projectile similar to regular attack
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(100.0f);
	CollisionComp->SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AFPSSpecialProjectile::OnHit);	// set up a notification for when this component hits something blocking

	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	RootComponent = CollisionComp;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 1500.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	InitialLifeSpan = 6.0f;
}

void AFPSSpecialProjectile::SetAttackScale(float _Scale)
{
	AttackScale = _Scale;
}


void AFPSSpecialProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		//Similar to the bomb explode function
		FCollisionObjectQueryParams QueryParams;
		QueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
		QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);

		FCollisionShape CollShape;
		float currentScale = 500.0f * AttackScale;
		FString ScaleText = FString::SanitizeFloat(currentScale);
		CollShape.SetSphere(currentScale); //This should be changed with scale
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, ScaleText);

		TArray<FOverlapResult> OutOverlaps;
		GetWorld()->OverlapMultiByObjectType(OutOverlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollShape);

		for (FOverlapResult Result : OutOverlaps)
		{
			UPrimitiveComponent* Overlap = Result.GetComponent();
			if (Overlap && Overlap->IsSimulatingPhysics())
			{
				UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionTemplate, Result.GetActor()->GetActorLocation());
				Result.GetActor()->Destroy();
			}
		}

		Destroy();

	}
}


