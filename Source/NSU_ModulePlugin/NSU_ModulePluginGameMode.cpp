// Copyright Epic Games, Inc. All Rights Reserved.

#include "NSU_ModulePluginGameMode.h"
#include "NSU_ModulePluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANSU_ModulePluginGameMode::ANSU_ModulePluginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
