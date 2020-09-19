#pragma once
#include <SFML/Graphics.hpp>
#include "ImageData.h"

class Tileset
{
protected:
	//Vector<int> tileSize;
	sf::Vector2<int> tileSize;
	int width = 0, height = 0;

	std::string name;
	ImageData* image;

public:
	Tileset(int width, int height, int tileWidth, int tileHeight, std::string name);

	std::string getName(std::string name);
	sf::Sprite* getTile(int x, int y);

	int getWidth();
	int getHeight();
};