//
// Created by xiaowei003 on 2024/11/17.
//

#include "inc/student.hpp"
using namespace MAIEV::ENTITY;

bool Student::down(int step)
{
    _grade -= step;
    return true;
}

bool Student::up(int step)
{
    _grade += step;
    return true;
}

bool Student::edit(Student st)
{
    _name = st._name;
    _no = st._no;
    _sex = st._sex;
    _grade = st._grade;

    return true;
}

bool Student::edit(int sex)
{
    _sex = sex;

    return true;
}

bool Student::del(std::string _no)
{
    return true;
}