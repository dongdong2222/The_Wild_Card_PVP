// Fill out your copyright notice in the Description page of Project Settings.


#include "WildPlayerControllerBase.h"
#include "TheWildCardServer/GameState/WildGameStateBase.h"
#include "Blueprint/UserWidget.h"

void AWildPlayerControllerBase::AddHUDAndRemoveOld_Implementation(UUserWidget* Remove, TSubclassOf<UUserWidget> Create)
{
	if (!IsValid(Create)) return;
	UUserWidget* Widget = CreateWidget<UUserWidget>(this, Create);
	if (Widget)
	{
		Widget->AddToViewport();
	}

	if (Remove)
	{
		Remove->RemoveFromParent();
	}
}

void AWildPlayerControllerBase::AddHUDOnTime_Implementation(UUserWidget* Remove, TSubclassOf<UUserWidget> Create, float Time)
{
	AddHUDAndRemoveOld(Remove, Create);
	GetWorldTimerManager().SetTimer(
		RemainTimeHandle,
		Time,
		&ThisClass::CompleteActionInCurrentPhase
	);
}

void AWildPlayerControllerBase::CompleteActionInCurrentPhase()
{
	if (HasAuthority())
	{
		AWildGameStateBase* WildGameState = Cast<AWildGameStateBase>(GetWorld()->GetGameState());
		if (!WildGameState) return;
		//GameState->CompleteActionOnPlayer();
	}
}
