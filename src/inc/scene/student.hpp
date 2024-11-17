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
                    std::string choose;
                    std::cin >> choose;
                    std::cout << "Your choose is >>: " << choose << std::endl;
                    std::cout << "plz wait !!! \n"
                              << "and tks for you attention \n"
                              << std::endl;
                    bool flag = COMMON::action(COMMON::choose2Menu(choose), *this);

                    if (!flag){
                        break;
                    }
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
                std::cout << "add [name no grade sex] \n";
                std::cout << "view [name no grade sex] \n";
                std::cout << "edit [name no grade sex] \n";
                std::cout << "up [name no grade sex] \n";
                std::cout << "down [name no grade sex] \n";

                return true;
            }

            bool act()
            {
                return true;
            }

            bool view()
            {
                return true;
            }

            bool search()
            {
                return true;
            }

            bool quit()
            {
                st_scene.pop();

                return false;
            }
        };
    }
}
