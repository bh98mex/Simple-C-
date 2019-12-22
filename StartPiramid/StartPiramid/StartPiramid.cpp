// StartPiramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


void pattern(int n, char star)
{

	int  c, row;
	int temp;
	temp = n;

	for (row = 1; row <= n; row++)
	{
		for (c = 1; c < temp; c++)
			cout << " ";

		temp--;

		for (c = 1; c <= 2 * row - 1; c++)
			cout << star;

		cout << endl;
	}
}

int main()
{
	int n;
	char star;

	cout << "Enter the number of rows in pyramid of stars you wish to see " << endl;
	cin >> n;
	cout << "Enter simbol" << endl;
	cin >> star;
	pattern(5, star);
	system("pause");
	return 0;
}