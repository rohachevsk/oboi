#pragma once
#include <iostream>
#include "Rulon.h"
class Room
{
	char* name;
	double length;
	double width;
	double height;
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
	double getLength()
	{
		return length;
	}
	double getWidth()
	{
		return width;
	}
	double getHeight()
	{
		return height;
	}
	double calculateRolls(Rulon& rulon)
	{
		double wallArea = (getLength() * 2 + getWidth() * 2) * getHeight();
		double rollArea = rulon.getWidth() * rulon.getLength();

		double rollsNeeded = wallArea / rollArea;

		return rollsNeeded;
	}

	~Room()
	{
		delete[]name;
	}
};

