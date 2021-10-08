// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "FirstActor.generated.h"



DECLARE_MULTICAST_DELEGATE_OneParam(FOnTimerFinished, AActor*);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnColorChanged, const FLinearColor&, Color, const FString&, Name);


UENUM(BlueprintType)
enum class EmovementType : uint8
{
	Sin,
	Static
};

USTRUCT(BlueprintType)
struct FGeometryData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category = "Movement")
		EmovementType MoveType = EmovementType::Static;
	UPROPERTY(EditAnywhere, Category = "Movement")
		float Amplitude = 50.0f;
	UPROPERTY(EditAnywhere, Category = "Movement")
		float Frequency = 5.5f;
	UPROPERTY(EditAnywhere, Category = "Design")
		FLinearColor Color;
	UPROPERTY(EditAnywhere, Category = "Design")
	float TimerRate = 1.5f;
};


UCLASS()
class SANDBOX_API AFirstActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFirstActor();

	UPROPERTY(EditAnywhere, Category = "StaticMesh")
	UStaticMeshComponent* BasicMesh;

	void SetGeometryData(const FGeometryData& Data) { GeometryData = Data; }


	// Delegates /////////////////////
	UPROPERTY(BlueprintAssignable)
	FOnColorChanged OnColorChanged;

	FOnTimerFinished OnTimerFinished;
	///////////////////////////////////




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere)
	FGeometryData GeometryData;

	UPROPERTY(EditAnywhere)
	int32 WaeaponNum = 1;
	UPROPERTY(EditDefaultsOnly)
	float Health = 21.120;
	UPROPERTY(EditInstanceOnly)
	bool IsDead = false;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Timer")
		int32 MaxTimerCount = 10;
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Timer")
		int32 TimerCount = 0;

public:
	virtual void Tick(float DeltaTime) override;

private:	
	FTimerHandle TimerHandle;
	FVector InitialLocation;
	// Called every frame
	
	void PrintStringTypes();
	void PrintTransform();
	void Move();
	void SetColor(const FLinearColor & Color);
	void OnTimerFired();
	
};


