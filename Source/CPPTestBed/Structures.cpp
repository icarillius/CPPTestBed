// Fill out your copyright notice in the Description page of Project Settings.


#include "Structures.h"

// Sets default values
AStructures::AStructures()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStructures::BeginPlay()
{
	Super::BeginPlay();

	FCharacterInfo PlayerInfo;
	PlayerInfo.Name = "Bob";

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Player nams is %s"), *PlayerInfo.Name));
	}


	
}

// Called every frame
void AStructures::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

