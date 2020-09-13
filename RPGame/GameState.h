#pragma once

enum GameStateType {};

class GameState
{
protected:
	GameStateType type;
public:
	GameState(GameStateType type);

	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Draw() = 0;
};

