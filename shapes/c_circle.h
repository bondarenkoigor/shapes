#pragma once
#include"c_square.h"
#include"c_coin.h"
class c_circle
{
private:
	int diameter;
public:
	c_circle();
	c_circle(int diameter);
	void print() const
	{
		std::cout << "diameter: " << diameter;
	}
	c_coin operator+(c_square& square);
	c_washmash operator+(c_square* square);
};

