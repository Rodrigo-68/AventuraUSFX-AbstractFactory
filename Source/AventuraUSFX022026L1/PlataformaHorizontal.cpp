#include "PlataformaHorizontal.h"

APlataformaHorizontal::APlataformaHorizontal()
{
	PrimaryActorTick.bCanEverTick = true;
	TiempoOsc = 0.0f;
	VelocidadOscilacion = 2.0f;
	DistanciaOscilacion = 300.0f;
}

void APlataformaHorizontal::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicialOsc = GetActorLocation();
}

void APlataformaHorizontal::Tick(float DeltaTime)
{
	AActor::Tick(DeltaTime);   // se omite el movimiento de APlataforma

	TiempoOsc += DeltaTime;
	float Offset = FMath::Sin(TiempoOsc * VelocidadOscilacion) * DistanciaOscilacion;

	// Izquierda/derecha (eje Y en vista top-down)
	SetActorLocation(PosicionInicialOsc + FVector(0.0f, Offset, 0.0f));
}