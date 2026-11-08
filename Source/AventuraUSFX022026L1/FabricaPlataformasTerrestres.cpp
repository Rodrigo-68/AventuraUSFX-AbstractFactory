#include "FabricaPlataformasTerrestres.h"
#include "PlataformaVerticalTerrestre.h"
#include "PlataformaHorizontalTerrestre.h"

APlataformaVertical* AFabricaPlataformasTerrestres::CrearPlataformaVertical(FVector Location, FRotator Rotation)
{
	return GetWorld()->SpawnActor<APlataformaVerticalTerrestre>(Location, Rotation);
}

APlataformaHorizontal* AFabricaPlataformasTerrestres::CrearPlataformaHorizontal(FVector Location, FRotator Rotation)
{
	return GetWorld()->SpawnActor<APlataformaHorizontalTerrestre>(Location, Rotation);
}