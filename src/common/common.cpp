//
// Created by xiaowei003 on 2024/11/17.
//

#include "../inc/constant/menu.hpp"
#include "../inc/scene/base.hpp"
#include "../inc/scene/student.hpp"
#include <limits>

using namespace MAIEV::CONSTANT;
using namespace MAIEV::SCENE;

namespace MAIEV{
    namespace COMMON{

        void hello()
        {
            std::cout << "Hello, Welcome to Student System!" << std::endl;
        }

        void logo()
        {
            std::cout << "LOGO::>>>" << std::endl;
        }

        void help()
        {
            std::cout << "scene[student]" << std::endl;
        }

        void sys_quit()
        {
            std::cout << "quit::[bye bye]" << std::endl;
        }

        bool scene(std::string const && scene)
        {
            bool flag(false);
            if (scene == "student"){
                Students student;
                student.enter();

                return true;
            }

            if (scene == "help"){
                COMMON::help();
                return true;
            }

            std::cout << "no avaiabled scene you enter in! i'm sorry for it! plz try again or quit from it!\n";

            return false;
        }

        void scene_quit()
        {
            //场景退出
            std::cout << "scene quit::[bye bye]" << std::endl;
        }

//        Menu choose2Menu(std::string choose)
//        {
//            if (choose == "help"){
//                return Menu::HELP;
//            }else if (choose == "search"){
//                return Menu::SEARCH;
//            }else if (choose == "act"){
//                return Menu::ADD;
//            }else if (choose == "view"){
//                return Menu::VIEW;
//            }else if (choose == "quit"){
//                return Menu::QUIT;
//            }else{
//                return Menu::UNKNOW;
//            }
//        }

//        bool action(Menu menu, Base & scene)
//        {
//            bool flag(false);
//            switch (menu){
//                case Menu::HELP :
//                default:
//                    std::cout << "help?????????????????" << std::endl;
//                    flag = scene.help();
//                    break;
//                case Menu::SEARCH :
//                    readData(scene);
//                    flag = scene.search();
//                    break;
//                case Menu::ACT :
//                    readData(scene);
//                    flag = scene.act();
//                    break;
//                case Menu::VIEW :
//                    readData(scene);
//                    flag = scene.view();
//                    break;
//                case Menu::QUIT:
//                    flag = scene.quit();
//                    break;
//            }
//
//            return flag;
//        }
    }
}