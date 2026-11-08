#include "PlataformaVertical.h"

APlataformaVertical::APlataformaVertical()
{
	PrimaryActorTick.bCanEverTick = true;
	TiempoOsc = 0.0f;
	VelocidadOscilacion = 2.0f;
	DistanciaOscilacion = 300.0f;
}

void APlataformaVertical::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicialOsc = GetActorLocation();
}

void APlataformaVertical::Tick(float DeltaTime)
{
	AActor::Tick(DeltaTime);   // se omite el movimiento de APlataforma

	TiempoOsc += DeltaTime;
	float Offset = FMath::Sin(TiempoOsc * VelocidadOscilacion) * DistanciaOscilacion;

	// Arriba/abajo (eje X en vista top-down)
	SetActorLocation(PosicionInicialOsc + FVector(Offset, 0.0f, 0.0f));
}