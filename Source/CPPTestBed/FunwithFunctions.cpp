// Fill out your copyright notice in the Description page of Project Settings.


#include "FunwithFunctions.h"

// Sets default values
AFunwithFunctions::AFunwithFunctions()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFunwithFunctions::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFunwithFunctions::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Lookingintothe();
}

void AFunwithFunctions::Lookingintothe()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("The more I read, the more I acquire, the more certain I am that I know nothing - Voltaire")));
	}

}

