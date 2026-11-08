#include "DirectorFlota.h"
#include "NaveEnemiga.h"
#include "Engine/Engine.h"

ADirectorFlota::ADirectorFlota()
{
	PrimaryActorTick.bCanEverTick = false;
	Constructor = nullptr;
}

void ADirectorFlota::BeginPlay()
{
	Super::BeginPlay();
}

void ADirectorFlota::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ADirectorFlota::SetConstructor(AActor* Builder)
{
	Constructor = Cast<IConstructorNave>(Builder);

	if (!Constructor)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Cast invalido: el actor no es un ConstructorNave"));
		UE_LOG(LogTemp, Error, TEXT("SetConstructor(): el actor no implementa IConstructorNave."));
	}
}

void ADirectorFlota::ConstruirNaveBasica(FVector Location, FRotator Rotation)
{
	if (!Constructor) { UE_LOG(LogTemp, Error, TEXT("ConstruirNaveBasica(): Constructor es NULL.")); return; }

	Constructor->IniciarNave(Location, Rotation);
	Constructor->ConstruirCasco();
	Constructor->ConstruirMotor();
}

void ADirectorFlota::ConstruirNaveCompleta(FVector Location, FRotator Rotation)
{
	if (!Constructor) { UE_LOG(LogTemp, Error, TEXT("ConstruirNaveCompleta(): Constructor es NULL.")); return; }

	// El ORDEN de los pasos lo decide el director
	Constructor->IniciarNave(Location, Rotation);
	Constructor->ConstruirCasco();
	Constructor->ConstruirMotor();
	Constructor->ConstruirBlindaje();
	Constructor->ConstruirArmamento();
}

ANaveEnemiga* ADirectorFlota::GetNave()
{
	if (Constructor)
	{
		return Constructor->GetNave();
	}

	UE_LOG(LogTemp, Error, TEXT("GetNave(): Constructor es NULL."));
	return nullptr;
}