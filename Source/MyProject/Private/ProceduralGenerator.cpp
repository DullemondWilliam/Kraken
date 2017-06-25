// Fill out your copyright notice in the Description page of Project Settings.

#include "ProceduralGenerator.h"
#include <stdlib.h>
ProceduralGenerator::ProceduralGenerator(int seed)
{
	this.seed = seed;
}

ProceduralGenerator::~ProceduralGenerator()
{
}

int ProceduralGenerator::getRandomInteger()
{
	return srand(seed);
}
