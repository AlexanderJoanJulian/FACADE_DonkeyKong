// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderTipoA.h"
#include "Plataforma.h"

// Sets default values
ABuilderTipoA::ABuilderTipoA()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ID= 0;
}

// Called when the game starts or when spawned
void ABuilderTipoA::BeginPlay()
{
	Super::BeginPlay();
	Escenario = GetWorld()->SpawnActor<AActor>(AActor::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);
}

// Called every frame
void ABuilderTipoA::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilderTipoA::ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, TEXT("Construyendo Nivel 1"));
	FVector Posicion = ubicacionInicial;
	FRotator Rotacion;
	float distanciaZ = 700.f;
	float distanciaY = 550.f;
	float RotacionZ = 20.f;
	int Rotara = 0;
	direccionInicial > 0 ? Rotacion = FRotator(0.f, 0.f, -2.f) : Rotacion = FRotator(0.f, 0.f, 2.f);
	for (int i = 0; i < cantidadPisos; i++) {
		Rotara = FMath::RandRange(1, 2);
		for (int j = 0; j < cantidadPlataformas; j++) {
			if (Rotara == 1 && i != cantidadPisos - 1) {
				Posicion.Y += distanciaY * direccionInicial; Posicion.Z += RotacionZ;
				Plataforma = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), Posicion, Rotacion);
			}
			else if (Rotara == 2 || i == cantidadPisos - 1) {
				Posicion.Y += distanciaY * direccionInicial;
				Plataforma = GetWorld()->SpawnActor<APlataforma>(APlataforma::StaticClass(), Posicion, FRotator::ZeroRotator);
			}
			Plataformas.Add(++ID, Plataforma);
			Plataforma->AttachToActor(Escenario, FAttachmentTransformRules::KeepWorldTransform);
		}
		direccionInicial *= -1;
		Posicion += FVector(0.0f, distanciaY * direccionInicial, distanciaZ);
		Rotacion.Roll *= -1;
	}
}

void ABuilderTipoA::ConstruirNivel2(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direcionInicial)
{
}

AActor* ABuilderTipoA::ObtenerEscenario()
{
	return Escenario;
}

TMap<int, APlataforma*> ABuilderTipoA::ObtenerPlataformas()
{
	return TMap<int, APlataforma*>(Plataformas);
}

