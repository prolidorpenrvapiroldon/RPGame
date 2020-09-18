#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include "DataManager.h"
#include "ImageData.h"

class ImageDataManager : public DataManager<ImageData>
{
public:
	ImageData* loadFromFile(std::string filepath) override;
};