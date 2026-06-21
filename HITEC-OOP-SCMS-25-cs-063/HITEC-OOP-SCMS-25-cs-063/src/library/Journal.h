#ifndef JOURNAL_H
#define JOURNAL_H
#include "LibraryItem.h"

class Journal : public LibraryItem {
private:
    string ISSN;
    int volume;
    int issueNumber
public:
    Journal(string id, string t, string a, int year, string issn, int vol, int issue)
        : LibraryItem(id, t, a, year), ISSN(issn), volume(vol), issueNumber(issue) {}

    string getISSN() const { return ISSN; }

    void checkout() override {
        cout << "Journal reference only - cannot be checked out." << endl;
    }

    void displayInfo() const override {
        cout << "\n===== Journal =====\n";
        LibraryItem::displayInfo();
        cout << "ISSN         : " << ISSN << endl;
        cout << "Volume       : " << volume << endl;
        cout << "Issue Number : " << issueNumber << endl;
    }
};
#endif
