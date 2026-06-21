#ifndef REPORTS_H
#define REPORTS_H
#include <iostream>
using namespace std;

class Reports {
public:
    static void campusReport() {
        cout << "\n===== CAMPUS REPORT =====\n";
        cout << "Students Information\n";
        cout << "Faculty Information\n";
        cout << "Library Information\n";
        cout << "Hostel Information\n";
        cout << "Fee Information\n";
    }

    static void generatePDFStyleReport() {
        cout << "\n===============================\n";
        cout << " SMART CAMPUS MANAGEMENT SYSTEM\n";
        cout << "================================\n";
        cout << "Students Information\n";
        cout << "Faculty Information\n";
        cout << "Library Information\n";
        cout << "Hostel Information\n";
        cout << "Fee Information\n";
        cout << "================================\n";
    }

    static void findOverdueBooks() {
        cout << "Searching overdue books..." << endl;
    }
};
#endif
