#pragma once
#include <iostream>
#include "Room.h"
using namespace std;
class Rulon
{
private: 
	char* name;
	double width;
	double length;
	double price;
public:
	Rulon(const char* n, double w, double l, double p)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		width = w;
		length = l;
		price = p;
	}
	~Rulon()
	{
		delete[]name;
	}
	double getWidth()
	{
		return width;
	}
	double getLength()
	{
		return length;
	}
};


