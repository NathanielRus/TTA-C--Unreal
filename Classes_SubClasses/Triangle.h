#pragma once
#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;

class Triangle : public Shape
{
public:
	double Base = 2.0;
	double Height = 4.0;

	void getArea()
	{
		cout << (Base * Height)/2.0;
	}
};

