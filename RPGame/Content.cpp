#include "Content.h"

void Content::Load()
{
	this->CONTENT = "Content/";
	this->IMAGE = "Image/";

	this->tileset_1 = this->imageManager.loadFromFile(CONTENT + IMAGE + "Tileset1.png");
}