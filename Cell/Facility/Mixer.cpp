#include "Mixer.h"

Mixer::Mixer(Point P) : Facility(P)
{
}

Mixer::~Mixer()
{
}

char Mixer::render()
{
	return 'M';
}
