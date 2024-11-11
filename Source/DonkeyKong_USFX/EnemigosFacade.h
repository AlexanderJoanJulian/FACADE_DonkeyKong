// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigos.h"
#include "Plataforma.h"
#include "EnemigosFacade.generated.h"

UCLASS()
class DONKEYKONG_USFX_API AEnemigosFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigosFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TArray<FString> Tareas;
	TArray<AEnemigos*> Enemigos;
	TMap<int, APlataforma*> Posicion;
	AEnemigos* Enemigo;
	

	void spawn(FString _enemigo, int _cantidad,TMap<int, APlataforma*> _Posicion);
	void atacar();
	void vigilar();
	void eliminar();

	void RealizarTareas(TArray<AEnemigos*> _Enemigos, TArray<FString>& _Tareas);
};
