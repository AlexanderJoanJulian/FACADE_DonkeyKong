// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Plataforma.h"
#include "DonkeyKong_USFXGameMode.generated.h"

UCLASS(minimalapi)
class ADonkeyKong_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADonkeyKong_USFXGameMode();

protected:
	virtual void BeginPlay() override;

private:
	//El Actor Constructor
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ABuilderTipoA* Constructor;
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class ABuilderTipoB* Constructor2;


	//El Actor Ingeniero
	UPROPERTY(VisibleAnywhere, Category = "GameModeBase")
	class AArquitecto* Ingeniero;

public:
	virtual void Tick(float DeltaTime) override;

protected:
	FVector Posicion;
	float segundos;
	AActor* Escenario;
	//para los enemigos
	TMap<int, APlataforma*> PosicionMapa;
};



