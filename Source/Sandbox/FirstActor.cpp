// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstActor.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(SandboXBaseLog, All, All)

// Sets default values
AFirstActor::AFirstActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BasicMesh = CreateDefaultSubobject<UStaticMeshComponent>("BasicMesh");
	SetRootComponent(BasicMesh);



	
	
		 

}

// Called when the game starts or when spawned
void AFirstActor::BeginPlay()
{
	Super::BeginPlay();
	//PrintStringTypes();	
	//PrintTransform()

}

// Called every frame
void AFirstActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFirstActor::PrintStringTypes()
{
	FString Name = "John Connor";
	UE_LOG(SandboXBaseLog, Display, TEXT("Name: %s"), *Name);


	
	FString WeaponNumStr = "Weapons num = " + FString::FromInt(WaeaponNum);
	FString HealthStr = "Health = " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "Is Dead = " + FString(IsDead ? "TRUE" : "FALSE");
	FString Stat = FString::Printf(TEXT("\n -- ALL Stat -- \n%s \n%s \n%s"), *WeaponNumStr, *HealthStr, *IsDeadStr);
	UE_LOG(SandboXBaseLog, Warning, TEXT("%s"), *Stat)

	GEngine->AddOnScreenDebugMessage(-1, 3.5f, FColor::Red, Name);
	GEngine->AddOnScreenDebugMessage(-1, 5.5f, FColor::Green, Stat, true, FVector2D(1.5f, 1.5f));
}

void AFirstActor::PrintTransform()
{
	FTransform Transform = GetTransform();
	FVector Location = Transform.GetLocation();
	FRotator Rotation = Transform.Rotator();
	FVector Scale = Transform.GetScale3D();


	UE_LOG(SandboXBaseLog, Warning, TEXT("Name: %s"), *GetName());
	UE_LOG(SandboXBaseLog, Warning, TEXT("Location: %s"), *Location.ToString());
	UE_LOG(SandboXBaseLog, Warning, TEXT("Rotation: %s"), *Rotation.ToString());
	UE_LOG(SandboXBaseLog, Warning, TEXT("Scale: %s"), *Scale.ToString());

	UE_LOG(SandboXBaseLog, Error, TEXT("Transform: %s"), *Transform.ToString());
}



