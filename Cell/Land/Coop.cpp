#include "Coop.h"

Coop::Coop(Point P) : Land(P)
{
	this->setAdaRumputnya(false);
	id = "Land";
}

char Coop::render()
{
	return 'C';
}
