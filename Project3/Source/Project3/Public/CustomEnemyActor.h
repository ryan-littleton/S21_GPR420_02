// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomEnemyActor.generated.h"

class USphereComponent;

UCLASS()
class PROJECT3_API ACustomEnemyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomEnemyActor();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float DetectionRange = 500;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float InterpSpeed = 1.0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void FindOverlaps();

};
