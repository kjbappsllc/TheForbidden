// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TFItem.generated.h"

/**
 * 
 */
UCLASS()
class TFCORE_API UTFItem : public UObject
{
	GENERATED_BODY()

public:
	UTFItem();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Core-Item")
	class UTexture2D* Thumbnail;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Core-Item", meta = (MultiLine = true))
	FText Description;
};
