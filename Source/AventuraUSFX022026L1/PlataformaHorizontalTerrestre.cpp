#include "PlataformaHorizontalTerrestre.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"

APlataformaHorizontalTerrestre::APlataformaHorizontalTerrestre()
{
	tipoPlataforma = ETipoPlataforma::PLATAFORMA_TERRESTRE;
	VelocidadOscilacion = 1.5f;
	DistanciaOscilacion = 300.0f;
}

void APlataformaHorizontalTerrestre::BeginPlay()
{
	Super::BeginPlay();   // aquí se guarda la posición inicial

	// Cambiar la malla a un cubo
	UStaticMeshComponent* Malla = FindComponentByClass<UStaticMeshComponent>();
	if (Malla)
	{
		UStaticMesh* NuevaMalla = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
		if (NuevaMalla)
		{
			Malla->SetStaticMesh(NuevaMalla);
		}
	}

}