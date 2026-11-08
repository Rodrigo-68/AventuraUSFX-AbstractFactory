#include "PlataformaHorizontalAerea.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

APlataformaHorizontalAerea::APlataformaHorizontalAerea()
{
	tipoPlataforma = ETipoPlataforma::PLATAFORMA_AEREA;
	VelocidadOscilacion = 3.0f;
	DistanciaOscilacion = 300.0f;
}
void APlataformaHorizontalAerea::BeginPlay()
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
