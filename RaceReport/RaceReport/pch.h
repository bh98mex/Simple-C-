#pragma once
#include<iostream>
#include <string>
using namespace std;


class Athletes {

private:
	string name;
	string surname;
	double time;
public:
	Athletes();
	Athletes(string _name, string _surname, double _time);
	string getName();
	string getSurname();
	double getTime();

	void setName(string);
	void setSurname(string);
	void setTime(double);
	void displayResults();

};
