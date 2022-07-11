// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AdapterNewObject.generated.h"

UCLASS()
class STARFIGTHER_API AAdapterNewObject : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY()
		class ACountdown* Countdown;

	
public:	
	// Sets default values for this actor's properties
	AAdapterNewObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//primeros intentos para hacer el adapter de otrom juego
};
