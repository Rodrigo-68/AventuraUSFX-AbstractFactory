#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "Obstaculo.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API AObstaculo : public APlataforma
{
	GENERATED_BODY()

public:
	AObstaculo();

	// Método virtual puro para que las clases hijas digan qué tipo de obstáculo son
	virtual FString ObtenerTipoObstaculo() const { return TEXT("Obstaculo Generico"); }
};