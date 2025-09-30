// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Reflection.generated.h"

UCLASS()
class CPPTESTBED_API AReflection : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AReflection();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere)
	float FloatNumber = 20.0f;

	UPROPERTY(BlueprintReadOnly)
	int IntNumber = 2;

	UPROPERTY(BlueprintReadWrite, Category ="Names")
	FString Name = "Bob Loblaw";


	UPROPERTY(BlueprintReadOnly)
	int AndTwo = 2;

	UFUNCTION()
	int PuttingTwoandTwoTogether(int Two);


};
