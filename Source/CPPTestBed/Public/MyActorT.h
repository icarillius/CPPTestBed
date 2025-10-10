// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorT.generated.h"

UCLASS()
class CPPTESTBED_API AMyActorT : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorT();

	UPROPERTY()
	TSet<FString> Armour;

	UPROPERTY()
	TSet<FString> Weight;

	UFUNCTION()
	void TArmourer();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
