// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWeakPointer.h"

// Sets default values
AMyWeakPointer::AMyWeakPointer()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}



void AMyWeakPointer::UseActor()
{
	if (WeakActorPtr.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Weak Point exists ")));
		WeakActorPtr.Reset();
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Weak Point not valid")));
	}
}

// Called when the game starts or when spawned
void AMyWeakPointer::BeginPlay()
{
	Super::BeginPlay();
	
	AMyWeakPointer::WeakActorPtr = ActorPtr;
	
}

// Called every frame
void AMyWeakPointer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UseActor();
}

