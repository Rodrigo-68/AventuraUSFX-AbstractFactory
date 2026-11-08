#include "PlataformaVerticalAerea.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

APlataformaVerticalAerea::APlataformaVerticalAerea()
{
	tipoPlataforma = ETipoPlataforma::PLATAFORMA_AEREA;
	VelocidadOscilacion = 3.0f;      // la familia aérea es más rápida
	DistanciaOscilacion = 300.0f;
}

void APlataformaVerticalAerea::BeginPlay()
{
	Super::BeginPlay();   // aquí se guarda la posición inicial

	// Cambiar la malla a un cubo
	UStaticMeshComponent* Malla = FindComponentByClass<UStaticMeshComponent>();
	if (Malla)
	{
		UStaticMesh* NuevaMalla = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cube.Cube"));
		if (NuevaMalla)
		{
			Malla->SetStaticMesh(NuevaMalla);
		}
	}

	// Opcional: aplanar el cubo para que parezca plataforma
	SetActorScale3D(FVector(1.5f, 1.5f, 0.3f));
}