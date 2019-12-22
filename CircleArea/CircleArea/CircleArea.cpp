// CircleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>;
using namespace std;



float getArea(float a, float b, float c) {
	float area;
	float cercle_area;
	area = (a + b + c) / 2;
	cercle_area = area * (a, b, c) / 2;
	return cercle_area;
}
int main()
{
	float a, b, c, cercle_area;
	cout << "\t\tInsert the 3 sizes of your triangle" << endl;
	cout << "Enter the first size:";
	cin >> a;
	cout << "Enter the second size:";
	cin >> b;
	cout << "Enter the third size:";
	cin >> c;
	cout << " ";
	cout << "The total area is: ";
	cout << getArea(a, b, c) << endl;
	system("pause");
	return 0;
}

