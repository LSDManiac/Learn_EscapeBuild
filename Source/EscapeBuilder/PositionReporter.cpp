// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReporter.h"
#include "GameFramework/Actor.h"
#include "TransformVectorized.h"

UPositionReporter::UPositionReporter()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPositionReporter::BeginPlay()
{
	Super::BeginPlay();

	FString name = GetOwner()->GetName();

	FVector position = GetOwner()->GetTransform().GetLocation();

	UE_LOG(LogTemp, Warning, TEXT("Begin play at %s"), *name);
	UE_LOG(LogTemp, Warning, TEXT("%s is in position %s"), *name, *position.ToString());
}

void UPositionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

