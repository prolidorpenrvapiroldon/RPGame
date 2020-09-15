#include "IPositioned.h"

IPositioned::IPositioned()
{
}

IPositioned::IPositioned(float x, float y)
{
	this->setPostion(x, y);
}


void IPositioned::setPostion(float x, float y)
{
	this->x = x;
	this->y = y;
}

float IPositioned::getX()
{
	return this->x;
}

float IPositioned::getY()
{
	return this->y;
}