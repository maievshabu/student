
#ifndef __SCENE__BASE_H
#define __SCENE__BASE_H

#include <iostream>
#include "../constant/menu.hpp"

namespace MAIEV{
    namespace SCENE{
        class Base{
        public:
            //进入场景
            Base(std::string name): _name(name){}

            virtual bool action(CONSTANT::Menu menu, Base const& scene)
            {
                return true;
            }

            virtual bool quit()
            {
                std::cout << "quit::[bye bye]" << std::endl;
                return false;
            }

            virtual void enter() = 0;
            virtual bool search() = 0;
            virtual bool act() = 0;
            virtual bool view() = 0;
            virtual bool help() = 0;
        protected:
            std::string _name;
        };
    }
}

#endif
