#pragma once
#include <iostream>
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
	~Room()
	{
		delete[]name;
	}
};

