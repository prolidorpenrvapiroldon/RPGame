#include "CameraGO.h"

CameraGO::CameraGO() : GameObject(GameObjectType::CAMERA), IPositioned()
{
}

CameraGO::CameraGO(float x, float y) : GameObject(GameObjectType::CAMERA), IPositioned(x, y)
{
}