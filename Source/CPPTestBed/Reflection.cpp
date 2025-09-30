// Fill out your copyright notice in the Description page of Project Settings.


#include "Reflection.h"

// Sets default values
AReflection::AReflection()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReflection::BeginPlay()
{
	Super::BeginPlay();
	
	UE_LOG(LogTemp, Warning, TEXT("Get int %i"), IntNumber);

	UE_LOG(LogTemp, Warning, TEXT("Get float %f"), FloatNumber);


	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, Name);
	}

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Players name is %s"),*Name));
	}

	PuttingTwoandTwoTogether(2);
}

// Called every frame
void AReflection::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AReflection::PuttingTwoandTwoTogether(int Two)
{
	Two = AndTwo + Two;
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Two and Two is %i"), Two));
	}
	return Two;
}

