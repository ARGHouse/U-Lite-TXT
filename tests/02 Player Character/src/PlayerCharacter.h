#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include <string>

//Character name structure

PlayerCharacter c_playerCharacter;

//struct playerGender_t {
//
//	std::string genderName;
//	std::string genderNoun;
//	std::string genderPlural;
//	std::string genderPronouns;
//
//};
//
//struct playerGenderIdent_t {
//
//	std::string genderIdentName;
//
//};

struct name {
	std::string playerFirstName;
	std::string playerMiddleName;
	std::string playerLastName;
};

class PlayerCharacter
{
private:
	struct name playerName;
	const std::string m_playerFirstName;
	const std::string m_playerMiddleName;
	const std::string m_playerLastName;
	const std::string playerTitle;
	int playerAge; //in years
	const int playerHeight; //in cm
	int playerWeight; //in kg

	//int currentPlayerCharStr;
	//int currentPlayerCharDex;
	//int currentPlayerCharEnd;
	//int currentPlayerCharInt;
	//int currentPlayerCharEdu;
	//int currentPlayerCharEdu;
	//
	//int startingPlayerCharStr;
	//int startingPlayerCharDex;
	//int startingPlayerCharEnd;
	//int startingPlayerCharInt;
	//int startingPlayerCharEdu;
	//int startingPlayerCharEdu;
public:
	PlayerCharacter();
	PlayerCharacter(const std::string &playerFirstName, const std::string &playerMiddleName, const std::string &playerLastName, const std::string &playerTitle, int &playerAge, const int &playerHeight, int &playerWeight);

	void setPlayerFirstName(std::string playerFirstName);
	void setPlayerMiddleName(std::string playerMiddleName);
	void setPlayerLastName(std::string playerLastName);
	void setPlayerTitle(std::string playerTitle);

	//void setPlayerGender(std::string genderName);
	//void setPlayerGenderIdent(std::string genderIdentName);

	std::string getPlayerFirstName() const;
	std::string getPlayerMiddleName() const;
	std::string getPlayerLastName() const;
	std::string getPlayerTitle() const;

	//enum s_playerGender {
	//
	//	GENDER_INVALID,
	//	MALE,
	//	FEMALE,
	//	NON_BINARY,
	//	AGENDER,
	//	CUSTOM,
	//	NA,
	//	GENDER_MAX
	//
	//};

	std::string customGenderName;
	std::string customGenderNoun;
	std::string customGenderPlural;
	std::string customGenderPronouns;

	//void setPlayerCustomGender(std::string genderName = customGenderName);


	//enum s_playerGenderIdentity {
	//	GENDER_INDENT_INVALID,
	//	CIS,
	//	TRANS,
	//	NON_BINARY,
	//	GENDER_FLUID,
	//	NON_CONFORMING,
	//	NA,
	//	GENDER_IDENT_MAX
	//};

};

#endif // PLAYERCHARACTER_H