// Fill out your copyright notice in the Description page of Project Settings.


#include "Arrays.h"

// Sets default values
AArrays::AArrays()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArrays::BeginPlay()
{
	Super::BeginPlay();
	numberArray.Init(10, 5);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("%i"), numberArray[5]));
	}

}

// Called every frame
void AArrays::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

