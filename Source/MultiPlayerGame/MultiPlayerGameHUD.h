// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MultiPlayerGameHUD.generated.h"

UCLASS()
class AMultiPlayerGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMultiPlayerGameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

