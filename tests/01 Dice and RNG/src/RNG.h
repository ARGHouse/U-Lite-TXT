#ifndef RNG_H
#define RNG_H

#include <iostream>
#include <random>
#include <assert.h>
#include <cmath>
#include "SDL_stdinc.h"

extern "C" {
#include "jenkins/lookup3.h"
}

#define PCG_LITTLE_ENDIAN 1
#include "pcg-cpp/pcg_random.hpp"

class RNG {


public:
	pcg32 mPCG;

	//for storing second rand from normal
	bool cached;
	double z1;

	RNG();
	~RNG();

	//int getRandomInterger() {
	//
	//	std::random_device getRandomInt;
	//	std::uniform_int_distribution<int> dist(randIntMin, randIntMax);
	//	randInt = dist(getRandomInt);
	//	return randInt;
	//}

	int getRandomInterger(int& randInt, int& randIntMin, int& randIntMax);

	//float getRandomFloat() {
	//
	//	std::random_device getRandFlt;
	//	std::uniform_real_distribution<float> dist(randFloatMin, randFloatMax);
	//	randFloat = dist(getRandFlt);
	//	return randFloat;
	//}

	float getRandomFloat(float& randFloat, float& randFloatMin, float& randFloatMax);

	//double getRandomDouble() {
	//
	//	std::random_device getRandDbl;
	//	std::uniform_real_distribution<double> dist(randDoubleMin, randDoubleMax);
	//	randDouble = dist(getRandDbl);
	//	return randDouble;
	//
	//}

	double getRandomDouble(double& randDouble, double& randDoubleMin, double& randDoubleMax);

	//RNG(const Uint32 initialSeed = 0xabcd1234) {
	//	seed(initialSeed);
	//}

	RNG(const Uint32 initialSeed);

	// Construct a new generator given an array of 32-bit seeds.
	//RNG(const Uint32* const seeds, size_t length)
	//{
	//	seed(seeds, length);
	//}

	RNG(const Uint32* const seeds, size_t length);

	// Construct a new random generator from an array of 64-bit
	// seeds.
	//RNG(const Uint64* const seeds, size_t length)
	//{
	//	seed(reinterpret_cast<const Uint32*>(seeds), length * 2);
	//}

	RNG(const Uint64* const seeds, size_t length);

//
// Seed functions
//

// Seed the RNG using the hash of the given array of seeds.
	//void seed(const Uint32* const seeds, size_t length)
	//{
	//	const Uint32 hash = lookup3_hashword(seeds, length, 0);
	//	mPCG.seed(hash);
	//	cached = false;
	//}

	void seed(const Uint32* const seeds, size_t length);

	// Seed using an array of 64-bit integers
	//void seed(const Uint64* const seeds, size_t length)
	//{
	//	seed(reinterpret_cast<const Uint32*>(seeds), length * 2);
	//}

	void seed(const Uint64* const seeds, size_t length);

	// Seed using a single 32-bit integer
	//void seed(const Uint32 value)
	//{
	//	seed(&value, 1);
	//}

	void seed(const Uint32 value);

private:

	int randIntMin;
	int randIntMax;
	int randInt;

	float randFloatMin;
	float randFloatMax;
	float randFloat;

	double randDoubleMin;
	double randDoubleMax;
	double randDouble;

};

RNG c_RNG;



#endif /** RNG_H **/