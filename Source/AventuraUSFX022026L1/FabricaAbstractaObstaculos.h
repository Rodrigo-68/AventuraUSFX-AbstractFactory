#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObstaculoEstatico.h"
#include "ObstaculoMovil.h"
#include "FabricaAbstractaObstaculos.generated.h"

UCLASS(Abstract)
class AVENTURAUSFX022026L1_API AFabricaAbstractaObstaculos : public AActor
{
	GENERATED_BODY()

public:
	virtual AObstaculoEstatico* CrearObstaculoEstatico(FVector Location, FRotator Rotation)
		PURE_VIRTUAL(AFabricaAbstractaObstaculos::CrearObstaculoEstatico, return nullptr;);

	virtual AObstaculoMovil* CrearObstaculoMovil(FVector Location, FRotator Rotation)
		PURE_VIRTUAL(AFabricaAbstractaObstaculos::CrearObstaculoMovil, return nullptr;);
};