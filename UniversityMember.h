#ifndef UNIVERSITYMEMBER_H
#define UNIVERSITYMEMBER_H
#include <string.h>

class UniversityMember {
private: std::string name; int age;
public:
    UniversityMember(std::string name, int age) : name(name), age(age) {}
    virtual void displayInfo() = 0;
    std::string getName(){ return name;}
    int getAge() { return age;}
    void setName(std::string nname){ name = nname;}
    void setAge(int nAge){ age = nAge;}
    virtual ~UniversityMember() {}
};

#endif