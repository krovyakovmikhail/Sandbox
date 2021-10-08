// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/InputComponent.h"
#include "SandBoxPawn.h"

DEFINE_LOG_CATEGORY_STATIC(LogSandBoxPawn, All, All)
// Sets default values
ASandBoxPawn::ASandBoxPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	SetRootComponent(SceneComponent);
	

}

// Called when the game starts or when spawned
void ASandBoxPawn::BeginPlay()
{
	Super::BeginPlay();
}
// Called every frame
void ASandBoxPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!VelocityVector.IsZero())
	{
		const FVector NewLocation = GetActorLocation() + Velocity*DeltaTime*VelocityVector;
		SetActorLocation(NewLocation);
	}
	
}

// Called to bind functionality to input
void ASandBoxPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASandBoxPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASandBoxPawn::MoveRight);

}

void ASandBoxPawn::MoveForward(float Amount)
{
	UE_LOG(LogSandBoxPawn, Display, TEXT("Move Forvard  %f"), Amount)
	VelocityVector.X = Amount;	

}

void ASandBoxPawn::MoveRight(float Amount)
{
	VelocityVector.Y= Amount;	
	UE_LOG(LogSandBoxPawn, Display, TEXT("Move Right  %f"), Amount)
}

