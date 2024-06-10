#include <iostream>
#include <SFML/Graphics.hpp>
#include "Environment.h"


int main() {

	sf::RectangleShape rect;
	rect.setSize(sf::Vector2f(1, 1));
	rect.setFillColor(sf::Color::Color(130, 120, 30, 255));


	Environment environment(sf::Vector2f(700, 500), 20.4, 0.30, 57.6, 13);
	environment.set_Settings_Generation(0.5, 0.05, 0.6);

	environment.GENERATION(environment.get_Environment_Elements(), environment.get_Size());

	sf::RenderWindow window(sf::VideoMode(700, 500), "Tree growth", sf::Style::Default);
	window.setFramerateLimit(60);


	while (window.isOpen()) {
		sf::Event events;

		while (window.pollEvent(events)) {

			if (events.type == sf::Event::KeyPressed) {

				if (events.key.code == sf::Keyboard::Escape) window.close();
			}
		}

		window.clear(sf::Color::Cyan);

		std::vector<Soil> mask_soil = environment.get_Environment_Elements().get_Soils();
		std::vector<Resource> mask_resource = environment.get_Environment_Elements().get_Resources();

		rect.setFillColor(sf::Color::Color(130, 120, 30, 255));
		for (Soil soil : mask_soil) {
			rect.setPosition(soil.get_Position());

			window.draw(rect);
	
		}

		for (Resource resource : mask_resource) {
			rect.setPosition(resource.get_Position());
			rect.setFillColor(sf::Color::Color(resource.get_Color()._a, resource.get_Color()._g, resource.get_Color()._b, 255));

			window.draw(rect);

		}

		window.display();


	}

	return 0;

}