#pragma once
#include "Element_Environment.h"

struct Color_R {

	int _a{ 0 }; int _g{ 0 }; int _b{ 0 };
	
};

class Resource : public Element{
private:

	Color_R color;

public:

	Resource() {};

	void set_Color(Color_R new_color) { color = new_color; }
	Color_R get_Color() const { return color; }

};