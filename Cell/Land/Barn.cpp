#include "Barn.h"

Barn::Barn(Point P) : Land(P)
{
	this->setAdaRumputnya(false);
}

char Barn::render()
{
	return 'B';
}
