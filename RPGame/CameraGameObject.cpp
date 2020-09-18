#include "CameraGameObject.h"

CameraGameObject::CameraGameObject() : GameObject(GameObjectType::CAMERA), IPositioned()
{
}

CameraGameObject::CameraGameObject(float x, float y, float scale=1) : GameObject(GameObjectType::CAMERA), IPositioned(x, y)
{
	this->scale = scale;
}

float CameraGameObject::getScale()
{
	return this->scale;
}

void CameraGameObject::Initialize()
{
}

void CameraGameObject::Update(float delta_time)
{
}

void CameraGameObject::Draw(sf::RenderWindow& window, GameObject* camera)
{
}

void CameraGameObject::Remove()
{
}