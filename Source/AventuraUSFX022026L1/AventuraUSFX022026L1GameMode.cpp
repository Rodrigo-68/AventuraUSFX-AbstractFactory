#include "AventuraUSFX022026L1GameMode.h"
#include "AventuraUSFX022026L1Pawn.h"
#include "Plataforma.h"
#include "PlataformaAerea.h"
#include "PlataformaTerrestre.h"
#include "PlataformaSubterranea.h"
#include "PlataformaAcuatica.h"
#include "Inventory.h"
#include "FabricaPlataformaConcreta.h"
#include "DirectorFlota.h"
#include "ConstructorNaveCaza.h"
#include "ConstructorNaveCrucero.h"
#include "ConstructorNaveAcorazado.h"
#include "NaveEnemiga.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "FachadaPlataformas.h"

AAventuraUSFX022026L1GameMode::AAventuraUSFX022026L1GameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAventuraUSFX022026L1Pawn::StaticClass();

	tipoPlataformaActual = 0;
}

void AAventuraUSFX022026L1GameMode::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();

	if (World == nullptr)
	{
		return;
	}

	// ===== SINGLETON DEL INVENTARIO (comentado) =====
	//Implementacion de utilizacion de singleton para el inventario
	//Create 4 Inventory
	/*
	for (int i = 0; i <= 4; i++)
	{
		AInventory* SpawnedInventory = GetWorld()->SpawnActor<AInventory>(AInventory::StaticClass());

		if (SpawnedInventory)
		{
			//If the Spawn succeeds, set the Spawned inventory to the local one
			//and log the success string
			Inventory = SpawnedInventory;
			GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s has been created"), *Inventory->GetName()));
		}
	}
	*/

	// ===== FACTORY METHOD=====
	/*
	// 1) Crear la fabrica concreta (como el OuterRealmShop del libro)
	FabricaPlataformas = World->SpawnActor<AFabricaPlataformasConcreta>(
		AFabricaPlataformasConcreta::StaticClass());

	// 2) Pedir plataformas a la fabrica
	const TArray<FString> Tipos = { TEXT("Aerea"), TEXT("Terrestre"), TEXT("Subterranea"), TEXT("Acuatica") };
	FRotator Rotacion = FRotator::ZeroRotator;

	for (int32 i = 0; i < 40; i++)
	{
		FVector SpawnLocation(
			FMath::RandRange(-1500.0f, 1500.0f),
			FMath::RandRange(-1500.0f, 1500.0f),
			FMath::RandRange(50.0f, 1000.0f));

		FString Tipo = Tipos[FMath::RandRange(0, Tipos.Num() - 1)];

		APlataforma* Nueva = FabricaPlataformas->OrdenarPlataforma(Tipo, SpawnLocation, Rotacion);

		if (Nueva)
		{
			aPlataformas.Add(Nueva);   // necesario para que EliminarPlataforma funcione
		}
	}
	*/


	// ===== BUILDER DE NAVES ENEMIGAS=====
	/*
	AConstructorNaveCaza* ConstructorCaza =
		World->SpawnActor<AConstructorNaveCaza>(AConstructorNaveCaza::StaticClass());
	AConstructorNaveCrucero* ConstructorCrucero =
		World->SpawnActor<AConstructorNaveCrucero>(AConstructorNaveCrucero::StaticClass());
	AConstructorNaveAcorazado* ConstructorAcorazado =
		World->SpawnActor<AConstructorNaveAcorazado>(AConstructorNaveAcorazado::StaticClass());
	ADirectorFlota* DirectorFlota =
		World->SpawnActor<ADirectorFlota>(ADirectorFlota::StaticClass());

	FRotator RotacionN = FRotator::ZeroRotator;
	APawn* PawnJugador = UGameplayStatics::GetPlayerPawn(this, 0);
	const float AlturaZ = PawnJugador ? PawnJugador->GetActorLocation().Z : 604.7f;

	for (int32 i = 0; i < 3; i++)
	{
		// --- Fila de CAZAS ---
		DirectorFlota->SetConstructor(ConstructorCaza);
		DirectorFlota->ConstruirNaveCompleta(FVector(-700.0f, -600.0f + i * 600.0f, 200.0f), RotacionN);
		ANaveEnemiga* Caza = DirectorFlota->GetNave();
		if (Caza && i == 0) Caza->Describir();

		// --- Fila de CRUCEROS ---
		DirectorFlota->SetConstructor(ConstructorCrucero);
		DirectorFlota->ConstruirNaveCompleta(FVector(0.0f, -600.0f + i * 600.0f, 200.0f), RotacionN);
		ANaveEnemiga* Crucero = DirectorFlota->GetNave();
		if (Crucero && i == 0) Crucero->Describir();

		// --- Fila de ACORAZADOS ---
		DirectorFlota->SetConstructor(ConstructorAcorazado);
		DirectorFlota->ConstruirNaveCompleta(FVector(700.0f, -600.0f + i * 600.0f, 200.0f), RotacionN);
		ANaveEnemiga* Acorazado = DirectorFlota->GetNave();
		if (Acorazado && i == 0) Acorazado->Describir();
	}

	// --- Receta BASICA: el mismo constructor, pero con menos pasos ---
	DirectorFlota->SetConstructor(ConstructorCrucero);
	DirectorFlota->ConstruirNaveBasica(FVector(-350.0f, 0.0f, 200.0f), RotacionN);
	ANaveEnemiga* Basica = DirectorFlota->GetNave();
	if (Basica) Basica->Describir();
	*/

	// ===== ABSTRACT FACTORY PARA OBSTACULOS=====

AFabricaAbstractaObstaculos* FabricaAerea = World->SpawnActor<AFabricaObstaculosAereos>(AFabricaObstaculosAereos::StaticClass());
AFabricaAbstractaObstaculos* FabricaTerrestre = World->SpawnActor<AFabricaObstaculosTerrestres>(AFabricaObstaculosTerrestres::StaticClass());

TArray<AFabricaAbstractaObstaculos*> FabricasAbstractas = { FabricaAerea, FabricaTerrestre };
FRotator RotacionAF = FRotator::ZeroRotator;

for (int32 f = 0; f < FabricasAbstractas.Num(); f++)
{
	for (int32 i = 0; i < 3; i++)
	{
		FVector Base(-600.0f + i * 600.0f, -600.0f + f * 1200.0f, 200.0f);

		AObstaculoEstatico* ObsEstatico = FabricasAbstractas[f]->CrearObstaculoEstatico(Base, RotacionAF);
		AObstaculoMovil* ObsMovil = FabricasAbstractas[f]->CrearObstaculoMovil(Base + FVector(0.0f, 0.0f, 250.0f), RotacionAF);

		if (ObsEstatico) aObstaculos.Add(ObsEstatico);
		if (ObsMovil) aObstaculos.Add(ObsMovil);
	}
}

for (AObstaculo* Obs : aObstaculos)
{
	if (Obs) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Creado: %s"), *Obs->ObtenerTipoObstaculo()));
	}
}

	Fachada = World->SpawnActor<AFachadaPlataformas>(AFachadaPlataformas::StaticClass());

	if (Fachada)
	{
		Fachada->CrearPlataformas(40);
	}

	GetWorldTimerManager().SetTimer(TimerEliminarPlataforma, this, &AAventuraUSFX022026L1GameMode::EliminarPlataforma, 1.0f, true);
}

void AAventuraUSFX022026L1GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AAventuraUSFX022026L1GameMode::EliminarPlataforma()
{
	if (Fachada != nullptr)
	{
		Fachada->EliminarPlataformaDeTipo(static_cast<ETipoPlataforma>(tipoPlataformaActual));
	}

	if (tipoPlataformaActual >= 3)
	{
		tipoPlataformaActual = 0;
	}
	else
	{
		tipoPlataformaActual++;
	}
}