#include "Cell.h"
#include <iostream>
using namespace std;

Cell::Cell(int nb, int nk) {
    nBrs = nb;
    nKol = nk;
    map = new Renderable**[nb];
    for (int i = 0; i < nb; i++) {
        map[i] = new Renderable*[nk];
    }
    for (int i = 0; i < nb; i++) {
        for (int j = 0; j < nk; j++) {
            map[i][j] = NULL;
        }
    }
}

Cell::Cell(string namaFile) {
    //TBD
}

Cell::~Cell() {
    for (int i = 0; i < nBrs; i++) {
        delete[] map[i];
    }
    delete[] map;
}

int Cell::getNBrs() const {
    return nBrs;
}

int Cell::getNKol() const {
    return nKol;
}

Renderable* Cell::getIsi(Point lokasi) const {
    return map[lokasi.getX()][lokasi.getY()];
}
		
void Cell::setNBrs(int nb) {
    nBrs = nb;
}

void Cell::setNKol(int nk) {
    nKol = nk;
}

void Cell::setIsi(Point lokasi, Renderable& object) {
    map[lokasi.getX()][lokasi.getY()] = &object;
}

void Cell::cetakMap() {
    for(int i = 0; i < nBrs; i++) {
		for(int j = 0; j < nKol; j++) {
			if (map[i][j] != NULL) {
				cout << map[i][j]->render() << " ";
			}
			else {
				cout << "-" << " ";
			}

			if (j == nKol-1) {
				cout << endl;
			}
		}
	}
}