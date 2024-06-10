#include "Environment_Generation.h"
#include <math.h>
#include <iostream>

void Environment_Generation::GENERATION(Environment_Elements& environment_elements, sf::Vector2f size) {

	_G_SET_SOIL_(environment_elements.get_Soils(), size);

	_G_SET_RESOURCE_(environment_elements.get_Resources(), environment_elements.get_Soils(), size);

}

void Environment_Generation::_G_SET_SOIL_(std::vector<Soil>& soils, sf::Vector2f size) {
	int counter{ 0 };

	soils.resize(std::round(size.y * level_soil * size.x));

	for (int i{ 0 }; i < std::round(size.y * level_soil); i++) {
		for (int j{ 0 }; j < size.x; j++) {
			soils[counter].set_Position(sf::Vector2f(j, std::round(size.y * level_soil) + i));
			soils[counter].set_Level_Water(0.7);
			soils[counter].set_Count_Useful_Substances(0.5);
			
			counter++;
		}
	}

}

void Environment_Generation::_G_SET_RESOURCE_(std::vector<Resource>& resources, std::vector<Soil>& soils, sf::Vector2f size) {
	std::srand(std::time(NULL));

	int r_soil{ 0 };
	Color_R color;

	resources.resize(std::round(soils.size() * level_resource));

	for (int i{ 0 }; i < std::round(soils.size() * level_resource); i++) {
		r_soil = std::rand() % soils.size();
		for (int j{ 0 }; j < 3; j++) r_soil += std::rand() % soils.size();
		if (r_soil >= soils.size()) r_soil = soils.size() - 1;

		


		resources[i].set_Position(soils[r_soil].get_Position());
		resources[i].set_Count_Useful_Substances(std::rand() % 10);

		color._a = 100;
		color._g = std::round(soils[0].get_Position().y / resources[i].get_Position().y);
		color._b = std::round(255 / resources[i].get_Count_Useful_Substances());

		resources[i].set_Color(color);

		soils.erase(soils.begin() + r_soil);

	}

}
