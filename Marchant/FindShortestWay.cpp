#include "FindShortestWay.h"
#include <algorithm>

FindShortestWay::FindShortestWay(City* startp)
{
	start = startp;
}

/*
Find the shortest way through all the cities and back to the starting city
@param listOfCities: list of all cities
@param listOfRoads: list of all roads
@return result: return the shortest way in the order of cities crossed
*/
std::vector<City> FindShortestWay::findWay(std::vector<City>& listOfCities, std::vector<Road>& listOfRoads)
{
	std::vector<City> result;

	std::vector<int> vertex;
	for (int i = 0; i < listOfCities.size(); i++)
	{
		if (i != start->getId())
		{
			vertex.push_back(i);
		}
	}

	do {
		// store current path weight
		int currentWeight = 0;

		// current city
		int currentCity = start->getId();

		// current path
		std::vector<City> currentPath;
		currentPath.push_back(*start);

		// number of city crossed
		int countCityCrossed = 0;

		for (int i = 0; i < vertex.size(); i++) 
		{
			int saveCW = currentWeight;
			for (auto road : listOfRoads)
			{
				// find a way with currentCity and listOfCities[vertex[i]]
				if ((road.getCityA()->getId() == currentCity && road.getCityB()->getId() == listOfCities[vertex[i]].getId())
					|| (road.getCityA()->getId() == listOfCities[vertex[i]].getId() && road.getCityB()->getId() == currentCity))
				{
					countCityCrossed++;
					currentWeight += road.getWeight();

					// add the currentCity in the currentPath
					if (road.getCityA()->getId() == currentCity)
					{
						currentPath.push_back(*road.getCityB());
					}
					else
					{
						currentPath.push_back(*road.getCityA());
					}
				}
			}
			// pass to the next city
			currentCity = vertex[i];
		}

		// if exist add the road to back to the starting city
		for (auto road : listOfRoads)
		{
			if ((road.getCityA()->getId() == currentCity && road.getCityB()->getId() == start->getId())
				|| (road.getCityA()->getId() == start->getId() && road.getCityB()->getId() == currentCity))
			{
				currentWeight += road.getWeight();
				countCityCrossed++;
				currentPath.push_back(*start);
			}
		}

		// update minimum
		if (countCityCrossed >= listOfCities.size())
		{
			int newMin = std::min(weightWay, currentWeight);

			if (weightWay != newMin)
			{
				weightWay = newMin;
				result.clear();
				result = currentPath;
			}
		}

	} while (std::next_permutation(vertex.begin(), vertex.end()));

	return result;
}
