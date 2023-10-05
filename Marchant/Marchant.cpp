#include <iostream>
#include "City.h"
#include "Road.h"
#include "FindShortestWay.h"
#include <vector>


int main()
{
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


}
