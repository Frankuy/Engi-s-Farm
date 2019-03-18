#ifndef _FACILITY_H
#define _FACILITY_H

#include <iostream>
#include <string>
#include "Cell.h"

using namespace std;

class Facility : public Cell
{
	protected:
		Point atasKiri;
		Point bawahKanan;
		char ** isiFacility;
	public:
		// KONSTRUKTOR
		Facility(Point, Point);
		~Facility();
		
		// SETTER GETTER
		Point getAtasKiri() const;
		Point getBawahKanan() const;
		char getIsiFacility(Point) const;
		
		void setAtasKiri(Point);
		void setBawahKanan(Point);
		void setIsiFacility(Point, char);
};

#endif
