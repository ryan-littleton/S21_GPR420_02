// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FPSCharacter.h"
#include "FPSProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Animation/AnimSequence.h"
#include "FPSBombActor.h"
#include "FPSSpecialProjectile.h"


AFPSCharacter::AFPSCharacter()
{
	// Create a CameraComponent	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	CameraComponent->SetupAttachment(GetCapsuleComponent());
	CameraComponent->SetRelativeLocation(FVector(0, 0, BaseEyeHeight)); // Position the camera
	CameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1PComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh"));
	Mesh1PComponent->SetupAttachment(CameraComponent);
	Mesh1PComponent->CastShadow = false;
	Mesh1PComponent->SetRelativeRotation(FRotator(2.0f, -15.0f, 5.0f));
	Mesh1PComponent->SetRelativeLocation(FVector(0, 0, -160.0f));

	// Create a gun mesh component
	GunMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	GunMeshComponent->CastShadow = false;
	GunMeshComponent->SetupAttachment(Mesh1PComponent, "GripPoint");

	IsCooldown = false;

	MulticastEvent.AddDynamic(this, &AFPSCharacter::ActivateMulticast);
	MulticastEvent.AddDynamic(this, &ACharacter::Jump);
}


void AFPSCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFPSCharacter::Fire);
	PlayerInputComponent->BindAction("SpawnBomb", IE_Pressed, this, &AFPSCharacter::SpawnBomb);
	PlayerInputComponent->BindAction("SpecialAttack", IE_Pressed, this, &AFPSCharacter::SpecialAttack);
	PlayerInputComponent->BindAction("MulticastDelegate", IE_Pressed, this, &AFPSCharacter::BeginMulticast);

	PlayerInputComponent->BindAxis("MoveForward", this, &AFPSCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AFPSCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
}


void AFPSCharacter::Fire()
{
	// try and fire a projectile
	if (ProjectileClass)
	{
		// Grabs location from the mesh that must have a socket called "Muzzle" in his skeleton
		FVector MuzzleLocation = GunMeshComponent->GetSocketLocation("Muzzle");
		// Use controller rotation which is our view direction in first person
		FRotator MuzzleRotation = GetControlRotation();

		//Set Spawn Collision Handling Override
		FActorSpawnParameters ActorSpawnParams;
		ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		// spawn the projectile at the muzzle
		GetWorld()->SpawnActor<AFPSProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);
	}

	// try and play the sound if specified
	if (FireSound)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1PComponent->GetAnimInstance();
		if (AnimInstance)
		{
			AnimInstance->PlaySlotAnimationAsDynamicMontage(FireAnimation, "Arms", 0.0f);
		}
	}
}

void AFPSCharacter::SpecialAttack()
{
	//similar to regular fire
	float AttackScale = 0.0f;
	

	if (IsCooldown == false)
	{
		if (GetWorld()->GetFirstPlayerController()->GetInputKeyTimeDown(FKey("Shift")) >= 2.0f)
		{
			AttackScale = 2.0f;
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("ThirdLvLCharge"));

			// try and fire a projectile
			if (SpecialProjectileClass)
			{
				// Grabs location from the mesh that must have a socket called "Muzzle" in his skeleton
				FVector MuzzleLocation = GunMeshComponent->GetSocketLocation("Muzzle");
				// Use controller rotation which is our view direction in first person
				FRotator MuzzleRotation = GetControlRotation();

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				AFPSSpecialProjectile* NewActor = GetWorld()->SpawnActor<AFPSSpecialProjectile>(SpecialProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);
				NewActor->SetAttackScale(AttackScale);
			}

			// try and play the sound if specified
			if (FireSound)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			// try and play a firing animation if specified
			if (FireAnimation)
			{
				// Get the animation object for the arms mesh
				UAnimInstance* AnimInstance = Mesh1PComponent->GetAnimInstance();
				if (AnimInstance)
				{
					AnimInstance->PlaySlotAnimationAsDynamicMontage(FireAnimation, "Arms", 0.0f);
				}
			}

			IsCooldown = true;
			FTimerHandle CooldownTimer;
			GetWorldTimerManager().SetTimer(CooldownTimer, this, &AFPSCharacter::SetCooldown, 3.0f);
		}
		else if (GetWorld()->GetFirstPlayerController()->GetInputKeyTimeDown(FKey("Shift")) >= 1.0f && GetWorld()->GetFirstPlayerController()->GetInputKeyTimeDown(FKey("Shift")) < 2.0f)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("SecondLvLCharge"));
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::SanitizeFloat(GetWorld()->GetFirstPlayerController()->GetInputKeyTimeDown(FKey("Shift"))));
			AttackScale = 1.0f;
			// try and fire a projectile
			if (SpecialProjectileClass)
			{
				// Grabs location from the mesh that must have a socket called "Muzzle" in his skeleton
				FVector MuzzleLocation = GunMeshComponent->GetSocketLocation("Muzzle");
				// Use controller rotation which is our view direction in first person
				FRotator MuzzleRotation = GetControlRotation();

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				AFPSSpecialProjectile* NewActor = GetWorld()->SpawnActor<AFPSSpecialProjectile>(SpecialProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);
				NewActor->SetAttackScale(AttackScale);
			}

			// try and play the sound if specified
			if (FireSound)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			// try and play a firing animation if specified
			if (FireAnimation)
			{
				// Get the animation object for the arms mesh
				UAnimInstance* AnimInstance = Mesh1PComponent->GetAnimInstance();
				if (AnimInstance)
				{
					AnimInstance->PlaySlotAnimationAsDynamicMontage(FireAnimation, "Arms", 0.0f);
				}
			}

			IsCooldown = true;
			FTimerHandle CooldownTimer;
			GetWorldTimerManager().SetTimer(CooldownTimer, this, &AFPSCharacter::SetCooldown, 3.0f);
		}
		else if (GetWorld()->GetFirstPlayerController()->GetInputKeyTimeDown(FKey("Shift")) >= 0.0f && GetWorld()->GetFirstPlayerController()->GetInputKeyTimeDown(FKey("Shift")) < 1.0f)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("FirstLvLCharge"));
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::SanitizeFloat(GetWorld()->GetFirstPlayerController()->GetInputKeyTimeDown(FKey("Shift"))));
			AttackScale = 0.5f;
			// try and fire a projectile
			if (SpecialProjectileClass)
			{
				// Grabs location from the mesh that must have a socket called "Muzzle" in his skeleton
				FVector MuzzleLocation = GunMeshComponent->GetSocketLocation("Muzzle");
				// Use controller rotation which is our view direction in first person
				FRotator MuzzleRotation = GetControlRotation();

				//Set Spawn Collision Handling Override
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				// spawn the projectile at the muzzle
				AFPSSpecialProjectile* NewActor = GetWorld()->SpawnActor<AFPSSpecialProjectile>(SpecialProjectileClass, MuzzleLocation, MuzzleRotation, ActorSpawnParams);
				NewActor->SetAttackScale(AttackScale);
			}

			// try and play the sound if specified
			if (FireSound)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			}

			// try and play a firing animation if specified
			if (FireAnimation)
			{
				// Get the animation object for the arms mesh
				UAnimInstance* AnimInstance = Mesh1PComponent->GetAnimInstance();
				if (AnimInstance)
				{
					AnimInstance->PlaySlotAnimationAsDynamicMontage(FireAnimation, "Arms", 0.0f);
				}
			}

			IsCooldown = true;
			FTimerHandle CooldownTimer;
			GetWorldTimerManager().SetTimer(CooldownTimer, this, &AFPSCharacter::SetCooldown, 3.0f);
		}
		
	}
}

void AFPSCharacter::SetCooldown()
{
	IsCooldown = false;
}

void AFPSCharacter::SpawnBomb()
{
	AFPSBombActor* MyBomb = GetWorld()->SpawnActor<AFPSBombActor>(BombClass, GetActorLocation(), GetActorRotation());
}


void AFPSCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}


void AFPSCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}


void AFPSCharacter::BeginMulticast()
{
	MulticastEvent.Broadcast();
}

void AFPSCharacter::ActivateMulticast()
{

	float R = FMath::RandRange(0.0f, 1.0f);
	float G = FMath::RandRange(0.0f, 1.0f);
	float B = FMath::RandRange(0.0f, 1.0f);
	float A = FMath::RandRange(0.0f, 1.0f);
	FLinearColor RandColor;
	RandColor.R = R;
	RandColor.G = G;
	RandColor.B = B;
	RandColor.A = A;

	FCollisionObjectQueryParams QueryParams;
	QueryParams.AddObjectTypesToQuery(ECC_WorldDynamic);
	QueryParams.AddObjectTypesToQuery(ECC_PhysicsBody);

	FCollisionShape CollShape;
	CollShape.SetSphere(3000.0f);

	TArray<FOverlapResult> OutOverlaps;
	GetWorld()->OverlapMultiByObjectType(OutOverlaps, GetActorLocation(), FQuat::Identity, QueryParams, CollShape);

	for (FOverlapResult Result : OutOverlaps)
	{
		UPrimitiveComponent* Overlap = Result.GetComponent();
		if (Overlap && Overlap->IsSimulatingPhysics())
		{
			UMaterialInstanceDynamic* MatInst = Overlap->CreateAndSetMaterialInstanceDynamic(0);
			if (MatInst)
			{
				MatInst->SetVectorParameterValue("Color", RandColor);
			}
		}
	}
}
