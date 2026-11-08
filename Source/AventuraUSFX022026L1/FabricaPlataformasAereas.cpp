#include "FabricaPlataformasAereas.h"
#include "PlataformaVerticalAerea.h"
#include "PlataformaHorizontalAerea.h"

APlataformaVertical* AFabricaPlataformasAereas::CrearPlataformaVertical(FVector Location, FRotator Rotation)
{
	return GetWorld()->SpawnActor<APlataformaVerticalAerea>(Location, Rotation);
}

APlataformaHorizontal* AFabricaPlataformasAereas::CrearPlataformaHorizontal(FVector Location, FRotator Rotation)
{
	return GetWorld()->SpawnActor<APlataformaHorizontalAerea>(Location, Rotation);
}