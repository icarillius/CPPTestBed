// Fill out your copyright notice in the Description page of Project Settings.

#include "MyInteractableActorUse.h"

// Sets default values
AMyInteractableActorUse::AMyInteractableActorUse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}



// Called when the game starts or when spawned
void AMyInteractableActorUse::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyInteractableActorUse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


