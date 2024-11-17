//
// Created by xiaowei003 on 2024/11/15.
//

#ifndef STUDENT_STUDENT_HPP
#define STUDENT_STUDENT_HPP
#include <string>
#include <sstream>

namespace MAIEV{
    namespace ENTITY{
        class Student
        {
        public:
            Student(){};

            Student(std::string name, std::string no, int sex) : _name(name), _no(no), _sex(sex){}

//            Student(Student const& stu);

//            Student(Student && stu);

            bool edit(Student st);

            bool edit(int sex);

            bool del(std::string _no);

            bool up(int step);

            bool down(int step);

            std::string getName()
            {
                return _name;
            }

            std::string getNo()
            {
                return _no;
            }

            int getGrade()
            {
                return _grade;
            }

            int getSex()
            {
                return _sex;
            }

            std::string toString()
            {
                std::stringstream strm;
                strm << "No:" << _no;
                strm << "Name:" << _name;
                strm << "Grade:" << _grade;
                strm << "Sex:" << _sex;

                return strm.str();
            }

        private:
            std::string _name;
            std::string _no;
            int _sex;
            int _grade;
        };
    }
}

#endif //STUDENT_STUDENT_HPP
