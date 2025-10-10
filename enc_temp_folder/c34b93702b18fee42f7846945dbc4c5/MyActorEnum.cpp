// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorEnum.h"

// Sets default values
AMyActorEnum::AMyActorEnum()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActorEnum::SelectMaterialType()
{
}

// Called when the game starts or when spawned
void AMyActorEnum::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorEnum::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

