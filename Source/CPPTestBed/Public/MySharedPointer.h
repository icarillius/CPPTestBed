// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MySharedPointer.generated.h"

struct FMyObject
{
	int32 var;
	FMyObject(int32 value) : var (value) {
	}
};


UCLASS()
class CPPTESTBED_API AMySharedPointer : public AActor
{
	GENERATED_BODY()
	
public:	

	

	// Sets default values for this actor's properties
	AMySharedPointer();
	//Empty
	TSharedPtr<FMyObject> EmptyPointer;
	//Creates a shared new object poitner
	//TSharedPtr<FMyObject> NewPointer(FMyObject());
	//Create a shared pointer from Ref
	//TSharedRef<FMyObject> NewReference(FMyObject());

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
