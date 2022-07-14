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
	// �÷��̾� �̵��ӵ�
	UPROPERTY(EditDefaultsOnly, BluePrintReadWrite, Category = HarryAnim)
	float speed = 0;
	
};
