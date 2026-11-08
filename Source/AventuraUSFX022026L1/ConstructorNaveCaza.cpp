#include "ConstructorNaveCaza.h"
#include "NaveEnemiga.h"

AConstructorNaveCaza::AConstructorNaveCaza()
{
	PrimaryActorTick.bCanEverTick = false;
	Nave = nullptr;
}

void AConstructorNaveCaza::BeginPlay()
{
	Super::BeginPlay();
}

void AConstructorNaveCaza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructorNaveCaza::IniciarNave(FVector Location, FRotator Rotation)
{
	// Crea una nave nueva (vacía) en la posición pedida
	Nave = GetWorld()->SpawnActor<ANaveEnemiga>(Location, Rotation);
}

void AConstructorNaveCaza::ConstruirCasco()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirCasco(): Nave es NULL, llama primero a IniciarNave.")); return; }
	Nave->SetCasco(TEXT("/Engine/BasicShapes/Sphere.Sphere"), TEXT("Esfera (Caza)"), FVector(0.8f, 0.8f, 0.8f));
}

void AConstructorNaveCaza::ConstruirMotor()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirMotor(): Nave es NULL.")); return; }
	Nave->SetMotor(FVector(0.0f, 1.0f, 0.0f), 4.0f, 250.0f);   // rápido, patrulla de lado a lado
}

void AConstructorNaveCaza::ConstruirBlindaje()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirBlindaje(): Nave es NULL.")); return; }
	Nave->SetBlindaje(1);
}

void AConstructorNaveCaza::ConstruirArmamento()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirArmamento(): Nave es NULL.")); return; }
	Nave->SetArmamento(1, 1.0f);
}

ANaveEnemiga* AConstructorNaveCaza::GetNave()
{
	return Nave;
}