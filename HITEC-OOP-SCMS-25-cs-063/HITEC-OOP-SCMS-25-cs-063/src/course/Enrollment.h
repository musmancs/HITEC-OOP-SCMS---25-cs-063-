#ifndef ENROLLMENT_H
#define ENROLLMENT_H
#include <iostream>
#include <string>
#include "../person/Student.h"
#include "Course.h"
using namespace std;

class Enrollment {
private:
    Student* student;
    Course* course;
    string enrollmentDate;
    char grade;
public:
    Enrollment(Student* s, Course* c, string date, char g)
        : student(s), course(c), enrollmentDate(date), grade(g) {}

    void display() const {
        cout << "\n===== Enrollment =====\n";
        cout << "Student : " << student->getName() << endl;
        cout << "Course  : " << course->getCourseName() << endl;
        cout << "Date    : " << enrollmentDate << endl;
        cout << "Grade   : " << grade << endl;
    }
};
#endif
