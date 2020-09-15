#pragma once
class IPositioned
{
protected:
	float x = 0, y = 0;
public:
	IPositioned();
	IPositioned(float x, float y);

	void setPostion(float x, float y);
	float getX();
	float getY();
};

