// Fill out your copyright notice in the Description page of Project Settings.

#include "PositionReporter.h"
#include "GameFramework/Actor.h"

UPositionReporter::UPositionReporter()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UPositionReporter::BeginPlay()
{
	Super::BeginPlay();

	FString name = GetOwner()->GetName();

	UE_LOG(LogTemp, Warning, TEXT("Begin play at %s"), *name);
}

void UPositionReporter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

