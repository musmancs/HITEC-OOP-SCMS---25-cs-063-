#ifndef HOSTELMANAGER_H
#define HOSTELMANAGER_H
#include <iostream>
#include <string>
#include "HostelBlock.h"
using namespace std;

class HostelManager {
private:
    string hostelName;
    string hostelType;
    HostelBlock blocks[5];
    int blockCount;
public:
    HostelManager() : hostelName("Default Hostel"), hostelType("Boys"), blockCount(0) {}

    HostelManager(string name, string type)
        : hostelName(name), hostelType(type), blockCount(0) {}

    void addBlock(HostelBlock b) {
        if (blockCount < 5) {
            blocks[blockCount++] = b;
            cout << "Block added to " << hostelName << " successfully!" << endl;
        } else {
            cout << "Hostel is full! Cannot add more blocks." << endl;
        }
    }

    void displayHostel() const {
        cout << "\n========================================\n";
        cout << "Hostel  : " << hostelName << endl;
        cout << "Type    : " << hostelType << endl;
        cout << "Blocks  : " << blockCount << endl;
        cout << "========================================\n";
        for (int i = 0; i < blockCount; i++)
            blocks[i].displayRooms();
    }

    void hostelSummary() const {
        cout << "\n----- Hostel Summary -----\n";
        cout << "Name   : " << hostelName << endl;
        cout << "Type   : " << hostelType << endl;
        cout << "Blocks : " << blockCount << endl;
        cout << "--------------------------\n";
    }

    string getHostelName() const { return hostelName; }
    int getBlockCount() const { return blockCount; }
};
#endif
