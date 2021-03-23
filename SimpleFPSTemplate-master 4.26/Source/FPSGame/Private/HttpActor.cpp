// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpActor.h"

// Sets default values
AHttpActor::AHttpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Http = &FHttpModule::Get();
	RetainerName = FText::FromString("Jaundice");
}

// Called when the game starts or when spawned
void AHttpActor::BeginPlay()
{
	MyHttpCall();
	Super::BeginPlay();
	
}

//void AHttpActor::MyHttpCall() {
//	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest(); 
//	Request->OnProcessRequestComplete().BindUObject(this, &AHttpActor::OnResponseReceived);//This is the url on which to process the request
//	Request->SetURL("https://www.quackit.com/json/tutorial/artists.txt");
//	Request->SetVerb("GET");
//	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
//	Request->SetHeader("Content-Type", TEXT("application/json"));
//	Request->ProcessRequest();
//}

void AHttpActor::MyHttpCall() {
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest(); 
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpActor::OnResponseReceived);//This is the url on which to process the request
	Request->SetURL("https://universalis.app/api/74/26465");
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
}

FText AHttpActor::GetRetainerName() {
	return RetainerName;
}

void AHttpActor::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		//Get the value of the json object by field name
		TArray<TSharedPtr<FJsonValue>> objArray = JsonObject->GetArrayField("listings");
		for (int32 i = 0; i < objArray.Num(); i++)
		{
			FString name = objArray[i]->AsString();
			GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, name);
			for (int32 i = 0; i < objArray.Num(); i++)
			{
				FString retainer = objArray[i]->AsObject()->GetStringField(TEXT("retainerName"));
				RetainerName = FText::FromString(retainer);

				GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, retainer);
			}
		}
		//int32 recievedInt = JsonObject->GetIntegerField(objArray[0]->AsString());
		//Output it to the engine
		//GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, objArray[0]->AsString());
	}
}


// Called every frame
void AHttpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

