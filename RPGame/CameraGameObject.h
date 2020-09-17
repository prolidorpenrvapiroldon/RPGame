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
	void Update(float delta_time) override;
	void Draw(sf::RenderWindow& window, GameObject* camera) override;
	void Remove() override;
};

