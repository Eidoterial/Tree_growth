#pragma once
#include "Element_Environment.h"

class Soil : public Element{
private:

	float level_water{ 0.0 };

public:

	Soil() {}

	/// LEVEL WATER
	void set_Level_Water(float new_level_water) { level_water = new_level_water; }
	float get_Level_Water() const { return level_water; }

};

