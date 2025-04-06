// Fill out your copyright notice in the Description page of Project Settings.


#include "WildGameStateBase.h"

void AWildGameStateBase::CompleteActionOnPlayer()
{
	if (!HasAuthority()) return;
	//TODO : 플레이어가 완료했다고 체크, 플레이어 둘 다 완료했다면 EndPhase
}
