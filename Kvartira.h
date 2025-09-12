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
    }
    void addNewRooms()
    {

    }
};


