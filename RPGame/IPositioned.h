#pragma once
#include "GameObject.h"

class IPositioned
{
protected:
	float x = 0, y = 0, width = 0, height = 0;
	sf::Vector2<float> position, size;
public:
	IPositioned();
	IPositioned(float x, float y);
	IPositioned(float x, float y, float width, float height);


	void setPosition(float x, float y);
	void setSize(float width, float height);
	sf::Vector2<float> getPosition();
	sf::Vector2<float> getSize();

	bool inCameraBounds(GameObject* camera);
	sf::Vector2<float> getPosition(GameObject* camera);
	sf::Vector2<float> getSize(GameObject* camera);
};