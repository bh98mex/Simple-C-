// OperatingIntegers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;



int main()
{

	char input;
	int answer, a, b;

	do {
		cout << "***********************" << endl;
		cout << "Please enter one of the options: " << endl;
		cout << "\ta. Addition operation" << endl;
		cout << "\tb. Substraction operation " << endl;
		cout << "\tc. Exit." << endl;

		cin >> input;
		switch (input)
		{
		case 'a':
			cout << "Enter the two integers for the operation" << endl;
			cin >> a >> b;
			answer = a + b;
			cout << " The result of " << a << " + " << b << " is " << answer << endl;
			break;
		case 'b':
			cout << "Enter the two integers for the operation" << endl;
			cin >> a >> b;
			answer = a - b;
			cout << " The result of " << a << " - " << b << " is " << answer << endl;
			break;
		default:
			cout << "Please enter a valid operand" << endl;
		}

	} while (input != 'c');
	return 0;
	std::cin.get();
}

