#pragma once
#include <SFML/Graphics.hpp>

struct ImageData
{
	sf::Texture texture;
	sf::Sprite sprite;

	ImageData();
	ImageData(std::string filepath);
	void load(std::string filepath);
};