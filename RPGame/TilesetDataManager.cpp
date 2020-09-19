#include "TilesetDataManager.h"

Tileset* TilesetDataManager::loadFromFile(std::string filepath)
{
	tinyxml2::XMLDocument document;

	document.LoadFile(filepath.c_str());
	tinyxml2::XMLElement* tilesetElement = document.FirstChildElement("tileset");
	tinyxml2::XMLElement* imageElement = tilesetElement->FirstChildElement("image");

	int width = std::stoi(tilesetElement->Attribute("columns")),
		height = std::stoi(tilesetElement->Attribute("tilecount")) / width,
		tilewidth = std::stoi(tilesetElement->Attribute("tilewidth")),
		tileheight = std::stoi(tilesetElement->Attribute("tileheight"));
	std::string name = imageElement->Attribute("source");

	return new Tileset(width, height, tilewidth, tileheight, name);
}