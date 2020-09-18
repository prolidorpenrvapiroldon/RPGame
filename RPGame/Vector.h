#pragma once

struct Vector
{
	float x = 0, y = 0;

	Vector();
	Vector(float x, float y);

	Vector operator * (float multiplier);
};