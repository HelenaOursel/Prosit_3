#include "CLparcours3D.h"

CLparcours3D::CLparcours3D(int n) : n(n)
{

}

void CLparcours3D::calculDistance()
{
	float i;
	float j;
	j = (pow(p1.x - p2.x - p3.x, 2)) + (pow(p1.y - p2.y - p3.y, 2)) + (pow(p1.z - p2.z - p3.z, 2));
	i = sqrt(j);
	std:cout << "Voici la distance entre vos deux points" << std::endl;
	std::cout << i << std::endl;
	return i;
}