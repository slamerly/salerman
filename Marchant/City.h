#pragma once

class City
{
public:
	City(int idp, char namep);

	int getId() { return id; }
	char getname() { return name; }

private:
	char name;
	int id;
};

