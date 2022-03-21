#pragma once
#include <string>
#include <iostream>
using namespace std;

class Dog
{
public:
	string Breed;
	string Color;
	string Height;
	string Weight;

public: void Shake()
	{
		cout << Breed << " Shakes your hand!\n";
	}

public: void Sit()
	{
		cout << Breed << " Sits down.\n";
	}

public: void Lay()
	{
		cout << Breed << " Lays down, very tired doggo.\n";
	}
};

