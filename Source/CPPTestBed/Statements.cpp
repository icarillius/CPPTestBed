// Fill out your copyright notice in the Description page of Project Settings.


#include "Statements.h"

// Sets default values
AStatements::AStatements()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStatements::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStatements::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	IncUpdate();

}

int AStatements::IncUpdate()
{
	Incrimenter = Incrimenter + 1;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("%i"), Incrimenter));
	}
	IncCheck();
	return Incrimenter;
}

int AStatements::IncCheck()
{
	if (Incrimenter > 600) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%i is above 100"), Incrimenter));
	}
	if (Incrimenter > 100) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("%i is above 100"), Incrimenter));
	}
	
	

	return 0;
}

