// SportRanking.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;


void displayResults() {

	int firstCountry[3];
	int secondCountry[3];
	int thirdCountry[3];
	int size = 3;
	string country1;
	string country2;
	string country3;
	cout << "Enter the country with the first position" << endl;
	cin >> country1;
	cout << "Please enter the GOLD, SILVER and BRONZE medals won by the first country:" << endl;
	for (int i = 0; i < size; i++) {
		cin >> firstCountry[i];
	}
	cout << "Enter the country with the second position" << endl;
	cin >> country2;
	cout << "Please enter the GOLD, SILVER and BRONZE medals won by the second country:" << endl;
	for (int j = 0; j < size; j++) {
		cin >> secondCountry[j];
	}
	cout << "Enter the country with the third position" << endl;
	cin >> country3;
	cout << "Please enter the GOLD, SILVER and BRONZE medals won by the third country:" << endl;
	for (int k = 0; k < size; k++) {
		cin >> thirdCountry[k];
	}
	cout << "\t Gold\tSilver\tBronze" << endl;
	cout << country1;
	for (int i = 0; i < size; i++) {
		cout << "\t  " << firstCountry[i];
		//cout << country2 << " " << secondCountry[i] << endl;
		//cout << country3 << " " << thirdCountry[i] << endl;
	}
	cout << " " << endl;
	cout << country2;
	for (int j = 0; j < size; j++) {
		cout << "\t  " << secondCountry[j];
		//cout << country3 << " " << thirdCountry[i] << endl;
	}
	cout << " " << endl;
	cout << country3;
	for (int k = 0; k < size; k++) {
		cout << "\t  " << thirdCountry[k];
	}
	cout << " " << endl;

}



int main()
{

	cout << "\tHere are the positions" << endl;
	displayResults();
	system("pause");
	return 0;
}
