#include <iostream>
#include <stack>
#include <vector>

#include "inc/common/common.hpp"
#include "inc/student.hpp"
#include "inc/scene/student.hpp"

using namespace MAIEV;

//场景
std::stack<CONSTANT::SCENE> st_scene;

//学生容器
std::vector<ENTITY::Student> vc_students{};

int main() {
    COMMON::logo();
    st_scene.push(CONSTANT::SCENE::UNKNOW);
    COMMON::hello();

    while(true)
    {
        std::string scene;
        std::cout << "plz enter you scene: if you don't how to start! plz enter help!\n";
        std::cin >> scene;

        if (scene == "quit"){
            break;
        }

        bool flag = COMMON::scene(std::move(scene));

        if (!flag){
           break;
        }
    }

    //检查是否还有其他场景
    if (st_scene.size() > 2){
        //场景退出
        std::cout << "so you have more 1 scenes!!! plz quit from it" << std::endl;
    }

    st_scene.pop(); //退出unknow 场景
    COMMON::sys_quit();

    return 0;
}
