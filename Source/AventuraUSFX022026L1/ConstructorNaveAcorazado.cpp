#include "ConstructorNaveAcorazado.h"
#include "NaveEnemiga.h"

AConstructorNaveAcorazado::AConstructorNaveAcorazado()
{
	PrimaryActorTick.bCanEverTick = false;
	Nave = nullptr;
}

void AConstructorNaveAcorazado::BeginPlay()
{
	Super::BeginPlay();
}

void AConstructorNaveAcorazado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AConstructorNaveAcorazado::IniciarNave(FVector Location, FRotator Rotation)
{
	Nave = GetWorld()->SpawnActor<ANaveEnemiga>(Location, Rotation);
}

void AConstructorNaveAcorazado::ConstruirCasco()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirCasco(): Nave es NULL, llama primero a IniciarNave.")); return; }
	Nave->SetCasco(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"), TEXT("Cilindro (Acorazado)"), FVector(2.5f, 2.5f, 1.0f));
}

void AConstructorNaveAcorazado::ConstruirMotor()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirMotor(): Nave es NULL.")); return; }
	Nave->SetMotor(FVector(0.0f, 1.0f, 0.0f), 1.0f, 150.0f);
}

void AConstructorNaveAcorazado::ConstruirBlindaje()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirBlindaje(): Nave es NULL.")); return; }
	Nave->SetBlindaje(6);
}

void AConstructorNaveAcorazado::ConstruirArmamento()
{
	if (!Nave) { UE_LOG(LogTemp, Error, TEXT("ConstruirArmamento(): Nave es NULL.")); return; }
	Nave->SetArmamento(3, 3.0f);
}

ANaveEnemiga* AConstructorNaveAcorazado::GetNave()
{
	return Nave;
}