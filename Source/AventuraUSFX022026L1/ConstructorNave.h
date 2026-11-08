#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ConstructorNave.generated.h"

class ANaveEnemiga;

UINTERFACE(MinimalAPI)
class UConstructorNave : public UInterface
{
	GENERATED_BODY()
};

class AVENTURAUSFX022026L1_API IConstructorNave
{
	GENERATED_BODY()

public:
	// Pasos de construcción (puros virtuales)
	virtual void IniciarNave(FVector Location, FRotator Rotation) = 0;
	virtual void ConstruirCasco() = 0;
	virtual void ConstruirMotor() = 0;
	virtual void ConstruirBlindaje() = 0;
	virtual void ConstruirArmamento() = 0;

	virtual ANaveEnemiga* GetNave() = 0;
};