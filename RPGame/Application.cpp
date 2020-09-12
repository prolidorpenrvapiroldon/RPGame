#include "Application.h"


Application::Application()
{
	this->window.create(sf::VideoMode(800, 600), "RPGame");
}

void Application::HandleEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::EventType::Closed:
			this->window.close();
			break;
		}
	}
}

void Application::Update()
{

}

void Application::Draw()
{
	this->window.clear();
	this->window.display();
}

void Application::Run()
{
	while (this->window.isOpen())
	{
		this->HandleEvents();
		this->Update();
		this->Draw();
	}
}