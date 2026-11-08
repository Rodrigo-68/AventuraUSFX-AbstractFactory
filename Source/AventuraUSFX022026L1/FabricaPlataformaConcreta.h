#pragma once

#include "CoreMinimal.h"
#include "FabricaPlataformas.h"
#include "FabricaPlataformaConcreta.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API AFabricaPlataformasConcreta : public AFabricaPlataformas
{
	GENERATED_BODY()

public:
	// Implementa el Factory Method
	virtual APlataforma* CrearPlataforma(FString TipoPlataforma, FVector Location, FRotator Rotation) override;
};