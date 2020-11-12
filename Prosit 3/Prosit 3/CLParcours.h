#pragma once
#include "CLpoint.h"

class CLParcours
{
public:
	CLParcours();
	void ajouterPoint(double x, double y, double z);
	float calculDistance();
	void message() const;
private:
	double x;
	double y;
	double z;
};

