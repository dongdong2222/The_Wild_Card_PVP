// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "WildGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class THEWILDCARDSERVER_API AWildGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void CompleteActionOnPlayer();
	
};
