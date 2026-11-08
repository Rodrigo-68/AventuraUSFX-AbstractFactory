#pragma once

#include "CoreMinimal.h"
#include "FabricaAbstractaPlataformas.h"
#include "FabricaPlataformasAereas.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API AFabricaPlataformasAereas : public AFabricaAbstractaPlataformas
{
	GENERATED_BODY()

public:
	virtual APlataformaVertical* CrearPlataformaVertical(FVector Location, FRotator Rotation) override;
	virtual APlataformaHorizontal* CrearPlataformaHorizontal(FVector Location, FRotator Rotation) override;
};