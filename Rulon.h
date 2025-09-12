#pragma once
#include <iostream>
using namespace std;
class Rulon
{
private: 
	char* name;
	double width;
	double height;
	double price;
public:
	Rulon(const char* n, double w, double h, double p)
	{
		name = new char[strlen(n) + 1];
		strcpy_s(name, strlen(n) + 1, n);
		width = w;
		height = h;
		price = p;
	}
	~Rulon()
	{
		delete[]name;
	}
};

