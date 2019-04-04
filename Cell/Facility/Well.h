#ifndef _WELL_H
#define _WELL_H

#include <iostream>
#include <string>
#include "Facility.h"
#include "../../Renderable.h"

using namespace std;

class Well : public Facility, public Renderable
{
	public:
		Well(Point);
		~Well();
		char render();
};

#endif
