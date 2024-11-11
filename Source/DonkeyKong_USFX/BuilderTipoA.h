// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNiveles.h"
#include "BuilderTipoA.generated.h"

class APlataforma;

UCLASS()
class DONKEYKONG_USFX_API ABuilderTipoA : public AActor, public IBuilderNiveles
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABuilderTipoA();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Alojamiento Hotelero")
	class AActor* Escenario;
	class APlataforma* Plataforma;

	TMap<int,APlataforma* > Plataformas;
	int ID;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial) override;
	void ConstruirNivel2(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direcionInicial) override;

	AActor* ObtenerEscenario() override;
	TMap<int, APlataforma* > ObtenerPlataformas();
};
