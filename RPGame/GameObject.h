#pragma once
#include <SFML/Graphics.hpp>
#include "Content.h"

enum GameObjectType { CAMERA, TILEMAP };

class GameObject
{
protected:
	GameObjectType type;
public:
	GameObject(GameObjectType type);

	virtual void Initialize() = 0;
	virtual void Update(float delta_time) = 0;
	virtual void Draw(sf::RenderWindow& window, GameObject* camera) = 0;
	virtual void Remove() = 0;
};