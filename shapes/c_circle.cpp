#include "c_circle.h"

c_circle::c_circle()
{
	diameter = 0;
}

c_circle::c_circle(int diameter)
{
	this->diameter = diameter;
}

c_coin c_circle::operator+(c_square& square)
{
	return c_coin(this->diameter, square.getsize());
}
c_washmash c_circle::operator+(c_square* square)
{
	return c_washmash(this->diameter, square->getsize());
}
