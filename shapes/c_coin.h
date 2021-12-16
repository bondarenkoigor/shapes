#pragma once
#include"c_washmash.h"
class c_coin
{
private:
	int circle_diameter;
	int square_size;
public:
	c_coin();
	c_coin(int circle_diameter, int square_size);
	void print() const
	{
		std::cout << "coin:" << "\n"
			<< "square size:" << square_size << "\t" << "circle diameter: " << circle_diameter << "\n";
	}
};

