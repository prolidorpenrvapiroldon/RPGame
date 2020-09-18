#include "BetaGameState.h"

BetaGameState::BetaGameState() : GameState(GameStateType::Beta)
{
	this->mainCamera = new CameraGameObject();
	this->objects.push_back(this->mainCamera);
}

void BetaGameState::Initialize(Content& content)
{
	this->content = &content;

	this->objects.push_back(new TilemapGameObject(this->content->tileset_1->sprite, 0, 0, nullptr));
	this->objects[0]->Initialize();
}

void BetaGameState::Update(float delta_time)
{
	for (int i = 0; i < this->objects.size(); i++)
	{
		this->objects[i]->Update(delta_time);
	}
}

void BetaGameState::Draw(sf::RenderWindow& window)
{
	for (int i = 0; i < this->objects.size(); i++)
	{
		this->objects[i]->Draw(window, this->mainCamera);
	}
}

void BetaGameState::Remove()
{
	delete this->mainCamera;
	for (int i = 0; i < this->objects.size(); i++)
	{
		this->objects[i]->Remove();
		delete this->objects[i];
	}
}