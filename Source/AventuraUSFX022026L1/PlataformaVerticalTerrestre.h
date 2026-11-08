#pragma once

#include "CoreMinimal.h"
#include "PlataformaVertical.h"
#include "PlataformaVerticalTerrestre.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API APlataformaVerticalTerrestre : public APlataformaVertical
{
	GENERATED_BODY()

public:
	APlataformaVerticalTerrestre();

protected:
	virtual void BeginPlay() override;
};