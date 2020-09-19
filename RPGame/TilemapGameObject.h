#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"
#include "CameraGameObject.h"
#include "Tileset.h"

class TilemapGameObject : public GameObject
{
protected:
	const int width, height;
	Tileset* tileset;

public:
	TilemapGameObject(Tileset* tileset, int width, int height);

	void Initialize() override;
	void Update(float delta_time) override;
	void Draw(sf::RenderWindow& window, GameObject* camera) override;
	void Remove() override;
};