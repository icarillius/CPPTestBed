// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SingleSignal.generated.h"

// declare delegates
DECLARE_DELEGATE_TwoParams(FCustomDelegate, FString, Int32);

UCLASS()
class CPPTESTBED_API ASingleSignal : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASingleSignal();
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Delegates?
	UPROPERTY()
	FCustomDelegate CustomDelegate;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Function
	UFUNCTION()
	void LogInfo(FString Name, int32 Score);

};
