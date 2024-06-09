#pragma once
#include <SFML/Graphics.hpp>
#include "Environment_Generation.h"

class Environment : public Environment_Generation{
private:

	Environment_Elements environment_elements;

	sf::Vector2f size;

	double temperature;

	double himidity;

	double light_intensity;

	/// 0 - 24
	int time;

public:

	Environment(sf::Vector2f size, double temperature, double himidity, double light_intensity, int time)
		: size(size), temperature(temperature), himidity(himidity), light_intensity(light_intensity), time(time) {};

	/// SIZE
	sf::Vector2f get_Size() const { return size; }

	/// TEMPERATURE
	void set_Temperature(double new_temperature) { temperature = new_temperature; }
	double get_Temperature() const { return temperature; }

	/// HIMIDITY
	void set_Himidity(double new_himidity) { himidity = new_himidity; }
	double get_Himidity() const { return himidity; }

	/// LIGHT INTENSITY
	void set_Light_Intensity(double new_light_intensity) { light_intensity = new_light_intensity; }
	double get_Light_Intensity() const { return light_intensity; }

	/// TIME
	void update_Time() { if (time == 24) time = 0; else time++; }
	int get_Time() const { return time; }

	Environment_Elements& get_Environment_Elements() { return environment_elements; }

};