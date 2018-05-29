// Header file for CPPCrowdAIController.cpp

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Navigation/CrowdFollowingComponent.h"

#include "CPPCrowdAIController.generated.h"

UCLASS()
class WALKINGWITHZOMBIES_API ACPPCrowdAIController : public AAIController
{
	GENERATED_BODY()

public:
	ACPPCrowdAIController(const class FObjectInitializer& ObjectInitializer);
	void SetAvoidanceQuality(ECrowdAvoidanceQuality::Type);
};
