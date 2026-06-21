#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <fstream>
#include "LibraryItem.h"
using namespace std;

class Library {
private:
    LibraryItem* catalog[100];
    int itemCount;
public:
    Library() : itemCount(0) {}

    void addItem(LibraryItem* item) {
        if (itemCount < 100) {
            catalog[itemCount++] = item;
        }
    }

    void displayAll() const {
        for (int i = 0; i < itemCount; i++) {
            catalog[i]->displayInfo();
            cout << endl;
        }
    }

    void searchByTitle(string searchTitle) const {
        bool found = false;
        for (int i = 0; i < itemCount; i++) {
            if (catalog[i]->getTitle() == searchTitle) {
                catalog[i]->displayInfo();
                found = true;
            }
        }
        if (!found) cout << "Item not found!" << endl;
    }

    void saveCatalog(string filename = "data/library_catalog.txt") const {
        ofstream file(filename);
        if (!file) { cout << "File error!" << endl; return; }
        for (int i = 0; i < itemCount; i++)
            file << catalog[i]->getItemId() << " " << catalog[i]->getTitle() << endl;
        file.close();
        cout << "Catalog saved!" << endl;
    }

    void loadCatalog(string filename = "data/library_catalog.txt") const {
        ifstream file(filename);
        string line;
        cout << "\nCatalog Data:\n";
        while (getline(file, line)) cout << line << endl;
        file.close();
    }
};
#endif
