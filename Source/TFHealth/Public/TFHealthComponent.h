// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TFHealthComponent.generated.h"


UCLASS( ClassGroup=(TFHealth), meta=(BlueprintSpawnableComponent) )
class TFHEALTH_API UTFHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTFHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;


protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 BaseHealth;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Readonly")
	int32 CurrentHealth;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Readonly")
	int32 CurrentShield;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int32 BaseRegenRate;
};
