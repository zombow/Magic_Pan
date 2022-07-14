// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "HarryAnim.generated.h"

/**
 * 
 */
UCLASS()
class MAGIC_PAN_API UHarryAnim : public UAnimInstance
{
	GENERATED_BODY()

public:
	// 플레이어 이동속도
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = HarryAnim)
	float speed = 0;
	
};
