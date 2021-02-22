// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "FPSBombActor.h"
#include "CubeActor.h"
#include "Kismet/GameplayStatics.h"

AFPSProjectile::AFPSProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AFPSProjectile::OnHit);	// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}


void AFPSProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		//change all this to Step 2: part 1
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		FVector Scale = OtherComp->GetComponentScale();
		if (Scale.GetMin() < 1.0f)
		{
			AFPSBombActor* MyBomb = GetWorld()->SpawnActor<AFPSBombActor>(BombClass, OtherActor->GetActorLocation(), OtherActor->GetActorRotation());
			OtherActor->Destroy();
		}
		else
		{
			Scale *= 0.25f;
			//destroy cube and spawn 4 more 1/4 size cubes
			FVector Location = OtherActor->GetActorLocation();
			FRotator Rotation = OtherActor->GetActorRotation();

			//FActorSpawnParameters SpawnInfo;
			OtherActor->Destroy();

			int totalCubes = 4;

			for (int i = 0; i < totalCubes; i++)
			{
				//ACubeActor* NewCube = GetWorld()->SpawnActor<ACubeActor>(Location, Rotation, SpawnInfo);
				ACubeActor* NewCube = GetWorld()->SpawnActor<ACubeActor>(CubeClass, Location, Rotation);
				NewCube->SetActorScale3D(Scale);

				Location.Z += 25 * (Scale.Z * 4);
			}
		}




		/*UMaterialInstanceDynamic* MatInst = OtherComp->CreateAndSetMaterialInstanceDynamic(0);
		if (MatInst)
		{
			MatInst->SetVectorParameterValue("Color", FLinearColor::MakeRandomColor());
		}
		*/

		//Destroy();
	}
}
