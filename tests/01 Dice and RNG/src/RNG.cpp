#include "RNG.h"
#include <iostream>
#include <random>
#include <assert.h>
#include <cmath>


#include "pcg-cpp/pcg_random.hpp"

extern "C" {
#include "jenkins/lookup3.h"
}


RNG::RNG() {}

RNG::~RNG() {}

int RNG::getRandomInterger(int& randInt, int& randIntMin, int& randIntMax) {

	std::random_device getRandomInt;
	std::uniform_int_distribution<int> dist(randIntMin, randIntMax);
	randInt = dist(getRandomInt);
	return randInt;
}

float RNG::getRandomFloat(float& randFloat, float& randFloatMin, float& randFloatMax) {

	std::random_device getRandFlt;
	std::uniform_real_distribution<float> dist(randFloatMin, randFloatMax);
	randFloat = dist(getRandFlt);
	return randFloat;
}

double RNG::getRandomDouble(double& randDouble, double& randDoubleMin, double& randDoubleMax) {

	std::random_device getRandDbl;
	std::uniform_real_distribution<double> dist(randDoubleMin, randDoubleMax);
	randDouble = dist(getRandDbl);
	return randDouble;
}

RNG::RNG(const Uint32 initialSeed = 0xabcd1234) {

	//One seed to rule them all, one seed to find them
	//One seed to bring them all, and in the machine bind them
	seed(initialSeed);
}

RNG::RNG(const Uint32* const seeds, size_t length) {
	// Construct a new generator given an array of 32-bit seeds.

	seed(seeds, length);
}

RNG::RNG(const Uint64* const seeds, size_t length) {

	// Construct a new random generator from an array of 64-bit
	// seeds.

	seed(reinterpret_cast<const Uint32*>(seeds), length * 2);
}

//Seed functions

// Seed the RNG using the hash of the given array of seeds.

void RNG::seed(const Uint32* const seeds, size_t length) {

	const Uint32 hash = lookup3_hashword(seeds, length, 0);
	mPCG.seed(hash);
	cached = false;
}

void RNG::seed(const Uint64* const seeds, size_t length) {

	// Seed using an array of 64-bit integers

	seed(reinterpret_cast<const Uint32*>(seeds), length * 2);
}

void RNG::seed(const Uint32 value) {

	// Seed using a single 32-bit integer

	seed(&value, 1);
}