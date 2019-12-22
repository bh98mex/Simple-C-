// )InterestCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;



int main()  //main method
{
	//define variables
	double amount = 0;
	double startingfunds = 1000.0;
	double rate = 0.05;
	double duration{ 10 };
	//hard coding fro screen output
	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	cout << fixed << setprecision(2);
	cout << "" << endl;
	//for loop to compute the math for the designated years
	for (int year = 1; year <= duration; year++) {
		amount = startingfunds * pow(1.0 + rate, year);
		cout << setw(4) << year << setw(21) << amount << endl;
	}
	//hard coding
	cout << defaultfloat;
	cout << "" << endl;
	cout << "Total interest earned on the investment over " << duration << " is " << fixed << setprecision(2) << amount - startingfunds << endl;
	//pause the system  before it exits
	system("pause");
	return 0;
	//the program will calculate the interest rate earned over a deposit on a specific number of years 
}

