// Copyright Epic Games, Inc. All Rights Reserved.

#include "DonkeyKong_USFXCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"

ADonkeyKong_USFXCharacter::ADonkeyKong_USFXCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 3500.f;
	CameraBoom->SocketOffset = FVector(0.f, 0.f, 700.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f, 180.f, 0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 2100;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 2100;
	GetCharacterMovement()->MaxFlySpeed = 1200.f;

	//salto alto
	leftmin = 2100.0f;
	leftmax = 1700.0f;
	rightmin = -1300.0f;
	rightmax = -1700.0f;

	//vidas 
	vidas = 3;
	condicion = 800.0f;
	puntaje = 0;
	sumarpuntos = 150.0f;
	if (GEngine) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Vidas: %d"), GetVidas()));
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Puntaje actual: %.1f"), GetPuntaje()));
	}

	//subir escalera
	subir = false;
	agarrar = false;
	velocidadEscalera = 100.0f;
}

void ADonkeyKong_USFXCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ControlPuntos();
	ControlVidas();
	FVector ubicacion3 = GetActorLocation();
	ubicacion3.X = 1208.0f;
	SetActorLocation(ubicacion3);

	/*GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald, 
		FString::Printf(TEXT("Salto actual en characterrrrr: %.1f"), GetCharacterMovement()->JumpZVelocity));*/
}

void ADonkeyKong_USFXCharacter::subirEscaleras()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Subir escaleras")));
	if (subir) {
		ubicacion = GetActorLocation();
		ubicacion.Z += 130;
		SetActorLocation(ubicacion);
	}
}

void ADonkeyKong_USFXCharacter::bajarEscaleras()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Magenta, FString::Printf(TEXT("Bajar escaleras")));
	if (subir) {
		ubicacion2 = GetActorLocation();
		ubicacion2.Z -= 70;
		SetActorLocation(ubicacion2);
	}
}

void ADonkeyKong_USFXCharacter::agarrarEscaleras()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Agarrar escaleras")));
	if (agarrar) {
		SetSubir(true);
		GetCharacterMovement()->GravityScale = 0.0f;
		GetCharacterMovement()->Velocity.Z = 0.0f;
		GetCharacterMovement()->Velocity.Y = 0.0f;
		GetCharacterMovement()->AirControl = 0.3f;
	}
}

void ADonkeyKong_USFXCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ADonkeyKong_USFXCharacter::MoveRight);
	PlayerInputComponent->BindAction("subirEscaleras", IE_Pressed, this, &ADonkeyKong_USFXCharacter::subirEscaleras);
	PlayerInputComponent->BindAction("bajarEscaleras", IE_Pressed, this, &ADonkeyKong_USFXCharacter::bajarEscaleras);
	PlayerInputComponent->BindAction("agarrarEscaleras", IE_Pressed, this, &ADonkeyKong_USFXCharacter::agarrarEscaleras);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &ADonkeyKong_USFXCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ADonkeyKong_USFXCharacter::TouchStopped);
}

void ADonkeyKong_USFXCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f, -1.f, 0.f), Value);
}

void ADonkeyKong_USFXCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	Jump();
}

void ADonkeyKong_USFXCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}


void ADonkeyKong_USFXCharacter::ControlPuntos()
{
	FVector ubicacion6 = GetActorLocation();
	if (ubicacion6.Z >= condicion) {
		puntaje += 100;
		condicion += 800.0f;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Emerald, FString::Printf(TEXT("Puntaje actual: %.1f"), GetPuntaje()));
	}
	if (puntaje >= sumarpuntos) {
		vidas++;
		sumarpuntos += 150.0f;
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Obtuviste una vida extra, vidas: %d"), GetVidas()));
	}
	if (puntaje <= 0) puntaje = 0;
}

void ADonkeyKong_USFXCharacter::ControlVidas()
{
	if (vidas <= 0) {
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Perdiste el juego ")));
		Destroy();
	}
}
