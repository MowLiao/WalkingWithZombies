// This code enables CrowdFollowingComponent to allow nav mesh avoidance for crowds.
// Inherits AIController
// Reference code: https://forums.unrealengine.com/development-discussion/c-gameplay-programming/67262-detour-crowd-ucrowdfollowingcomponent

#include "CPPCrowdAIController.h"

ACPPCrowdAIController::ACPPCrowdAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
}

void ACPPCrowdAIController::SetAvoidanceQuality(ECrowdAvoidanceQuality::Type quality)
{
	UCrowdFollowingComponent* pathfollow = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent());
	if (pathfollow)
	{
		pathfollow->SetCrowdAvoidanceQuality(quality);
		pathfollow->SetCrowdSeparationWeight(2, true);
		pathfollow->SetCrowdSeparation(true, true);
	}
}
