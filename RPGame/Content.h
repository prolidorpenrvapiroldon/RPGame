#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "ImageData.h"
#include "ImageDataManager.h"
#include "TilesetDataManager.h"

struct Content
{
	ImageDataManager imageManager;
	TilesetDataManager tilesetManager;

	Tileset* tileset_1;

	void Load();
};