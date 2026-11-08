#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoMovil.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API AObstaculoMovil : public AObstaculo
{
	GENERATED_BODY()

public:
	virtual FString ObtenerTipoObstaculo() const override { return TEXT("Obstaculo Movil"); }
};