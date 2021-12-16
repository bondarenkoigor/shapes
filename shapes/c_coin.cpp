#include "c_coin.h"

c_coin::c_coin()
{
	circle_diameter = 0;
	square_size = 0;
}

c_coin::c_coin(int circle_diameter, int square_size)
{
	this->circle_diameter = circle_diameter;
	this->square_size = square_size;
}
