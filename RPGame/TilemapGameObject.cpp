#include "TilemapGameObject.h"

TilemapGameObject::TilemapGameObject(Tileset* tileset, int width, int height) : GameObject(TILEMAP), width(width), height(height)
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
	float scale = ((CameraGameObject*)camera)->getScale();

	sf::Sprite* tile = this->tileset->getTile(0, 0);
	tile->setPosition(0, 0);
	tile->setScale(scale, scale);

	window.draw(*tile);
}

void TilemapGameObject::Remove()
{
}