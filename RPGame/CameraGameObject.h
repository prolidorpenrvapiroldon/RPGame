#pragma once
#include "GameObject.h"
#include "IPositioned.h"

class CameraGameObject : public GameObject, public IPositioned
{
protected:
	float scale;

public:
	CameraGameObject();
	CameraGameObject(float x, float y, float scale);

	float getScale();

	void Initialize() override;
	void Update(float delta_time) override;
	void Draw(sf::RenderWindow& window, GameObject* camera) override;
	void Remove() override;
};

