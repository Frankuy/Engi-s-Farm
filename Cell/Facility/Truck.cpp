#include "Truck.h"

Truck::Truck(Point P) : Facility(P)
{
}

Truck::~Truck()
{
	delete ** this->map;
}

char Truck::render()
{
	return 'T';
}
