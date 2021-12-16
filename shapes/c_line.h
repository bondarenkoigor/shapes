#pragma once
#include<iostream>
class c_line
{
private:
	int lenght;
public:
	c_line();
	c_line(int lenght);
	void print() const
	{
		std::cout << "lenght: " << lenght;
	}
	int getlenght() const
	{
		return lenght;
	}
};

