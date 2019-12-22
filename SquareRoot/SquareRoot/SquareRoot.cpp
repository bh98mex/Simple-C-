// SquareRoot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


void square(int number) {
	number = number * 2;
	cout << "Answer is " << number << endl;
}
void square(double number) {
	number = number * 2;
	cout << "Answer is " << number << endl;

}
int main()
{
	cout << "\tEnter a number to multiply it by 2" << endl;
	int number, number1;
	cin >> number;
	cout << "\tThe result is " << endl;
	square(number);
	cout << "\tNow enter a Double as a parameter..." << endl;
	double second;
	cin >> second;
	cout << "\tThe result is " << endl;
	square(second);
	system("pause");
	return 0;
}