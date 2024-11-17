cmake_minimum_required(VERSION 3.15)
project(student)

set(CMAKE_CXX_STANDARD 11)

add_executable(student src/main.cpp
        src/student.cpp
        src/common/helper.cpp
        src/common/common.cpp
        )