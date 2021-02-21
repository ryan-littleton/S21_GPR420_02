// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CubeActor.generated.h"

UCLASS()
class FPSGAME_API ACubeActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(Category = Meshes, VisibleAnywhere)
	//TSubobjectPtr<UStaticMeshComponent> CubeMesh;
	UStaticMeshComponent *CubeMesh;
	
public:	
	// Sets default values for this actor's properties
	ACubeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
