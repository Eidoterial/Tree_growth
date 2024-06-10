#pragma once
#include <SFML/Graphics.hpp>

class Element {
private:

	sf::Vector2f position;

	float count_useful_substances{ 0.0 };

public:

	Element() {}

	/// POSITION
	void set_Position(sf::Vector2f new_position) { position = new_position; }
	sf::Vector2f get_Position() const { return position; }

	/// COUNT USEFUL SUBSTANCES
	void set_Count_Useful_Substances(float new_count_useful_substances) { count_useful_substances = new_count_useful_substances; }
	float get_Count_Useful_Substances() const { return count_useful_substances; }

};