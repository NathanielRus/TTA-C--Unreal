// Classes_SubClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle Rec;
    Rec.getArea();
    cout << "\n";

    Triangle Tri;
    Tri.getArea();
    cout << "\n";

    Circle Cir;
    Cir.getArea();

}

