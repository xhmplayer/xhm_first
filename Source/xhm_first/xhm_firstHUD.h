// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "xhm_firstHUD.generated.h"

UCLASS()
class Axhm_firstHUD : public AHUD
{
	GENERATED_BODY()

public:
	Axhm_firstHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

