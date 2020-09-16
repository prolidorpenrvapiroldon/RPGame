#pragma once
#include "GameState.h"

class BetaGameState : public GameState
{
protected:

public:
	BetaGameState();


	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Remove() override;
};