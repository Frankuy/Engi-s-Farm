#include "Grassland.h"

Grassland::Grassland(Point P) : Land(P)
{
	this->setAdaRumputnya(true);
	id = "Land";
}

char Grassland::render()
{
	return 'v';
}
