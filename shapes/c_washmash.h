#pragma once
#include<iostream>
class c_washmash
{
private:
	int circle_diameter;
	int square_size;
public:
	c_washmash();
	c_washmash(int circle_diameter, int square_size);
	void print() const
	{
		std::cout << "washing mashine:" << "\n"
			<< "square size:" << square_size << "\t" << "circle diameter: " << circle_diameter << "\n";
	}
};

