//
// Created by armandmgt on 9/7/18.
//

#include "Window.hpp"

Window::Window(unsigned int w, unsigned int h) noexcept : sf::RenderWindow(sf::VideoMode{w, h, 32}, "Dat Hang Man", sf::Style::Close)
{
}

void Window::run()
{
	currentScene.init();
	while (isOpen()) {
		getEvents();
		display();
	}
}

void Window::getEvents()
{
	sf::Event evt{};
	while (pollEvent(evt)) {
		switch (evt.type) {
		case sf::Event::EventType::KeyPressed:
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
				close();
		default:
			break;
		}
	}
}
