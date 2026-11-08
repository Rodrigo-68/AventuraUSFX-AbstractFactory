#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProyectilEnemigo.generated.h"

class UStaticMeshComponent;

UCLASS()
class AVENTURAUSFX022026L1_API AProyectilEnemigo : public AActor
{
	GENERATED_BODY()

public:
	AProyectilEnemigo();

	// La nave que dispara llama a esto justo después de crear la bala
	void Iniciar(FVector NuevaDireccion, float NuevoDanio);

	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Proyectil")
	UStaticMeshComponent* MallaBala;

	FVector Direccion;
	float Danio;
	float Velocidad;
	float RadioImpacto;
};