#include <iostream>
#include "City.h"
#include "Road.h"
#include "FindShortestWay.h"
#include <vector>


int main()
{
    // --- Initialization ---
    std::vector<City> cities;
    std::vector<Road> roads;

    cities.push_back(City(0, 'A'));
    cities.push_back(City(1, 'B'));
    cities.push_back(City(2, 'C'));
    cities.push_back(City(3, 'D'));
    cities.push_back(City(4, 'E'));

    roads.push_back(Road(&cities[0], &cities[1], 2));
    roads.push_back(Road(&cities[0], &cities[2], 2));
    roads.push_back(Road(&cities[1], &cities[2], 3));
    roads.push_back(Road(&cities[1], &cities[3], 3));
    roads.push_back(Road(&cities[2], &cities[4], 3));
    roads.push_back(Road(&cities[3], &cities[4], 3));
    roads.push_back(Road(&cities[1], &cities[4], 1));
    roads.push_back(Road(&cities[2], &cities[3], 1));

    std::vector<City> shortestWay;

    // --- Call function to find the shortest way ---
    FindShortestWay fsw = FindShortestWay(&cities[3]);

    shortestWay = fsw.findWay(cities, roads);


    // --- Display result ---
    for (int i = 0; i < shortestWay.size(); i++)
    {
        if (i < shortestWay.size() - 1)
        {
            std::cout << shortestWay[i].getname() << " -> ";
        }
        else
        {
            std::cout << shortestWay[i].getname() << std::endl;
        }
    }
    std::cout << "Weight of this way: " << fsw.getWeightWay() << std::endl;
}
