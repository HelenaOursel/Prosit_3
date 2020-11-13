#include "CLparcours2D.h"
#include "CLpoint.h"
#include <math.h>
#include <iostream>

using namespace std;

CLparcours2D::CLparcours2D(float i) : i(0)
{

}

void CLparcours2D::calculDistance()
{
	float i;
	float j;
	j = (pow(p1.x - p2.x - p3.x, 2)) + (pow(p1.y - p2.y - p3.y, 2));
	i = sqrt(j);
	std:cout << "Voici la distance entre vos deux points" << std::endl;
	std::cout << i << std::endl;
	return i;
}