#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConstructorNave.h"
#include "ConstructorNaveAcorazado.generated.h"

UCLASS()
class AVENTURAUSFX022026L1_API AConstructorNaveAcorazado : public AActor, public IConstructorNave
{
	GENERATED_BODY()

public:
	AConstructorNaveAcorazado();

	virtual void IniciarNave(FVector Location, FRotator Rotation) override;
	virtual void ConstruirCasco() override;
	virtual void ConstruirMotor() override;
	virtual void ConstruirBlindaje() override;
	virtual void ConstruirArmamento() override;
	virtual ANaveEnemiga* GetNave() override;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Constructor")
	class ANaveEnemiga* Nave;
};