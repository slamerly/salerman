#include <iostream>
#include "City.h"
#include "Road.h"
#include <vector>


int main()
{
    std::vector<City> cities;
    std::vector<Road> roads;

    cities.push_back(City('A'));
    cities.push_back(City('B'));
    cities.push_back(City('C'));
    cities.push_back(City('D'));
    cities.push_back(City('E'));



    roads.push_back(Road(&cities[0], &cities[1], 2));
    roads.push_back(Road(&cities[0], &cities[2], 2));
    roads.push_back(Road(&cities[1], &cities[2], 3));
    roads.push_back(Road(&cities[1], &cities[3], 3));
    roads.push_back(Road(&cities[2], &cities[4], 3));
    roads.push_back(Road(&cities[3], &cities[4], 3));
    roads.push_back(Road(&cities[1], &cities[1], 2));
}
