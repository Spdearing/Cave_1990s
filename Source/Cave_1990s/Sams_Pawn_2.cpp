// Fill out your copyright notice in the Description page of Project Settings.


#include "Sams_Pawn_2.h"

// Sets default values
ASams_Pawn_2::ASams_Pawn_2()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASams_Pawn_2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASams_Pawn_2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASams_Pawn_2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

