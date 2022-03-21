// OOP Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include "Dog.h"
using namespace std;

int main()
{
    // Create object Dog1
    Dog Dog1;
    Dog1.Breed = "Hound";
    Dog1.Color = "Brown";
    Dog1.Height = "2 feet";
    Dog1.Weight = "60 pounds";

    Dog1.Shake();
    Dog1.Sit();
    Dog1.Lay();
}


