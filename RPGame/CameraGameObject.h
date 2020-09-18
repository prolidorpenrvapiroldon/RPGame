#pragma once
#include "GameObject.h"
#include "IPositioned.h"

class CameraGameObject : public GameObject, public IPositioned
{
protected:
	float scale = 1;

public:
	CameraGameObject(int width, int height);
	CameraGameObject(float x, float y, int width, int height);

	float getScale();

	void Initialize() override;
	void Update(float delta_time) override;
	void Draw(sf::RenderWindow& window, GameObject* camera) override;
	void Remove() override;
};

