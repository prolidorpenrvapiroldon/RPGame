#include "ImageData.h"
#include <string>

 ImageData::ImageData(std::string filepath)
{
	 this->load(filepath);
}

void ImageData::load(std::string filepath)
{
	this->texture.loadFromFile(filepath);
	this->sprite.setTexture(this->texture);
}