#pragma once

enum GameObjectType {};

class GameObject
{
protected:
	GameObjectType type;
public:
	GameObject(GameObjectType type);

	virtual void Initialize();
	virtual void Update();
	virtual void Draw();
	virtual void Remove();
};

