// VendingMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Menu {

};

int main()
{
	int exit = 0;
	int amount_deposit;
	int return_amount;
	int input;

	cout << "--------------------------------------" << endl;
	cout << "********** Vending Machine ***********" << endl;
	cout << "--------------------------------------" << endl;


	do {
		cout << "The minimum amount to input is 100 pence" << endl;
		cout << "Please enter the money" << endl;
		cin >> amount_deposit;
		if (amount_deposit < 99) {
			cout << "Amount not enought. Please enter 100 pence" << endl;
			cin >> amount_deposit;
		}
		if (amount_deposit % 10 != 0)

		{
			cout << " Please enter multiples of 10" << endl;
			cin >> amount_deposit;
		}
		else
			cout << "Please chose a drink" << endl;


		cout << "--------------------------------------" << endl;
		cout << "Item_______________________price (in pence)" << endl;
		cout << "1.Coffe____________________80 pence" << endl;
		cout << "2.Tea______________________90 pence" << endl;
		cout << "3.Juice____________________100 pence_" << endl;
		cout << "4.Exit." << endl;
		cout << "--------------------------------------" << endl;

		cin >> input;

		switch (input) {
		case 1: cout << "Coffe......" << endl;
			return_amount = amount_deposit - 80;
			cout << "Your change is " << return_amount << endl;
			cout << "Thank you and Goodbye." << endl;
			cout << "--------------------------------" << endl;
			cout << "***********************************" << endl;
			break;
		case 2: cout << "Tea......." << endl;
			return_amount = amount_deposit - 90;
			cout << "Your change is " << return_amount << endl;
			cout << "Thank you and Goodbye." << endl;
			cout << "--------------------------------" << endl;
			cout << "***********************************" << endl;
			break;
		case 3:
			cout << "Juice............" << endl;
			return_amount = amount_deposit - 100;
			cout << "Your change is " << return_amount << endl;
			cout << "Thank you and Goodbye." << endl;
			cout << "--------------------------------" << endl;
			cout << "***********************************" << endl;
			break;
		default:
			cout << "Goodbye" << endl;
			cout << "--------------------------------" << endl;
			cout << "***********************************" << endl;
			system("exit");
			break;
		}
	} while (true);

	system("pause");
	return 0;
}

