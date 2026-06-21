#ifndef FACULTY_H
#define FACULTY_H
#include "Person.h"

class Faculty : public Person {
private:
    string employeeID;
    string department;
    string designation;
    string assignedCourses[5];
    int courseCount;
public:
    Faculty(string n, string c, int a, string con,
            string emp, string dep, string des)
        : Person(n, c, a, con), employeeID(emp),
          department(dep), designation(des), courseCount(0) {}

    string getEmployeeID() const { return employeeID; }
    string getDepartment() const { return department; }
    string getDesignation() const { return designation; }

    void displayInfo() const override {
        cout << "\n===== Faculty =====\n";
        cout << "Name        : " << name << endl;
        cout << "CNIC        : " << cnic << endl;
        cout << "Age         : " << age << endl;
        cout << "Contact     : " << contact << endl;
        cout << "Employee ID : " << employeeID << endl;
        cout << "Department  : " << department << endl;
        cout << "Designation : " << designation << endl;
    }
};
#endif
