#include "Vector.h"


Vector::Vector()
{
}

Vector::Vector(float x, float y)
{
	this->x = x;
	this->y = y;
}

Vector Vector::operator * (float multiplier)
{
	return Vector(this->x * multiplier, this->y * multiplier);
}