// Fill out your copyright notice in the Description page of Project Settings.
#include "MyActorEnum.h"

// Sets default values
AMyActorEnum::AMyActorEnum()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

FString AMyActorEnum::SelectMaterialType()
{
	switch (Material)
	{
	case EMaterialTypes::Wood:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Wood"));
		return TEXT("Wood");
	case EMaterialTypes::Stone:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Stone"));
		return TEXT("Stone");
	case EMaterialTypes::Metal:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Metal"));
		return TEXT("Metal");
	default:
		return TEXT("None");
	}
}

// Called when the game starts or when spawned
void AMyActorEnum::BeginPlay()
{
	Super::BeginPlay();
	SelectMaterialType();
}


// Called every frame
void AMyActorEnum::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

