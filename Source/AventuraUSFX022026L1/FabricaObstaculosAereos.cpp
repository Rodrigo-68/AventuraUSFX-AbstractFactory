#include "FabricaObstaculosAereos.h"
#include "ObstaculoEstatico.h" 
#include "ObstaculoMovil.h"

AObstaculoEstatico* AFabricaObstaculosAereos::CrearObstaculoEstatico(FVector Location, FRotator Rotation)
{
	return GetWorld()->SpawnActor<AObstaculoEstatico>(Location, Rotation);
}

AObstaculoMovil* AFabricaObstaculosAereos::CrearObstaculoMovil(FVector Location, FRotator Rotation)
{
	return GetWorld()->SpawnActor<AObstaculoMovil>(Location, Rotation);
}