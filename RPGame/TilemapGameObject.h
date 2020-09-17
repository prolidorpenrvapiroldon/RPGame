#pragma once
#include "GameObject.h"
#include <SFML/Graphics.hpp>

class TilemapGameObject : public GameObject
{
protected:
	sf::Sprite tileset;
	const int width, height;
	int** data;

public:
	TilemapGameObject(sf::Sprite& tileset, int width, int height, int** data);

	void Initialize() override;
	void Update(float delta_time) override;
	void Draw(sf::RenderWindow& window, GameObject* camera) override;
	void Remove() override;
};

