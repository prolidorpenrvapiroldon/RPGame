#pragma once
#include <SFML/Graphics.hpp>
#include <string>

struct Content {
	std::string CONTENT;
	std::string IMAGE;

	sf::Texture texture_tileset_1;
	sf::Sprite sprite_tileset_1;

	void Load();
};