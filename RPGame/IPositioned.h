#pragma once
#include "GameObject.h"
#include "Vector.h"

class IPositioned
{
protected:
	float x = 0, y = 0, width = 0, height = 0;
	Vector position, size;
public:
	IPositioned();
	IPositioned(float x, float y);
	IPositioned(float x, float y, float width, float height);


	void setPosition(float x, float y);
	void setSize(float width, float height);
	Vector getPosition();
	Vector getSize();

	bool inCameraBounds(GameObject* camera);
	Vector getPosition(GameObject* camera);
	Vector getSize(GameObject* camera);
};