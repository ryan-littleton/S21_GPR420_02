// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSBombActor.h"
#include "Kismet/GameplayStatics.h" // for UGameplayStatics
#include "Engine/Engine.h"

// Sets default values
AFPSBombActor::AFPSBombActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ExplodeDelay = 2.0f;
}

// Called when the game starts or when spawned
void AFPSBombActor::BeginPlay()
{
	Super::BeginPlay();
	
	FTimerHandle Explode_TimerHandle;
	GetWorldTimerManager().SetTimer(Explode_TimerHandle, this, &AFPSBombActor::Explode, ExplodeDelay);
	
}

// Called every frame
void AFPSBombActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFPSBombActor::Explode()
{
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionTemplate, GetActorLocation());

	Destroy();
}

