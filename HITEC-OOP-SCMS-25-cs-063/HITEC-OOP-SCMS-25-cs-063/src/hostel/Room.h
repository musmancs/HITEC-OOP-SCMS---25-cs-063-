#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <string>
using namespace std;

class Room {
private:
    int roomNumber;
    string type;
    int floor;
    bool isOccupied;
    string occupantName;
public:
    Room() : roomNumber(0), type("N/A"), floor(0), isOccupied(false), occupantName("") {}

    Room(int rNo, string t, int f)
        : roomNumber(rNo), type(t), floor(f), isOccupied(false), occupantName("") {}

    int getRoomNumber() const { return roomNumber; }
    string getType() const { return type; }
    int getFloor() const { return floor; }
    bool getIsOccupied() const { return isOccupied; }

    void assignRoom(string studentName) {
        if (!isOccupied) {
            occupantName = studentName;
            isOccupied = true;
            cout << "Room " << roomNumber << " assigned to " << studentName << endl;
        } else {
            cout << "Room " << roomNumber << " already occupied by " << occupantName << endl;
        }
    }

    void vacateRoom() {
        if (isOccupied) {
            cout << "Room " << roomNumber << " vacated by " << occupantName << endl;
            occupantName = "";
            isOccupied = false;
        } else {
            cout << "Room " << roomNumber << " is already empty." << endl;
        }
    }

    void displayRoom() const {
        cout << "-----------------------------\n";
        cout << "Room Number : " << roomNumber << endl;
        cout << "Type        : " << type << endl;
        cout << "Floor       : " << floor << endl;
        cout << "Status      : " << (isOccupied ? "Occupied" : "Available") << endl;
        if (isOccupied) cout << "Occupant    : " << occupantName << endl;
    }
};
#endif
