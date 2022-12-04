// Fill out your copyright notice in the Description page of Project Settings.

#include "TFHealthComponent.h"

// Sets default values for this component's properties
UTFHealthComponent::UTFHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
	BaseHealth = 1000;
	BaseRegenRate = 3;
}


// Called when the game starts
void UTFHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	CurrentHealth = BaseHealth;
	CurrentShield = 0;
	UE_LOG(LogTemp, Display, TEXT("Current health set is : %d"), CurrentHealth);
}

