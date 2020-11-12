#include "CLParcours.h"
#include "CLpoint.h"
#include <math.h>
#include <iostream>

using namespace std;

CLParcours::CLParcours() : x(0), y(0), z(0)
{

}

void CLParcours::ajouterPoint(double x, double y, double z)
{

}

float CLParcours::calculDistance()
{
	float i;
	float j;
	j = (pow(p1.x - p2.x - p3.x, 2)) + (pow(p1.y - p2.y - p3.y, 2));
	i = sqrt(j);
	std:cout << "Voici la distance entre vos deux points" << std::endl;
	std::cout << i << std::endl;
	return i;
}

void CLParcours::message() const
{

}