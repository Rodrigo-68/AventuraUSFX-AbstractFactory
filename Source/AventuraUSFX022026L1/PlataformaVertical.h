#pragma once

#include "CoreMinimal.h"
#include "Plataforma.h"
#include "PlataformaVertical.generated.h"

UCLASS(Abstract)
class AVENTURAUSFX022026L1_API APlataformaVertical : public APlataforma
{
	GENERATED_BODY()

public:
	APlataformaVertical();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	FVector PosicionInicialOsc;
	float TiempoOsc;
	float VelocidadOscilacion;
	float DistanciaOscilacion;
};