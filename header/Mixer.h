#ifndef _MIXER_H
#define _MIXER_H

#include <iostream>
#include <string>
#include "Facility.h"

using namespace std;

class Mixer : public Facility
{
	/* Kelas ini merepresentasikan alat Mixer untuk melakukan mix 
	pada FarmProduct menjadi sebuah sideProduct */
	public:
		Mixer();
		~Mixer();

		char render();
};

#endif
