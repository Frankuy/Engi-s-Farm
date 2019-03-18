#ifndef _CELL_H
#define _CELL_H

#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

class Cell {
    protected:
		int nBrs;
		int nKol;
		virtual Point atasKiri() = 0;
		virtual Point bawahKanan() = 0;
		char ** isi;
    public:
		// KONSTRUKTOR
		Cell(int, int);
		
		// SETTER GETTER
		int getNBrs() const;
		int getNKol() const;
		char getIsi(Point) const;
		
		void setNBrs(int);
		void setNKol(int);
		void setIsi(Point, char);
};

#endif
