// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class MYPROJECT_API infolayer
{
public:
	infolayer();
	~infolayer();
	bool read(int type, int* armour, int* ar_pierce, int* atk, int* ats);

	struct s_type* data;
};


typedef struct s_type{
		int32 i_hp;

		int32 max_v;

		int32 armour;

		int32 ar_pierce;

		int32 atk;

		int32 ats;

		int32 type;
}typeman;
