#ifndef _LAND_H
#define _LAND_H

#include <iostream>
#include <string>
#include "Cell.h"

using namespace std;

class Land : public Cell {
    protected:
		Point atasKiri;
		Point bawahKanan;
		bool ** adaRumputnya;
		char ** isiLand;
    public:
		// KONSTRUKTOR
		Land(Point, Point);
		~Land();
		
		// SETTER GETTER
		Point getAtasKiri() const;
		Point getBawahKanan() const;
		bool getAdaRumputnya(Point) const;
		char getIsiLand(Point) const;
		
		void setAtasKiri(Point);
		void setBawahKanan(Point);
		void setAdaRumputnya(Point, bool);
		void setIsiLand(Point);
};

#endif
