#pragma once
#include "Element_Soil.h"
#include "Element_Resource.h"
#include <vector>




class Environment_Elements {
private:

	std::vector<Soil> soils;
	std::vector<Resource> resources;

public:

	Environment_Elements() {}

	std::vector<Soil>& get_Soils() { return soils; }

	std::vector<Resource>& get_Resources() { return resources; }

};