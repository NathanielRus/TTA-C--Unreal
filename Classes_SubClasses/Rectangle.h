#pragma once
#include <string>
#include <iostream>
#include "Shape.h"
using namespace std;

class Rectangle : public Shape
{
public:
	double Height = 3.0;
	double Width = 2.0;

	void getArea()
	{
		cout << (Width * Height);
	}
};

