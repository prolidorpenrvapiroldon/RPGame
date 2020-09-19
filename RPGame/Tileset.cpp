#include "Tileset.h"

Tileset::Tileset(int width, int height, int tileWidth, int tileHeight, std::string name)
{
	this->width = width;
	this->height = height;
	this->tileSize = sf::Vector2<int>(tileWidth, tileHeight);
	this->name = name;
	this->image = new ImageData("Content/Image/" + this->name);
}

std::string Tileset::getName(std::string name)
{
	return this->name;
}

sf::Sprite* Tileset::getTile(int x, int y)
{
	this->image->sprite.setTextureRect(sf::IntRect(x * this->tileSize.x, y * this->tileSize.y, this->tileSize.x, this->tileSize.y));
	return &this->image->sprite;
}

int Tileset::getWidth()
{
	return this->width;
}

int Tileset::getHeight()
{
	return this->height;
}