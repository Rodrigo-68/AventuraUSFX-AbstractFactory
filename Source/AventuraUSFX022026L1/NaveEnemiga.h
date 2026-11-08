#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NaveEnemiga.generated.h"

class UStaticMeshComponent;

UCLASS()
class AVENTURAUSFX022026L1_API ANaveEnemiga : public AActor
{
	GENERATED_BODY()

public:
	ANaveEnemiga();

	// Un setter por cada paso del Builder
	void SetCasco(const FString& RutaMalla, const FString& Nombre, FVector Escala);
	void SetMotor(FVector Eje, float Velocidad, float Distancia);
	void SetBlindaje(int32 PuntosVida);
	void SetArmamento(int32 CantidadCanones, float Danio);

	// Muestra en pantalla cómo quedó armada
	void Describir();
	void RecibirImpacto(int32 Danio);
	void Disparar();

	// Para recibir daño de los disparos
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent,
		class AController* EventInstigator, AActor* DamageCauser) override;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere, Category = "Nave")
	UStaticMeshComponent* MallaNave;

	FString NombreCasco;
	FVector EjeMovimiento;
	float VelocidadMotor;
	float DistanciaMotor;
	float TiempoMotor;
	FVector PosicionInicialNave;
	int32 VidaMaxima;
	int32 VidaActual;
	int32 NumeroCanones;
	float DanioCanon;
	float TimerDisparo;
	float TiempoDisparo = 0.0f;
};