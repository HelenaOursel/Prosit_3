#pragma once
#include "CLpoint.h"

class CLpoint3D : public CLpoint 
{
public:
	CLpoint3D();
	CLpoint3D(double x, double y, double z);
private:
	double x;
	double y;
	double z;
};