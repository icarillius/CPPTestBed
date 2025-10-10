// Fill out your copyright notice in the Description page of Project Settings.

#include "MySuperImportantObject.h"
#include "MyActorThatCasts.h"

// Sets default values
AMyActorThatCasts::AMyActorThatCasts()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMyActorThatCasts::RunCast()
{
	AActor* ImportantActor = nullptr;
	AMySuperImportantObject* ImportantObject = Cast<AMySuperImportantObject>(ImportantActor);
	ImportantObject->SuperImportantFunction();
	
}

// Called when the game starts or when spawned
void AMyActorThatCasts::BeginPlay()
{
	Super::BeginPlay();
	RunCast();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Caster is built")));
	
}

// Called every frame
void AMyActorThatCasts::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

