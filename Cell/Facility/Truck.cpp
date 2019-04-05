#include "Truck.h"

Truck::Truck(Point P) : Facility(P)
{
	id = "Facility";
}

char Truck::render()
{
	return 'T';
}
