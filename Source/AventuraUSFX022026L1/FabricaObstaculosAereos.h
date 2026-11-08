#pragma once

#include "CoreMinimal.h"
#include "FabricaAbstractaObstaculos.h"
#include "FabricaObstaculosAereos.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API AFabricaObstaculosAereos : public AFabricaAbstractaObstaculos
{
	GENERATED_BODY()

public:
	virtual AObstaculoEstatico* CrearObstaculoEstatico(FVector Location, FRotator Rotation) override;
	virtual AObstaculoMovil* CrearObstaculoMovil(FVector Location, FRotator Rotation) override;
};