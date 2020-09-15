#pragma once
#include <SFML/Graphics.hpp>
#include "GameState.h"

class Application
{
protected:
	sf::RenderWindow window;
	GameState *currentState = nullptr;
public:
	Application();

	void HandleEvents();
	void Update();
	void Draw();
	void Run();
};

