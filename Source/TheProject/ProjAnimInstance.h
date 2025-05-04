#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ProjAnimInstance.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EPlayerState : uint8
{
	Idle,
	Moving,
	Jumping
};

UCLASS()
class THEPROJECT_API UProjAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avatar Params")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Avatar Params")
	EPlayerState State;

	UFUNCTION(BlueprintCallable)
	void OnStateAnimationEnds();
};
