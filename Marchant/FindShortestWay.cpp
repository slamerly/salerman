#include "FindShortestWay.h"

FindShortestWay::FindShortestWay(City* startp, City* targetp)
{
	start = startp;
	target = targetp;
}

std::vector<Road> FindShortestWay::findWay(std::vector<City>& listOfCities, std::vector<Road>& listOfRoads)
{
	std::vector<City>citiesSee{ listOfCities };
	std::vector<Road>roadsCurrentCity;

	std::vector<std::vector<int>> weightOfAllRoadPossible (listOfCities.size());

	//City* currentCity = start;
	int currentW = 0;

	
	std::vector<City> nextCities;
	std::vector<City> order;
	nextCities.push_back(*start);
	order.push_back(*start);

	while (!nextCities.empty())
	{
		std::vector<int> currentRoads(listOfCities.size());
		for (auto road : listOfRoads)
		{
			if (road.getCityA()->getId() == nextCities[0].getId() || road.getCityB()->getId() == nextCities[0].getId())
			{
				if (road.getCityA()->getId() != nextCities[0].getId())
				{
					auto exist = find(nextCities.begin(), nextCities.end(), road.getCityA());
					if (exist == nextCities.end())
					{
						nextCities.push_back(*road.getCityA());
					}
					currentRoads[road.getCityA()->getId()] = currentW + road.getWeight();
				}
				else if (road.getCityB()->getId() != nextCities[0].getId())
				{
					auto exist = find(nextCities.begin(), nextCities.end(), road.getCityB());
					if (exist == nextCities.end())
					{
						nextCities.push_back(*road.getCityB());
					}
					currentRoads[road.getCityB()->getId()] = currentW + road.getWeight();
				}
			}
		}
		weightOfAllRoadPossible[nextCities[0].getId()] = currentRoads;
		nextCities.erase(nextCities.begin());
	}




	return std::vector<Road>();
}

std::vector<Road> FindShortestWay::findLightWay(std::vector<std::vector<int>> listWaights)
{


	return std::vector<Road>();
}
