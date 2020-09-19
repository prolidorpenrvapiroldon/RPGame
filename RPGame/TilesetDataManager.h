#pragma once
#include "DataManager.h"
#include "Tileset.h"
#include "tinyxml2.h"

class TilesetDataManager : public DataManager<Tileset>
{
public:
	Tileset* loadFromFile(std::string filepath) override;
};