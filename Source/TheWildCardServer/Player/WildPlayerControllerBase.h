// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "WildPlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class THEWILDCARDSERVER_API AWildPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Client, Reliable)
	void AddHUDAndRemoveOld(UUserWidget* Remove, TSubclassOf<UUserWidget> Create);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void AddHUDOnTime(UUserWidget* Remove, TSubclassOf<UUserWidget> Create, float Time);

	UFUNCTION(BlueprintCallable, Server, Reliable)
	void CompleteActionInCurrentPhase();
public:
	UPROPERTY(BlueprintReadOnly)
	FTimerHandle RemainTimeHandle;
};
