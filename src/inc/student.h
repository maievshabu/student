//
// Created by xiaowei003 on 2024/11/15.
//

#ifndef STUDENT_STUDENT_H
#define STUDENT_STUDENT_H
namespace MAIEV{
    namespace ENTITY{
        class Student
        {
        public:
            Student() = delete;
            Student(std::string name, std::string _no) : _name(name), _no(no){}
            Student(Student const& stu) = delete;
            Student(Student && stu) = delete;
        private:
            std::string _name;
            std::string _no;
        };
    }
}

#endif //STUDENT_STUDENT_H
