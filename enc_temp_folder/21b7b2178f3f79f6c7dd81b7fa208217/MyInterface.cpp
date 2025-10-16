// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInterface.h"

// Add default functionality here for any IMyInterface functions that are not pure virtual.

void IMyInterface::Interact(AActor* Interactor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Interface is working")));

}
