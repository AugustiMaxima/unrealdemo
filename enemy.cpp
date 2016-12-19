// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "enemy.h"


// Sets default values
Aenemy::Aenemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aenemy::BeginPlay()
{
	Super::BeginPlay();

	infolayer initiation;

	type = 0;

	armour = 0;

	ar_pierce = 0;

	atk = 0;

	ats = 0;

	initiation.read(type,&armour,&ar_pierce,&atk,&ats);

	
}

// Called every frame
void Aenemy::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	at_c += DeltaTime;

}

// Called to bind functionality to input
void Aenemy::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

