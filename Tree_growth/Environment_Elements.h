#pragma once
#include <SFML/Graphics.hpp>
#include "Element_Soil.h"
#include <vector>




class Environment_Elements {
private:

	std::vector<Soil> soils;


public:

	Environment_Elements() {}


	std::vector<Soil>& get_Soils() { return soils; }



};