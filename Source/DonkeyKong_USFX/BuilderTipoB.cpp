// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderTipoB.h"
#include "Plataforma.h"
#include "Escaleras.h"

// Sets default values
ABuilderTipoB::ABuilderTipoB()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ID = 0;
}

// Called when the game starts or when spawned
void ABuilderTipoB::BeginPlay()
{
	Super::BeginPlay();
	Escenario = GetWorld()->SpawnActor<AActor>(AActor::StaticClass());
}

// Called every frame
void ABuilderTipoB::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABuilderTipoB::ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial)
{
	FVector Posicion = ubicacionInicial;
	FRotator Rotacion;
	float distanciaZ = 700.f;
	float distanciaY = 550.f;
	float RotacionZ = 20.f;
	int Rotara = 0;
	controlMovimiento = 0; //encargado de contar las plataformas y que solo se coloque una plataforma movible por piso
	direccionInicial > 0 ? Rotacion = FRotator(0.f, 0.f, -2.f) : Rotacion = FRotator(0.f, 0.f, 2.f);
	for (int i = 0; i < cantidadPisos; i++) {
		controlPiso = Plataformas.Num() + controlMovimiento;
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
		//inicio para mover una plataforma
		while (true) {
			seleccionPlataforma = FMath::RandRange(controlPiso, Plataformas.Num() - 1);
			if (seleccionPlataforma % 10 != 0 || seleccionPlataforma % 10 != 1) break;
		}
		if (Plataformas.Contains(seleccionPlataforma))
		{
			APlataforma* moverse = Cast<APlataforma>(Plataformas[seleccionPlataforma]);
			int mob = FMath::RandRange(1, 2);
			mob == 1 ? moverse->SetMoverseY(true) : moverse->SetMoverseZ(true);
		}
		if (Plataformas.Contains(seleccionPlataforma - 1)) {
			AActor* destruir = Plataformas[seleccionPlataforma - 1]; destruir->Destroy();
			Plataformas.Remove(seleccionPlataforma - 1);
		} 
		if (Plataformas.Contains(seleccionPlataforma+1)) {
			AActor* destruir2 = Plataformas[seleccionPlataforma+1]; destruir2->Destroy();
			Plataformas.Remove(seleccionPlataforma+1);
		}

		//inicio construccion escaleras
		if (Plataformas.Num() > 12) {
			random = FMath::RandRange(4, 6);
			seleccionPlataforma += random;
			if (seleccionPlataforma % 10 != 0 && seleccionPlataforma % 10 != 9 && Plataformas.Contains(seleccionPlataforma)) {
				APlataforma* plataforma = Cast<APlataforma>(Plataformas[seleccionPlataforma]);
				ubicacion = plataforma->GetActorLocation();
				Escalera = GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), ubicacion, FRotator::ZeroRotator);
			}
			else if (Plataformas.Contains(seleccionPlataforma + 1)) {
				APlataforma* plataforma = Cast<APlataforma>(Plataformas[seleccionPlataforma + 1]);
				Escalera = GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), ubicacion, FRotator::ZeroRotator);
			}
			else if (Plataformas.Contains(seleccionPlataforma + 3)) {
				APlataforma* plataforma = Cast<APlataforma>(Plataformas[seleccionPlataforma + 3]);
				Escalera = GetWorld()->SpawnActor<AEscaleras>(AEscaleras::StaticClass(), ubicacion, FRotator::ZeroRotator);
			}
			if(Escalera)
			{
				Escaleras.Add(Escalera);
				Escalera->AttachToActor(Escenario, FAttachmentTransformRules::KeepWorldTransform);
			}
		}
		//fin construccion escaleras

		//fin para mover una plataforma
		direccionInicial *= -1;
		Posicion += FVector(0.0f, distanciaY * direccionInicial, distanciaZ);
		Rotacion.Roll *= -1;
		controlMovimiento += 2;
	}
}

void ABuilderTipoB::ConstruirNivel2(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direcionInicial)
{
}

AActor* ABuilderTipoB::ObtenerEscenario()
{
	return Escenario;
}

TMap<int, APlataforma*> ABuilderTipoB::ObtenerPlataformas()
{
	return TMap<int, APlataforma*>(Plataformas);
}

