// RichterTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void verifyMeasurments(double richter) {

	if (richter >= 4.5 && richter < 6)    // Tests in wrong order
	{
		cout << "Damage to poorly constructed buildings";
	}
	else if (richter >= 6.0 && richter < 7)
	{
		cout << "Many buildings considerably damaged, some collapse";
	}
	else if (richter >= 7.0 && richter < 8)
	{
		cout << "Many buildings destroyed";
	}
	else if (richter >= 8.0)
	{
		cout << "Most structures fall";
	}

}

int main()
{

	cout << "Enter the earth quake measurements: " << endl;
	double richter;
	cin >> richter; std::cin.get();

	verifyMeasurments(richter);

	std::cin.get();
	return 0;
}
