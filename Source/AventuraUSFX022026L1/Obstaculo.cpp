#include "Obstaculo.h"

AObstaculo::AObstaculo()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ObstaculoMeshAsset(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    mallaPlataforma->SetStaticMesh(ObstaculoMeshAsset.Object);
}