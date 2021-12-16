#include<iostream>
#include"c_circle.h"
int main()
{
	c_square square1(10);
	c_line line1(22);
	(square1 + line1).print();

	c_line line2(5);
	(square1 - line2).print();

	c_circle circle(10);
	(circle + square1).print();

	c_square* square2 = new c_square(15);
	(circle + square2).print();
	
}