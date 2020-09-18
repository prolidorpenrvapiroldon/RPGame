#include "ImageDataManager.h"

ImageData* ImageDataManager::loadFromFile(std::string filepath)
{
	return new ImageData(filepath);
}