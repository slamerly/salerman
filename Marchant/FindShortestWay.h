#pragma once

#include "City.h"
#include "Road.h"
#include <vector>

class FindShortestWay
{
public:
	FindShortestWay(City* startp);

	std::vector<City> findWay(std::vector<City>& listOfCities, std::vector<Road>& listOfRoads);
	int getWeightWay() { return weightWay; }

private:
	City* start;
	int weightWay{ INT_MAX };
};

