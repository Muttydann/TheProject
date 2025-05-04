// Fill out your copyright notice in the Description page of Project Settings.


#include "Grounder.h"
#include "GameFramework/Actor.h"

// Sets default values
AGrounder::AGrounder()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGrounder::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGrounder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


