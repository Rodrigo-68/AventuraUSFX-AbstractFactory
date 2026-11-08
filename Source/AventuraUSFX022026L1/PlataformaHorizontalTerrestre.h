#pragma once

#include "CoreMinimal.h"
#include "PlataformaHorizontal.h"
#include "PlataformaHorizontalTerrestre.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API APlataformaHorizontalTerrestre : public APlataformaHorizontal
{
	GENERATED_BODY()

public:
	APlataformaHorizontalTerrestre();

protected:
	virtual void BeginPlay() override;
};