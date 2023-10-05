#pragma once

#include "City.h"

class Road
{
public:
	Road(City* cityAp, City* cityBp, int weightp);
	City* getCityA() { return cityA; }
	City* getCityB() { return cityB; }
	int getWeight() { return; }

private:
	City* cityA;
	City* cityB;
	int weight;
};

