#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Plataforma.h"                 
#include "FachadaPlataformas.generated.h"

class AFabricaPlataformasConcreta;

UCLASS()
class AVENTURAUSFX022026L1_API AFachadaPlataformas : public AActor
{
	GENERATED_BODY()

public:
	AFachadaPlataformas();

	void CrearPlataformas(int32 Cantidad);
	void DetenerMovimiento();
	void ReanudarMovimiento();
	bool EliminarPlataformaDeTipo(ETipoPlataforma Tipo);
	int32 CantidadPlataformas() const;

private:
	UPROPERTY() AFabricaPlataformasConcreta* Fabrica = nullptr;
	UPROPERTY() TArray<APlataforma*> Plataformas;
};