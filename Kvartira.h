#pragma once
#include "Room.h"
using namespace std;
class Kvartira
{
private:
    Room** rooms;
    int currentRooms;
    int maxRooms;
public:
    Kvartira(int max)
    {
        rooms = new Room * [max];
        currentRooms = 0;
        maxRooms = max;
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
            cout << "Enter wallpaper name: ";
            cin >> wallpaperName;
            cout << "Enter length: ";
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

    Room* getRoom(int index)
    {
        return rooms[index];
    }
    ~Kvartira()
    {
        for (int i = 0; i < currentRooms; ++i)
        {
            delete rooms[i];
        }
        delete[] rooms;
    };

}
