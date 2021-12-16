#pragma once
#include<iostream>
class c_rectangle
{
private:
	int height;
	int width;
public:
	c_rectangle()
	{
		height = width = 0;
	}
	c_rectangle(int height, int width)
	{
		this->height = height;
		this->width = width;
	}
	void print() const
	{
		std::cout << "rectangle:" << "\n"
			<< "height: " << height << "\t" << "width: " << width << "\n";
	}
};

