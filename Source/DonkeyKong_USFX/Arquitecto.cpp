// Fill out your copyright notice in the Description page of Project Settings.


#include "Arquitecto.h"

// Sets default values
AArquitecto::AArquitecto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArquitecto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArquitecto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArquitecto::EstablecerConstructorNiveles(AActor* _Constructor)
{
	Constructor = Cast<IBuilderNiveles>(_Constructor);
	if (Constructor) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Constructor de niveles establecido"));
	}
}

void AArquitecto::ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial)
{
	Constructor->ConstruirNivel1(cantidadPisos, cantidadPlataformas, ubicacionInicial, direccionInicial);
}

AActor* AArquitecto::obtenerEscenario()
{
	if (Constructor) {
		return Constructor->ObtenerEscenario();
	}
	return nullptr;
}

TMap<int, class APlataforma*> AArquitecto::obtenerPlataformas()
{
	return TMap<int, class APlataforma*>(Constructor->ObtenerPlataformas());
}

