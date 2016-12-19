// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "bluelib.h"
#include "infolayer.h"
#include "enemy.generated.h"


UCLASS()
class MYPROJECT_API Aenemy : public ACharacter
{
	GENERATED_BODY()

	


public:
	// Sets default values for this character's properties
	Aenemy();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Warrior)
		int32 type;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Warrior)
		float hp;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Warrior)
		float at_c;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Warrior)
		int32 armour;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Warrior)
		int32 ar_pierce;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Warrior)
		int32 atk;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = Warrior)
		int32 ats;

};



