#ifndef MAINMENU_H
#define MAINMENU_H

#include <string>

MainMenu c_mainMenu;

class MainMenu
{
public:
    MainMenu();
    MainMenu(int &mainMenuInput, const std::string &newCharacter, const std::string &quitApplication, bool wantNewCharacter, bool wantQuit, bool isInvalidInput);
    ~MainMenu();

    int mainMenuInput;
    const std::string newCharacter = "1 - Create a new Player Character\n";
    const std::string quitApplication = "2 - Quit game\n";

private:


    bool wantNewCharacter;
    bool wantQuit;
    bool wantMainMenu;
    bool isInvalidInput;

};

#endif // MAINMENU_H