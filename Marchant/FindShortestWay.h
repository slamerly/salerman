#pragma once

#include "City.h"
#include "Road.h"
#include <vector>

class FindShortestWay
{
public:
	FindShortestWay(City* startp, City* targetp);

	std::vector<Road> findWay(std::vector<City>& listOfCities, std::vector<Road>& listOfRoads);

private:
	City* start;
	City* target;

	std::vector<Road> findLightWay(std::vector<std::vector<int>> listWaights);
};

