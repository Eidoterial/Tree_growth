#pragma once
#include <SFML/Graphics.hpp>
#include "Environment_Elements.h"

class Environment_Generation {
private:

	double level_soil;

	double level_resource;

	double level_void;

	void _G_SET_SOIL_(std::vector<Soil>& soils, sf::Vector2f size);

public:

	Environment_Generation() : level_soil(0.0), level_resource(0.0), level_void(0.0) {}

	double get_Level_Soil() const { return level_soil; }

	double get_Level_Resource() const { return level_resource; }

	double get_Level_Void() const { return level_void; }

	void set_Settings_Generation(double new_level_soil, double new_level_resource, double new_level_void) {
		level_soil = new_level_soil; level_resource = new_level_resource; level_void = new_level_void;	
	};

	void GENERATION(Environment_Elements& environment_elements, sf::Vector2f size);

};