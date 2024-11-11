// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNiveles.h"
#include "BuilderTipoB.generated.h"

class APlataforma;
class AEscaleras;

UCLASS()
class DONKEYKONG_USFX_API ABuilderTipoB : public AActor, public IBuilderNiveles
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilderTipoB();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Alojamiento Hotelero")
	class AActor* Escenario;

	//plataformas
	TMap<int,APlataforma* > Plataformas;

	int ID;
	int seleccionPlataforma;
	int controlMovimiento;
	int controlPiso;
	APlataforma* Plataforma;

	//escaleras
	int random;
	FVector ubicacion;
	TArray<AEscaleras* > Escaleras;
	AEscaleras* Escalera;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial) override;
	void ConstruirNivel2(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direcionInicial) override;

	AActor* ObtenerEscenario() override;
	TMap<int, APlataforma* > ObtenerPlataformas();
};
