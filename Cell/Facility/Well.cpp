#include "Well.h"

Well::Well(Point P) : Facility(P)
{
}

char Well::render()
{
	return 'W';
}
