// BMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


int main()
//the main method, the program will start from here
{
	//define variables
	double hight, weight, MBI;
	char a, b;
	int option;
	//hard coding for the menu 
	cout << "" << endl;
	cout << "This program will calculate your BMI (metric)." << endl;//hard input 
	cout << "" << endl;
	cout << "BMI = Weight (kg) / (Height(m) * Height(m)" << endl;
	cout << "" << endl;
	cout << "Please enter your weight in kg:" << endl;
	//use keyboard input for input from the user
	cin >> weight;
	cout << "Now please enter your height in meters:" << endl;
	//keyboard input
	cin >> hight;
	cout << "" << endl;
	cout << "Your weight is " << weight << " kg and your height is " << hight << " meters." << endl;
	//define the calculation method
	MBI = weight / (hight*hight);
	cout << "" << endl;
	cout << "Your MBI is " << MBI << "." << endl;
	cout << "" << endl;
	cout << "Please select one of the folowing (1. Man; 2. Woman;)" << endl;
	cin >> option;
	//use if and else statement for revealing the range of MBI for either male or female
	if (option == 1) {
		cout << "Man: Your healthy weight range is between 56kg an 77kg." << endl;
	}
	else {
		cout << "Woman: Your healthy weight range is between 44kg and 60kg. " << endl;
	}
	system("pause");
	//pause the command.com 
	return 0;
	//end of the program
}
