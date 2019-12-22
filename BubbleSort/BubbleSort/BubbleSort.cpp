// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	int array[100], input, n, swap;
	int flag = 1;
	cout << "Enter number of elements" << endl;
	cin >> n;
	cout << "\tEnter " << n << " integers" << endl;

	for (input = 0; input < n; input++)
		cin >> array[input]; std::cin.get();

	for (int input = 0; input < n - 1; input++) {

		for (int next = 0; next < (n - input - 1); next++) {

			if (array[next] > array[next + 1])
			{
				swap = array[next + 1];
				array[next + 1] = array[next];
				array[next] = swap;
			}
		}

	}

	cout << "\tSorted list in ascending order:\n";

	for (int output = 0; output < n; output++) {

		cout << array[output] << "\t " << endl;

	}


	std::cin.get();
	return 0;
}

