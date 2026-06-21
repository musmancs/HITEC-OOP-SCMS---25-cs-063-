#ifndef FEERECORD_H
#define FEERECORD_H
#include <iostream>
#include <string>
using namespace std;

class FeeRecord {
private:
    string studentRef;
    double semesterFee;
    double hostelFee;
    double libraryFine;
    double totalPaid;
    double balance;
public:
    FeeRecord(string ref, double semfee, double hostfee, double fine)
        : studentRef(ref), semesterFee(semfee), hostelFee(hostfee),
          libraryFine(fine), totalPaid(0) {
        balance = semesterFee + hostelFee + libraryFine;
    }

    FeeRecord(const FeeRecord& other)
        : studentRef(other.studentRef), semesterFee(other.semesterFee),
          hostelFee(other.hostelFee), libraryFine(other.libraryFine),
          totalPaid(other.totalPaid), balance(other.balance) {}

    FeeRecord& operator=(const FeeRecord& other) {
        if (this != &other) {
            studentRef = other.studentRef;
            semesterFee = other.semesterFee;
            hostelFee = other.hostelFee;
            libraryFine = other.libraryFine;
            totalPaid = other.totalPaid;
            balance = other.balance;
        }
        return *this;
    }

    FeeRecord& operator-=(double payment) {
        totalPaid += payment;
        balance -= payment;
        return *this;
    }

    string getStudentRef() const { return studentRef; }
    double getBalance() const { return balance; }
    double getTotalPaid() const { return totalPaid; }

    void display() const {
        cout << "\n===== Fee Record =====\n";
        cout << "Student      : " << studentRef << endl;
        cout << "Semester Fee : " << semesterFee << endl;
        cout << "Hostel Fee   : " << hostelFee << endl;
        cout << "Library Fine : " << libraryFine << endl;
        cout << "Total Paid   : " << totalPaid << endl;
        cout << "Balance      : " << balance << endl;
    }
};
#endif
