#pragma once
#include <vector>
#include "Content.h"
#include "GameObject.h"
#include "CameraGameObject.h"

enum GameStateType {Beta};

class GameState
{
protected:
	GameStateType type;
	Content* content;
	CameraGameObject* mainCamera = nullptr;
	std::vector<GameObject*> objects;

public:
	GameState(GameStateType type);

	virtual void Initialize(Content& content) = 0;
	virtual void Update(float delta_time) = 0;
	virtual void Draw(sf::RenderWindow& window) = 0;
	virtual void Remove() = 0;
};

