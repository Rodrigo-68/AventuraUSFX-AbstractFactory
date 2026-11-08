#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.h"
#include "FabricaPlataformas.generated.h"

UCLASS(Abstract)
class AVENTURAUSFX022026L1_API AFabricaPlataformas : public AActor
{
	GENERATED_BODY()

public:
	AFabricaPlataformas();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	// FACTORY METHOD: es PURE_VIRTUAL, no necesita implementación en esta clase
	virtual APlataforma* CrearPlataforma(FString TipoPlataforma, FVector Location, FRotator Rotation)
		PURE_VIRTUAL(AFabricaPlataformas::CrearPlataforma, return nullptr;);

	// Pide, crea (usando el Factory Method) y devuelve una plataforma
	APlataforma* OrdenarPlataforma(FString TipoPlataforma, FVector Location, FRotator Rotation);
};