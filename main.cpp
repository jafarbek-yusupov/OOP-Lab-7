#include <iostream>
#include "Student.h"
#include "Professor.h"
#include "Course.h"
#include "CanteenQueue.h"
using namespace std;

int main(){
    /************ PART 1 ************/
    // Professor* prof = new Professor("Dr. WGAF", 45 , 1001, "CompSci");
    // Student* s1 = new Student("Alc", 20, 101, 3.6);
    // Student* s2 = new Student("Ben", 99, 102, 0.4);
    //
    // Course oopCourse("OOP", prof);
    // oopCourse.addStudent(s1); oopCourse.addStudent(s2);
    // oopCourse.displayCourseInfo();
    /************ PART 2 ************/
    CanteenQueue canteen;
    Student* s1 = new Student("Alice", 20, 101, 3.8);
    Student* s2 = new Student("Bob", 21, 102, 3.5);
    Professor* prof = new Professor("Dr. Smith", 45, 1001, "Computer Science");

    cout << "--- University Canteen Queue Simulation ---" << endl;

    canteen.joinCanteenLine(s1);
    canteen.joinCanteenLine(s2);
    canteen.joinCanteenLine(prof);

    cout << "\nQueue after adding members:" << endl;
    canteen.showCanteenQueue();

    cout << "\nServing the first member:" << endl;
    canteen.serveNextMember();

    cout << "\nQueue after serving one member:" << endl;
    canteen.showCanteenQueue();

    cout << "\nServing remaining members..." << endl;
    while (!canteen.isQueueEmpty()) {
        canteen.serveNextMember();
    }

    cout << "\nFinal queue status:" << endl;
    canteen.showCanteenQueue();
    /************ PART 2 ************/
    /****** OUTPUT FOR PART 2 ******/
    // --- University Canteen Queue Simulation ---
    // Alice joined the queue.
    // Bob joined the queue.
    // Dr. Smith joined the queue.
    //
    // Queue after adding members:
    // Current Queue: Alice -> Bob -> Dr. Smith -> END
    //
    // Serving the first member:
    // Alice was served and left the queue.
    //
    // Queue after serving one member:
    // Current Queue: Bob -> Dr. Smith -> END
    //
    // Serving remaining members...
    // Bob was served and left the queue.
    // Dr. Smith was served and left the queue.
    //
    // Final queue status:
    // Current Queue: END
    return 0;
}