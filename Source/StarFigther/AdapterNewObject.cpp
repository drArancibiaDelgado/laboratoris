// Fill out your copyright notice in the Description page of Project Settings.


#include "AdapterNewObject.h"
#include "Countdown.h"

// Sets default values
AAdapterNewObject::AAdapterNewObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdapterNewObject::BeginPlay()
{
	Super::BeginPlay();

	//spawn countdown;
	/*ACountdown *Countdown = GetWorld()->SpawnActor<ACountdown>(ACountdown::StaticClass());*/
	Countdown = GetWorld()->SpawnActor<ACountdown>(ACountdown::StaticClass());

	
}

// Called every frame
void AAdapterNewObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

