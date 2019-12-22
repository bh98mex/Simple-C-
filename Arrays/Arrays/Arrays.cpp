// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;




int main()
{
	int myArray[8];
	int myArray2[8];
	int size, temp;
	int len = sizeof(myArray) / sizeof(myArray);
	cout << "Enter the size of the array" << endl;
	cin >> size;
	cout << "Enter the numbers in the Array" << endl;
	for (int i = 0; i < size; i++) {
		cin >> myArray[i];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (myArray[i] > myArray[j])
			{
				temp = myArray[i];
				myArray[i] = myArray[j];
				myArray[j] = temp;
			}
		}
	}

	cout << "\t" << "The elements in the Array are:" << endl;

	for (int i = 0; i < size; i++) {

		cout << myArray[i] << endl; ;
	}

	cout << "The copy of the array is " << endl;
	for (int i = 0, j = 0; i < size, j < size; i++, j++) {
		myArray2[i] = myArray[j];
	}
	for (int i = 0; i < size; i++) {
		cout << myArray2[i] << " ,";
	}
	cout << " " << endl;
	cout << "Plese enter an element to be deleted" << endl;
	int del;
	int count = 0;
	cin >> del;
	for (int i = 0; i < size; i++)
	{
		if (myArray[i] == del)
		{
			for (int j = i; j < (size - 1); j++)
			{
				myArray[j] = myArray[j + 1];
			}
			count++;
			break;
		}
	}
	if (count == 0)
	{
		cout << "Element not found..!!";
	}
	else
	{
		cout << "Element deleted successfully..!!\n";
		cout << "Now the new array is :\n";
		for (int i = 0; i < (size - 1); i++)
		{
			cout << myArray[i] << " ";
		}
	}

	system("pause");
	return 0;
}

