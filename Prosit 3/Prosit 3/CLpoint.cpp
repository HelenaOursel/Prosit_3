#include <iostream>
#include "CLpoint.h"

using namespace std;

CLpoint::CLpoint() : x(0), y(0)
{

}

CLpoint::CLpoint(double x, double y) : x(0), y(0)
{

}

void CLpoint::afficherCoordo() const
{
	cout << p1.x << p1.y << p1.z << endl;
	cout << p2.x << p2.y << p2.z << endl;
}