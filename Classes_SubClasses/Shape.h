#pragma once
#include <string>
#include <iostream>
using namespace std;

class Shape
{
public:
	string Color = "Blue";

	virtual void getArea()
	{
		cout << "Undefined";
	}
};

