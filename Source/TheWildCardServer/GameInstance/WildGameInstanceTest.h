// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "WildGameInstanceTest.generated.h"

/**
 * 
 */
UCLASS()
class THEWILDCARDSERVER_API UWildGameInstanceTest : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init() override;
};
