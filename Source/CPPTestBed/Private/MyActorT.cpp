// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorT.h"

// Sets default values
AMyActorT::AMyActorT()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Armour.Add("Leather");
	Armour.Add("Chain Mail");
	Armour.Add("Plate");
	Weight.Add("Heavy");
	Weight.Add("Light");
	Weight.Add("Medium");
}

void AMyActorT::TArmourer()
{
	for (auto& Elem : Armour)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Armour sets are %s"), *Elem));
	}
}

// Called when the game starts or when spawned
void AMyActorT::BeginPlay()
{
	Super::BeginPlay();
	TArmourer();
}

// Called every frame
void AMyActorT::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

