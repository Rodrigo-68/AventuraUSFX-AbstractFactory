#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorNave.h"
#include "DirectorFlota.generated.h"

class ANaveEnemiga;

UCLASS()
class AVENTURAUSFX022026L1_API ADirectorFlota : public AActor
{
	GENERATED_BODY()

public:
	ADirectorFlota();

	// Elige qué constructor se usará (debe implementar IConstructorNave)
	void SetConstructor(AActor* Builder);

	// Receta 1: solo casco y motor
	void ConstruirNaveBasica(FVector Location, FRotator Rotation);

	// Receta 2: casco, motor, blindaje y armamento
	void ConstruirNaveCompleta(FVector Location, FRotator Rotation);

	// Devuelve la nave terminada
	ANaveEnemiga* GetNave();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	IConstructorNave* Constructor;
};