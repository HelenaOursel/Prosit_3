#pragma once
#include "CLParcours.h"
#include "CLpoint.h"

class CLparcours2D : public CLParcours
{
public:
	CLparcours2D(float i);
	void calculDistance();
private:
	float i;
};

