#include "Dice.h"
#include "RNG.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Dice::Dice()
{}

Dice::Dice(const int &dieSides) {
}

Dice::~Dice() 
{}

//int Dice::diceD2(const int &dieSides, int &d2) {
//
//	dieSIDES = 2;
//
//	srand(time(c_RNG.seed));
//	d2 = rand() % dieSides + 1;
//
//	return d2;
//}

//int Dice::diceD3(const int& dieSides, int& d3) {
//
//	dieSIDES = 3;
//
//	srand(c_RNG.seed);
//	d3 = rand() % dieSides + 1;
//
//	return d3;
//}
//
//int Dice::diceD4(const int& dieSides, int& d4) {
//
//	dieSIDES = 4;
//
//	srand(c_RNG.seed);
//	d4 = rand() % dieSides + 1;
//
//	return d4;
//}

int Dice::diceD6(const int& dieSides, int& d6) {

	dieSIDES = 6;

	srand(c_RNG.seed);
	d4 = rand() % dieSides + 1;

	return d4;
}