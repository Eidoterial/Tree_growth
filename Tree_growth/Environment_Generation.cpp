#include "Environment_Generation.h"
#include <math.h>

void Environment_Generation::GENERATION(Environment_Elements& environment_elements, sf::Vector2f size) {

	_G_SET_SOIL_(environment_elements.get_Soils(), size);


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
