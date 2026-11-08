#include "ProyectilEnemigo.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "AventuraUSFX022026L1Pawn.h"

AProyectilEnemigo::AProyectilEnemigo()
{
	PrimaryActorTick.bCanEverTick = true;

	Direccion = FVector::ZeroVector;
	Danio = 1.0f;
	Velocidad = 800.0f;
	RadioImpacto = 70.0f;

	MallaBala = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaBala"));
	RootComponent = MallaBala;
	MallaBala->SetMobility(EComponentMobility::Movable);
	MallaBala->SetCollisionProfileName(TEXT("NoCollision"));
	MallaBala->SetRelativeScale3D(FVector(0.3f));

	static ConstructorHelpers::FObjectFinder<UStaticMesh> Esfera(TEXT("/Engine/BasicShapes/Sphere.Sphere"));
	if (Esfera.Succeeded())
	{
		MallaBala->SetStaticMesh(Esfera.Object);
	}

	InitialLifeSpan = 4.0f; // se destruye sola si no alcanza nada
}

void AProyectilEnemigo::Iniciar(FVector NuevaDireccion, float NuevoDanio)
{
	Direccion = NuevaDireccion.GetSafeNormal();
	Danio = NuevoDanio;
}

void AProyectilEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 1. Avanza en línea recta
	SetActorLocation(GetActorLocation() + Direccion * Velocidad * DeltaTime);

	// 2. ¿Alcanzó a la nave del jugador?
	APawn* Jugador = UGameplayStatics::GetPlayerPawn(this, 0);
	if (Jugador && !Jugador->IsHidden()
		&& FVector::Dist2D(Jugador->GetActorLocation(), GetActorLocation()) <= RadioImpacto)
	{
		AAventuraUSFX022026L1Pawn* NaveJugador = Cast<AAventuraUSFX022026L1Pawn>(Jugador);
		if (NaveJugador)
		{
			NaveJugador->RecibirImpacto(FMath::RoundToInt(Danio));
		}
		Destroy();
	}
}