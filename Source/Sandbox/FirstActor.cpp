// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstActor.h"

DEFINE_LOG_CATEGORY_STATIC(SandboXBaseLog, All, All)

// Sets default values
AFirstActor::AFirstActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFirstActor::BeginPlay()
{
	Super::BeginPlay();
	
	FString Name = "John Connor";
	UE_LOG(SandboXBaseLog, Display, TEXT("Name: %s"), *Name);


}

// Called every frame
void AFirstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

