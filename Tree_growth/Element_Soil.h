#pragma once
#include <SFML/Graphics.hpp>

class Soil {
private:

	sf::Vector2f position;

	float level_water;

	float count_useful_substances;

public:

	Soil() {}

	Soil(sf::Vector2f position, float level_water, float count_useful_substances)
		: position(position), level_water(level_water), count_useful_substances(count_useful_substances) {}

	/// POSITION
	void set_Position(sf::Vector2f new_position) { position = new_position; }
	sf::Vector2f get_Position() const { return position; }

	/// LEVEL WATER
	void set_Level_Water(float new_level_water) { level_water = new_level_water; }
	float get_Level_Water() const { return level_water; }

	/// COUNT USEFUL SUBSTANCES
	void set_Count_Useful_Substances(float new_count_useful_substances) { count_useful_substances = new_count_useful_substances; }
	float get_Count_Useful_Substances() const { return count_useful_substances; }

};

