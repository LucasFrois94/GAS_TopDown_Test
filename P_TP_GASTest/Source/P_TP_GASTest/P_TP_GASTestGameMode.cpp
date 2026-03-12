// Copyright Epic Games, Inc. All Rights Reserved.

#include "P_TP_GASTestGameMode.h"
#include "P_TP_GASTestPlayerController.h"
#include "Character/P_TP_GASTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AP_TP_GASTestGameMode::AP_TP_GASTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AP_TP_GASTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/GameplayAbilitySystem/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}