#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <iostream>
using namespace std;

class CapacityExceededException {
public:
    void showError() const {
        cout << "Error: Course capacity exceeded!" << endl;
    }
};

class OverdueException {
private:
    double fine;
public:
    OverdueException(double f) : fine(f) {}
    void showError() const {
        cout << "Error: Overdue item!" << endl;
        cout << "Fine Amount: Rs. " << fine << endl;
    }
    double getFine() const { return fine; }
};
#endif
