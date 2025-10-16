// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MyTickableWorldSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class CPPTESTBED_API UMyTickableWorldSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()
	
protected:
	//outputs tick, and overrides so works for world sub system
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int val = 100;

	UFUNCTION(BlueprintCallable)
	int increaseValue();
};
