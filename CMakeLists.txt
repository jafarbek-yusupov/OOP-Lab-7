cmake_minimum_required(VERSION 3.30)
project(week7)

set(CMAKE_CXX_STANDARD 20)

add_executable(week7 main.cpp
        UniversityMember.h
        Student.h
        Professor.h
        Course.h
        CanteenQueue.h)
