#include <iostream>
#include "inc/act.h"
using namespace MAIEV;

int main() {
    std::cout << "Hello, World!" << std::endl;
    MAIEV::showMenu();

    while(true)
    {
        std::string choose;
        std::cin >> choose;
        std::cout << "Your choose is >>: " << choose << std::endl;
        std::cout << "plz wait !!! \n"
                  << "and tks for you attention \n"
                  << std::endl;
        bool flag = MAIEV::action(MAIEV::choose2Menu(choose));

        if (!flag){
            break;
        }
    }

    return 0;
}
