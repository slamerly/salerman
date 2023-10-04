#include "FindShortestWay.h"

FindShortestWay::FindShortestWay(City* startp, City* targetp)
{
	start = startp;
	target = targetp;
}

std::vector<Road> FindShortestWay::findWay(std::vector<City>& listOfCities, std::vector<Road>& listOfRoads)
{
	std::vector<City>citiesNotSee{ listOfCities };
	std::vector<Road>roadesNotUse{ listOfRoads };



	return std::vector<Road>();
}
