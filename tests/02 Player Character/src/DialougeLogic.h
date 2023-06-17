#ifndef DIALOUGELOGIC_H
#define DIALOUGELOGIC_H

DialougeLogic c_dialougeLogic;

class DialougeLogic
{
public:
	DialougeLogic();
	~DialougeLogic();

	bool getDialougeStart(); //start of Dialouge chain
	bool getNextDialouge();
	bool getPreviousDialouge();
	bool getDialougePass();
	bool getDialougeFail();
	bool getLastDialouge();
	bool getDialougeEnd(); //End of Dialouge chain
	bool getDialougeYes(std::string &strInput);
	bool getDialougeNo(std::string& strInput);

private:

	std::string strInput;
	bool wantStartDialouge;
	bool startDialouge;
	bool wantLastDialouge;
	bool lastDialouge;
	bool wantNextDialouge;
	bool goToNextDialouge;
	bool wantPreviousDialouge;
	bool goToPreviousDialouge;
	bool dialougePassed;
	bool dialougeFailed;
	bool wantEndDialouge;
	bool endDialouge;
	bool dialougeYes;
	bool dialougeNo;

};

#endif // DIALOUGELOGIC_H
