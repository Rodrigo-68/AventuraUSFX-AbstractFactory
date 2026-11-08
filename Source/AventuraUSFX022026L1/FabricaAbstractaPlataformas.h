#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlataformaVertical.h"
#include "PlataformaHorizontal.h"
#include "FabricaAbstractaPlataformas.generated.h"

UCLASS(Abstract)
class AVENTURAUSFX022026L1_API AFabricaAbstractaPlataformas : public AActor
{
	GENERATED_BODY()

public:
	// Un método por cada producto de la familia
	virtual APlataformaVertical* CrearPlataformaVertical(FVector Location, FRotator Rotation)
		PURE_VIRTUAL(AFabricaAbstractaPlataformas::CrearPlataformaVertical, return nullptr;);

	virtual APlataformaHorizontal* CrearPlataformaHorizontal(FVector Location, FRotator Rotation)
		PURE_VIRTUAL(AFabricaAbstractaPlataformas::CrearPlataformaHorizontal, return nullptr;);
};