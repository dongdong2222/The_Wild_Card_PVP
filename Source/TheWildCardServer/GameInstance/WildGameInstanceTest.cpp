// Fill out your copyright notice in the Description page of Project Settings.


#include "WildGameInstanceTest.h"
#include "OnlineSubsystem.h"
#include "Interfaces/OnlineUserCloudInterface.h"

void UWildGameInstanceTest::Init()
{
	//SubsystemSteam 확인
	IOnlineSubsystem* OnlineSubsystem = IOnlineSubsystem::Get();
	FString SubsystemName = OnlineSubsystem->GetSubsystemName().ToString();
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, SubsystemName);
	//UserCloud 확인
	IOnlineUserCloudPtr UserCloudInterface;
	UserCloudInterface = OnlineSubsystem->GetUserCloudInterface();
	if (UserCloudInterface.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, "UserCloud Exist");
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Blue, "UserCloud UnExist");
	}

}
