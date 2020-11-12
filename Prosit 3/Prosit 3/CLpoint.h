#pragma once
class CLpoint
{
public:
	CLpoint();
	CLpoint(double x, double y);
	void afficherCoordo() const;

private:
	double x;
	double y;
};
