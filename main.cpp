#include <iostream>
#include "Student.h"
#include "Professor.h"
#include "Course.h"
using namespace std;

int main(){
    Professor* prof = new Professor("Dr. WGAF", 45 , 1001, "CompSci");
    Student* s1 = new Student("Alc", 20, 101, 3.6);
    Student* s2 = new Student("Ben", 99, 102, 0.4);

    Course oopCourse("OOP", prof);
    oopCourse.addStudent(s1);
    oopCourse.displayCourseInfo();
    return 0;
}