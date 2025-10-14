// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyWeakPointer.generated.h"

UCLASS()
class CPPTESTBED_API AMyWeakPointer : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyWeakPointer();

	
	TWeakObjectPtr<AActor> WeakActorPtr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AActor* ActorPtr;

	UFUNCTION()
	void UseActor();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
