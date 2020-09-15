#pragma once

enum GameObjectType { CAMERA };

class GameObject
{
protected:
	GameObjectType type;
public:
	GameObject(GameObjectType type);

	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Remove() = 0;
};