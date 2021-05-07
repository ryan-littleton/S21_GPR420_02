// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomEnemyActor.h"

// Sets default values
ACustomEnemyActor::ACustomEnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomEnemyActor::BeginPlay()
{
	NewActor = GetWorld()->SpawnActor<AHttpActor>(Universalis, GetActorLocation(), GetActorRotation());
	RetainerName = NewActor->GetRetainerName();
	Super::BeginPlay();
}

// Called every frame
void ACustomEnemyActor::Tick(float DeltaTime)
{
	FindOverlaps();

	RetainerName = NewActor->GetRetainerName();
	Price = NewActor->GetPrice();
	Super::Tick(DeltaTime);
}

void ACustomEnemyActor::FindOverlaps()
{
	FCollisionObjectQueryParams QueryParams;
	QueryParams.AddObjectTypesToQuery(ECC_Pawn);
	
	FCollisionShape CollShape;
	CollShape.SetSphere(DetectionRange);

	TArray<FOverlapResult> OutOverlaps;
	GetWorld()->OverlapMultiByObjectType(OutOverlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollShape);

	for (FOverlapResult Result : OutOverlaps)
	{
		AActor* Overlap = Result.GetActor();
		if (Overlap && Overlap->GetName().Equals("Character_Main_2"))
		{
			//move enemy towards player
			FVector playerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
			FVector currentLocation = this->GetActorLocation();
			
			FVector newLocation = FMath::VInterpTo(currentLocation, playerLocation, FApp::GetDeltaTime(), InterpSpeed);
			//FHitResult sweepResult;
			//SetActorLocation(newLocation, true, &sweepResult, ETeleportType::TeleportPhysics);
			SetActorLocation(newLocation);
			
		}
	}
}




