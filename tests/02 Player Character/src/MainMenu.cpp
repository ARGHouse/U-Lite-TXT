#include "MainMenu.h"
#include "DialougeLogic.h"
#include <iostream>
#include <string>

using namespace std;

MainMenu::MainMenu()
{

}

MainMenu::MainMenu(int &mainMenuInput, const std::string &newCharacter, const std::string &quitApplication, bool wantNewCharacter, bool wantQuit, bool isInvalidInput)
{
	if (wantMainMenu == true) {

		cout << "--- U-LITE --- \n" << endl;
		cout << "\n";
		cout << newCharacter;
		cout << quitApplication;
		cout << "V Input below V \n" << endl;

		cin >> mainMenuInput;
		if (mainMenuInput == 1) {
			wantNewCharacter = true;
			wantQuit = false;
			isInvalidInput = false;
			cout << "New Player Character confirmed! \n" << endl;
			wantMainMenu = false;
			c_dialougeLogic.wantStartDialouge = true;

		}
		else if (mainMenuInput == 2) {
			wantQuit = true;
			wantNewCharacter = false;
			isInvalidInput = false;
			cout << "Quitting to desktop \n" << endl;
		}
		else {
			wantQuit = false;
			wantNewCharacter = false;
			isInvalidInput = true;
			if (isInvalidInput == true) {
				cout << "not a valid input \n" << endl;
				cin >> mainMenuInput;
			}

		}
	}



}

MainMenu::~MainMenu()
{

}