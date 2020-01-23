// Fill out your copyright notice in the Description page of Project Settings.


#include "TargetPawn.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ATargetPawn::ATargetPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT ("MeshComp"));
	MeshComp->SetCanEverAffectNavigation(false);
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void ATargetPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATargetPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
