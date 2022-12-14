// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TFEquipable.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UTFEquipable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TFCORE_API ITFEquipable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Equip() = 0;

	UFUNCTION(BlueprintImplementableEvent)
	void OnEquip();
};
