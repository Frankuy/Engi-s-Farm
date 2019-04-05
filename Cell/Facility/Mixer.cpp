#include "Mixer.h"

Mixer::Mixer(Point P) : Facility(P)
{
	id = "Facility";
}

char Mixer::render()
{
	return 'M';
}
