#ifndef MENU_CPP
#define MENU_CPP
#include "Menu.hpp"

int Menu::showMenu()
{

    cout << "\nMenu:" << endl
         << "1 - Jogar\n"
         << "2 - Recorde\n"
         << "3 - Sair\n";

    cin >> select;
    return select;
}



#endif