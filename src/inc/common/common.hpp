//
// Created by xiaowei003 on 2024/11/15.
//

#ifndef STUDENT_COMMON_HPP
#define STUDENT_COMMON_HPP

#include "../constant/menu.hpp"
#include "../scene/base.hpp"

using namespace MAIEV::CONSTANT;
using namespace MAIEV::SCENE;

namespace MAIEV{

    namespace COMMON{

        Menu choose2Menu(std::string choose);

        bool action(Menu menu, Base & scene);

        void hello();

        void logo();

        void help();

        void sys_quit();

        bool scene(std::string scene);

        void scene_quit();
    }

}
#endif //STUDENT_COMMON_HPP
