#include "c_square.h"

c_square::c_square()
{
	this->size = 0;
}

c_square::c_square(int size)
{
	this->size = size;
}

c_rectangle c_square::operator+(c_line& line)
{
	return c_rectangle(this->size, this->size + line.getlenght());
}

c_rectangle c_square::operator-(c_line& line)
{
	return c_rectangle(this->size, this->size - line.getlenght());
}
