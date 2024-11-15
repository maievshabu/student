//
// Created by xiaowei003 on 2024/11/15.
//

#include <iostream>

namespace MAIEV{
    namespace HELPER{
        bool help()
        {
            std::cout << "Usage:[quit,act,view,act]" << std::endl;
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

        bool search()
        {
            std::cout << "search" << std::endl;
            return true;
        }
    }
}
