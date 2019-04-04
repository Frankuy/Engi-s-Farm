#include "Grassland.h"

Grassland::Grassland(Point P) : Land(P)
{
	this->setAdaRumputnya(true);
}

char Grassland::render()
{
	return 'v';
}
