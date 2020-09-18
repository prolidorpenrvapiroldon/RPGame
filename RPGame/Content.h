#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "ImageData.h"
#include "ImageDataManager.h"

struct Content {
	std::string CONTENT;
	std::string IMAGE;

	ImageDataManager imageManager;

	ImageData* tileset_1;

	void Load();
};