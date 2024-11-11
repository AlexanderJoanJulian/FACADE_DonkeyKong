// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuilderNiveles.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBuilderNiveles : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_USFX_API IBuilderNiveles
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void ConstruirNivel1(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direccionInicial) = 0;
	virtual void ConstruirNivel2(int cantidadPisos, int cantidadPlataformas, FVector ubicacionInicial, int direcionInicial) = 0;
	virtual AActor* ObtenerEscenario() = 0;
	virtual TMap<int, class APlataforma*> ObtenerPlataformas() = 0;
};
