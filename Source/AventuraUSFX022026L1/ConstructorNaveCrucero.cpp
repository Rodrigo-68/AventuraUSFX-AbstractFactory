#include "ConstructorNaveCrucero.h"
#include "NaveEnemiga.h"

AConstructorNaveCrucero::AConstructorNaveCrucero()
{
	PrimaryActorTick.bCanEverTick = false;
	Nave = nullptr;
}

void AConstructorNaveCrucero::BeginPlay()
{
	Super::BeginPlay();
}

void AConstructorNaveCrucero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructorNaveCrucero::IniciarNave(FVector Location, FRotator Rotation)
{
	Nave = GetWorld()->SpawnActor<ANaveEnemiga>(Location, Rotation);
}

void AConstructorNaveCrucero::ConstruirCasco()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirCasco(): Nave es NULL, llama primero a IniciarNave.")); return; }
	Nave->SetCasco(TEXT("/Engine/BasicShapes/Cube.Cube"), TEXT("Cubo (Crucero)"), FVector(1.5f, 1.5f, 0.6f));
}

void AConstructorNaveCrucero::ConstruirMotor()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirMotor(): Nave es NULL.")); return; }
	Nave->SetMotor(FVector(1.0f, 0.0f, 0.0f), 2.0f, 300.0f);
}

void AConstructorNaveCrucero::ConstruirBlindaje()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirBlindaje(): Nave es NULL.")); return; }
	Nave->SetBlindaje(3);
}

void AConstructorNaveCrucero::ConstruirArmamento()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirArmamento(): Nave es NULL.")); return; }
	Nave->SetArmamento(2, 2.0f);
}

ANaveEnemiga* AConstructorNaveCrucero::GetNave()
{
	return Nave;
}