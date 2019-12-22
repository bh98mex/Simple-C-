// AddAndDivide.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	printf("Hello World \n");
	int number;
	int total = 0;
	int count = 0;
	float answer;

	cout << "Input numbers to be added and divided by 10","/t";
	cout << "\n";
	
	do {
		scanf_s("%d", &number);
		total = total + number;
		count = count + 1;
	} while (count < 10);
	cout << "";
	cout<<"The result is:", answer = (float)total / 10;
	

}