#include "Barn.h"

Barn::Barn(Point P) : Land(P)
{
	this->setAdaRumputnya(false);
	id = "Land";
}

char Barn::render()
{
	return 'B';
}
