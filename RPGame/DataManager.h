#pragma once
#include <string>


template <typename T>
class DataManager
{
public:
	virtual T* loadFromFile(std::string filepath) = 0;
};