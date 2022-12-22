// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TFCharacter.h"
#include "TFPlayerCharacter.generated.h"

UCLASS(Blueprintable, Category="Characters")
class TFCHARACTERS_API ATFPlayerCharacter : public ACharacter, public ITFCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATFPlayerCharacter();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FORCEINLINE class UCameraComponent* GetTopDownCamera() const { return TopDownCamera; }

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	void AddHealth();

	void RemoveHealth();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Interact();

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player-Camera", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* TopDownCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadonly, Category = "Player-Camera", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;
};
