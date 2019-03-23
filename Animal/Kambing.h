#ifndef KAMBING_H
#define KAMBING_H

#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Kambing: public MilkProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    /* Kambing : kelas ini merepresentasikan kelas rill Kambing */
    //KONSTRUKTOR
    Kambing(Point lokasi, string nama, int lapar);
    char render();
};
#endif