// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WildGamePhaseBase.generated.h"

class AWildGameStateBase;

/**
 * 
 */
UCLASS()
class THEWILDCARDSERVER_API AWildGamePhaseBase : public AActor
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "PhaseHandle")
	void InitPhase(AWildGameStateBase* GameState);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category="PhaseHandle")
	void StartPhase();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "PhaseHandle")
	void EndPhase();

public:
	UPROPERTY(BlueprintReadOnly, Category="GameState")
	AWildGameStateBase* WildGameState;
};
