#ifndef _BARN_H
#define _BARN_H

#include <iostream>
#include <string>
#include "Land.h"
#include "Renderable.h"

using namespace std;

class Barn : public Land, public Renderable
{
	/* Barn : Kelas yang merepresentasikan Barn (subclass Land) dimana 
		kandang MeatProducingFarmAnimal 
	*/
	public:
		// KONSTRUKTOR
		Barn();
			//DEFAULT : lokasi nya random dan ada rumput
		Barn(Point);
			//CUSTOM : Point lokasi nya di set sesuai user dan ada rumput

		//METHOD
        char render();
			//Mencetak representasi barn
};
#endif