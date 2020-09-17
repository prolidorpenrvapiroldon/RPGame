#include "Content.h"

void Content::Load()
{
	this->CONTENT = "Content/";
	this->IMAGE = "Image/";

	this->texture_tileset_1.loadFromFile(CONTENT + IMAGE + "Tileset1.png");
	this->sprite_tileset_1.setTexture(texture_tileset_1);
}