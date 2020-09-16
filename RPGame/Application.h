#pragma once
#include <SFML/Graphics.hpp>
#include "GameState.h"
#include "BetaGameState.h"

class Application
{
protected:
	sf::RenderWindow window;
	GameState * state = nullptr;
public:
	Application();
	~Application();

	void HandleEvents();
	void Update();
	void Draw();
	void Run();
};

