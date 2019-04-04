#include "Well.h"

Well::Well(Point P) : Facility(P)
{
}

Well::~Well()
{
}

char Well::render()
{
	return 'W';
}
