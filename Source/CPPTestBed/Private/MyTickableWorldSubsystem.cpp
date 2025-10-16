// Fill out your copyright notice in the Description page of Project Settings.


#include "MyTickableWorldSubsystem.h"

void UMyTickableWorldSubsystem::Tick(float DeltaTime)
{
	//creates an override for deltatime using the super tick
	Super::Tick(DeltaTime);
	increaseValue();

}

TStatId UMyTickableWorldSubsystem::GetStatId() const
{
	//RETURN_QUICK_DECLARE_CYCLE_STAT(UMyTickableWorldSubsystem, FStatGroup_STATGROUP_Tickables)

	return TStatId();
}

int UMyTickableWorldSubsystem::increaseValue()
{
	val = val + 1;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT(" Increase Value: %i"), val));
	return val;
}
