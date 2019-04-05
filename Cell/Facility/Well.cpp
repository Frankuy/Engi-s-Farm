#include "Well.h"

Well::Well(Point P) : Facility(P)
{
	id = "Facility";
}

char Well::render()
{
	return 'W';
}
