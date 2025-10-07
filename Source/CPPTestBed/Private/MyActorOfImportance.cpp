// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActorOfImportance.h"

// Sets default values
AMyActorOfImportance::AMyActorOfImportance()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyActorComponent = CreateDefaultSubobject<UMyActorComponent>(TEXT("MyActorComponent"));

}

// Called when the game starts or when spawned
void AMyActorOfImportance::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Build My actor of Importance")));
	MyActorComponent->CompFunction(5);
}

// Called every frame
void AMyActorOfImportance::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


