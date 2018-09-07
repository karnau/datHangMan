//
// Created by armandmgt on 9/7/18.
//

#pragma once

#include <SFML/Graphics.hpp>
#include "Scene.hpp"

class Window : public sf::RenderWindow {
	public:
	Window(unsigned int w, unsigned int h) noexcept;

	void run();
	void getEvents();

	private:
	Scene currentScene;
};
