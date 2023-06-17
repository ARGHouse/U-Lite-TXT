#include "PlayerCharacter.h"


PlayerCharacter::PlayerCharacter() {

	this->playerName = { "", "", "" };
	this->playerTitle;
	this->playerAge;
	this->playerHeight;
	this->playerWeight;

}

PlayerCharacter::PlayerCharacter(const std::string &playerFirstName, const std::string &playerMiddleName, const std::string &playerLastName, const std::string &playerTitle, int &playerAge, const int &playerHeight, int &playerWeight) {

	this->playerName = { playerFirstName, playerMiddleName, playerLastName };
	this->playerTitle;
	this->playerAge;
	this->playerHeight;
	this->playerWeight;


	//static playerGender_t s_playerGender[GENDER_MAX] = {
	//
	//	{ "<invalid turd>", "<invalid turd>", "<invalid turd>", "<invalid turd>"},
	//	{ "Male", "Man", "Men", "He/Him"},
	//	{ "Female", "Woman", "Women", "She/Her"},
	//	{ "Non Binary", "Non Binary", "Enbies", "They/Them"},
	//	{ "AGender", "Andro", "Andros", "Xe/Xem"},
	//	{ customGenderName, customGenderNoun, customGenderPlural, customGenderPronouns }
	//
	//};
	//
	//static playerGenderIdent_t s_playerGenderIdentity[GENDER_IDENT_MAX] = {
	//
	//	{ "<invalid turd>" },
	//	{ "cis" },
	//	{ "Trans" },
	//	{ "NB" },
	//	{ "NC" },
	//	{ "NA" },
	//
	//};
}

PlayerCharacter::~PlayerCharacter()
{}