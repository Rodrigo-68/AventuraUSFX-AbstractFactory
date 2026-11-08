#include "FabricaPlataformaConcreta.h"
#include "PlataformaAerea.h"
#include "PlataformaTerrestre.h"
#include "PlataformaSubterranea.h"
#include "PlataformaAcuatica.h"

APlataforma* AFabricaPlataformasConcreta::CrearPlataforma(FString TipoPlataforma, FVector Location, FRotator Rotation)
{
	// Elige qué plataforma crear según el string recibido
	if (TipoPlataforma.Equals("Aerea")) {
		return GetWorld()->SpawnActor<APlataformaAerea>(Location, Rotation);
	}
	else if (TipoPlataforma.Equals("Terrestre")) {
		return GetWorld()->SpawnActor<APlataformaTerrestre>(Location, Rotation);
	}
	else if (TipoPlataforma.Equals("Subterranea")) {
		return GetWorld()->SpawnActor<APlataformaSubterranea>(Location, Rotation);
	}
	else if (TipoPlataforma.Equals("Acuatica")) {
		return GetWorld()->SpawnActor<APlataformaAcuatica>(Location, Rotation);
	}
	else return nullptr; // nullptr si el string no es valido
}
