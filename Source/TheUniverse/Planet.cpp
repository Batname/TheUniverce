// Fill out your copyright notice in the Description page of Project Settings.

#include "TheUniverse.h"
#include "Planet.h"


// Sets default values
APlanet::APlanet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Ust for test logs
	UE_LOG(LogTemp, Warning, TEXT("My log test"));
}

// Called when the game starts or when spawned
void APlanet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanet::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

