// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyDispatcher.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDelegate);

UCLASS()
class CPPTESTBED_API AMyDispatcher : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyDispatcher();

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnDelegate TestDelegate;

	UFUNCTION(BlueprintCallable, Category = "Events")
	void TriggerDelegate();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


private:
	FTimerHandle TriggerTimerHandel;

	void StartTrigger();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
