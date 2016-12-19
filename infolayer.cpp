// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject.h"
#include "infolayer.h"
#include "FileManager.h"
#include "ArchiveBase.h"
#include "Archive.h"
#include <iostream>
#include <fstream>

infolayer::infolayer()
{
}

infolayer::~infolayer()
{
}

bool infolayer::read(int type, int* armour, int* ar_pierce, int* atk, int* ats)
{
	/*std::fstream fin("C://Users/Lenn/Documents/Unreal Projects/MyProject/Source/unit_export.txt", std::ios::in | std::ios::binary);//unit descriptions
	if (fin.fail()){
		std::cerr << "File access error" << std::endl;
		return;
	}*/
	const FString& FullFilePath = "C:/Users/Lenn/Documents/Unreal Projects/MyProject/unit_export.txt";
	TArray<uint8> TheBinaryArray;
	if (!FFileHelper::LoadFileToArray(TheBinaryArray, *FullFilePath))
	{
		std::cerr<<"FFILEHELPER:>> Invalid File";
		return false;
		//~~
	}
	FMemoryReader FromBinary = FMemoryReader(TheBinaryArray, true);
	int size = 0;
	FromBinary.Seek(TheBinaryArray.Num()-4);
	FromBinary << size;
	FromBinary.Seek(0);
	//fin.seekg(4,std::ios::end);    not working according to Rudy
	//fin.seekg(0, std::ios::end);
	//int loc = fin.tellg();
	//loc -= 4;
	//fin.seekg(loc, std::ios::beg);
	//fin.read((char*)size, 4);
	data = new typeman[size];
	//fin.seekg(0, std::ios::beg);
	for (int i = 0; i < size; i++){
	//	fin.read((char*)&data[i], sizeof(typeman));
		FromBinary << data[i].i_hp;
		FromBinary << data[i].max_v;
		FromBinary << data[i].armour;
		FromBinary << data[i].ar_pierce;
		FromBinary << data[i].atk;
		FromBinary << data[i].ats;
		FromBinary << data[i].type;
	}

	//fin.close();

	*armour = data[type].armour;
	*ar_pierce = data[type].ar_pierce;
	*atk = data[type].atk;
	*ats = data[type].ats;
	
	return true;
	
}
