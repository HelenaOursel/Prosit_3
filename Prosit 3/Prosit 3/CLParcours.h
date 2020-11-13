#pragma once
#include "CLpoint.h"

class CLParcours
{
public:
	CLParcours();
	void ajouterPoint(CLpoint *);
	float calculDistance();
	void message() const;
private:
	double x;
	double y;
	double z;
};

