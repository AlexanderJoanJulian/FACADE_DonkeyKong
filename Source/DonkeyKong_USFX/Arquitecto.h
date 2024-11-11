// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BuilderNiveles.h"
#include "Arquitecto.generated.h"

UCLASS()
class DONKEYKONG_USFX_API AArquitecto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArquitecto();

private:
	IBuilderNiveles* Constructor;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void EstablecerConstructorNiveles(AActor* _Constructor);

	//Crea los edificios
	void ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial);
	class AActor* obtenerEscenario();

	TMap<int, class APlataforma*> obtenerPlataformas();
};
