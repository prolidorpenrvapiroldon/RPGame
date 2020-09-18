#pragma once
#include <string>


template <typename T>
class DataManager
{
public:
	DataManager<T>();
	
	virtual T* loadFromFile(std::string filepath) = 0;
};