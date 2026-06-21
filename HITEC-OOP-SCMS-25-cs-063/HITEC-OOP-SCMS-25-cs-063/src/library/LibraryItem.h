#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H
#include <iostream>
#include <string>
using namespace std;

class LibraryItem {
protected:
    string itemId;
    string title;
    string author;
    int publicationYear;
public:
    LibraryItem(string id, string t, string a, int year)
        : itemId(id), title(t), author(a), publicationYear(year) {}

    string getItemId() const { return itemId; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    int getPublicationYear() const { return publicationYear; }
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }

    virtual void checkout() = 0;
    virtual void displayInfo() const {
        cout << "Item ID  : " << itemId << endl;
        cout << "Title    : " << title << endl;
        cout << "Author   : " << author << endl;
        cout << "Year     : " << publicationYear << endl;
    }
    virtual ~LibraryItem() {}
};
#endif
