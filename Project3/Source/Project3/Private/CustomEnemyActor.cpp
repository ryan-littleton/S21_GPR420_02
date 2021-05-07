// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomEnemyActor.h"

#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"

// Sets default values
ACustomEnemyActor::ACustomEnemyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACustomEnemyActor::BeginPlay()
{
	Super::BeginPlay();


	//CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	//CollisionSphere->InitSphereRadius(50.0f);
	//CollisionSphere->SetCollisionProfileName("InRange");
	//CollisionSphere->AttachToComponent(RootComponent);
}

// Called every frame
void ACustomEnemyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FindOverlaps();
}

void ACustomEnemyActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	/*
	if(OtherActor->GetClass() == ACharacter::StaticClass())
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Player is in range!"));
		//move towards player
	}
	*/
}

void ACustomEnemyActor::FindOverlaps()
{
	FCollisionObjectQueryParams QueryParams;
	//QueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	//QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);
	QueryParams.AddObjectTypesToQuery(ECC_Pawn);
	
	FCollisionShape CollShape;
	CollShape.SetSphere(500.0f);

	TArray<FOverlapResult> OutOverlaps;
	GetWorld()->OverlapMultiByObjectType(OutOverlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollShape);

	for (FOverlapResult Result : OutOverlaps)
	{
		AActor* Overlap = Result.GetActor();
		if (Overlap && Overlap->GetName().Equals("Character_Main_2"))
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Player is in range!"));
		}
	}
}




