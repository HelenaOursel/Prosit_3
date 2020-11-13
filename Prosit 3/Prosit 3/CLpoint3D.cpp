#include "CLpoint3D.h"
#include "CLpoint.h"

CLpoint3D::CLpoint3D() : CLpoint(x, y), x(0), y(0), z(0)
{

}

CLpoint3D::CLpoint3D(CLpoint(x), CLpoint(y), double z) : CLpoint(x), CLpoint(y), z(0)
{

}