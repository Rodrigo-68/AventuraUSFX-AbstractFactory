#pragma once

#include "CoreMinimal.h"
#include "PlataformaVertical.h"
#include "PlataformaVerticalAerea.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API APlataformaVerticalAerea : public APlataformaVertical
{
	GENERATED_BODY()

public:
	APlataformaVerticalAerea();

protected:
	virtual void BeginPlay() override;   
};