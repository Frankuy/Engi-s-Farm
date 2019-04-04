#ifndef _MIXER_H
#define _MIXER_H

#include <iostream>
#include <string>
#include "Facility.h"
#include "../../Renderable.h"

using namespace std;

class Mixer : public Facility, public Renderable
{
	/* Kelas ini merepresentasikan alat Mixer untuk melakukan mix 
	pada FarmProduct menjadi sebuah sideProduct */
	public:
		Mixer(Point);
		~Mixer();

		char render();
};

#endif
