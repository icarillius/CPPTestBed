// Fill out your copyright notice in the Description page of Project Settings.
#include "MyDispatcher.h"

// Sets default values
AMyDispatcher::AMyDispatcher()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyDispatcher::TriggerDelegate()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Sends Message Out")));
	TestDelegate.Broadcast();

}

// Called when the game starts or when spawned
void AMyDispatcher::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Dispatcher Exists")));

	StartTrigger();
}

void AMyDispatcher::StartTrigger()
{
	GetWorldTimerManager().SetTimer(
		TriggerTimerHandel, this, &AMyDispatcher::TriggerDelegate, 2.0f, false
		);
}

// Called every frame
void AMyDispatcher::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

