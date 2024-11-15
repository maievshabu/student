//
// Created by xiaowei003 on 2024/11/15.
//

#ifndef STUDENT_ACT_H
#define STUDENT_ACT_H

#include "constant/menu.h"
#include "common/helper.h"
#include "common/logo.h"

using namespace MAIEV::HELPER;
using namespace MAIEV::CONSTANT;
using namespace MAIEV::COMMON;

namespace MAIEV{
    void showMenu()
    {
        COMMON::logo();
        std::cout << " this is a student system !!\n"
            << " and you can login or search sth \n"
            << " and will record sth where are u from, and who are u\n"
            << " if u are not know how to start\n"
            << " plz enter help!\n"
            << std::endl;
    }

    Menu choose2Menu(std::string choose)
    {
        if (choose == "help"){
            return Menu::HELP;
        }else if (choose == "search"){
            return Menu::SEARCH;
        }else if (choose == "act"){
            return Menu::ACT;
        }else if (choose == "view"){
            return Menu::VIEW;
        }else if (choose == "quit"){
            return Menu::QUIT;
        }else{
            return Menu::UNKNOW;
        }
    }

    bool action(Menu menu)
    {
        bool flag(false);
        switch (menu){
            case Menu::HELP :
            default:
                flag = help();
                break;
            case Menu::SEARCH :
                flag = search();
                break;
            case Menu::ACT :
                flag = act();
                break;
            case Menu::VIEW :
                flag = view();
                break;
            case Menu::QUIT:
                flag = quit();
                break;
        }

        return flag;
    }

}
#endif //STUDENT_ACT_H
