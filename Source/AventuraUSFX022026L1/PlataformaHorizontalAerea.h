#pragma once

#include "CoreMinimal.h"
#include "PlataformaHorizontal.h"
#include "PlataformaHorizontalAerea.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API APlataformaHorizontalAerea : public APlataformaHorizontal
{
	GENERATED_BODY()

public:
	APlataformaHorizontalAerea();

protected:
	virtual void BeginPlay() override;
};