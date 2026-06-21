#ifndef BOOK_H
#define BOOK_H
#include "LibraryItem.h"

class Book : public LibraryItem {
private:
    string ISBN;
    string genre;
    int copiesAvailable;
public:
    Book(string id, string t, string a, int year, string isbn, string g, int copies)
        : LibraryItem(id, t, a, year), ISBN(isbn), genre(g), copiesAvailable(copies) {}

    string getISBN() const { return ISBN; }
    int getCopiesAvailable() const { return copiesAvailable; }

    void checkout() override {
        if (copiesAvailable > 0) {
            copiesAvailable--;
            cout << "Book issued successfully!" << endl;
        } else {
            cout << "No copies available!" << endl;
        }
    }

    void displayInfo() const override {
        cout << "\n===== Book =====\n";
        LibraryItem::displayInfo();
        cout << "ISBN     : " << ISBN << endl;
        cout << "Genre    : " << genre << endl;
        cout << "Copies   : " << copiesAvailable << endl;
    }
};
#endif
