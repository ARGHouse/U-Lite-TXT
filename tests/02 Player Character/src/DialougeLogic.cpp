#include "DialougeLogic.h"
#include <string>
#include <iostream>

using namespace std;

DialougeLogic::DialougeLogic()
{
}

DialougeLogic::~DialougeLogic()
{
}

bool DialougeLogic::getDialougeStart()
{
	if (wantStartDialouge == true) {
		startDialouge = true;
	}
	else {
		wantStartDialouge = false;
		startDialouge = false;	
	}

	return startDialouge;
}

bool DialougeLogic::getNextDialouge()
{
	if (wantNextDialouge == true) {
		goToNextDialouge = true;
	}
	else {
		wantNextDialouge = false;
		goToNextDialouge = false;
	}

	return goToNextDialouge;

}

bool DialougeLogic::getPreviousDialouge() {
	
	if (wantPreviousDialouge == true) {
		goToPreviousDialouge = true;
	}
	else {
		wantPreviousDialouge = false;
		goToPreviousDialouge = false;
	}

	return goToPreviousDialouge;
}

bool DialougeLogic::getDialougePass() {

	dialougeFailed = false;
	dialougePassed = true;
	return dialougePassed;

}

bool DialougeLogic::getDialougeFail() {

	dialougeFailed = true;
	dialougePassed = false;
	return dialougeFailed;

}

bool DialougeLogic::getLastDialouge() {

	if (wantLastDialouge == true) {
		lastDialouge = true;
	} 
	else {
		wantLastDialouge == false;
		lastDialouge = false;
	}

	return lastDialouge;
}

bool DialougeLogic::getDialougeEnd() {

	if (wantEndDialouge == true) {
		endDialouge = true;
	}
	else {
		wantEndDialouge = false;
		endDialouge = false;
	}

	return endDialouge;

}

bool DialougeLogic::getDialougeYes(std::string &strInput)
{
	if (strInput == "y" || strInput == "Y" || strInput == "yes" || strInput == "YES" || strInput == "yeah" || strInput == "YEAH" || strInput == "ya" || strInput == "YA") {
		dialougeYes = true;
	}
	else {
		dialougeYes = false;
	}

	return dialougeYes;

}

bool DialougeLogic::getDialougeNo(std::string &strInput)
{
	if (strInput == "n", "N", "no", "NO", "No", "na", "Na", "NA", "nah", "NAH", "Nah") {
		dialougeNo = true;
	}
	else {
		dialougeNo = false;
	}

	return dialougeNo;
}
