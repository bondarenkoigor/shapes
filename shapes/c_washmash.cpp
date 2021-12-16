#include "c_washmash.h"
c_washmash::c_washmash()
{
	circle_diameter = 0;
	square_size = 0;
}

c_washmash::c_washmash(int circle_diameter, int square_size)
{
	this->circle_diameter = circle_diameter;
	this->square_size = square_size;
}
