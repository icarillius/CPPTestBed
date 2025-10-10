// Fill out your copyright notice in the Description page of Project Settings.


#include "MySuperImportantObject.h"

// Sets default values
AMySuperImportantObject::AMySuperImportantObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMySuperImportantObject::SuperImportantFunction()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Super Important Function is in Action!")));
}

// Called when the game starts or when spawned
void AMySuperImportantObject::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Imporant is built")));
}

// Called every frame
void AMySuperImportantObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

