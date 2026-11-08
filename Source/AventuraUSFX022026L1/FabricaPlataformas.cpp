#include "FabricaPlataformas.h"

AFabricaPlataformas::AFabricaPlataformas()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AFabricaPlataformas::BeginPlay()
{
	Super::BeginPlay();
}

void AFabricaPlataformas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

APlataforma* AFabricaPlataformas::OrdenarPlataforma(FString TipoPlataforma, FVector Location, FRotator Rotation)
{
	// Llama al Factory Method (lo implementa la fábrica concreta)
	APlataforma* Plataforma = CrearPlataforma(TipoPlataforma, Location, Rotation);

	// El libro no valida null, pero CrearPlataforma puede devolver nullptr
	if (Plataforma == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
			FString::Printf(TEXT("Tipo de plataforma invalido: %s"), *TipoPlataforma));
		return nullptr;
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
		FString::Printf(TEXT("Plataforma creada: %s"), *TipoPlataforma));

	return Plataforma;
}