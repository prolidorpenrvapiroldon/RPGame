#pragma once
#include <vector>
#include "GameObject.h"
#include "CameraGameObject.h"

enum GameStateType {Beta};

class GameState
{
protected:
	GameStateType type;
	CameraGameObject* mainCamera = nullptr;
	std::vector<GameObject*> objects;

public:
	GameState(GameStateType type);

	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
	virtual void Remove() = 0;
};

