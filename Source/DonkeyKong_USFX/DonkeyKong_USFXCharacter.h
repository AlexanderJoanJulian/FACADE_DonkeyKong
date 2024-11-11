// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DonkeyKong_USFXCharacter.generated.h"

UCLASS(config = Game)
class ADonkeyKong_USFXCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	//Salto alto
	UPROPERTY(VisibleAnywhere)
	float leftmin;

	UPROPERTY(VisibleAnywhere)
	float leftmax;

	UPROPERTY(VisibleAnywhere)
	float rightmin;

	UPROPERTY(VisibleAnywhere)
	float rightmax;

	UPROPERTY(VisibleAnywhere)
	FVector posicionActual;

	//objeto proyectil
	//UPROPERTY(EditDefaultsOnly, Category = "Spawning")
	//TSubclassOf<AProyectil> ProjectileClass; util cuando se hace el spawn en otras clases 

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	// End of APawn interface
	int vidas;
	float puntaje;
	float sumarpuntos;
	float condicion;
	void ControlPuntos();
	void ControlVidas();

	bool subir; //variable para controlar si el personaje sube o no con lasm escaleras
	bool agarrar; //variable para controlar si el personaje agarra las escaleras
	float velocidadEscalera;
	FVector ubicacion;
	FVector ubicacion2;

public:
	ADonkeyKong_USFXCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	virtual void Tick(float DeltaTime) override;

	FORCEINLINE int GetVidas() { return vidas; }
	FORCEINLINE void SetVidas(int _vidas){ vidas = _vidas; }
	FORCEINLINE float GetPuntaje() { return puntaje; }
	FORCEINLINE void SetPuntaje(float _puntaje) { puntaje = _puntaje; }
	FORCEINLINE bool GetSubir() { return subir; }
	FORCEINLINE void SetSubir(bool _subir) { subir = _subir; }
	FORCEINLINE bool GetAgarrar() { return agarrar; }
	FORCEINLINE void SetAgarrar(bool _agarrar) { agarrar = _agarrar; }

	void subirEscaleras();

	void bajarEscaleras();

	void agarrarEscaleras();
};
