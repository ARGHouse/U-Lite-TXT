#ifndef DICE_H
#define DICE_H
#include "RNG.h"



class Dice
{
public:
	Dice();
	~Dice();

	Dice(const int &dieSides);

	//int diceD2(const int &dieSides, int &d2 );
	//int diceD3(const int& dieSides, int &d3);
	//int diceD4(const int& dieSides, int &d4);
	//int diceD5(const int& dieSides, int &d5);
	int diceD6(const int& dieSides, int &d6);
	//int diceD7(const int& dieSides, int &d7);
	//int diceD8(const int& dieSides, int &d8);
	//int diceD9(const int& dieSides, int &d9);
	//int diceD10(const int& dieSides, int &d10);
	//int diceD11(const int& dieSides, int &d11);
	//int diceD12(const int& dieSides, int &d12);
	//int diceD13(const int& dieSides, int &d13);
	//int diceD14(const int& dieSides, int &d14);
	//int diceD15(const int& dieSides, int &d15);
	//int diceD16(const int& dieSides, int &d16);
	//int diceD17(const int& dieSides, int &d17);
	//int diceD18(const int& dieSides, int &d18);
	//int diceD19(const int& dieSides, int &d19);
	//int diceD20(const int& dieSides, int &d20);
	//int diceD22(const int& dieSides, int &d22);
	//int diceD26(const int& dieSides, int &d26);
	//int diceD28(const int& dieSides, int &d28);
	//int diceD48(const int& dieSides, int &d48);
	//int diceD24(const int& dieSides, int &d24);
	//int diceD30(const int& dieSides, int &d30);
	//int diceD60(const int& dieSides, int &d60);
	//int diceD100(const int& dieSides, int &d100);
	//int diceD120(const int& dieSides, int &d120);

private:

	int dieSIDES;
	const int dieSides = dieSIDES;

	int d2;
	int d3;
	int d4;
	int d5;
	int d6;
	int d7;
	int d8;
	int d9;
	int d10;
	int d11;
	int d12;
	int d13;
	int d14;
	int d15;
	int d16;
	int d17;
	int d18;
	int d19;
	int d20;
	int d22;
	int d24;
	int d26;
	int d28;
	int d30;
	int d48;
	int d60;
	int d100;
	int d120;

};

Dice c_dice;

#endif // DICE_H

