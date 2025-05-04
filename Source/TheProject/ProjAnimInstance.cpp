// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjAnimInstance.h"
#include "TheProjectCharacter.h"

void UProjAnimInstance::OnStateAnimationEnds()
{
	if (State == EPlayerState::Idle)
	{
		State = EPlayerState::Moving;
	}
	else
	{
		State = EPlayerState::Idle;
	}
}

