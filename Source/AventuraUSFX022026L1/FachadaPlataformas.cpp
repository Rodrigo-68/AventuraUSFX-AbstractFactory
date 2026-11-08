#include "FachadaPlataformas.h"
#include "FabricaPlataformaConcreta.h"     // el mismo include que usa tu GameMode
#include "Engine/World.h"

AFachadaPlataformas::AFachadaPlataformas()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AFachadaPlataformas::CrearPlataformas(int32 Cantidad)
{
	UWorld* World = GetWorld();
	if (World == nullptr) return;

	// 1. Crear la fábrica (el subsistema)
	Fabrica = World->SpawnActor<AFabricaPlataformasConcreta>(AFabricaPlataformasConcreta::StaticClass());
	if (Fabrica == nullptr) return;

	// 2. Pedir plataformas de tipos y posiciones aleatorias
	const TArray<FString> Tipos = { TEXT("Aerea"), TEXT("Terrestre"), TEXT("Subterranea"), TEXT("Acuatica") };
	Plataformas.Empty();

	for (int32 i = 0; i < Cantidad; i++)
	{
		FVector Pos(FMath::RandRange(-1500.0f, 1500.0f),
			FMath::RandRange(-1500.0f, 1500.0f),
			FMath::RandRange(50.0f, 1000.0f));

		FString Tipo = Tipos[FMath::RandRange(0, Tipos.Num() - 1)];

		APlataforma* Nueva = Fabrica->OrdenarPlataforma(Tipo, Pos, FRotator::ZeroRotator);
		if (Nueva) Plataformas.Add(Nueva);
	}

	UE_LOG(LogTemp, Warning, TEXT("Fachada OK -> %d plataformas creadas"), Plataformas.Num());
}


bool AFachadaPlataformas::EliminarPlataformaDeTipo(ETipoPlataforma Tipo)
{
	for (int32 i = 0; i < Plataformas.Num(); i++)
	{
		APlataforma* P = Plataformas[i];
		if (IsValid(P) && P->tipoPlataforma == Tipo)
		{
			P->Destroy();
			Plataformas.RemoveAt(i);
			return true;          // elimina solo la primera que encuentre
		}
	}
	return false;
}

int32 AFachadaPlataformas::CantidadPlataformas() const
{
	return Plataformas.Num();
}