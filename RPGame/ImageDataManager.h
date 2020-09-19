#pragma once
#include <SFML/Graphics.hpp>
#include "DataManager.h"
#include "ImageData.h"

class ImageDataManager : public DataManager<ImageData>
{
public:
	ImageData* loadFromFile(std::string filepath) override;
};