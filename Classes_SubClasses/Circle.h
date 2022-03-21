#pragma once
#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;

class Circle : public Shape
{
public:
	double Radius = 3.0;

	void getArea()
	{
		cout << (Radius * Radius) * 3.14;
	}
};

