#include "IPositioned.h"
#include "CameraGameObject.h"

IPositioned::IPositioned()
{
	this->position = Vector(0, 0);
	this->size = Vector(0, 0);
}

IPositioned::IPositioned(float x, float y)
{
	this->position = Vector(x, y);
	this->size = Vector(0, 0);
}

IPositioned::IPositioned(float x, float y, float width, float height)
{
	this->position = Vector(x, y);
	this->size = Vector(width, height);
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

Vector IPositioned::getPosition()
{
	return this->position;
}

Vector IPositioned::getSize()
{
	return this->size;
}


bool IPositioned::inCameraBounds(GameObject* camera)
{
	IPositioned* _camera = (CameraGameObject*)camera;

	Vector cameraPosition = _camera->getPosition();
	Vector cameraSize = _camera->getSize();
	return (
		this->position.x + this->size.x >= cameraPosition.x &&
		this->position.y + this->size.y >= cameraPosition.y &&
		this->position.x <= cameraPosition.x + cameraSize.x &&
		this->position.y <= cameraPosition.y + cameraSize.y
		);
}

Vector IPositioned::getPosition(GameObject* camera)
{
	return this->position * ((CameraGameObject*)camera)->getScale();
}

Vector IPositioned::getSize(GameObject* camera)
{
	return this->size * ((CameraGameObject*)camera)->getScale();
}