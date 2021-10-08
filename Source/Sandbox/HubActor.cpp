// Fill out your copyright notice in the Description page of Project Settings.



#include "HubActor.h"

DEFINE_LOG_CATEGORY_STATIC(LogGeometryHub, All, All)
// Sets default values
AHubActor::AHubActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AHubActor::BeginPlay()
{
	Super::BeginPlay();
	
	UWorld* World = GetWorld();

	if (World) 	
	{
		/*
		for (size_t i = 0; i < 10; i++)
		{
			const FTransform GeometryTransform = FTransform(FRotator::ZeroRotator, FVector(0.0f, 100.0f * i, 300.0f));
			AFirstActor* FirstActor = World->SpawnActorDeferred<AFirstActor>(FirstActorGeometry, GeometryTransform);
			if (FirstActor)
			{
				FGeometryData Data;
				Data.MoveType = FMath::RandBool() ? EmovementType::Sin : EmovementType::Static;
				Data.Color = FLinearColor::MakeRandomColor();

				FirstActor->SetGeometryData(Data);
				FirstActor->FinishSpawning(GeometryTransform);
			}
		}
		*/
		for (const FGeometryPayload Payload : GeometryPayloads)
		{
			
			AFirstActor* FirstActor = World->SpawnActorDeferred<AFirstActor>(Payload.ActorBaseGeometry, Payload.initialTransform);
			if (FirstActor)
			{
				FirstActor->SetGeometryData(Payload.Data);
				//FirstActor->OnColorChanged.AddDynamic(this, &AHubActor::OnColorChanged);
				FirstActor->OnTimerFinished.AddUObject(this, &AHubActor::OnTimerFinished);
				FirstActor->FinishSpawning(Payload.initialTransform);
			}
		}
		
	}
	
	//GetWorldTimerManager().SetTimer(TimerHandle, this, &AHubActor::ForSpawnActor, TimerRate, true);
}

// Called every frame
void AHubActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHubActor::ForSpawnActor()
{
	if (TimerCount <= MaxTimerCount)

	{
		UWorld* World = GetWorld();
		World->SpawnActor(FirstActorGeometry);

		TimerCount++; 
	}
}

void AHubActor::OnColorChanged(const FLinearColor& Color, FString& Name)
{
	UE_LOG(LogGeometryHub, Warning, TEXT("Actor Name %s Color %s"), *Name, *Color.ToString());

	
}

void AHubActor::OnTimerFinished(AActor* Actor)
{
	
	if (!Actor)
	{
		return;
	}
	else
	{
		UE_LOG(LogGeometryHub, Error, TEXT("Timer Finished : %s"), *Actor->GetName());
	}
}

