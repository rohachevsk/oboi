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
    double length;
    double width;
    double price;
    char wallpaperName[100];
    cout << "Enter name: ";
    cin >> wallpaperName;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter price: ";
    cin >> price;
    double totalRolls = 0;
	Rulon obj2(wallpaperName, length, width, price);
    for (int i = 0; i < roomsAmount; ++i)
    {
        totalRolls += obj1.getRoom(i)->calculateRolls(obj2);

    }
    double totalCost = totalRolls * obj2.getPrice();


    cout << "Total rolls needed: " << totalRolls << endl;
    cout << "Total cost of wallpaper: " << totalCost << endl;




	return 0;
}
