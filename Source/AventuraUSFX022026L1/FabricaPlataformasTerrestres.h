#pragma once

#include "CoreMinimal.h"
#include "FabricaAbstractaPlataformas.h"
#include "FabricaPlataformasTerrestres.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API AFabricaPlataformasTerrestres : public AFabricaAbstractaPlataformas
{
	GENERATED_BODY()

public:
	virtual APlataformaVertical* CrearPlataformaVertical(FVector Location, FRotator Rotation) override;
	virtual APlataformaHorizontal* CrearPlataformaHorizontal(FVector Location, FRotator Rotation) override;
};