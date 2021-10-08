// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Timermanager.h"
#include "FirstActor.h"
#include "HubActor.generated.h"

USTRUCT(BlueprintType)
struct FGeometryPayload
{

	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnyWhere)
	TSubclassOf <AFirstActor> ActorBaseGeometry;

	UPROPERTY(EditAnyWhere)
	FGeometryData Data;

	UPROPERTY(EditAnyWhere)
	FTransform initialTransform;

		
};
UCLASS()
class SANDBOX_API AHubActor : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnyWhere, Category ="Class")
	TSubclassOf<AFirstActor>FirstActorGeometry;

	UPROPERTY(EditAnyWhere)
		TArray<FGeometryPayload>GeometryPayloads;

protected:
	FTimerHandle TimerHandle;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Timer")
	float TimerRate = 1.0f;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Timer")
	int32 MaxTimerCount = 10;
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Timer")
	int32 TimerCount = 0; 



public:	
	// Sets default values for this actor's properties
	AHubActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ForSpawnActor();

private:
	UFUNCTION()
	void OnColorChanged(const FLinearColor& Color, FString& Name);
	UFUNCTION()
	void OnTimerFinished(AActor*Actor);
};
