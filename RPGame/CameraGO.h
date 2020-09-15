#pragma once
#include "GameObject.h"
#include "IPositioned.h"

class CameraGO : public GameObject, public IPositioned
{
protected:

public:
	CameraGO();
	CameraGO(float x, float y);
};

