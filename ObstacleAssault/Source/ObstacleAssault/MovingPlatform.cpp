// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move platform forwards
		// Get location
	FVector CurrentLocation = GetActorLocation();
		// Add vector to location
	CurrentLocation += PlatformVelocity * DeltaTime;
		// Set location
	SetActorLocation(CurrentLocation);
	// Send platform back if gone too far
		// Check how far moved
	const float Distance = FVector::Distance(StartLocation, CurrentLocation);
		// Reverse direction of motion

	if (Distance >= MoveDistance)
	{
		const FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MoveDistance;
		SetActorLocation(StartLocation);

		PlatformVelocity = -PlatformVelocity;
	}
}

