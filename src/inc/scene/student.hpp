//
// Created by xiaowei003 on 2024/11/15.
//
#pragma once
#include "../student.hpp"
#include "../constant/scene.hpp"
#include "../scene/base.hpp"
#include "../common/common.hpp"
#include <algorithm>
#include <vector>
#include <stack>
#include <limits>

using namespace MAIEV;

extern std::vector<ENTITY::Student> vc_students;
extern std::stack<CONSTANT::SCENE> st_scene;

using STUDENT_MODEL = MAIEV::ENTITY::Student;

namespace MAIEV{
    namespace SCENE{
        class Students : public Base{
        public:
            Students(): Base("student"){}

            //进入场景
            void enter()
            {
                std::cout << "now you enter scene:[student], if you don't know how to start!plz enter help\n";
                st_scene.push(CONSTANT::SCENE::STUDENT);

                while(true){
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    readData();
                    bool flag = action();

                    if (!flag){
                        break;
                    }

                    std::cout << "next loop : " << std::endl;
                }
            }

            //所有的学生列表
//            std::vector<STUDENT_MODEL> show_list()
//            {
//                return vc_students;
//            }

            //查看某个学号的学生信息
//            STUDENT_MODEL view_info(std::string no)
//            {
//                STUDENT_MODEL st("xx", "12", 1);
//                return st;
//            }

            bool help()
            {
                std::cout << "this is a demo for student\n";
                std::cout << "Usage: [add|edit|del|up|down] [studentinfos]\n";
                std::cout << "help??\n";
                std::cout << "add [name no grade sex] \n";
                std::cout << "view [no] \n";
                std::cout << "edit [name no grade sex] \n";
                std::cout << "up [no step] \n";
                std::cout << "down [no step] \n";

                return true;
            }

            bool action()
            {
                std::string act = this->_act_data.front();
                this->_act_data.pop_front();

                std::cout << "act : " << act << std::endl;
                Menu menu = choose2Menu(act);

                bool flag(false);
                switch (menu){
                    case Menu::HELP :
                    default:
                        std::cout << "help??" << std::endl;
                        flag = help();
                        break;
                    case Menu::SEARCH :
                        flag = search();
                        break;
                    case Menu::ADD :
                        flag = add();
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

            bool add()
            {
                std::cout << "add" << std::endl;
                return true;
            }

            bool view()
            {
                std::cout << "view" << std::endl;
                return true;
            }

            bool search()
            {
                std::cout << "search" << std::endl;
                return true;
            }

            bool quit()
            {
                st_scene.pop();

                return false;
            }

        private:
            void readData()
            {
                std::cout << "and enter you data for actions: " << std::endl;
                std::string data;
                if ( std::getline(std::cin, data)){
                    std::cout << data << std::endl;
                    this->parseData(data);
                }else{
                    std::cout << "get-line:error: " << std::endl;
                }
            }

            Menu choose2Menu(std::string choose)
            {
                if (choose == "help"){
                    return Menu::HELP;
                }else if (choose == "search"){
                    return Menu::SEARCH;
                }else if (choose == "add"){
                    return Menu::ADD;
                }else if (choose == "view"){
                    return Menu::VIEW;
                }else if (choose == "quit"){
                    return Menu::QUIT;
                }else{
                    return Menu::UNKNOW;
                }
            }
        };
    }
}
