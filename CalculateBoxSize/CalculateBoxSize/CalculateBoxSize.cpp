// CalculateBoxSize.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Header1.h"
using namespace std;

void printprivatevariable(Box bo);
void printprivatevariableNew(Size n);



int main()
{
	Box mybox;
	mybox.setVariableWidth(50);
	printprivatevariable(mybox);
	cout << endl;
	Size size;
	size.setVariableHeight(20);
	size.setVariableWidth(30);
	printprivatevariableNew(size);



	system("pause");
	return 0;
}

Box::Box()
{

}
int Box::setVariableWidth(int w)
{

	width = w;

	return width;

}
int Box::setVariableHeight(int h)
{

	height = h;

	return height;
}

int Size::getSurface() {


	return (width * height);
}

void printprivatevariable(Box bo)
{
	std::cout << "Description : Item width is: " << bo.width << " cm wide" << std::endl;
}
void printprivatevariableNew(Size n)
{
	std::cout << "Description : Item width is: " << n.height << " cm wide " << " and " << n.width << " cm height " << std::endl;
	cout << "And the total size is " << n.getSurface() << endl;
}





