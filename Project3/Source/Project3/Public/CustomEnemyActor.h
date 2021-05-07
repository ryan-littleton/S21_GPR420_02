// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "HttpActor.h"
#include "CustomEnemyActor.generated.h"


class USphereComponent;
class HttpActor;


UCLASS()
class PROJECT3_API ACustomEnemyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustomEnemyActor();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float DetectionRange = 1500;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float InterpSpeed = 1.0;

	UPROPERTY(EditDefaultsOnly, Category = "HTTP")
		TSubclassOf<AHttpActor> Universalis;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Text")
		FText RetainerName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Text")
		int32 Price;

	AHttpActor* NewActor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void FindOverlaps();

};
