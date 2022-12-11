// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TFCharacter.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UTFCharacter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TFCORE_API ITFCharacter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void AddHealth() = 0;
	virtual void RemoveHealth() = 0;
};
