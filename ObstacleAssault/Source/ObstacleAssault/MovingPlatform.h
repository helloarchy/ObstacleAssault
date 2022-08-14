// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	int32 MyInt = 99;

	UPROPERTY(EditAnywhere)
	int32 InputA = 1;

	UPROPERTY(EditAnywhere)
	int32 InputB = 2;

	UPROPERTY(EditAnywhere)
	int32 OutputC = 3;
	
	UPROPERTY(EditAnywhere)
	float MyFloat = 0.1f;

	UPROPERTY(EditAnywhere)
	float InputI = 1.0f;

	UPROPERTY(EditAnywhere)
	float InputJ = 2.0f;

	UPROPERTY(EditAnywhere)
	float OutputK = 3.0f;
};
