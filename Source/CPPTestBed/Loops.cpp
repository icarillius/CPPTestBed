// Fill out your copyright notice in the Description page of Project Settings.


#include "Loops.h"

// Sets default values
ALoops::ALoops()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALoops::BeginPlay()
{
	Super::BeginPlay();
	
	LoopFunction(1);
}

// Called every frame
void ALoops::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int ALoops::LoopFunction(int Incriment)
{
	while (Incriment < 100)
	{
		Incriment = Incriment + 1;
		if (GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Loop Number %i"), Incriment));
		}
	}


	return 0;
}

