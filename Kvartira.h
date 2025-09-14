#pragma once
#include "Room.h"
class Kvartira 
{
private:
    Room** rooms;
    int currentRooms;
    int maxRooms;
public:
    Kvartira(int max)
    {
        rooms = new Room*[max];
        currentRooms = 0;
        max = maxRooms;
    }
    void addNewRooms()
    {
        double length;
        double width;
        double height;
        bool is;
        char wallpaperName[100];
        if (currentRooms < maxRooms)
        {
			cout << "Enter name: ";
			cin >> wallpaperName;
			cout << "Enter leight: ";
			cin >> length;
			cout << "Enter width: ";
			cin >> width;
			cout << "Enter height: ";
			cin >> height;
			cout << "Enter isGlueTheCeiling (1 - yes, 0 - no): ";
			cin >> is;
			Room* Apartaments = new Room(wallpaperName, length, width, height, is);
			rooms[currentRooms] = Apartaments;
			currentRooms++;
        }
        else
        {
			cout << ("No more rooms can be added, Error");
        }

    }
 

    ~Kvartira()
    {
        for (int i = 0; i < currentRooms; ++i)
        {
            delete rooms[i];
        }
        delete[] rooms;
};


