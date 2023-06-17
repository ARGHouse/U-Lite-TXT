#include "PCCreationDialouge.h"
#include "PlayerCharacter.h"
#include "DialougeLogic.h"
#include "MainMenu.h"

#include <iostream>

using namespace std;

PCCreationDialouge::PCCreationDialouge() {

	if (c_mainMenu.wantNewCharacter == true && c_dialougeLogic.startDialouge == true)
	{
		cout << "Who are you?\n" << endl;

		if (c_dialougeLogic.startDialouge == true) {

			c_dialougeLogic.wantNextDialouge = false;
			cout << "What is your name?\n" << endl;

			if (c_dialougeLogic.startDialouge == true) {

				c_dialougeLogic.wantNextDialouge = false; //Stop the dialogue train until we are cleared to proceed further down the chain
				cout << "Do you have a first name? [y//n] \n" << endl;
				cin >> c_dialougeLogic.strInput;
				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false)
				{

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Enter character first name: \n";
					cin >> c_playerCharacter.playerFirstName;
					cout << "\n";
					if (c_playerCharacter.PlayerFirstName.size() >= 1) {

						cout << "Your first name is : " << c_playerCharacter.PlayerFirstName << "\n" << endl;
						c_dialougeLogic.getDialougePass();
						c_dialougeLogic.wantNextDialouge = true;
						c_dialougeLogic.getNextDialouge();
					}
					else {
						c_dialougeLogic.wantNextDialouge = false;
						c_dialougeLogic.getDialougeFail();
						cout << "Please try again, enter your first name: \n" << endl;
						cin >> c_playerCharacter.playerFirstName;
					}

				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {
					cout << "You don't have a first name... okay. \n" << endl;
					c_dialougeLogic.getDialougePass();
					c_dialougeLogic.wantNextDialouge = true;
					c_dialougeLogic.getNextDialouge();
				}
				else {
					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}


			}

			if (c_dialougeLogic.getDialougePass() == true && c_dialougeLogic.getNextDialouge() == true) {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "Do you have a middle name? [y//n] \n" << endl;
				cin >> c_dialougeLogic.strInput;
				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Enter character middle name: \n";
					cin >> c_playerCharacter.playerMiddleName;
					cout << "\n";

					if (c_playerCharacter.playerMiddleName.size() >= 1) {

						cout << "Your middle name is : " << c_playerCharacter.playerMiddleName << "\n" << endl;
						c_dialougeLogic.getDialougePass();
						c_dialougeLogic.wantNextDialouge = true;
						c_dialougeLogic.getNextDialouge();
					}
					else {

						c_dialougeLogic.wantNextDialouge = false;
						c_dialougeLogic.getDialougeFail();
						cout << "Please try again, enter your middle name: \n" << endl;
						cin >> c_playerCharacter.playerMiddleName;
					}
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					cout << "You don't have a middle name... okay. \n" << endl;
					c_dialougeLogic.getDialougePass();
					c_dialougeLogic.wantNextDialouge = true;
					c_dialougeLogic.getNextDialouge();
				}
				else {
					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}

			}

			if (c_dialougeLogic.getDialougePass() == true && c_dialougeLogic.getNextDialouge() == true) {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "Do you have a last name? [y//n] \n" << endl;
				cin >> c_dialougeLogic.strInput;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Enter character last name: \n";
					cin >> c_playerCharacter.playerLastName;
					cout << "\n";

					if (c_playerCharacter.playerLastName.size() >= 1) {

						cout << "Your last name is : " << c_playerCharacter.playerLastName << "\n" << endl;
						c_dialougeLogic.getDialougePass();
						c_dialougeLogic.wantNextDialouge = true;
						c_dialougeLogic.getNextDialouge();
					}
					else {

						c_dialougeLogic.wantNextDialouge = false;
						c_dialougeLogic.getDialougeFail();
						cout << "Please try again, enter your last name: \n" << endl;
						cin >> c_playerCharacter.playerLastName;
					}
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					cout << "You don't have a last name... okay. \n" << endl;
					c_dialougeLogic.getDialougePass();
					c_dialougeLogic.wantNextDialouge = true;
					c_dialougeLogic.getNextDialouge();
				}
				else {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}

			if (c_playerCharacter.playerFirstName.size() + c_playerCharacter.playerMiddleName.size() + c_playerCharacter.playerLastName.size() >= 1) {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "Your full name is " << c_playerCharacter.playerFirstName << " " << c_playerCharacter.playerMiddleName << " " << c_playerCharacter.playerLastName << "\n" << endl;
				cout << "Is that correct? [y//n] \n" << endl;

				cin >> c_dialougeLogic.strInput;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.getDialougePass();
					c_dialougeLogic.wantNextDialouge = true;
					c_dialougeLogic.getNextDialouge();

				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Perhaps you made a mistake? you can try again.\n" << endl;

					c_dialougeLogic.getDialougePass();
					c_dialougeLogic.startDialouge() = true;
				}
				else {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
			else {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "It's blank! nobody has no-name!\n" << endl;
				c_dialougeLogic.getDialougeFail();
				cout << "Try again? [y//n]\n" << endl;
				//Go back to start if yes
				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.wantNextDialouge = false;
					c_mainMenu.wantNewCharacter = true;
					c_dialougeLogic.wantStartDialouge = true;
					c_mainMenu.wantMainMenu = false;
				}
				//Go back to main menu if no
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantNextDialouge = false;
					c_dialougeLogic.wantStartDialouge = false;
					c_mainMenu.wantNewCharacter = false;
					c_mainMenu.wantMainMenu = true;
				}
				else {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}

			}
		}

		if (c_dialougeLogic.getDialougePass() == true && c_dialougeLogic.getNextDialouge() == true) {

			c_dialougeLogic.wantNextDialouge = false;
			cout << "How old are you as of the 30th Millenia? \n";
			cin >> c_playerCharacter.playerAge;

			if (c_playerCharacter.playerAge < 18) {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "Far too young to venture out on your own.\n Stick to the simulators until you are ready. \n" << endl;
				cout << "Maybe that was a mistake on your part, try again? [y//n]\n" << endl;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.wantNextDialouge = false;
					cin >> c_playerCharacter.playerAge;
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantNextDialouge = false;
					c_dialougeLogic.getNextDialouge(); //returns false
					c_mainMenu.wantNewCharacter = false;
					c_mainMenu.wantMainMenu = true;
				}
				else {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
			else if (c_playerCharacter.playerAge >= 18) {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "You are : " << c_playerCharacter.playerAge << " years old. \n" << endl;
				cout << "You were born in the year: " << 2900 - c_playerCharacter.playerAge << "\n" << endl;
				cout << "Correct? [y//n] \n" << endl;
				cin << c_dialougeLogic.strInput;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {
					
					c_dialougeLogic.getDialougePass();
					c_dialougeLogic.wantNextDialouge = true;
					c_dialougeLogic.getNextDialouge();
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "So that was incorrect?\n So how old are you then?\n" << endl;
					cin >> c_playerCharacter.playerAge;
				}
				else {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
			else {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "Please input a number, try again? [y//n] \n" << endl;
				cin >> c_dialougeLogic.strInput >> "\n" >> endl;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.wantNextDialouge = false;
					cin >> c_playerCharacter.playerAge;
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantNextDialouge = false;
					c_dialougeLogic.getNextDialouge(); //returns false
					c_mainMenu.wantNewCharacter = false;
					c_mainMenu.wantMainMenu = true;
				}
				else {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
		}

		if (c_dialougeLogic.getDialougePass() == true && c_dialougeLogic.getNextDialouge() == true) {

			c_dialougeLogic.wantNextDialouge = false;
			cout << "How high are you in Centimeters? \n" << endl;
			cin >> c_playerCharacter.playerHeight;

			if (c_playerCharacter.playerHeight < 55 || c_playerCharacter.playerHeight > 272) {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "Highly unlikely. \n";
			}
			else if (c_playerCharacter.playerHeight >= 55 || c_playerCharacter.playerHeight <= 272) {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "You are: " << c_playerCharacter.playerHeight << "Centimeters.\n" << endl;
				cout << "Is this correct? [y//n]\n" << endl;

				cin << c_dialougeLogic.strInput;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.getDialougePass();
					c_dialougeLogic.wantNextDialouge = true;
					c_dialougeLogic.getNextDialouge();
					c_dialougeLogic.wantLastDialouge = true;
					c_dialougeLogic.getLastDialouge();
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "So that was incorrect?\n So how high are you then?\n" << endl;
					cin >> c_playerCharacter.playerHeight;
				}
				else {

					c_dialougeLogic.wantNextDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
			else {

				c_dialougeLogic.wantNextDialouge = false;
				cout << "Please input a number, try again? [y//n] \n" << endl;
				cin >> c_dialougeLogic.strInput >> "\n" >> endl;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.wantNextDialouge = false;
					cin >> c_playerCharacter.playerHeight;
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantNextDialouge = false;
					c_dialougeLogic.getNextDialouge(); //returns false
					c_dialougeLogic.wantLastDialouge = false;
					c_dialougeLogic.getLastDialouge(); //returns false
					c_mainMenu.wantNewCharacter = false;
					c_mainMenu.wantMainMenu = true;
				}
				else {
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
		}

		if (c_dialougeLogic.getDialougePass() == true && c_dialougeLogic.getNextDialouge() == true && c_dialougeLogic.getLastDialouge() == true) {

			c_dialougeLogic.wantEndDialouge = false;
			cout << "Okay now for your physical checkup.\nHow much do you weigh in kilograms? \n";
			cin >> c_playerCharacter.playerWeight;

			if (c_playerCharacter.playerWeight < 11 || c_playerCharacter.playerWeight > 635) {

				c_dialougeLogic.wantEndDialouge = false;
				cout << "Highly unlikely.\nTry again [y//n]\n" << endl;
				cin >> c_dialougeLogic.strInput;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.wantEndDialouge = false;
					cin >> c_playerCharacter.playerWeight;
				} 
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantNextDialouge = false;
					c_dialougeLogic.getNextDialouge(); //returns false
					c_dialougeLogic.wantLastDialouge = false;
					c_dialougeLogic.getLastDialouge(); //returns false
					c_dialougeLogic.wantEndDialouge = false;
					c_dialougeLogic.getEndDialouge(); //returns false
					c_mainMenu.wantNewCharacter = false;
					c_mainMenu.wantMainMenu = true;
				}
				else {

					c_dialougeLogic.wantEndDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
			else if (c_playerCharacter.playerWeight >= 11 && c_playerCharacter.playerWeight <= 635) {

				c_dialougeLogic.wantEndDialouge = false;
				cout << "You weigh " << c_playerCharacter.playerWeight << " Kilograms.\nIs this correct? [y//n]\n" << endl;

				cin << c_dialougeLogic.strInput;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.getDialougePass();
					c_dialougeLogic.wantEndDialouge = true;
					c_dialougeLogic.getEndDialouge();
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantEndDialouge = false;
					cout << "So that was an incorrect reading?\n So how much do you weigh then?\n" << endl;
					cin >> c_playerCharacter.playerWeight;
				}
				else {

					c_dialougeLogic.wantEndDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
			else {

				c_dialougeLogic.wantEndDialouge = false;
				cout << "Please input a number, try again? [y//n] \n" << endl;
				cin >> c_dialougeLogic.strInput >> "\n" >> endl;

				if (c_dialougeLogic.getDialougeYes() == true && c_dialougeLogic.getDialougeNo() == false) {

					c_dialougeLogic.wantEndDialouge = false;
					cin >> c_playerCharacter.playerWeight;
				}
				else if (c_dialougeLogic.getDialougeYes() == false && c_dialougeLogic.getDialougeNo() == true) {

					c_dialougeLogic.wantEndDialouge = false;
					c_dialougeLogic.getEndDialouge(); //returns false
					c_mainMenu.wantNewCharacter = false;
					c_mainMenu.wantMainMenu = true;
				}
				else {

					c_dialougeLogic.wantEndDialouge = false;
					cout << "Invalid input! \n" << endl;
					cin >> c_dialougeLogic.strInput;
					c_dialougeLogic.getDialougeFail();
				}
			}
		} 
	}
	else {
		
		cout << "!EXCEPTIONAL LOGIC ERROR!\n" << endl;
		c_mainMenu.wantNewCharacter = false;
		c_mainMenu.wantMainMenu = true;
	}

	//On endDialouge we go to the main game-loop with our new, saved player character
	//next implement a system to save our player character, and make a starting info backup
}

PCCreationDialouge::~PCCreationDialouge()
{}