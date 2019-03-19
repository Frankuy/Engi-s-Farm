#ifndef DOMBA_H
#define DOMBA_H

#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Domba : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    /* Domba : kelas ini merepresentasikan kelas rill Domba */
    //KONSTRUKTOR
    Domba(Point lokasi, string nama, int lapar);
    char render();
};
#endif