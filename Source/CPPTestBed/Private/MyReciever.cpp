// Fill out your copyright notice in the Description page of Project Settings.

#include "MyReciever.h"

// Sets default values
AMyReciever::AMyReciever()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMyReciever::RunBroadCast()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, FString::Printf(TEXT("Message Recieved")));

}

void AMyReciever::BindtoActorDelegate(AMyDispatcher* MyDispatcter)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Message In")));

	if (MyDispatcter)
	{
		MyDispatcter->TestDelegate.AddDynamic(this, &AMyReciever::RunBroadCast);
		RunBroadCast();
	}
}

// Called when the game starts or when spawned
void AMyReciever::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Reciever Exists")));

	
}

// Called every frame
void AMyReciever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

