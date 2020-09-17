#include "Application.h"

Application::Application()
{
	this->window.create(sf::VideoMode(800, 600), "RPGame");
	this->content.Load();

	this->state = new BetaGameState();
}

Application::~Application()
{
	this->state->Remove();
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
	this->state->Update(1);
}

void Application::Draw()
{
	this->window.clear();

	this->state->Draw(this->window);

	this->window.display();
}

void Application::Run()
{
	this->state->Initialize(this->content);

	while (this->window.isOpen())
	{
		this->HandleEvents();
		this->Update();
		this->Draw();
	}
}