// Fill out your copyright notice in the Description page of Project Settings.


#include "SingleSignal.h"


// Sets default values
ASingleSignal::ASingleSignal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASingleSignal::BeginPlay()
{
	Super::BeginPlay();
	LogInfo();
	//????
	CustomDelegate.BindUObject(this, &ThisClass::LogInfo);
	CustomDelegate.Execute(TEXT("Player"), 20);
}

// Called every frame
void ASingleSignal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// This?
void ASingleSignal::LogInfo(FString Name, int32 Score)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("name %s, Score %i"), Name, Score));
	}
}

