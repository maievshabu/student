//
// Created by xiaowei003 on 2024/11/15.
//

#include <iostream>
#include "../inc/student.hpp"

using namespace MAIEV::ENTITY;

namespace MAIEV{
    namespace HELPER{
        bool help()
        {
            std::cout << "Usage:[quit,search,view,act,help]" << std::endl;
            return true;
        }

        bool quit()
        {
            std::cout << "are u sure to quit?? " << std::endl;
            return false;
        }

        bool act()
        {
            std::cout << "act " << std::endl;
            return true;
        }

        bool view()
        {
            std::cout << "view ?? " << std::endl;
            return true;
        }

        bool add()
        {
            std::cout << "add" << std::endl;
            return true;
        }

        bool edit()
        {
            Student tmp;
            std::cout << "edit" << std::endl;
            return true;
        }

        bool del()
        {
            std::cout << "del" << std::endl;
            return true;
        }

        bool search()
        {
            std::cout << "search" << std::endl;
            return true;
        }
    }
}
