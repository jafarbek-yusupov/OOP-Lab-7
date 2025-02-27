#ifndef COURSE_H
#define COURSE_H
#include <string>
#include <vector>
#include "Professor.h"
#include "Student.h"

class Course {
private: std::string courseName; Professor* instructor; std::vector<Student*> students;
public:
    Course(std::string courseName, Professor* instructor) : courseName(courseName), instructor(instructor) {}
    void addStudent(Student* student){ students.push_back(student); }
    void displayCourseInfo() {
        std::cout << "Course name: " << courseName << "\nInstructor: "
        << instructor->displayInfo() << "\nStudents: \n";
        for(auto i : students){ i->displayInfo();}
    }
};

#endif //COURSE_H
