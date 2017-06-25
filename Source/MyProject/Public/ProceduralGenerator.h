// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class MYPROJECT_API ProceduralGenerator
{
public:
	ProceduralGenerator(int seed);
	~ProceduralGenerator();
	getRandomInteger();

private:
	int seed;
};
