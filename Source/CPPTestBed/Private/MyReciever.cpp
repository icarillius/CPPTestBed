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

void AMyReciever::BindtoActorDelegate(AMyDispatcher* MyDispatcher)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Message In")));

	
	MyDispatcher->TestDelegate.AddDynamic(this, &AMyReciever::RunBroadCast);
	//RunBroadCast();
}

void AMyReciever::UnbindToActorDelegate(AMyDispatcher* MyDispatcher)
{
	MyDispatcher->TestDelegate.RemoveAll(this);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Remove From Delegate")));
}

// Called when the game starts or when spawned
void AMyReciever::BeginPlay()
{
	Super::BeginPlay();
	//AMyDispatcher* Dispatch = Cast<AMyDispatcher>(TestDelegate.AddDynamic(this, &AMyReciever::RunBroadCast); // Not sure about this. 

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Reciever Exists")));

	
}

// Called every frame
void AMyReciever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

