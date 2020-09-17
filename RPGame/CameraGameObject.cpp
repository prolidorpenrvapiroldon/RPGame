#include "CameraGameObject.h"

CameraGameObject::CameraGameObject() : GameObject(GameObjectType::CAMERA), IPositioned()
{
}

CameraGameObject::CameraGameObject(float x, float y) : GameObject(GameObjectType::CAMERA), IPositioned(x, y)
{
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