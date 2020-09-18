#include "CameraGameObject.h"

CameraGameObject::CameraGameObject(int width, int height) : GameObject(GameObjectType::CAMERA), IPositioned(0, 0, width, height)
{
}

CameraGameObject::CameraGameObject(float x, float y, int width, int height) : GameObject(GameObjectType::CAMERA), IPositioned(x, y, width, height)
{
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