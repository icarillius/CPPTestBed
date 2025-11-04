// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLambda.h"

// Sets default values
AMyLambda::AMyLambda()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyLambda::BeginPlay()
{
	Super::BeginPlay();
	
	auto Lambda = [](int a, int b)
		{
			return a + b;
		};
	int Result = Lambda(2, 3);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT(" Lambda Result is %d"), Result));
	UE_LOG(LogTemp, Warning, TEXT(" Lambda Result is %d"), Result);
}

// Called every frame
void AMyLambda::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

