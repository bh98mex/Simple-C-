// ConstructorDestructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;




class Box
{
public:
	Box() {
		cout << "Constructor called!" << endl;
		cout << "******HELLO********" << endl;
	}
	~Box() {
		cout << "Destructor called!" << endl;
		cout << "******BYE********" << endl;
	}
};


int main()
{
	int addSize;
	int deleteSize;
	cout << "Please input the size of the object" << endl;
	cin >> addSize;
	Box* myBoxArray = new Box[addSize];

	cout << "Enter the number of the objects to be deleted" << endl;

	cin >> deleteSize;
	deleteSize = addSize;
	delete[] myBoxArray; // Delete array
	//myBoxArray++;


	long* pvalue = NULL; // Pointer initialized with null
	pvalue = new long;   // Request memory for the variable

	cout << "Enter the value for pvalue" << endl;
	cin >> *pvalue;
	//*pvalue = 29494.99;     // Store value at allocated address
	cout << "Value of pvalue : " << *pvalue << endl;

	delete pvalue;         // free up the memory.


	//system("pause");
	std::cin.get();
	return 0;
}