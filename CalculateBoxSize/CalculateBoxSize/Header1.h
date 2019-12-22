#pragma once

class Box
{
public:
	Box();
	int setVariableWidth(int);
	int setVariableHeight(int);
	friend void printprivatevariable(Box bo);



protected:
	int width;
	int height;

};


class Size : public Box {
public:
	int getSurface();
	friend void printprivatevariableNew(Size n);

};



