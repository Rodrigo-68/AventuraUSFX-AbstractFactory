#include "FabricaObstaculosTerrestres.h"
#include "ObstaculoEstatico.h" 
#include "ObstaculoMovil.h"

AObstaculoEstatico* AFabricaObstaculosTerrestres::CrearObstaculoEstatico(FVector Location, FRotator Rotation)
{
	return GetWorld()->SpawnActor<AObstaculoEstatico>(Location, Rotation);
}

AObstaculoMovil* AFabricaObstaculosTerrestres::CrearObstaculoMovil(FVector Location, FRotator Rotation)
{
	return GetWorld()->SpawnActor<AObstaculoMovil>(Location, Rotation);
}