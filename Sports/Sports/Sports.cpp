// Sports.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>



using namespace std;

class Athletes {

private:
	string name;
	string surname;
	double time;
public:
	Athletes();
	~Athletes();
	Athletes(string _name, string _surname, double _time);
	string getName();
	string getSurname();
	double getTime();

	void setName(string);
	void setSurname(string);
	void setTime(double);
	virtual void displayResults() {

		cout << "The time for the athlete is:" << getTime() << " minutes" << endl;
	}


};

class Box : public Athletes {
public:
	Box(double round);
	~Box();
	void setRounds(double round);
	double getRounds();
	double roundLasted(double);
	void displayResults();
private:
	double rounds;
};

class HighJumper :public Athletes {

public:
	HighJumper(double HEIGHT);
	~HighJumper();
	void setHEIGHT(double);
	double getHEIGHT();
	double heightJump(double);
	void displayResults();



private:
	double HEIGHT;

};

Athletes::Athletes(string _name, string _surname, double _time) {
	name = _name;
	surname = _surname;
	time = _time;
}
Athletes::Athletes() {
	cout << "Constructor Athletes called..." << endl;
}
Athletes::~Athletes() {
	cout << "Constructor Athletes destroyed.." << endl;
}

// void displayResults(Athletes one) {


//}

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


//////////////////////////////////////////////////////////////////////


Box::Box(double round) {
	cout << "Constructor Box created..." << endl;
}
Box::~Box() {
	cout << "Constructor Box destroyed..." << endl;
}

void Box::setRounds(double rounds) {
	this->rounds = rounds;
}
double Box::getRounds() {
	return rounds;
}



double Box::roundLasted(double rounds) {

	return rounds;
}
void Box::displayResults() {



	cout << " The boxer's record is " << rounds << " in rounds lasted" << endl;

}


//////////////////////////////////////////////////////////////////////

HighJumper::HighJumper(double HEIGHT) {
	cout << "Constructor HighJumper created..." << endl;
}
HighJumper::~HighJumper() {
	cout << "Constructor Highjumper destroyed..." << endl;
}

void HighJumper::setHEIGHT(double HEIGHT) {
	this->HEIGHT = HEIGHT;
}

double HighJumper::getHEIGHT() {

	return HEIGHT;
}

double HighJumper::heightJump(double HEIGHT) {

	return HEIGHT;
}
void HighJumper::displayResults() {

	cout << " The jumps record is " << HEIGHT << endl;
}




///////////////////////////////////////////////////////////////////////


int main()
{

	Athletes *A[3];
	A[0] = new Athletes("soso", "Groza", 15);
	A[1] = new Box(12);
	A[2] = new HighJumper(90);


	for (int i = 0; i < 3; i++) {

		A[i]->displayResults();
	}
	cout << endl;
	string name, surname;
	double time;
	cout << "Enter the details for the first athlete " << endl;
	cout << "Enter the NAME, SURNAME and the TIME" << endl;
	cin >> name >> surname >> time;
	Athletes One = Athletes(name, surname, time);
	cout << "The first athlete is : " << name << " " << surname << " and his time is: " << time << endl;
	cout << " " << endl;
	cout << "Enter the details for the second athlete" << endl;
	cout << "Enter the NAME, SURNAME and the TIME" << endl;
	cin >> name >> surname >> time;
	Athletes Two = Athletes(name, surname, time);
	cout << "The second athlete is : " << name << " " << surname << " and his time is: " << time << endl;
	if (One.getTime() < Two.getTime()) {
		cout << "The first athlete " << One.getName() << ", has a better time " << endl;
		cout << "**********************************************************" << endl;
	}
	else if (One.getTime() > Two.getTime()) {
		cout << "The second athlete " << Two.getName() << ", has a better time" << endl;
		cout << "**********************************************************" << endl;
	}
	else (One.getTime() == Two.getTime());
	cout << "**********************************************************" << endl;
	cout << "The athletes have the same time, they are both winners" << endl;
	int x;
	cout << endl;
	cout << "Delete first athlete? (yes = 1, no =0)" << endl;
	cin >> x;
	if (x = 1) {
		One.~Athletes();

	}

	cout << endl;
	Athletes();
	cout << endl;
	Box(20);
	cout << endl;
	HighJumper(15);
	cout << endl;

	cout << "Create  some objects?" << endl;
	cout << "Chose variables for object to be created (Athletes, Box, HighJumper(-1 to exit))" << endl;

	cout << endl;
	cout << "Input name, surname and time to create an athlete...." << endl;
	cin >> name >> surname >> time;
	Athletes firstA = Athletes(name, surname, time);
	cout << "The first athlete is : " << name << " " << surname << " and his time is: " << time << endl;
	cout << endl;
	cout << "Input rounds lasted by your boxer..." << endl;

	Box firstB = Box(20);
	firstB.setRounds(20);

	cout << "The second athlete is a boxer and his durabillity record is " << firstB.getRounds() << endl;
	cout << endl;

	cout << "Input the height jump for the highJumper" << endl;
	HighJumper firstH = HighJumper(30);
	firstH.setHEIGHT(70);

	cout << "The third athlete is a high jumper and his record is  " << firstH.getHEIGHT() << " inches " << endl;
	cout << endl;
	cout << "Display results" << endl;
	firstA.displayResults();
	firstB.displayResults();
	firstH.displayResults();
	cout << endl;


	cout << endl;
	cout << endl;
	cout << "Error...need to override a method" << endl;
	cout << endl;
	firstA.displayResults();
	cout << endl;
	firstB.displayResults();
	cout << endl;
	firstB.displayResults();

	cout << endl;





	system("pause");
	return 0;
}

