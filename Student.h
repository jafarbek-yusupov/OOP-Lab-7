#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "UniversityMember.h"

class Student : public UniversityMember {
private: int studentID; double GPA;
public:
    Student(std::string name, int Age, int studentID, double GPA) : UniversityMember(name, Age), studentID(studentID), GPA(GPA) {}
    void displayInfo() override {
        std::cout << "Name: " << getName() << " | Student ID: " << studentID << " | GPA : " << GPA << " | Age: " << getAge() << std::endl;
    }
    int getStudentID(){ return studentID; }
    double getGPA(){ return GPA; }
    void setStudentID(int ID){ studentID = ID;}
    void setGPA(double nGPA){ GPA = nGPA;}
};

#endif