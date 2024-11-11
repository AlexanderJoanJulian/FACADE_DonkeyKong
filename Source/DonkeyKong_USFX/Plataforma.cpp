// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataforma.h"
//#include "Components/BoxComponent.h"
/*#include "Barril.h"
#include "BarrilExplosivo.h"
#include "BarrilComun.h*/
// Sets default values
APlataforma::APlataforma()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//establece el componenete raiz de la malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> plataformaMesh(TEXT("StaticMesh'/Game/Plataformas/SM_MERGED_Plataforma__8.SM_MERGED_Plataforma__8'"));
	// Crear el componente de malla est?tica
	plataforma = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("plataforma"));
	plataforma->SetStaticMesh(plataformaMesh.Object);
	SetRootComponent(plataforma);
	//Habitar fisicas de  la instancia
	//plataforma->SetSimulatePhysics(false);
	//Modifica la forma del objeto
	plataforma->SetWorldScale3D(FVector(2.75f, 9.5f, 4.0f));
	plataforma->SetRelativeRotation(FRotator(0.f, 90.f, 0.0f));
	//Cambia el angulo del objeto (y,z,x)
	//plataforma->SetRelativeRotation(FRotator(0.0f, 0.0f, 5.0f));

	////crea el componente de colision
	//plataformaCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("plataformaCollision"));
	//plataformaCollision->SetBoxExtent(FVector(115.0f, 4.0f, 6.0f));
	//plataformaCollision->SetRelativeLocation(FVector(0.0f, 0.0f, -5.0f));
	//plataformaCollision->OnComponentBeginOverlap.AddDynamic(this, &APlataforma::OnOverlapBegin);
	//plataformaCollision->SetupAttachment(plataforma);

}

// Called when the game starts or when spawned
void APlataforma::BeginPlay()
{
	Super::BeginPlay();
	//movimiento en Y
	posicionInicialY = GetActorLocation() + FVector(0.0f, 220.0f, 0.0f);
	posicionActualY = posicionInicialY;
	posicionFinalY = posicionActualY + FVector(0.0f, -480.0f, 0.0f);
	incremento = 2.0f;
	moverse = true;

	//movimiento en Z
	posicionInicialZ = GetActorLocation();
	posicionActualZ = posicionInicialZ;
	posicionFinalZ = posicionActualZ + FVector(0.0f, 0.0f, -300.0f);
}

// Called every frame
void APlataforma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	movimientoY();
	movimientoZ();
}

void APlataforma::movimientoY()
{
	if (GetMoverseY()) {
		if (moverse)
		{
			if (posicionActualY.Y > posicionFinalY.Y) posicionActualY.Y -= incremento;
			else moverse = false;
		}
		else
		{
			if (posicionActualY.Y < posicionInicialY.Y) posicionActualY.Y += incremento;
			else moverse = true;
		}

		SetActorLocation(posicionActualY);
	}

}

void APlataforma::movimientoZ()
{
	if (GetMoverseZ()) {
		if (moverse)
		{
			if (posicionActualZ.Z > posicionFinalZ.Z) posicionActualZ.Z -= incremento;
			else moverse = false;
		}
		else
		{
			if (posicionActualZ.Z < posicionInicialZ.Z) posicionActualZ.Z += incremento;
			else moverse = true;
		}
		SetActorLocation(posicionActualZ);
	}
}

//void APlataforma::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	ABarrilExplosivo* barril = Cast<ABarrilExplosivo>(OtherActor);
//	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Coliciono la plataforma")));
//	if (barril) {
//		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta, FString::Printf(TEXT("Coliciono el barril")));
//		barril->DireccionMovimiento *= -1;
//	}
//}


