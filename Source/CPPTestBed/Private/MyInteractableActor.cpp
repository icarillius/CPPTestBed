// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInteractableActor.h"

// Sets default values
AMyInteractableActor::AMyInteractableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	IMyInterface::Interact(this);
}

// Called every frame
void AMyInteractableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

