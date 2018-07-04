// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PuzzlePlatformersGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLEPLATFORMERS_API UPuzzlePlatformersGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPuzzlePlatformersGameInstance(const FObjectInitializer& ObjectInitializer);
	
	virtual void Init();

	UFUNCTION(exec)
	void Host();

	UFUNCTION(exec)
	void Join(const FString& Address);
	
};
