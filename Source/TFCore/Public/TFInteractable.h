// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TFInteractable.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UTFInteractable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TFCORE_API ITFInteractable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Interact() = 0;

	UFUNCTION(BlueprintImplementableEvent)
	void onInteract();
};
