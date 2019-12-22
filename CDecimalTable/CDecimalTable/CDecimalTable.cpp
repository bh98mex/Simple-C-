// CDecimalTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void DisplayDecimal() {
	//the table has been hardcoded through "printf" statements
	printf("\n******************************************************************************************\n");
	printf("                       Enter a number for that can be divided by 10\n");
	printf("******************************************************************************************\n");
	int input;
	scanf_s("%d", &input);
	//the user is asked to input a value
	//set the limitations of the user input
	if (input % 10 == 0 && input <= 1000) {
		//the table will be generated according to the user input
		printf("           ----------------------------------------------------------------------                     \n");
		printf("                                 Decimal Format Display                                             \n");
		printf("           ----------------------------------------------------------------------                     \n");

		int x = 0;
		int y = 0;

		//define variables to populate the table

		printf("\n\n||+//////////////////////////////////Leo's Decimal Table\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\+||\n");
		printf("||            0       1       2       3       4       5       6       7       8       9  ||\n");
		printf("|*****************************************************************************************|\n");

		while (x < input && y < input) {
			//populate columns
			if ((x % 10) == 0) {
				printf("||  %03d  ||", x);
			}
			x++;
			printf("  %03d  |", y);
			// populate rows
			if (((y + 1) % 10) == 0 && y != 0) {
				printf("\n|+--------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|\n");
			}
			y++;
		}

		printf("|*****************************************************************************************|\n");

	}
	else {
		//error message for leaving setted boundaries
		printf("Wrong number entered. Input a number that can be divided by 10\n");
		DisplayDecimal();
		//recall the method in case of error message
	}
}

void DisplayHexaDecimal() {

	//the table has been hardcoded through "printf" statements

	printf("\n******************************************************************************************\n");
	printf("                       Enter a number for that can be divided by 10\n");
	printf("******************************************************************************************\n");

	int input;
	scanf_s("%d", &input);

	//the user is asked to input a value
	//set the limitations of the user input

	if (input % 10 == 0 && input <= 1000) {
		printf("           ----------------------------------------------------------------------                     \n");
		printf("                                 HexaDecimal Format Display                                             \n");
		printf("           ----------------------------------------------------------------------                     \n");

		int x = 0;
		int y = 0;

		//define variables to populate the table

		printf("\n\n||+////////////////////////////////Leo's HexaDecimal Table\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\+||\n");
		printf("||            0       1       2       3       4       5       6       7       8       9  ||\n");
		printf("|*****************************************************************************************|\n");

		while (x < input && y < input) {
			int i, j, count;

			//for loop to populate table 

			for (i = 1; i <= 10; i++) {
				for (j = i; j <= 100; j += 10) {
					if ((x % 10) == 0) {

						printf("||  %03d  ||", x);
					}
					x++;
					printf("  %03x  |", y);
					//"printf" statement to convert to hexadecimal display		
					if (((y + 1) % 10) == 0 && y != 0) {
						printf("\n|+--------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|\n");
					}
					y++;
				}

			}
			printf("|*****************************************************************************************|\n");
		}
	}
	else {
		//error message for leaving setted boundaries
		printf("Wrong number entered. Input a number that can be divided by 10\n");
		DisplayHexaDecimal();
		//recall the method in case of error message
	}




}

void menu() {
	int userInput;   // define a variable to control the menu
					//hardcode a menu
	printf("\n");
	printf("----------------------------------------\n");
	printf("Please Chose from the following options:\n");
	printf("----------------------------------------\n");
	printf("\t1.Decimal Table Display;\n ");
	printf("\t2.HexaDecimal Table Display;\n");
	printf("\t3.Exit.\n");
	scanf_s("%d", &userInput);
	//switch case method for each of the options of teh menu
	switch (userInput) {
	case 1:
		//DisplayDecimal() method followed by the menu() method to allow recall of the menu
		DisplayDecimal();
		menu();
		break;
	case 2:
		//DisplayHexaDecimal() method followed by the menu() method to allow recall of the menu
		DisplayHexaDecimal();
		menu();
		break;
	case 3:
		//case 3 is used for exiting the program
		printf("Thank you and goodbye....\n");
		exit;
		break;
	}

}
int main()   // The main method
{
	menu();  //a menu has been created in the method which will call at requests the different methods

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
