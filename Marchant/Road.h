#pragma once

#include "City.h"

class Road
{
public:
	Road(City* cityAp, City* cityBp, int weightp);

private:
	City* cityA;
	City* cityB;
	int weight;
};

