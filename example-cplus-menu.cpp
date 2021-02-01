// example-cplus-menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//  
//  A simple menu in C++
//  This program performs a loop. If the choice to kill the 
//  program is entered, the loop stops and no longer shows the menu.
//


//  Prints the menu.
void PrintMenu() {

    std::cout << "Please select an item: \n";

    std::cout << "1. About \n";
    std::cout << "2. Author \n";
    std::cout << "3. Quit \n";

}

//  Do I want to remain online?
bool RemainOnline() {

    //  Do I want the menu to still be open?
    bool _remainOnline = true;

    //  The variable for the input.
    int _menuCommand = 0;

    //  Get the menu command.
    std::cin >> _menuCommand;

    switch (_menuCommand) {

        case 1:
            std::cout << "This is a simple menu. \n";
            //  Remain online
        break;

        case 2:
            std::cout << "Sam Wheel is the author of this program. \n";
            //  Remain online
        break;

        case 3: 
            std::cout << "Goodbye. \n";
            _remainOnline = false;
            //  I want to get out
        break;

        default:
            _remainOnline = false;
            //  If anything other than the menu is entered, quit
        break;

    }

    return _remainOnline;

}

//  The main program.
int main()
{

    std::cout << "Hello World!\n";

    //  While true, print the menu and give options 
    bool _isOnline = true;

    while (_isOnline == true) {

        std::cout << "Bore da \n";
        
        PrintMenu();
        _isOnline = RemainOnline();
        
    }

}
