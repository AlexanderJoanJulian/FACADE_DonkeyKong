// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Plataforma.h"
#include "Enemigos.generated.h"

UCLASS()
class DONKEYKONG_USFX_API AEnemigos : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	TMap<int, APlataforma*> Posicion;
	//para vigilar
	FVector PosicionInicial;
	FVector LimiteInicial;
	FVector LimiteFinal;
	FVector posicionActual;
	FRotator mirar;
	FTimerHandle Timer;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void atacar() PURE_VIRTUAL(AEnemigos::atacar,);
	virtual void vigilar() PURE_VIRTUAL(AEnemigos::vigilar, );
	virtual void eliminar() PURE_VIRTUAL(AEnemigos::eliminar, );
	virtual void spawn(TMap<int,APlataforma*> _Posicion) PURE_VIRTUAL(AEnemigos::spawn, );
	virtual void RealizarTareas(FString& _Tareas, TMap<int,APlataforma*> _Posicion) PURE_VIRTUAL(AEnemigos::RealizarTareas, );
	void RealizarTareas(FString& _Tareas);
	void ValidarTareas(TArray<FString>& _Tareas, TMap<int, APlataforma*> _Posicion);
};
