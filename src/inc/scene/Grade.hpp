//
// Created by xiaowei003 on 2024/11/15.
//

#pragma once
#include <vector>
#include <iostream>
#include <iterator>
#include "../student.hpp"
#include <stack>
#include "../constant/scene.hpp"
#include "base.hpp"

using namespace MAIEV::ENTITY;
using namespace MAIEV::SCENE;
extern std::stack<SCENE> st_scene;

namespace MAIEV{
    namespace SCENE{
        class Grade : public Base{
            //this is all student;

            Grade() :Base("GRADE"){}
            //进入场景
            void enter_scene()
            {
                st_scene.push(CONSTANT::SCENE::STUDENT);
            }

            vector<Student> showList()
            {
                //所有的学生列表
            }

            Student viewStudent(std::string _no)
            {
                //查看某个学号的学生信息
            }

            bool help()
            {
                std::cout << "this is a demo for student\n";
                std::cout << "Usage: [add|edit|del|up|down] [studentinfos]\n";
                std::cout << "add [name no grade sex] \n";
                std::cout << "view [name no grade sex] \n";
                std::cout << "edit [name no grade sex] \n";
                std::cout << "up [name no grade sex] \n";
                std::cout << "down [name no grade sex] \n";
            }

            bool quit()
            {
                std::stringstream scene;
                //退出GRADE场景
                scene << "scene :[" << st_scene.top() << "] quit!!!\n";
                std::cout << scene;
                st_scene.pop();
            }
        }
    }
}
