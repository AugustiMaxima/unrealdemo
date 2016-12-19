// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "math.h"
#include "bluelib.h"


bool Ubluelib::isinrange(FVector v1, FVector v2, float minimum){
	float newthing = (pow(v1.X - v2.X, 2) + pow(v1.Y - v2.Y, 2));
	newthing = sqrt(newthing);
	if (newthing <= minimum){
		return true;
	}
	else{
	return false;
	}
}

float Ubluelib::damge_calc(int32 armour, int32 pierce, int32 atk, float hp){
	int ef_arm = armour - pierce;
	if (ef_arm <0) {
		ef_arm = 0;
	}
	ef_arm = 100 - ef_arm;
	hp -= (float)(atk*ef_arm) / 10000;
	return hp;
}

bool Ubluelib::isseen(FVector self_a, FVector target_a, float yaw, float fov){
	float x = target_a.X - self_a.X;

	float y = target_a.Y - self_a.Y;

	float theo_rot = atan(x / y) * 180 / PI;

	float f_var = fov / 2;

	if (yaw < 0){
		yaw += 360;
	}

	if (y < 0){
		theo_rot = 270 - theo_rot;
	}
	else{
		theo_rot = 90 - theo_rot;
	}


	if (yaw - f_var < 0){
		if (((yaw + 360 - f_var < theo_rot) && theo_rot < 360) || (theo_rot >= 0 && theo_rot < yaw + f_var)){
			return true;
		}
	}
	else if (yaw + f_var > 360){
		if (((yaw - f_var < theo_rot) && theo_rot < 360) || (theo_rot >= 0 && theo_rot < yaw + f_var)){
			return true;
		}
	}
	if (theo_rot<yaw + f_var && theo_rot>yaw - f_var){
		return true;
	}
	else{
		return false;
	}
	
}
