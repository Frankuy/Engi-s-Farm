#include "Coop.h"

Coop::Coop(Point P) : Land(P)
{
	this->setAdaRumputnya(false);
}

char Coop::render()
{
	return 'C';
}
