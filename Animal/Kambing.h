#ifndef KAMBING_H
#define KAMBING_H

#include "../Product/FarmProduct/DagingKambing.h"
#include "../Product/FarmProduct/SusuKambing.h"
#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Kambing: public MilkProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    /* Kambing : kelas ini merepresentasikan kelas rill Kambing */
    //KONSTRUKTOR
    Kambing(Point lokasi, string nama, string suara, int lapar);
    char render();
};
#endif