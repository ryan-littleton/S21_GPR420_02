// Fill out your copyright notice in the Description page of Project Settings.


#include "CubeActor.h"

// Sets default values
ACubeActor::ACubeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	static ConstructorHelpers::FObjectFinder<UStaticMesh>MeshAsset(TEXT("StaticMesh'/Game/Environment/Shape_Cube.Shape_Cube'"));
	UStaticMesh* Asset = MeshAsset.Object;

	CubeMesh->SetStaticMesh(Asset);

	RootComponent = CubeMesh;
}

// Called when the game starts or when spawned
void ACubeActor::BeginPlay()
{
	NewActor = GetWorld()->SpawnActor<AHttpActor>(Universalis, GetActorLocation(), GetActorRotation());
	RetainerName = NewActor->GetRetainerName();
	Super::BeginPlay();
}

// Called every frame
void ACubeActor::Tick(float DeltaTime)
{
	RetainerName = NewActor->GetRetainerName();
	Super::Tick(DeltaTime);
}

