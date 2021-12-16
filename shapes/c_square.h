#pragma once
#include"c_line.h"
#include"c_rectangle.h"
class c_square
{
	int size;
public:
	c_square();
	c_square(int size);
	int getsize() const
	{
		return size;
	}
	void print() const
	{
		std::cout << "size: " << size;
	}
	c_rectangle operator+(c_line& line);
	c_rectangle operator-(c_line& line);
};

