// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigosFacade.h"
#include "EnemigoGargola.h"

// Sets default values
AEnemigosFacade::AEnemigosFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigosFacade::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigosFacade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemigosFacade::spawn(FString _enemigo, int _cantidad,TMap<int, APlataforma* > _Posicion)
{
	Posicion = _Posicion;
	Tareas.Empty();
	Tareas.Add("aparecer");
	for (int i = 0; i < _cantidad; i++) {
		if (_enemigo.Equals("ave")) {
			Enemigo = GetWorld()->SpawnActor<AEnemigoGargola>(AEnemigoGargola::StaticClass());
		}
		else if (_enemigo.Equals("Lobo")) {
			//Enemigo = GetWorld()->SpawnActor<AEnemigos>(AEnemigoLobo::StaticClass());
		}
		else if (_enemigo.Equals("PuercoEspin")) {
			//Enemigo = GetWorld()->SpawnActor<AEnemigos>(AEnemigoPuercoEspin::StaticClass());
		} else GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("No se encontro el enemigo"));

		if (Enemigo) {
			Enemigos.Add(Enemigo);
			RealizarTareas(Enemigos, Tareas);
		}

	}
}

void AEnemigosFacade::atacar()
{
	Tareas.Empty();
	Tareas.Add("atacar");
	if (Enemigos.Num() > 0) {
		RealizarTareas(Enemigos, Tareas);
	}
	else GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("No hay enemigos para realizar la tarea")));
}

void AEnemigosFacade::vigilar()
{
	Tareas.Empty();
	Tareas.Add("Vigilar");
	if (Enemigos.Num() > 0) {
		RealizarTareas(Enemigos, Tareas);
	}
	else GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("No hay enemigos para realizar la tarea")));
}

void AEnemigosFacade::eliminar()
{
	Tareas.Empty();
	Tareas.Add("Eliminar");
	if (Enemigos.Num() > 0) {
		RealizarTareas(Enemigos, Tareas);
	}
	else GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("No hay enemigos para realizar la tarea")));
}

void AEnemigosFacade::RealizarTareas(TArray<AEnemigos*> _Enemigos, TArray<FString>& _Tareas)
{
	for (AEnemigos* myenemigo : _Enemigos) {
		myenemigo->ValidarTareas(_Tareas, Posicion);
	}
}

