#ifndef _GRASSLAND_H
#define _GRASSLAND_H

#include <iostream>
#include <string>
#include "Land.h"

using namespace std;

class Grassland : public Land
{
	/* Grassland : Kelas yang merepresentasikan Grassland (subclass Land) dimana 
		kandang MilkProducingFarmAnimal 
	*/
	public:
		// KONSTRUKTOR
		Grassland();
		~Grassland();

		//METHOD
		char render();
			//Mencetak representasi grassland
};

#endif