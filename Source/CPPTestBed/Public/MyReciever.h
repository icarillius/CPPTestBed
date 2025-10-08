// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyDispatcher.h"
#include "MyReciever.generated.h"

UCLASS()
class CPPTESTBED_API AMyReciever : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyReciever();

	UFUNCTION()
	void RunBroadCast();

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnDelegate TestDelegate;

	//Binds
	void BindtoActorDelegate(AMyDispatcher* MyDispatcher);

	//Unbinds
	void UnbindToActorDelegate(AMyDispatcher* MyDispatcher);
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
