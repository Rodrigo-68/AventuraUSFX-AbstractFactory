#include "NaveEnemiga.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/Engine.h"
#include "EngineUtils.h"
#include "AventuraUSFX022026L1Projectile.h"
#include "ProyectilEnemigo.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"

ANaveEnemiga::ANaveEnemiga()
{
	PrimaryActorTick.bCanEverTick = true;

	// Casco: es el componente raíz y la malla principal
	MallaNave = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaNave"));
	RootComponent = MallaNave;
	MallaNave->SetMobility(EComponentMobility::Movable);
	MallaNave->SetCollisionProfileName(TEXT("NoCollision"));

	NombreCasco = TEXT("Sin casco");
	EjeMovimiento = FVector::ZeroVector;
	VelocidadMotor = 0.0f;
	DistanciaMotor = 0.0f;
	TiempoMotor = 0.0f;
	PosicionInicialNave = FVector::ZeroVector;
	VidaMaxima = 1;
	VidaActual = 1;
	NumeroCanones = 0;
	DanioCanon = 0.0f;
	TiempoDisparo = 0.0f;
}

void ANaveEnemiga::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicialNave = GetActorLocation();
}

void ANaveEnemiga::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// --- Detección de disparos del jugador (por distancia en el plano) ---
	UWorld* Mundo = GetWorld();
	if (Mundo)
	{
		const FVector Centro = GetActorLocation();
		const FVector Extension = GetComponentsBoundingBox().GetExtent();
		const float Radio = FMath::Max(Extension.X, Extension.Y) + 60.0f;

		for (TActorIterator<AAventuraUSFX022026L1Projectile> It(Mundo); It; ++It)
		{
			AAventuraUSFX022026L1Projectile* Bala = *It;
			if (Bala && FVector::Dist2D(Bala->GetActorLocation(), Centro) <= Radio)
			{
				Bala->Destroy();
				RecibirImpacto(1);

				if (VidaActual <= 0)
				{
					return; // la nave ya fue destruida
				}
			}
		}
	}

	// --- Disparo hacia la nave del jugador ---
	if (NumeroCanones > 0)
	{
		TiempoDisparo += DeltaTime;
		const float Intervalo = 5.0f / NumeroCanones; // más cañones = dispara más seguido

		if (TiempoDisparo >= Intervalo)
		{
			TiempoDisparo = 0.0f;
			Disparar();
		}
	}

	// --- Movimiento de patrullaje ---
	// Si no se construyó el motor, la nave queda quieta
	if (EjeMovimiento.IsNearlyZero())
	{
		return;
	}

	TiempoMotor += DeltaTime;
	float Offset = FMath::Sin(TiempoMotor * VelocidadMotor) * DistanciaMotor;
	SetActorLocation(PosicionInicialNave + EjeMovimiento * Offset);
}

// ---- PASO: casco ----
void ANaveEnemiga::SetCasco(const FString& RutaMalla, const FString& Nombre, FVector Escala)
{
	NombreCasco = Nombre;

	UStaticMesh* Malla = LoadObject<UStaticMesh>(nullptr, *RutaMalla);
	if (Malla)
	{
		MallaNave->SetStaticMesh(Malla);
	}

	SetActorScale3D(Escala);
}

// ---- PASO: motor ----
void ANaveEnemiga::SetMotor(FVector Eje, float Velocidad, float Distancia)
{
	EjeMovimiento = Eje.GetSafeNormal();
	VelocidadMotor = Velocidad;
	DistanciaMotor = Distancia;
}

// ---- PASO: blindaje ----
void ANaveEnemiga::SetBlindaje(int32 PuntosVida)
{
	VidaMaxima = PuntosVida;
	VidaActual = PuntosVida;
}

// ---- PASO: armamento ----
void ANaveEnemiga::SetArmamento(int32 CantidadCanones, float Danio)
{
	NumeroCanones = CantidadCanones;
	DanioCanon = Danio;

	UStaticMesh* MallaCanon = LoadObject<UStaticMesh>(nullptr, TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
	if (!MallaCanon)
	{
		return;
	}

	// Un cañón visible por cada unidad de armamento
	for (int32 i = 0; i < CantidadCanones; i++)
	{
		UStaticMeshComponent* Canon = NewObject<UStaticMeshComponent>(this);
		Canon->SetMobility(EComponentMobility::Movable);
		Canon->SetStaticMesh(MallaCanon);
		Canon->RegisterComponent();
		Canon->AttachToComponent(MallaNave, FAttachmentTransformRules::KeepRelativeTransform);

		float PosY = (i - (CantidadCanones - 1) / 2.0f) * 40.0f;
		Canon->SetRelativeLocation(FVector(60.0f, PosY, 0.0f));
		Canon->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
		Canon->SetRelativeScale3D(FVector(0.12f, 0.12f, 0.5f));
		Canon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
}

void ANaveEnemiga::Describir()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange,
			FString::Printf(TEXT("Nave armada -> Casco: %s | Vida: %d | Canones: %d | Danio: %.1f | Velocidad: %.1f"),
				*NombreCasco, VidaMaxima, NumeroCanones, DanioCanon, VelocidadMotor));
	}
}

void ANaveEnemiga::RecibirImpacto(int32 Danio)
{
	VidaActual -= Danio;

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow,
			FString::Printf(TEXT("%s - vida restante: %d"), *NombreCasco, FMath::Max(VidaActual, 0)));
	}

	if (VidaActual <= 0)
	{
		Destroy();
	}
}

float ANaveEnemiga::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	float Aplicado = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
	RecibirImpacto(FMath::RoundToInt(DamageAmount));
	return Aplicado;
}

void ANaveEnemiga::Disparar()
{
	// TEMPORAL: confirma que Disparar() se ejecuta (bórralo cuando funcione)
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Magenta,
			FString::Printf(TEXT("%s: Disparar() llamado"), *NombreCasco));
	}

	UWorld* Mundo = GetWorld();
	APawn* Jugador = UGameplayStatics::GetPlayerPawn(this, 0);

	if (!Mundo || !Jugador || Jugador->IsHidden())
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Cyan, TEXT("Disparar: no hay nave del jugador"));
		}
		return;
	}

	FVector Origen = GetActorLocation();
	FVector Direccion = Jugador->GetActorLocation() - Origen;
	Direccion.Z = 0.0f; // las balas viajan en el plano

	// Solo dispara si el jugador está cerca
	const float Distancia = Direccion.Size();
	if (Distancia > 1800.0f)
	{
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Cyan,
				FString::Printf(TEXT("%s: jugador lejos (%.0f)"), *NombreCasco, Distancia));
		}
		return;
	}


	Direccion = Direccion.GetSafeNormal();

	FActorSpawnParameters Params;
	Params.Owner = this;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	// La bala nace un poco adelante para no salir dentro del casco
	AProyectilEnemigo* Bala = Mundo->SpawnActor<AProyectilEnemigo>(Origen + Direccion * 150.0f, Direccion.Rotation(), Params);
	if (Bala)
	{
		Bala->Iniciar(Direccion, DanioCanon);

		// TEMPORAL: bórralo cuando funcione
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Orange,
				FString::Printf(TEXT("%s dispara"), *NombreCasco));
		}
	}
	else if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("Disparar: no se pudo crear la bala"));
	}
}

