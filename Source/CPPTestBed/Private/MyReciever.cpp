// Fill out your copyright notice in the Description page of Project Settings.
#include "Kismet/GameplayStatics.h"
#include "MyDispatcher.h"
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

// Called when the game starts or when spawned
void AMyReciever::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Reciever Exists")));
	AMyDispatcher* Dispatcher = Cast<AMyDispatcher>(UGameplayStatics::GetActorOfClass(GetWorld(), AMyDispatcher::StaticClass()));

	Dispatcher->TestDelegate.AddDynamic(this, &AMyReciever::RunBroadCast);
	
}

// Called every frame
void AMyReciever::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

