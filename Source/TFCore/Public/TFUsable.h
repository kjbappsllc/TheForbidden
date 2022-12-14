// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TFCharacter.h"
#include "TFUsable.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UTFUsable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class TFCORE_API ITFUsable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void Use(const TScriptInterface<ITFCharacter>& Player) = 0;

	UFUNCTION(BlueprintImplementableEvent, Category="Trigger On Use")
	void onUse(const TScriptInterface<ITFCharacter>& Player);
};
