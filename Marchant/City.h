#pragma once

class City
{
public:
	City(int idp, char namep);

	char getname() { return name; }
	int getId() { return id; }

private:
	char name;
	int id;
};

