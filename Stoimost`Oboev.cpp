#include <iostream>
#include "Rulon.h"
#include "Room.h"
#include "Kvartira.h"
using namespace std;

int main()
{
    cout << "Enter the number of rooms in the apartment: ";
    int roomsAmount;
    cin >> roomsAmount;
	Kvartira obj1(roomsAmount);
    for (int i = 0; i < roomsAmount; i++)
    {
        obj1.addNewRooms();
    }



	return 0;
}
