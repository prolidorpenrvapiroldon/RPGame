#pragma once
#include "GameObject.h"
#include "IPositioned.h"

class CameraGameObject : public GameObject, public IPositioned
{
protected:

public:
	CameraGameObject();
	CameraGameObject(float x, float y);

	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Remove() override;
};

