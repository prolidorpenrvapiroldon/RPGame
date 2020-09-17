#pragma once
#include "GameState.h"
#include "TilemapGameObject.h"

class BetaGameState : public GameState
{
protected:

public:
	BetaGameState();


	void Initialize(Content& content) override;
	void Update(float delta_time) override;
	void Draw(sf::RenderWindow& window) override;
	void Remove() override;
};