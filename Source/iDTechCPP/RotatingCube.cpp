// Fill out your copyright notice in the Description page of Project Settings.


#include "RotatingCube.h"

// Sets default values
ARotatingCube::ARotatingCube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RotatingCube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh To Rotate"));

}

// Called when the game starts or when spawned
void ARotatingCube::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingCube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RotateCube(DeltaTime);

}

void ARotatingCube::RotateCube(float DTime)
{
	FRotator Rotator;
	Rotator = GetActorRotation();

	Rotator.Yaw = Rotator.Yaw + DTime * RotSpeed;
	SetActorRotation(Rotator);

}

