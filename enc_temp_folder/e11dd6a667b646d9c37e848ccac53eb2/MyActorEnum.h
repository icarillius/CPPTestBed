// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorEnum.generated.h"

UENUM(BlueprintType)
enum class EMaterialTypes : uint8
{
	Wood UMETA(DisplayName = "Wood"),
	Stone UMETA(DisplayName = "Stone"),
	Metal UMETA(DisplayName = "Metal"),
};
UCLASS()
class CPPTESTBED_API AMyActorEnum : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorEnum();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enum")
	EMaterialTypes Material;

	UFUNCTION(BlueprintCallable, Category = "Enum")
	void SelectMaterialType();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
