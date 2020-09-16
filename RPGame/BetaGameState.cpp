#include "BetaGameState.h"


BetaGameState::BetaGameState() : GameState(GameStateType::Beta)
{
	this->mainCamera = new CameraGameObject();
}

void BetaGameState::Initialize()
{
}

void BetaGameState::Update()
{
}

void BetaGameState::Draw()
{
}

void BetaGameState::Remove()
{
	delete this->mainCamera;
}