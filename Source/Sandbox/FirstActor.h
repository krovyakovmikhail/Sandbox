// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "FirstActor.generated.h"

UCLASS()
class SANDBOX_API AFirstActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFirstActor();

	UPROPERTY(EditAnywhere, Category = "StaticMesh")
	UStaticMeshComponent* BasicMesh;

	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UPROPERTY(EditAnywhere)
	int32 WaeaponNum = 1;
	UPROPERTY(EditDefaultsOnly)
	float Health = 21.120;
	UPROPERTY(EditInstanceOnly)
	bool IsDead = false;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void PrintStringTypes();
	void PrintTransform();
};
