#pragma once
#include <iostream>
#include "Rulon.h"
using namespace std;
class Room
{
	char* name;
	double length, width, height;
	bool isGlueTheCeiling;
public:
	Room(const char* n, double l, double w, double h, bool is)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		length = l;
		width = w;
		height = h;
		isGlueTheCeiling = is;
	}
	double calculateRolls(Rulon& rulon, double roomWidth, double roomLength, double roomHeight)
	{
		double wallArea = (roomLength * 2 + roomWidth * 2) * roomHeight;
		double rollArea = rulon.getWidth() * rulon.getLength();

		double rollsNeeded = wallArea / rollArea;

		return rollsNeeded;
	}

	~Room()
	{
		delete[]name;
	}
};

