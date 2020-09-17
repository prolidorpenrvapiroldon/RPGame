#include "TilemapGameObject.h"


TilemapGameObject::TilemapGameObject(sf::Sprite& tileset, int width, int height, int** data) : GameObject(TILEMAP), width(width), height(height)
{
	this->tileset = tileset;
}

void TilemapGameObject::Initialize()
{
}

void TilemapGameObject::Update(float delta_time)
{
}

void TilemapGameObject::Draw(sf::RenderWindow& window, GameObject* camera)
{
	this->tileset.setPosition(0, 0);
	window.draw(this->tileset);
}

void TilemapGameObject::Remove()
{
}