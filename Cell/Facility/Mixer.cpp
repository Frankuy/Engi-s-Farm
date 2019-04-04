#include "Mixer.h"

Mixer::Mixer(Point P) : Facility(P)
{
}

char Mixer::render()
{
	return 'M';
}
