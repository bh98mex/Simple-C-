// CubeCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void cubeCalculator(int length) {
	int volume;
	volume = length * length*length;
	cout << "\tThe volume of the cube is " << volume << endl;
}
int main()
{
	int length;
	cout << "\tEnter the length to calculate the volume" << endl;
	cin >> length;
	cubeCalculator(length);
	system("pause");
	return 0;
}