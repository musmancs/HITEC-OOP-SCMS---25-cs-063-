#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include "../person/Faculty.h"
using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int creditHours;
    Faculty* instructor;
    int maxCapacity;
    int enrolledCount;
public:
    Course(string code, string name, int credit, Faculty* inst, int maxcap)
        : courseCode(code), courseName(name), creditHours(credit),
          instructor(inst), maxCapacity(maxcap), enrolledCount(0) {}

    string getCourseCode() const { return courseCode; }
    string getCourseName() const { return courseName; }
    int getCreditHours() const { return creditHours; }
    int getEnrolledCount() const { return enrolledCount; }
    int getMaxCapacity() const { return maxCapacity; }

    void setCourseName(string name) { courseName = name; }

    bool operator==(const Course& other) const {
        return courseCode == other.courseCode;
    }

    void enrollStudent() {
        if (enrolledCount >= maxCapacity)
            throw 1;
        enrolledCount++;
    }

    friend ostream& operator<<(ostream& out, const Course& c) {
        out << "\nCourse Code  : " << c.courseCode << endl;
        out << "Course Name  : " << c.courseName << endl;
        out << "Credit Hours : " << c.creditHours << endl;
        out << "Capacity     : " << c.enrolledCount << "/" << c.maxCapacity << endl;
        return out;
    }
};
#endif
