#pragma once
#include <SFML/Graphics.hpp>

class Application
{
protected:
	sf::RenderWindow window;
public:
	Application();

	void HandleEvents();
	void Update();
	void Draw();
	void Run();
};

