// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorComponent.h"
#include "MyActorOfImportance.generated.h"

UCLASS()
class CPPTESTBED_API AMyActorOfImportance : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorOfImportance();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UMyActorComponent* MyActorComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
