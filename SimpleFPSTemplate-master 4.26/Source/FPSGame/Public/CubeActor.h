// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HttpActor.h"
#include "CubeActor.generated.h"

class HttpActor;

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

	UPROPERTY(EditDefaultsOnly, Category = "HTTP")
		TSubclassOf<AHttpActor> Universalis;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Text")
		FText RetainerName;

	AHttpActor* NewActor;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
