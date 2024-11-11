// Fill out your copyright notice in the Description page of Project Settings.


#include "Escaleras.h"
#include "Components/BoxComponent.h"
#include "DonkeyKong_USFXCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AEscaleras::AEscaleras()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Escaleras(TEXT("StaticMesh'/Game/Escaleras/SM_MERGED_Red_Ladder_2.SM_MERGED_Red_Ladder_2'"));
	EscalerasMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EscalerasMesh"));
	EscalerasMesh->SetRelativeRotation(FRotator(0, -90, 0));
	EscalerasMesh->SetRelativeScale3D(FVector(2.25, 1, 6));
	EscalerasMesh->SetStaticMesh(Escaleras.Object);
	SetRootComponent(EscalerasMesh);

	EscalerasCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("EscalerasCollision"));
	EscalerasCollision->SetBoxExtent(FVector(15.0f, 20.0f, 100.0f));
	EscalerasCollision->SetRelativeRotation(FRotator(0.0f, 0.0f, -2.0f));
	EscalerasCollision->SetCollisionProfileName(TEXT("Triger"));
	EscalerasCollision->SetupAttachment(EscalerasMesh);
	EscalerasMesh->SetCollisionResponseToAllChannels(ECR_Overlap);
	EscalerasCollision->OnComponentBeginOverlap.AddDynamic(this, &AEscaleras::OnOverlapBegin);
	EscalerasCollision->OnComponentEndOverlap.AddDynamic(this, &AEscaleras::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AEscaleras::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEscaleras::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEscaleras::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ADonkeyKong_USFXCharacter* DonkeyKongCharacter = Cast<ADonkeyKong_USFXCharacter>(OtherActor);
	if (DonkeyKongCharacter) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Colision con escaleras"));
		DonkeyKongCharacter->SetAgarrar(true);
	}
}

void AEscaleras::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	ADonkeyKong_USFXCharacter* DonkeyKongCharacter = Cast<ADonkeyKong_USFXCharacter>(OtherActor);
	if (DonkeyKongCharacter) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Fin de colision con escaleras"));
		DonkeyKongCharacter->SetSubir(false);
		DonkeyKongCharacter->SetAgarrar(false);
		DonkeyKongCharacter->GetCharacterMovement()->GravityScale = 2.f;
		DonkeyKongCharacter->GetCharacterMovement()->AirControl = 0.80f;
	}
}

