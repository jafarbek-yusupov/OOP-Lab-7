#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include <string>
#include "UniversityMember.h"

class Professor : public UniversityMember{
private: int ID; std::string department;
public:
    Student(std::string name, int Age, int ID, std::string department) : UniversityMember(name, Age), ID(ID), department(department) {}
    void displayInfo override() {
        std::cout << "Name: " << getName() << " | ID: " << ID << " | Department : " << department << " | Age: " << getAge() << std::endl;
    }
    int getID(){ return ID;}
    std::string getDepartment(){ return department; }
    void setID(int nID){ ID = nID;}
    void setDepartment(std::string nDep){ department = nDep;}
};

#endif
