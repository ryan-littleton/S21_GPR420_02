// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "HttpActor.generated.h"

UCLASS()
class FPSGAME_API AHttpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHttpActor();
	FHttpModule* Http;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UFUNCTION()
	void MyHttpCall();

	UFUNCTION()
	FText GetRetainerName();

	UFUNCTION()
	int32 GetPrice();

	UPROPERTY(VisibleAnywhere, Category = "Data")
	FText RetainerName;

	UPROPERTY(VisibleAnywhere, Category = "Data")
	int32 PricePerUnit;

	// Processing get request
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
