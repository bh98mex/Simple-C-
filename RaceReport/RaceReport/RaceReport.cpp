// RaceReport.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "pch.h"
using namespace std;

string Athletes::getSurname() {
	return surname;
}
string Athletes::getName() {
	return name;
}
double Athletes::getTime() {
	return time;
}

void Athletes::setName(string) {
	this->name = name;
}
void Athletes::setSurname(string) {
	this->surname = surname;
}
void Athletes::setTime(double) {
	this->time = time;
}

Athletes::Athletes(string _name, string _surname, double _time) {
	name = _name;
	surname = _surname;
	time = _time;
}


int main()
{
	string name, surname;
	double time;
	cout << "Enter the details for the first athlete " << endl;
	cout << "Enter the NAME, SURNAME and the TIME" << endl;
	cin >> name >> surname >> time;
	Athletes One = Athletes(name, surname, time);
	cout << "The first athlete is : " << name << " " << surname << " and his time is " << time << endl;
	cout << " " << endl;
	cout << "Enter the details for the second athlete" << endl;
	cout << "Enter the NAME, SURNAME and the TIME" << endl;
	cin >> name >> surname >> time;
	Athletes Two = Athletes(name, surname, time);
	cout << "The second athlete is : " << name << " " << surname << " and his time is " << time << endl;
	if (One.getTime() < Two.getTime()) {
		cout << "The first athlete " << One.getName() << " has a better time " << endl;
		cout << "**********************************************************" << endl;
	}
	else if (One.getTime() > Two.getTime()) {
		cout << "The second athlete " << Two.getName() << " has a better time" << endl;
		cout << "**********************************************************" << endl;
	}
	else (One.getTime() == Two.getTime());
	cout << "**********************************************************" << endl;
	cout << "The athletes have the same time, they are both winners" << endl;

	system("pause");
	return 0;
}
