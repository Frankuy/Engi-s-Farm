#include "Grassland.h"

Grassland::Grassland(Point P) : Land(P)
{
	this->setAdaRumputnya(true);
}

Grassland::~Grassland()
{
}

char Grassland::render()
{
	return 'v';
}
