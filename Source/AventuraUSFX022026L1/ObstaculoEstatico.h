#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoEstatico.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API AObstaculoEstatico : public AObstaculo
{
	GENERATED_BODY()

public:
	virtual FString ObtenerTipoObstaculo() const override { return TEXT("Obstaculo Estatico"); }
};