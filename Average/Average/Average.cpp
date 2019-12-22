// Average.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	char line[80];  //used for user input
	int n;			//the number to be averaged
	long total = 0L;//the running total of the numbers
	char count = 0; //used to keep track of how many numbers
	float answer;

	puts("Welcome to the average program, enter numbers when");
	puts("asked, or the letter q to quit ( in the first column)");


	do {
		printf("\nEnter a number!: ");
		//scanf_s("%d",&line);
		gets_s(line);
		if (line[0] == 'q' || line[0] == 'Q')break; // out of the loop
		n = atoi(line);
		total = total + n;
		count = count + 1;

	} while (count < 5);
	if (count > 0) {
		answer = (float)total / count;
		printf("");
		printf("\n\nAverage of %d numbers was %f", count, answer);
	}
	else {
		puts("You hit the Q key, I have nothing to do");
	}

}