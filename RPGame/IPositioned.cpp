#include "IPositioned.h"
#include "CameraGameObject.h"

IPositioned::IPositioned() : position(0, 0), size(0, 0)
{
}

IPositioned::IPositioned(float x, float y) : position(x, y), size(0, 0)
{
}

IPositioned::IPositioned(float x, float y, float width, float height) : position(x, y), size(width, height)
{
}

void IPositioned::setPosition(float x, float y)
{
	this->position.x = x;
	this->position.y = y;
}

void IPositioned::setSize(float width, float height)
{
	this->size.x = x;
	this->size.y = y;
}

sf::Vector2<float> IPositioned::getPosition()
{
	return this->position;
}

sf::Vector2<float> IPositioned::getSize()
{
	return this->size;
}


bool IPositioned::inCameraBounds(GameObject* camera)
{
	IPositioned* _camera = (CameraGameObject*)camera;

	sf::Vector2<float> cameraPosition = _camera->getPosition();
	sf::Vector2<float> cameraSize = _camera->getSize();

	return (
		this->position.x + this->size.x >= cameraPosition.x &&
		this->position.y + this->size.y >= cameraPosition.y &&
		this->position.x <= cameraPosition.x + cameraSize.x &&
		this->position.y <= cameraPosition.y + cameraSize.y
		);
}

sf::Vector2<float> IPositioned::getPosition(GameObject* camera)
{
	return this->position * ((CameraGameObject*)camera)->getScale();
}

sf::Vector2<float> IPositioned::getSize(GameObject* camera)
{
	return this->size * ((CameraGameObject*)camera)->getScale();
}