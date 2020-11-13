#pragma once
#include "CLParcours.h"

class CLparcours3D : public CLParcours
{
public:
	CLparcours3D(int n);
	void calculDistance();
private:
	int n;
};

