// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "bluelib.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MYPROJECT_API Ubluelib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "warriorstate")
	static bool isinrange(FVector v1, FVector v2, float minimum);
	UFUNCTION(BlueprintCallable, Category = "warriorstate")
	static float damge_calc(int32 armour, int32 pierce, int32 atk, float hp);
	UFUNCTION(BlueprintCallable, Category = "warriorstate")
	static bool isseen(FVector self_a, FVector target_a, float yaw, float fov=90);
};


