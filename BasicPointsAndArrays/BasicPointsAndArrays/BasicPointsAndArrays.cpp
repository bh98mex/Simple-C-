// BasicPointsAndArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


int sum(int *a, int size)
{
	int total = 0;
	int *pointer;
	pointer = a;
	//pointer will relate to the first element in the array a;
	for (int i = 0; i < size; i++)
	{
		total = total + *pointer; //add the value that th epointer points to 


		pointer++; //count to get to the following elements of the array
	}
	pointer = &total;

	return total;
}





int main()
{
	int size;
	int  myArray[10];
	cout << " " << endl;
	cout << "\tEnter the size of the array" << endl;
	cin >> size;
	cout << "\tEnter the elements in the array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> myArray[i];
	}
	cout << " " << endl;
	cout << "The sunm of the elements in your array is: ";
	cout << sum(myArray, size) << endl;

	cout << " " << endl;
	cout << " " << endl;
	system("pause");
	return 0;
}

