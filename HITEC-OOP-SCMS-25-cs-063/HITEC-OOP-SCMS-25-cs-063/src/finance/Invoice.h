#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>
#include "FeeRecord.h"
using namespace std;

class Invoice {
private:
    static int invoiceCounter;
    int invoiceId;
    string date;
    FeeRecord* feeRecord;
    string* items;
    int itemCount;
    double totalAmount;
public:
    Invoice(FeeRecord* fee, string d, int count, double total)
        : date(d), feeRecord(fee), itemCount(count), totalAmount(total) {
        invoiceId = ++invoiceCounter;
        items = new string[itemCount];
    }

    void setItem(int index, string item) {
        if (index >= 0 && index < itemCount)
            items[index] = item;
    }

    void display() const {
        cout << "\n===== Invoice =====\n";
        cout << "Invoice ID : " << invoiceId << endl;
        cout << "Student    : " << feeRecord->getStudentRef() << endl;
        cout << "Date       : " << date << endl;
        cout << "Items:\n";
        for (int i = 0; i < itemCount; i++)
            cout << "  - " << items[i] << endl;
        cout << "Total      : " << totalAmount << endl;
    }

    ~Invoice() { delete[] items; }
};
int Invoice::invoiceCounter = 0;
#endif
